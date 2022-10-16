#include <bits/stdc++.h>
using namespace std;

int t;
int a, b, c;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> t >> a >> b >> c;

	int machine = 1, times = 0;
	int output = 0;
	while (t > 0) {
		t--;
		output++;
		times++;
		if (machine == 1) {
			if (++a == 35) {
				t += 30;
				a = 0;
			}
		} else if (machine == 2) {
			if (++b == 100) {
				t += 60;
				b = 0;
			}
		} else {
			if (++c == 10) {
				t += 9;
				c = 0;
			}
		}

		if (times == 3) {
			machine++;
			if (machine == 4) machine = 1;
			times = 0;
		}
	}

	cout << "Martha plays " << output << " times before going broke.\n";
}