// problem : https://leetcode.com/problems/online-stock-span/description/

//monotonic stack 

// ------------------------------ brute force - got TLE 

class StockSpanner {
public:
    stack<int> st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        st.push(price);
        stack<int> temp = st;
        int count =0;
        while(!temp.empty() && temp.top()<=price){
            count++;
            temp.pop();
        }
        return count;
    }
};


// --------------- MONOTONIC STACK -------------   

  int next(int price) {
        int count=1;
        while(!st.empty() && st.top().first<= price){
            count += st.top().second;
            st.pop();
        }
        st.push({price, count});
        return count;
    }
