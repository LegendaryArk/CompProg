#include <bits/stdc++.h>
using namespace std;

int N;
int n, o;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	int c = 0;
	while (N--) {
		cin >> n >> o;
		if (n > o) c++;
	}
	cout << c << "\n";

	return 0;
}