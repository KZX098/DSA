/*Given an array ‘arr’ of integer numbers, ‘arr[i]’ represents the number of pages in the ‘i-th’ book.
There are ‘m’ number of students, and the task is to allocate all the books to the students.

Allocate books in such a way that:
1. Each student gets at least one book.
2. Each book should be allocated to only one student.
3. Book allocation should be in a contiguous manner.

You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.
If the allocation of books is not possible, return -1.*/

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>&arr,int n,int m,int mid){
    int studentCount=1;
    int pageSum=0;//total no. of pages allocated to ith student
    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;//moving to next student
            if(studentCount>m||arr[i]>mid){
                return false;
            }
        pageSum=arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if (m > n) return -1; // Not enough books for each student
    int ans=-1;
    int s=0;

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    //maximum no. of pages allcated to a student sum hi honge usse jyada to ho nhi skte
    int e=sum;
    while(s<=e){
        int mid=s+(e-s)/2;
        //possible aloocation h ya nahi
        if (isPossible(arr, n, m, mid)) {
          // agar possible h to coz apnko minimum chahiye isliye apn first half m jayenge
          ans = mid;
          e = mid - 1;
        }
        else
          s = mid + 1;
    }
    return ans;
}