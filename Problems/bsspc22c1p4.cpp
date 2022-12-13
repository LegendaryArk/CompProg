#include <bits/stdc++.h>
using namespace std;

int N, T;
vector<int> line, line2;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> T;
	int mx = 0, mxi;
	for (int i = 0, e; i < N; i++) {
		cin >> e;
		if (e > mx) { mx = e; mxi = i; }
		line.push_back(e);
		line2.push_back(e);
	}
	line[mxi] = -1;

	vector<int> pied;
	int t = 0, c1 = 0;
	mx = 0;
	for (int i = 0; i < line.size(); i++) {
		int e = line[i];
		if (e == -1) continue;
		t += e;
		if (e > mx) { mx = e; mxi = i; }
		pied.push_back(e);
		if (t > T) break;
		c1++;
	}
	line2[mxi] = -1;
	
	int c2 = 0;
	t = 0;
	for (int e : line2) {
		if (e == -1) continue;
		t += e;
		if (t > T) break;
		c2++;
	}
	cout << max(c1, c2) << "\n";
}