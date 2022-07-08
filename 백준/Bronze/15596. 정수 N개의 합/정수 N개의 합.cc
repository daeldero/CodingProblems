#include <vector>
long long sum(std::vector<int> &a) {
	long long ans = 0;
    for (const auto& elt : a) ans += elt;
	return ans;
}
