/**
 *    author:    vanloc1808
 *    created:   21-12-2021   17:53:12
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

const long long INF = 2e18;
const long long MOD = 1000000007;
const double PI = 3.14159;
const double EPSILON = 1e-6;

int solve() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    if (a < c || b < c) {
        return -1;
    }

    int pass = a + b - c;

    if (pass < 0) {
        return -1;
    }

    if (pass + 1 <= n) {
        return n - pass;
    } 

    return -1;
}

int main()
{
    fastio;
    
    cout << solve() << "\n";
    
    return 0;
}