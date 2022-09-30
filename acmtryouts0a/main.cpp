#include <iostream>
using namespace std;

int T, N, F;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		int max = 0;
		for (int j = 0; j < N; j++) {
			cin >> F;
			if (F > max) max = F;
		}
		cout << max << "\n";
	}
}