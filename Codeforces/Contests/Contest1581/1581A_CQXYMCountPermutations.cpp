/**
 *    author:    vanloc1808
 *    created:   30-09-2021   17:59:23
**/

#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef unsigned int ui;
typedef long long ll;
typedef float fl;
typedef double db;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fillArray(a, n, t) for (int i = 0; i < n; i++) {a[i] = t}
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front

const double INF = 1e10;
const long long MOD = 1000000007;
const double PI = 3.14159;
const double EPSILON = 1e-6;

long long solve() {
    ll n;
    cin >> n;

    ll res = 1;

    for (ll i = 3; i <= 2 * n; i++) {
        res = (res * i) % MOD;
    }

    return res;
}

int main()
{
    fastio;
    
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << "\n";
    }
    
    return 0;
}