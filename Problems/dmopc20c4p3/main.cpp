#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int MAX = 2005;

int N, M;
int hor[MAX][2];
int ver[MAX][2];
vector<int> horEvt[MAX];
vector<int> verEvt[MAX];

bool line[MAX];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> hor[i][0] >> hor[i][1];
		int x = hor[i][0], y = hor[i][1];
		horEvt[x].push_back(y);
	}
	for (int i = 0; i < M; i++) {
		cin >> ver[i][0] >> ver[i][1];
		int x = ver[i][0], y = ver[i][1];
		verEvt[x].push_back(y);
	}

	for (int i = 0; i < N; i++) {
		int y = hor[i][1];
		line[y] = true;
	}

	ll inters = 0;
	for (int i = 0; i < MAX; i++) {
		for (int j : verEvt[i]) {
			for (int k = 0; k <= j; k++) {
				if (line[k]) inters++;
			}
		}

		for (int j : horEvt[i]) {
			line[j] = false;
		}
	}

	cout << inters << "\n";
}