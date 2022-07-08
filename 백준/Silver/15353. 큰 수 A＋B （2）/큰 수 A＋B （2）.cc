#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;

const ll Max = 1000000000000000000;

class LL {
private:
	vector<ll> num;

public:
	LL() = default;

	LL(ll n) { push_back(n); };

	LL(const string& s) {
		int n = s.size();
		
		ll x = 0;
   		ll order = 1;
		for (int i = 0; i < n; ++i) {
			x += ctoi(s[n - i - 1]) * order;
			order *= 10;
			if (order == Max) {
				order = 1;
				push_back(x);
				x = 0;
			}
		}
		if (x != 0) push_back(x);
		if (num.empty()) push_back(0);
	}

	LL operator+(const LL& other) const {
		int n = this->size();
		int m = other.size();

		if (n > m) return adder(*this, other);
		return adder(other, *this);
	}

	void Print() const {
		cout << num.back();
		for (int i = size() - 2; i >= 0; --i) {
			cout.width(18);
			cout.fill('0');
			cout << num[i];
		}
	}

private:
	ll ctoi(char c) { return c - '0'; }

	LL adder(const LL& large, const LL& small) const {
		int n = large.size();
		int m = small.size();

		LL result;
		for (int i = 0; i < m; ++i) result.push_back(large[i] + small[i]);
		for (int i = m; i < n; ++i) result.push_back(large.num[i]);
		for (int i = 0; i < n - 1; ++i) {
			if (result[i] >= Max) {
				result[i] -= Max;
				result[i + 1] += 1;
			}
		}
		if (result[n - 1] >= Max) {
			result[n - 1] -= Max;
			result.push_back(1);
		}

		return result;
	}

	int size() const { return num.size(); }

	void push_back(ll n) { num.push_back(n); }

	ll& operator[](int idx) { return num[idx]; }

	const ll& operator[](int idx) const { return num[idx]; }
};

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s1, s2;
	cin >> s1 >> s2;

 	LL n1(s1);
	LL n2(s2);
	(n1 + n2).Print();

	return 0;
}