// problem : https://leetcode.com/problems/task-scheduler/



class Solution {
public:

    int leastInterval(vector<char>& tasks, int n) {
        int freq[26] = {0};
        for(char task : tasks){
            freq[task-'A']++;
        }
        sort(begin(freq),end(freq));
        int batchs = freq[25] - 1 ;
        int idle = batchs * n;

        for(int i =24;i>=0;i--){     // from 24... bus u already condsidered highest frequent element already
            idle -= min(freq[i],batchs);
        }

        return idle<0? tasks.size(): tasks.size()+idle;
    }
};
