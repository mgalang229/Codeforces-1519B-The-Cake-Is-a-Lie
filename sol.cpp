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
		// calculate the cost of 'right' by getting the x-distance of (n, m) from (1, 1)
		int right = n - 1;
		// calculate the cost of 'down' by getting the y-distance of (n, m) from (1, 1)
		// and multiplying it to the number of rows because as stated in the problem statement
		// every down move to the cell costs the value of that specific row
		int down = (m - 1) * n;
		// check if the sum of 'right' and 'down' is EXACTLY equal to 'k'
		cout << (right + down == k ? "YES" : "NO") << '\n';
	}
	return 0;
}
