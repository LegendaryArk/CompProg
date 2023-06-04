#include "bits/stdc++.h"
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> songs;
	for (int i = 0; i < N; i++) {
		int M, S;
		cin >> M >> S;
		songs.push_back(M * 60 + S);
	}
	int X, Y;
	cin >> X >> Y;
	int sec = X * 60 + Y;

	sort(songs.begin(), songs.end());

	int totalTime = 0;
	int c = 0;
	for (int n : songs) {
		totalTime += n;
		if (totalTime > sec) {
			break;
		}
		c++;
	}
	cout << c << "\n";
}