// problem : https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/

// ---------------using SET ------------------ faster

      set<char> st;
      for(char ch : letters){
          st.insert(ch);
      }
      auto it = st.upper_bound(target);
      if(it!=st.end()){
          return *it;
      }else{
          return *st.begin();
      }

// -----------------using BINARY SEARCH ------------- slow
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ch = letters[0];

        if (target == 'z'){
            return ch;
        }
        int first =0;
        int last = letters.size()-1;
        while(first<=last){
            int mid = first + (last - first)/2;
            if(letters[mid]> target){
                ch = letters[mid];
                last = mid-1;            }
            else{
                first =mid+1;
            }
        }
        return ch;
    }

};
