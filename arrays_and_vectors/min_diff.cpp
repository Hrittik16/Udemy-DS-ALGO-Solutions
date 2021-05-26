#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


pair<int, int> minDifference(vector<int> a, vector<int> b) {
	//Complete this method
	pair<int, int> ans;
	int mn = INT_MAX;
	int n = min(a.size(), b.size());
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			if (abs(a[i] - b[j]) < mn) {
				mn = abs(a[i] - b[j]);
				ans = make_pair(a[i], b[j]);
			}
		}
	}
	return ans;
}