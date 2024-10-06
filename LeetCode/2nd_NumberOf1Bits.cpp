class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n!=0){
            //checking the last bit to be 1
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};