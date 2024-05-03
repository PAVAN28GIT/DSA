// problem : https://leetcode.com/problems/k-closest-points-to-origin/

// ---------------------using max heap -------------------

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,vector<int>>> q;

        for(auto i : points){
            double dis = -sqrt( (i[0]*i[0]) + (i[1]*i[1]) );
            q.emplace(dis,i);
        }
        vector<vector<int>> final;
        while(k-->0){
            vector<int> vec = q.top().second;
            q.pop();
            final.push_back(vec);
        }
        return final;
    }
};

 //  ---------------------- brute force ------------------

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        map<int,double> distance;
        vector<vector<int>> result;
        for(int i = 0 ;i<points.size();i++){
            double dis =sqrt(pow(points[i][0],2) + pow(points[i][1],2));
            distance[i] = dis;
        }
        for(pair<int,double> dis: distance){
            cout<<dis.first<<" "<<dis.second<<endl;
        }
        vector<pair<int,double>> vec (distance.begin(),distance.end());
        sort(vec.begin(),vec.end(),[](auto& a,auto& b){
            return a.second<b.second;
        });

        for(int i = 0 ;i<k;i++){
            int ind = vec[i].first;
            result.push_back(points[ind]);
        }
        return result;
        
    }
};
