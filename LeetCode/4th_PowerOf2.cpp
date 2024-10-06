#include <bits/stdc++.h>
class Solution {
public:
    bool isPowerOfTwo(int n) {
        //we will compare the number with all the powers of 2 in the range of integer i.e.from 0 to (2^31)-1
        for (int i=0;i<=30;i++){
            int ans=pow(2,i);
            if(ans==n){
                return true;
            }
        }
        return false;
    }
};

//COMPLEXITY EFFICIENT
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans=1;

        for(int i=0;i<=30;i++){
            
            if(ans==n){
            return true;
            }
        if(ans<__INT_MAX__/2)
        ans*=2;//Using the prev ans=>time efficient
        }
        return false;
    }
};

//we can also use this approach---->we can find the no. of set bits in the number if it is equal to 1 then yes it is power of 2 otherwie not