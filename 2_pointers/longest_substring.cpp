//problem : https://leetcode.com/problems/longest-substring-without-repeating-characters/description/


// NICE QUESTION ..... BUT U MADE IT COMPLICATED .... 

// TIPS : 

// u can use while loop as both if condition and for loop
// if one side of condition is not working properly try using other condition... 
// like i was trying to solve using  -->>     char_set.count(s[right]) == 0   ... 
// and so it became complicated but using --> char_set.count(s[right]) != 0 its easy

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left =0;
        int right =0;
        int len =0;
        unordered_set<char> char_set;
        while(right<s.size()){
            while(char_set.count(s[right]) != 0){
                char_set.erase(s[left]);
                left++;
            }
            char_set.insert(s[right]);
            len = max(len, right-left+1);
            right++;
        }
        return len;
    }
};
