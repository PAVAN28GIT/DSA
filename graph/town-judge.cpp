// problem : 


class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // concept of Indegree and Outdegree
      
        vector<int> indeg(n+1 , 0);
        vector<int> outdeg(n+1 , 0);

        for(auto node : trust){
            indeg[node[1]]++;
            outdeg[node[0]]++;
        }
      
        for(int i = 1;i<=n;i++){
            if (indeg[i] == n-1 && outdeg[i] == 0){
                return i;
            }
        }
        return -1;



      //  -------------- same logic but using 1 array ---------------
      
      vector<pair<int,int>> degree( n+1 , {0,0});
        for(auto node : trust){
            degree[node[0]].first = 1;
            degree[node[1]].second++;
        }
        for(int i = 1;i<=n;i++){
            if (degree[i].second == n-1 && degree[i].first == 0){
                return i;
            }
        }
        return -1;

      // ----------------------
    
    }
};
