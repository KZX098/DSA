#include <bits/stdc++.h>
using namespace std;

int firstOcurr(vector<int>& arr, int n, int k) {
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;//taaki badi value p int ki range se bahar na ho mid
        if (arr[mid] == k) {
            ans = mid;
            e = mid - 1;
        } else if (arr[mid] > k) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int lastOcurr(vector<int>& arr, int n, int k) {
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k) {
            ans = mid;
            s = mid + 1;
        } else if (arr[mid] > k) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    pair<int,int> p;
    p.first = firstOcurr(arr, n, k);
    p.second = lastOcurr(arr, n, k);
    return p;
}