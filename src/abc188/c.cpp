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

ll bpow(ll a,ll n){
	ll x = 1;
	while (n > 0) {//全てのbitが捨てられるまで。
		if (n & 1) {//1番右のbitが1のとき。
			x = x * a;
		}
		a = a * a;
		n >>= 1;//bit全体を右に1つシフトして一番右を捨てる。
	}
	return x;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    ll nn = bpow(2,n);
    vector<int> a(nn),b(nn),c(nn);
    REP(i,nn){
        cin >> a[i];
        b[i] = 0;
    }
    c = a;
    
    while(c.size() != 2){
        vector<int> sta;
        
        for(int i = 0;i < nn;i+=2){
            //debug(i);
            int te = min(c[i],c[i + 1]); 
            //debug(te);
            sta.push_back(te);
        }
        REP(i,sta.size()){
            //debug(sta[i]);
            c.erase(find(ALL(c),sta[i]));
        }
        // REP(i,c.size()){
        //     debug(c[i]);
        // }  
        nn/=2;
    }
    auto it = find(ALL(a),min(c[0],c[1]));
    cout << distance(a.begin(),it) + 1 << endl;
    
    
    return 0;
}