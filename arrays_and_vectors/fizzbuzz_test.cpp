#include<vector>
#include<string>
using namespace std;

//Complete this method, don't write main
vector<string> fizzbuzz(int n) {
    vector<string> ans;
    string fizz = "Fizz", buzz = "Buzz", fizzbuzz = fizz + buzz;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) ans.push_back(fizzbuzz);
        else if (i % 3 == 0) ans.push_back(fizz);
        else if (i % 5 == 0) ans.push_back(buzz);
        else {
            string num = to_string(i);
            ans.push_back(num);
        }
    }
    return ans;
}