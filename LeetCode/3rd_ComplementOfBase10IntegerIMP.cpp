class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        int mask=0;

        if(n==0){
            return 1;
        }
        while(m!=0){
            //This will append 1 to the right of the mask 
            mask=(mask<<1)|1;
            //This will make the mask all 0
            m=m>>1;
        }
        int ans=(~n)&mask;
        return ans;
    }
};