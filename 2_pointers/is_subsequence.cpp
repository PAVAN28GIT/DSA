// problem : https://leetcode.com/problems/is-subsequence/description/

// easy

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int first = 0;
        int sec = 0;

        while(sec<t.size()){
            if(s[first] == t[sec]){
                first++;
                sec++;
            }else{
                sec++;
            }
        }
        if(first == s.size()){
            return true;
        }else{
            return false;
        }
    }
};
