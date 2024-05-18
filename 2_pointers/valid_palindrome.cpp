// problem : 


#include <cctype>
class Solution {
public:

    bool isPalindrome(string s) {

       // ----------USING INBUILT FUNCTION --------- OPTIMAL WAY
        string str;
        for(char ch : s){
            if (isalpha(ch) || isdigit(ch)){
                str+=tolower(ch);
            }
        }cout<<str<<endl;
    
      string og = str;
      reverse(str.begin() , str.end());
      return str == og;


      // ----------------- USING 2 POINTERS ----------- BRUTE FORCE
        int first = 0;
        int last = str.size()-1;  
        while(first<=last){
            if(str[first] == str[last]){
                first++;
                last--;
            }else{
                break;
            }
        }
        return first>last;

      // ---------ANOTHER 2 POINTER APPROACH -------
      int start =0;
        int end = s.size()-1;
        while(start<=end){
            if(!isalnum(s[start])){
                start++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[start]) == tolower(s[end])){
                start++;
                end--;
            }
            else{
                return false;
            }
        }
        return true;

        
    }
};
