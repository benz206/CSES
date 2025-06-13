#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n;
    cin >> n;

    vector<ll> a(n);

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll ans = 0;

    for (ll i = 1; i < n; i++) {
        if (a[i - 1] > a[i]) {
            ans += a[i - 1] - a[i];
            a[i] = a[i] + (a[i - 1] - a[i]);
        }
    }
    cout << ans << '\n';
    return 0;
}