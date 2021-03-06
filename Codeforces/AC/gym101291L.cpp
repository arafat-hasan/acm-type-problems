/*
 * FILE: gym101291L.cpp
 *
 * @author: Arafat Hasan Jenin <opendoor.arafat[at]gmail[dot]com>
 *
 * LINK: https://codeforces.com/gym/101291
 *
 * DATE CREATED: 08-02-19 18:32:36 (+06)
 * LAST MODIFIED: 08-02-19 19:10:04 (+06)
 *
 * VERDICT: Accepetd
 *
 * DEVELOPMENT HISTORY:
 * Date         Version     Description
 * --------------------------------------------------------------------
 * 08-02-19     1.0         Deleted code is debugged code.
 *
 *               _/  _/_/_/_/  _/      _/  _/_/_/  _/      _/
 *              _/  _/        _/_/    _/    _/    _/_/    _/
 *             _/  _/_/_/    _/  _/  _/    _/    _/  _/  _/
 *      _/    _/  _/        _/    _/_/    _/    _/    _/_/
 *       _/_/    _/_/_/_/  _/      _/  _/_/_/  _/      _/
 */

///////////////////////////////////////////////////////////////////////

#include <iostream>
#include <climits>
#include <cmath>
#include <cstring>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <utility>
#include <sstream>
#include <algorithm>
#include <stack>
#include <set>
#include <list>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <deque>
#include <vector>
#include <tuple>
#include <stdint.h> //uint32_t
#include <functional>
#include <bitset>
#include <unistd.h> // unsigned int sleep(unsigned int seconds);

using namespace std;

typedef long long           ll;
typedef double              lf;
typedef long double         llf;
typedef unsigned long long  ull;
typedef pair<int, int>      pii;
typedef vector<pii>         vpii;
typedef vector<int>         vi;
typedef vector<long long>   vl;

#define _USE_MATH_DEFINES

#define forr(i, a, b)   for (__typeof (a) i = (a); i <= (b); i++)
#define rof(i, b, a)    for (__typeof (a) i = (b); i >= (a); i--)
#define rep(i, n)       for (__typeof (n) i = 0; i < (n); i++)
#define forit(i, s)     for (__typeof ((s).end()) i = (s).begin(); i != (s).end(); ++i)
#define all(ar)         ar.begin(), ar.end()
#define fill(a, val)    memset((a), (val), sizeof((a)))
#define clr(a)          memset((a), 0, sizeof((a)))
#define sz(a)           (int) a.size()

#define pb              push_back

#ifndef ONLINE_JUDGE
    #define nl              cerr << '\n'
    #define sp              cerr << ' '
    #define ckk             cerr << "###############\n"
    #define debug1(x)       cerr << #x << ": " << (x) << '\n'
    #define debug2(x, y)    cerr << #x << ": " << (x) << '\t' << #y << ": " << (y) << '\n'
    #define debug3(x, y, z) cerr << #x << ": " << (x) << '\t' << #y << ": " << (y) << '\t' << #z << ": " << (z) << '\n'
#else
    #define nl
    #define sp
    #define ckk
    #define debug1(x)
    #define debug2(x, y)
    #define debug3(x, y, z)
#endif

#define PI              acos(-1.0)
#define INF             0x7fffffff
#define MOD             1000000007
#define EPS             1e-7
#define MAX             10000007 //1e7+7

////////////////////////// START HERE //////////////////////////

int main() {
    ios_base::sync_with_stdio (false); cin.tie (0); cout.tie (0);
    vpii v (3);
    int area = 0;
    int mx = -1, idx = -1;
    set<pair<int, int>> st;
    rep (i, 3) {
        cin >> v[i].first >> v[i].second;

        if (v[i].first > v[i].second) swap (v[i].first, v[i].second);

        st.insert ({v[i].first, v[i].second});

        if (v[i].second > mx) {
            idx = i;
            mx = v[i].second;
        }

        area += (v[i].first * v[i].second);
    }
    bool areaAns = (area % mx == 0 and area / mx == mx);

    if ((int) st.size() == 1) {
        if ((*--st.end()).first * 3 == (*--st.end()).second) cout << "YES\n";
        else cout << "NO\n";

        return 0;
    }

    bool ans = false;

    if (idx == 0) {
        if (v[1].first == v[2].first) {
            ans = v[1].second + v[2].second == mx;

        } else if (v[1].first == v[2].second) {
            ans = v[1].second + v[2].first == mx;

        } else if (v[1].second == v[2].first) {
            ans = v[1].first + v[2].second == mx;

        } else if (v[1].second == v[2].second) {
            ans = v[1].first + v[2].first == mx;
        }

    } else if (idx == 1) {
        if (v[0].first == v[2].first) {
            ans = v[0].second + v[2].second == mx;

        } else if (v[0].first == v[2].second) {
            ans = v[0].second + v[2].first == mx;

        } else if (v[0].second == v[2].first) {
            ans = v[0].first + v[2].second == mx;

        } else if (v[0].second == v[2].second) {
            ans = v[0].first + v[2].first == mx;
        }

    } else {
        if (v[1].first == v[0].first) {
            ans = v[1].second + v[0].second == mx;

        } else if (v[1].first == v[0].second) {
            ans = v[1].second + v[0].first == mx;

        } else if (v[1].second == v[0].first) {
            ans = v[1].first + v[0].second == mx;

        } else if (v[1].second == v[0].second) {
            ans = v[1].first + v[0].first == mx;
        }
    }

    cout << (ans & areaAns ? "YES\n" : "NO\n");
    return 0;
}
