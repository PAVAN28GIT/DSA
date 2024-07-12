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
// BINARY SEARCH METHOD 2ND TIME

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0;
        int r = letters.size()-1;

        if(letters[r]<=target){
            return letters[0];
        }
        while(l<r){
            int mid = l+(r-l)/2;
            if( letters[mid] == target){
                while( mid+1 < letters.size() && letters[mid+1]==letters[mid]){
                    mid++;
                }
                return letters[mid+1];
            }
            else if(letters[mid] >target){
                r = mid;
            }
            else if (letters[mid]<target){
                l = mid+1;
            }
        }
        return letters[r];
    }
};
