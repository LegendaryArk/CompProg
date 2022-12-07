#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> r, freq(1000);

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0, R; i < N; i++) {
		cin >> R;
		r.push_back(R);
		freq[R]++;
	}

	int mxR1 = 0, mxR2 = 0, mxFreq = 0;
	for (int i = 0; i < freq.size(); i++) {
		if (freq[i] > mxFreq) {
			mxFreq = freq[i];
			mxR1 = i;
			mxR2 = 0;
		} else if (freq[i] == mxFreq) {
			if (mxR1 == 0) mxR1 = i;
			else if (mxR2 == 0) mxR2 = i;
			else if (abs(i - mxR2) > abs(mxR1 - mxR2)) mxR1 = i;
			else if (abs(mxR1 - i) > abs(mxR1 - mxR2)) mxR2 = i;
		}
	}
	if (mxR2 == 0) {
		int mxFreq2 = 0;
		for (int i = 0; i < freq.size(); i++) {
			if (freq[i] > mxFreq2 && freq[i] != mxFreq) {
				mxFreq2 = freq[i];
				mxR2 = i;
			} else if (freq[i] == mxFreq2) {
				mxFreq2 = freq[i];
				if (abs(mxR1 - i) > abs(mxR1 - mxR2)) mxR2 = i;
			}
		}
	}

	cout << abs(mxR1 - mxR2) << "\n";
}