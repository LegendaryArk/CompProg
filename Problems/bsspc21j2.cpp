#include <bits/stdc++.h>
using namespace std;

int M, N;
bool mins[1441];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> M;
	for (int i = 0, x, y; i < M; i++) {
		cin >> x >> y;
		for (int j = x; j <= y; j++) mins[j] = true;
	}

	cin >> N;
	for (int i = 0, a, b; i < N; i++) {
		cin >> a >> b;
		bool inClass = false;
		for (int j = a; j <= b; j++) {
			if (mins[j]) inClass = true;
		}
		if (inClass) cout << "Break is Over! Stop playing games! Stop watching Youtube!\n";
		else cout << ":eyy:\n";
	}
}