#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	vector<int> nums;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		nums.push_back(n);
	}

	sort(nums.begin(), nums.end());

	for (int n : nums) {
		cout << n << "\n";
	}
}