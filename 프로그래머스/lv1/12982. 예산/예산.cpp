#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(begin(d), end(d));
    
	for (answer = 0; answer < d.size() && budget > 0; ++answer) {
		budget -= d[answer];
	}
    
	return budget < 0 ? answer - 1 : answer;
}