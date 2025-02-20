/**
 * @created     : `!v strftime("%B %d, %Y")`
 * @handle      : @LuchoBazz
 */

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define _ << ' ' <<
#define PB push_back
#define SZ(v) ((int) v.size())
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define overload4(a, b, c, d, e, ...) e
#define for1(a) for(int i = 0; i < int(a); ++i)
#define for2(i, a) for(int i = 0; i < int(a); ++i)
#define for3(i, a, b) for(int i = int(a); i <= int(b); ++i)
#define for4(i, a, b, c) for(int i = int(a); i <= int(b); i += int(c))
#define forn(...) overload4(__VA_ARGS__, for4, for3, for2, for1)(__VA_ARGS__)
 
template <class T, class S>
inline bool xmax(T &a, const S &b) {
    return (a < b ? a = b, 1 : 0);
}
template <class T, class S>
inline bool xmin(T &a, const S &b) {
    return (a > b ? a = b, 1 : 0);
}
 
using int64 = long long;
 
#ifdef DEBUG 
#include "debug.h"
#else
#define debug(...) 42
#endif

$1

void solveOne() {
    $2
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while(T --> 0) {
        solveOne();   
    }
    
    return 0;
}