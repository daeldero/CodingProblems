#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int solve(int n) {
    vector<int> arr(n);
    for (auto& elt : arr) cin >> elt;
 
    int cnt = 0;
    for (int i = 2; i < n - 2; ++i) {
        vector<int> dist(4, 0);
 
        int add = 0;
        for (int j = 0; j < 4; ++j) {
            if (j == 2) ++add;
            dist[j] = arr[i] - arr[i + add++ - 2];
        }
         
        int m = *min_element(begin(dist), end(dist));
        if (m > 0) cnt += m;
    }
    return cnt;
}
 
int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
 
    int test_case;
    for (test_case = 1; test_case <= 10; ++test_case) {
        int n;
        cin >> n;
        int solution = solve(n);
        cout << '#' << test_case << ' ' << solution << '\n';
    }
 
    return 0;
}
