#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	deque<int> q;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;
		q.push_back(a);
	}

	int c = 0;
	while (q.size() > 1) {
		if (q.front() == q.back()) {
			q.pop_front(); q.pop_back();
		} else {
			c++;
			if (q.front() > q.back()) {
				int a = q.back(); q.pop_back();
				int b = q.back(); q.pop_back();
				q.push_back(a + b);
			} else {
				int a = q.front(); q.pop_front();
				int b = q.front(); q.pop_front();
				q.push_front(a + b);
			}
		}
	}

	cout << c << "\n";

	return 0;
}