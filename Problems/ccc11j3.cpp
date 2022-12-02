#include <bits/stdc++.h>
using namespace std;

vector<int> t;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	cin >> a >> b;
	t.push_back(a); t.push_back(b);
	while (t[t.size() - 2] >= t[t.size() - 1])
		t.push_back(t[t.size() - 2] - t[t.size() - 1]);

	cout << t.size() << "\n";
}