// #include <bits/stdc++.h>
// using namespace std;
// vector <int> findArrayIntersection(vector<int> &arr1, int n, vector<int>&arr2, int m){
//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {
//         int element=arr1[i];
//         for (int j = 0; j < m; j++)
//         {
//             if (arr2[j]==element)
//             {   
//                 if (element<arr2[j])
//                 {
//                     break;//coz arrays sorted h to agar 1st array ka element 2nd array k element se chota h to aage check krne ki need nhi h
//                 }
//                 ans.push_back(element);
//                 //marking or updating the common element inserted in the ans
//                 arr2[j]=INT16_MIN;
//                 break;
//             }
//         }
        
//     }
//     return ans;
// }


//more **optimized** solution
//two pointer approach
#include <bits/stdc++.h>
using namespace std;
vector <int> findArrayIntersection(vector<int> &arr1, int n, vector<int>&arr2, int m){
    vector<int> ans;
    int i=0,j=0;
    while (i<n&&j<m)
    {
        if (arr1[i]==arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i]<arr2[j])
        {
            i++;
        }
        else
            j++;
        
    }
    return ans;
}
int main(){
int n,m;
cin>>n;
cin>>m;
vector<int> vect1;
vector<int> vect2;
vect1.push_back(5); 
vect2.push_back(4); 
findArrayIntersection(vect1,n,vect2,m); 
}