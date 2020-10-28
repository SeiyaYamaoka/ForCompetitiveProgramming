#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long long LINF = 1LL << 60;
const long long LMINF = 1LL << 63;
const int INF = 1 << 30;

#define REP(i,n) for(int i = 0;i < n;++i)
#define REPS(i,x) for(int i = 1;i <= (int)(x);i++)
#define RREP(i,x) for(int i=((int)(x)-1);i >= 0;i--)
#define RREPS(i,x) for(int i=((int)(x));i > 0;i--)
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define ALL(obj) (obj).begin(),(obj).end()
#define debug(x) cerr << #x << ": " << x << "\n"

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}



int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int a,b,m;
    cin >> a >> b >> m;
    vector<int> va(a),vb(b);
    REP(i,a)cin >> va[i];
    REP(i,b)cin >> vb[i];

    vector<int> x(m),y(m),c(m);
    REP(i,m)cin >> x[i] >> y[i] >> c[i];
    
    int amin = INF;
    int bmin = INF;
    int mmin = INF;
	for (auto &p : va)chmin(amin, p);
    for (auto &p : vb)chmin(bmin, p);
    REP(i,m)chmin(mmin, va[x[i] - 1] + vb[y[i] - 1] - c[i]);

    cout << min(amin + bmin,mmin) << endl;


    return 0;
}