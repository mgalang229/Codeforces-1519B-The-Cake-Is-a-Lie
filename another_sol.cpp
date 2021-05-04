#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m, k;
		cin >> n >> m >> k;
		// same logic as the 'sol' cpp file, but different approach
		// (going straight down before going right to the targeted cell)
		int down = m - 1;
		int right = (n - 1) * m;
		cout << (right + down == k ? "YES" : "NO") << '\n';
	}
	return 0;
}
