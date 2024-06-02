// problem : https://leetcode.com/problems/time-based-key-value-store/description/


// --------------------------using BINARY SEARCH -------------------

class TimeMap {
public:


    // mp(key) =  [{time1 , val1 },{time2 , val2 } ... ]

    map< string,vector<pair<int,string>> > mp;
    TimeMap() {
        mp.clear();
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key) == mp.end())
            return "";

        int n = mp[key].size();
        int l = 0;
        int r =n-1;
        
        if(mp[key][n-1].first <= timestamp){
            return mp[key][n-1].second;
        }

        while(l<=r){
            int m = (l+r)/2;
            if(mp[key][m].first == timestamp ){
                return mp[key][m].second;
            }
            if( mp[key][m].first < timestamp && mp[key][m+1].first > timestamp){
                return mp[key][m].second;
            }
            if( mp[key][m].first < timestamp ){
                l =m+1;
            }
            else {
                r =m-1;
            }
        }
        return "";
    }
};



