/*
 * FILE: F.cpp
 *
 * @author: Arafat Hasan Jenin <opendoor.arafat[at]gmail[dot]com>
 *
 * LINK:
 *
 * DATE CREATED: 25-09-19 19:52:01 (+06)
 * LAST MODIFIED: 25-09-19 20:00:52 (+06)
 *
 * VERDICT:
 *
 * DEVELOPMENT HISTORY:
 * Date         Version     Description
 * --------------------------------------------------------------------
 * 25-09-19     1.0         Deleted code is debugged code.
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
#include <queue>
#include <deque>
#include <vector>
#include <tuple>
#include <iterator> // std::istream_iterator
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
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    string str1, str2;
    cin >> t;
    while(t--){
        cin >> str1 >> str2;
        int ans = 0;
        size_t found = str1.find(str2);
        if(found != string::npos){
            ans = 1;
        }else{
            for (int i = 0; i < 4; i++) {
                string tmp = str2;
                tmp.erase(i, 1);
                found = str1.find(tmp);
                if(found != string::npos){
                    ans = 2;
                    break;
                }
            }
        }
        if(ans == 0){
            cout << "none\n";
        }else if(ans == 1){
            cout << "good\n";
        }else{
            cout << "almost good\n"; 
        }
    }
    return 0;
}


