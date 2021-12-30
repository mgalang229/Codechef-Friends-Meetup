#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int x1, x2;
        cin >> x1 >> x2;
		// the answer is YES if x1 is greater than or equal to x2
        string ans = (x1 >= x2 ? "YES" : "NO");
		cout << ans << '\n';
    }
    return 0;
}
