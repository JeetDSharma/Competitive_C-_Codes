#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <utility>
#include <set>
#include <unordered_set>
#include <list>
#include <iterator>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <bitset>
#include <random>
#include <map>
#include <unordered_map>
#include <stdio.h>
#include <complex>
#include <math.h>
#include <cstring>
#include <chrono>
#include <string>
using namespace std;
#define ll long long int
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << " " << #y << "=" << y << endl
#define mod 1000000007
#define fo(i, n) for (i = 0; i < n; i++)
#define s(a, n) sort(a, a + n);
#define sr(a, n) sort(a, a + n, greater<ll>());
#define all(x) x.begin(), x.end()
#define pb push_back
#define mkp make_pair
#define ff first
#define ss second
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, i, j;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (n % 2)
        {
            if (k == 1)
            {
                cout << "YES\n";
                fo(i, n * k)
                        cout
                    << i + 1 << endl;
            }
            else
                cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            ll lim = n * k;
            for (i = 1; i <= n; i++)
            {
                for (j = i; j <= lim; j += n)
                    cout << j << " ";
                cout << "\n";
            }
        }
    }
    return 0;
}