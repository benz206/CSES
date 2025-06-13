#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n;
    cin >> n;

    ll sum = 0;
    for (ll i = 0; i < n - 1; i++) {
        ll x;
        cin >> x;
        sum += x;
    }

    ll exp = n * (n + 1) / 2;
    cout << exp - sum << '\n';
    return 0;
}