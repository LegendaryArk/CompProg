#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k; cin >> n >> k;

	vector<int> stacks; stacks.push_back(n);
	while (true) {
		vector<int> newStacks;
		for (int a : stacks) {
			double b = (a / 2.0) + (k / 2.0);
			double c = (a / 2.0) - (k / 2.0);
			if (b != (int) b || c != (int) c) { newStacks.push_back(a); continue; }
			if (b <= 0 || c <= 0) { newStacks.push_back(a); continue; }

			newStacks.push_back(b); newStacks.push_back(c);
		}

		if (stacks.size() == newStacks.size()) break;
		stacks = newStacks;
	}

	cout << stacks.size() << "\n";

	return 0;
}