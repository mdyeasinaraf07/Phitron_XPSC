#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a1, a2, b1, b2, c1, c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    ll ans = 0;
    if ((b2 > a2) && (c2 > a2))
    {
        ll mini = min(b2, c2);
        ans += abs(mini - a2) + 1;
    }
    else if ((b2 < a2) && (c2 < a2))
    {
        ll maxi = max(b2, c2);
        ans += abs(maxi - a2) + 1;
    }
    else
    {
        ans += 1;
    }
    if ((b1 > a1) && (c1 > a1))
    {
        ll mini = min(b1, c1);
        ans += abs(mini - a1);
    }
    else if ((b1 < a1) && (c1 < a1))
    {
        ll maxi = max(b1, c1);
        ans += abs(maxi - a1);
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
