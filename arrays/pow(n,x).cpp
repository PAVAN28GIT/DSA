//problem : https://leetcode.com/problems/powx-n/description/


class Solution {
public:
// x to the power n;

    double myPow(double x, int n) {

        if(x == 1 || n==0) return 1;        // special case
        double result =1;
        long power = n;

        if(power<0){                   //handling negative power
            x = 1/x;
            power = -power;
        }
        
        while(power>0){
            if(power%2 == 1){            // if power is odd..multiply once 
                result *=x;             //  when 4^9 --->  4 * result
                power--;
            }
            x *= x;                  // when power is even ...4^10 = (4*4)^5 ...... this is what we are doing
            power/=2; 
        }
        return result;
    }
};
