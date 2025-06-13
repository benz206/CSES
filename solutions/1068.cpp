#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    cin.tie(0)->sync_with_stdio(0);

    ll n;
    cin >> n;

    while (n != 1) {
        cout << n << " ";
        if (n & 1LL) {
            n = 3 * n + 1;
        } else {
            n /= 2;
        }
    }

    cout << "1\n";
}