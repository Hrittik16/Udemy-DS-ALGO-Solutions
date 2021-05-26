#include<vector>
#include<algorithm>
using namespace std;

int maxSubarraySum(vector<int> arr) {
    //Complete this function, your function should return the maximum subarray sum
    int n = arr.size();
    bool all_neg = 1;
    for (auto &x : arr) {
        if (x >= 0) all_neg = 0;
    }
    if (all_neg) return 0;
    int max_sum = arr[0], curr_sum = arr[0];
    for (int i = 1; i < n; i++) {
        curr_sum = max(arr[i], curr_sum + arr[i]);
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}