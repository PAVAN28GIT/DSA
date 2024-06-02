// problem : https://leetcode.com/problems/snapshot-array/description/



class SnapshotArray {
public:
    vector< vector<pair<int,int>>> snaps;     // we are recording {snapcnt, value} at each index ..
//every changes u make are recorded as pair of snapid and val at that index

    int snapcnt = 0; 
    SnapshotArray(int length) {
        snaps.resize(length);
    }
    
    void set(int index, int val) {
        snaps[index].push_back({snapcnt, val});
    }
    
    int snap() {
        snapcnt++;
        return snapcnt-1;
    }
    
    int get(int index, int snap_id) {
        int l = 0;
        int r = snaps[index].size() -1;
        int ans = 0;
        while(l<=r){
            int m = (l+r)/2;
            if(snaps[index][m].first <= snap_id){
                ans = snaps[index][m].second;
                l = m+1;
            }
            else{
                r = m-1;
            }
        }
        return ans;
    }
};

// THIS IS BRUTE FORCE ...  for get()

// if(index<= snaps.size()){
//             int n = snaps[index].size();
//             for( int i =n-1;i>=0;i-- ){
//                 if(snaps[index][i].first <= snap_id){
//                     return snaps[index][i].second;
//                 }
//             }
//         }
//         return 0;

