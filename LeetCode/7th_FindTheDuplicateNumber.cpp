#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                count=nums[i];
            }
        }
        return count;
    }
};