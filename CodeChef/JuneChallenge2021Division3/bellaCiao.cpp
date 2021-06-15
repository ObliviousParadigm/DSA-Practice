#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll bellaCiao(vector<ll> line)
{
    ll D = line[0];
    ll d = line[1];
    ll p = line[2];
    ll q = line[3];

    ll n = D / d;
    ll remainder = D % d;
    ll sum = 0;

    if (n % 2 == 0)
    {
        sum += d * ((n / 2) * (2 * p + (n - 1) * q)); // (n/2)*(2a+(n-1)*d)
    }
    else
    {
        sum += d * (n * (p + ((n - 1) / 2) * q));
    }

    sum += remainder * (p + (n * q)); // remainder * (p + n*q)

    return sum;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n, x, ans;

    cin >> n;
    vector<vector<ll>> lines(n, vector<ll>(4));

    for (ll i = 0; i < n; ++i)
    {
        for (ll j = 0; j < 4; ++j)
        {
            cin >> lines[i][j];
        }
    }

    for (ll i = 0; i < n; ++i)
    {
        ans = bellaCiao(lines[i]);
        cout << ans << endl;
    }

    return 0;
}