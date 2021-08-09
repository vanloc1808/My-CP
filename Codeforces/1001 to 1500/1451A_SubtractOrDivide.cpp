#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <concurrent_priority_queue.h>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <complex>
#include <bitset>
#include <cstdlib>
#include <iomanip>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef double db;
typedef float fl;

#define name ""
#define inoutfile FILE *fi, *fo; freopen_s(&fi, name".inp", "r", stdin); freopen_s(&fo, name".out", "w", stdout)
#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define Pi acos(-1.00)
#define Inf 1e17
#define Epsilon 1e-6

int main()
{
    fastinout;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int res;
        if (n == 1)
        {
            res = 0;
        }
        else if (n == 2)
        {
            res = 1;
        }
        else if (n == 3)
        {
            res = 2;
        }
        else if (n % 2 == 0)
        {
            res = 2;
        }
        else
        {
            res = 3;
        }
        cout << res << "\n";
    }
    return 0;
}
