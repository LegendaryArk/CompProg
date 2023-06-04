#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<pii> vp;

#define f first
#define s second

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = acos((double) -1);

#define BIT_SET(a, b) ((a) |= (1ULL << (b))
#define BIT_CLEAR(a, b) ((a) &= ~(1ULL << (b))
#define BIT_FLIP(a, b) ((a) ^= (1ULL << (b))
#define BIT_CHECK(a, b) (!!((a) & (1ULL << (b)))

int lineX1, lineY1, lineX2, lineY2, N;

bool lineIntersects(pii end1, pii end2) {
	int a1 = lineY2 - lineY1;
	int b1 = lineX1 - lineX2;
	int c1 = lineY1 * lineX2 - lineX1 * lineY2;

	int a2 = end2.s - end1.s;
	int b2 = end1.f - end2.f;
	int c2 = end1.s * end2.f - end1.f * end2.s;

	if (a1 * b2 - a2 * b1 == 0) return false;

	double x = (double) (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);
	double y = (double) (a2 * c1 - a1 * c2) / (a1 * b2 - a2 * b1);

	int minX = max(min(lineX1, lineX2), min(end1.f, end2.f));
	int minY = max(min(lineY1, lineY2), min(end1.s, end1.s));

	int maxX = min(max(lineX1, lineX2), max(end1.f, end2.f));
	int maxY = min(max(lineY1, lineY2), max(end1.s, end2.s));

	if (minX <= x && x <= maxX && minY <= y && y <= maxY) return true;
	return false;
}

bool shapeIntersects(vector<pii> shape) {
	for (int i = 0; i < shape.size() - 1; i++)
		if (lineIntersects(shape[i], shape[i + 1])) return true;
	if (lineIntersects(shape.front(), shape.back())) return true;
	return false;
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);

	cin >> lineX1 >> lineY1 >> lineX2 >> lineY2 >> N;
	int ans = 0;
	for (int i = 0; i < N; i++) {
		int shapeNum;
		cin >> shapeNum;
		vector<pii> corners;
		for (int j = 0; j < shapeNum; j++) {
			int cx, cy;
			cin >> cx >> cy;
			corners.push_back({ cx, cy });
		}
		if (shapeIntersects(corners)) ans++;
	}

	cout << ans << "\n";

	return 0;
}