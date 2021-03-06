#include <bits/stdc++.h>

using namespace std;

/* Template file for Online Algorithmic Competitions */
/* Typedefs */
    /* Basic types */
    typedef long long           ll;
    typedef long double         ld;
    typedef unsigned long long ull;
    /* STL containers */
    typedef vector <int>    vi;
    typedef vector <ll>     vll;
    typedef pair <int, int> pii;
    typedef pair <ll, ll>   pll;
    typedef vector < pii >  vpii;
    typedef vector < pll >  vpll;
    typedef vector <string> vs;
    typedef vector < vi >   vvi;
    typedef vector < vll >  vvll;
    typedef vector < vpii > vvpii;
    typedef set <int>       si;
/* Macros */
    /* Loops */
    #define fl(i, a, b)     for(int i(a); i <= (b); i ++)
    #define rep(i, n)       fl(i, 1, (n))
    #define loop(i, n)      fl(i, 0, (n) - 1)
    #define rfl(i, a, b)    for(int i(a); i >= (b); i --)
    #define rrep(i, n)      rfl(i, (n), 1)
    /* Algorithmic functions */
    #define srt(v)          sort((v).begin(), (v).end())
    /* STL container methods */
    #define pb              push_back
    #define mp              make_pair
    #define eb              emplace_back
    /* String methods */
    #define dig(i)          (s[i] - '0')
    #define slen(s)         s.length()
    /* Shorthand notations */
    #define fr              first
    #define sc              second
    #define re              return 
    #define sz(x)           ((int) (x).size())
    #define all(x)          (x).begin(), (x).end()
    #define sqr(x)          ((x) * (x))
    #define fill(x, y)      memset(x, y, sizeof(x))
    #define clr(a)          fill(a, 0)
    #define endl            '\n'
    /* Mathematical */
    #define IINF            0x3f3f3f3f
    #define LLINF           1000111000111000111LL
    #define PI              3.14159265358979323
    /* Debugging purpose */
    #define trace1(x)                cerr << #x << ": " << x << endl
    #define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl
    #define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl
    /* Fast Input Output */
    #define FAST_IO                  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
/* Constants */
    const ll MOD = 1000000007LL;
    const ll MAX = 100010LL;
/* Templates */
template<class T> T abs(T x) { re x > 0 ? x : -x; }
template<typename T> T gcd(T a, T b){ if(b == 0) return a; return gcd(b, a % b); }
template<typename T> T power(T x, T y, ll m = MOD){T ans = 1; x %= m; while(y > 0){ if(y & 1LL) ans = (ans * x)%m; y >>= 1LL; x = (x*x)%m; } return ans%m; }

int main(){

    #ifndef ONLINE_JUDGE
    freopen("/Users/sahilbansal/Desktop/input.txt", "r", stdin);
    freopen("/Users/sahilbansal/Desktop/output.txt", "w", stdout);
    freopen("/Users/sahilbansal/Desktop/error.txt", "w", stderr);
    #endif

    FAST_IO;    

    int n;
    cin >> n;

    string s;
    cin >> s;

    int res = 0;
    for (int i = 1; i < n - 1; i ++) {
        if (s[i] == s[i - 1] && s[i] == s[i + 1]) {
            if (s[i] == 'R') {
                s[i] = 'G';
            }
            else if (s[i] == 'G') {
                s[i] = 'B';
            }
            else {
                s[i] = 'R';
            }
            res ++;
        }
    }

    for (int i = 1; i < n; i ++) {
        if (s[i] == s[i - 1] && i == n - 1) {
            if (s[i] == 'R') {
                s[i] = 'G';
            }
            else if (s[i] == 'G') {
                s[i] = 'B';
            }
            else {
                s[i] = 'R';
            }
            res ++;
            break;
        }
        if (s[i] == s[i - 1]) {
            if (s[i] == 'B') {
                if (s[i + 1] == 'R') {
                    s[i] = 'G';
                }
                else {
                    s[i] = 'R';
                }
            }
            else if (s[i] == 'G') {
                if (s[i + 1] == 'R') {
                    s[i] = 'B';
                }
                else {
                    s[i] = 'R';
                }
            }
            else {
                if (s[i + 1] == 'G') {
                    s[i] = 'B';
                }
                else {
                    s[i] = 'G';
                }
            }
            res ++;
        }
    }

    cout << res << endl;
    cout << s << endl;

    return 0;
}