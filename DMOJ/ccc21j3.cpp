#include <bits/stdc++.h>
using namespace std;

string in;
string prevDir;

int main() {
	cin.sync_with_stdio(0);
	cin.tie();

	while (true) {
		cin >> in;
		if (in == "99999") break;

		int dir = in[0] - '0' + in[1] - '0';
		if (dir == 0) cout << prevDir << " " << in.substr(2) << "\n";
		else if (dir % 2 == 1) {
			cout << "left " << in.substr(2) << "\n";
			prevDir = "left";
		}
		else {
			cout << "right " << in.substr(2) << "\n";
			prevDir = "right";
		}
	}
}