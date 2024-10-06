//For a sorted (in increasing order) and rotated array, the pivot element is the only element which is smallest
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getPivot(int arr[], int n) {
        int s=0;
        int end=n-1;
        int mid=s+(end-s)/2;
        while(s<end){
            if(arr[mid]>arr[0]){
                s=mid+1;
            }
            else{
                end=mid;
            }
            mid=s+(end-s)/2;
        }
        return s;
    }
};