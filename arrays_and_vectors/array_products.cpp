#include<vector>
using namespace std;

//Expected Complexity O(N)
vector<int> productArray(vector<int> arr) {

    //Create an output Array
    int n = arr.size();
    vector<int> output(n, 1);

    vector<int> prefix(n), suffix(n);

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            prefix[i] = arr[i];
            continue;
        }
        prefix[i] = arr[i] * prefix[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1) {
            suffix[i] = arr[i];
            continue;
        }
        suffix[i] = arr[i] * suffix[i + 1];
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            output[i] = suffix[i + 1];
            continue;
        }
        if (i == n - 1) {
            output[i] = prefix[i - 1];
            continue;
        }
        output[i] = prefix[i - 1] * suffix[i + 1];
    }
    return output;
}