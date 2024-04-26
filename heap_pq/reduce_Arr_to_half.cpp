//problem : https://leetcode.com/problems/reduce-array-size-to-the-half/


//commented part is array implementaion..non commented in max_heap


class Solution {
public:
    struct compareSecond{
        bool operator()(auto& a, auto& b){
            return a.second>b.second;
        }
    };
    int minSetSize(vector<int>& arr) {
        map<int,int> freq;
        for(auto num : arr){
            freq[num]++;
        }

        int n = arr.size();
        priority_queue<pair<int,int> , vector<pair<int,int>> , compareSecond>max_heap(freq.begin(),freq.end());
        
        // vector<pair<int,int>> temp(freq.begin(),freq.end());
        // sort(temp.begin(),temp.end(),[](auto& a,auto& b){
        //     return a.second>b.second;
        // });
        for(int i =0;i<n;i++){
            pair<int,int> top = max_heap.top();
            cout<<top.first <<" : "<<top.second<<endl;
            max_heap.pop();
        }
        int count = 0;
        // int remove =0;
        // while(!max_heap.empty()){
        //     pair<int,int> top = max_heap.top();
        //     max_heap.pop();
        //     remove += top.second;
        //     count++;

        //     if(remove>=n/2){
        //         break;
        //     }
        // }
        // for(auto pair: temp){
        //     remove += pair.second;
        //     count++;
        //     cout<<  "remove : "<<remove<<endl;
        //     cout<<  "count : "<<count<<endl;
        //     if(remove >= n/2){
        //         break;
        //     }
        // }
        return count;
    }
};
