// problem : https://leetcode.com/problems/group-anagrams/?envType=study-plan-v2&envId=top-interview-150

// using maps and sorting 


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<int>> anagram;
        vector<string> sorted = strs ;

        vector<vector<string>> final;

        for(auto& str : sorted){
            sort(str.begin(),str.end());
        }
    
        for(int i = 0;i<sorted.size();i++){
            anagram[sorted[i]].push_back(i);
        }

        for(auto ang: anagram){
            vector<string> curr;
            for(int i : ang.second){
                curr.push_back(strs[i]);
            }
            final.push_back(curr);
        }
        // ------- PRINT ----
        // for(auto str: sorted){
        //     cout<<str<<" ";
        // }
        // cout<<endl;
        // for(auto ang: anagram){
        //     cout<<ang.first<<" : ";
        //     for(auto sec:ang.second){
        //         cout<<sec<<" ";
        //     }
        //     cout<<endl;
        // }
  
       

        return final;
    }
};
