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
#define debug(x) cout << #x << ": " << x << "\n"

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}



int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,m,k;
    cin >> n >> m;
    vector<int> a(m),b(m);
    REP(i,m)cin >> a[i] >> b[i];
    cin >> k;
    vector<int> c(k),d(k);
    REP(i,k)cin >> c[i] >> d[i];

    int max = -1;
    for (int bit = 0; bit < (1 << k); ++bit)
    {
        int ta[100];
        REP(i,100)ta[i] = 0;
        //cout << bitset<8>(bit) << endl;
        for(int i = 0;i<k;i++){
            bool de = (bit & (1 << i)) ;
            //debug(de);
            if(de == 0){
                ta[c[i]]++;
            }else if(de == 1){
                ta[d[i]]++;
            }
        }
        // REP(i,n + 1){
        //     debug(ta[i]);
        // }
        int cn = 0;
        for(int i = 0;i<m;i++){
            if(ta[a[i]] >= 1 && ta[b[i]] >= 1){
                cn++;
            }
        }
        if(cn > max){
            chmax(max,cn);
        }
	}

    cout << max << endl;
    
    return 0;
}