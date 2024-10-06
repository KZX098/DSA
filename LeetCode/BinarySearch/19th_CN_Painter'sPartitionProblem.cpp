/*Given an array/list of length ‘n’, where the array/list represents the boards and each element of the given array/list represents the length of each board. 
Some ‘k’ numbers of painters are available to paint these boards. 
Consider that each unit of a board takes 1 unit of time to paint.
You are supposed to return the area of the minimum time to get this job done of painting all the ‘n’ boards under a constraint that any painter will only paint the continuous sections of boards.
Expected Time Complexity:
Try to do this in O(n*log(n)).*/

#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>& boards, int n, int k, int mid) {
    int painterCount = 1;
    int time = 0; // Total time required by the current painter

    for (int i = 0; i < n; i++) {
        if (time + boards[i] <= mid) {
            time += boards[i];
        } else {
            painterCount++;//going to next painter
            if (painterCount > k || boards[i] > mid)
                return false;
            time = boards[i]; // Reset time for the new painter
        }
    }
    return true;
}

int findLargestMinTime(vector<int>& boards, int k) {
    int n = boards.size();
    if (k > n) return -1; // Not enough boards for each painter

    int sum = 0;
    int maxBoardLength = 0;
    for (int i = 0; i < n; i++) {
        sum += boards[i];
        maxBoardLength = max(maxBoardLength, boards[i]);
    }

    int s = maxBoardLength; // Minimum possible time is the length of the longest board
    int e = sum;            // Maximum possible time is the sum of all boards
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (isPossible(boards, n, k, mid)) {
            ans = mid;
            e = mid - 1; // Try for a smaller maximum time
        } else {
            s = mid + 1; // Try for a larger maximum time
        }
    }

    return ans;
}