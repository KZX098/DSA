#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        int s = 1;
        int end = x;
        int ans = 0;

        while (s <= end) {
            int mid = s + (end - s) / 2;
            if (mid <= x / mid) {
                ans = mid;
                s = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
    double morePrecision(int n, int precision, int integerPartSoln){
        double factor=1;
        double ans=integerPartSoln;
        for (int i = 0; i < precision; i++){
            factor=factor/10;
            for (int j = ans; j*j < n; j+=factor)
            {
                ans=j;
            } 
        }
    return ans;
    }
};
int main(){
    int n;
    cin>>n;
    Solution obj;
    int integerPartSoln=obj.mySqrt(n);
    cout<<"Sqrt is: "<<obj.morePrecision(n,3,integerPartSoln)<<endl;
    return 0;

}
