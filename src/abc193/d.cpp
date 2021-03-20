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

int ctoi(const char c){
  switch(c){
    case '0': return 0;
    case '1': return 1;
    case '2': return 2;
    case '3': return 3;
    case '4': return 4;
    case '5': return 5;
    case '6': return 6;
    case '7': return 7;
    case '8': return 8;
    case '9': return 9;
    default : return -1;
  }
}

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
    int k;
    string s,t;
    cin >> k >> s >> t;

    int ss[9],tt[9],kk[9];
    int scores = 0,scoret = 0;
    REP(i,9){
        kk[i] = k;
        ss[i] = 0;
        tt[i] = 0;
    }
    REP(i,4){
        int a = ctoi(s[i])-1;
        ss[a]++;
        int b = ctoi(t[i])-1;
        tt[b]++;
    }

    REP(i,9){
        scores += (i+1) * bpow(10,ss[i]);
        scoret += (i+1) * bpow(10,tt[i]);
    }

    REP(i,9){
        cout << kk[i];
    }cout << endl;
    
    REP(i,9){
        cout << ss[i];
    }cout << endl;
    
    REP(i,9){
        cout << tt[i];
    }cout << endl;

    cout << scores << endl;
    cout << scoret << endl;

    cout << k << endl;
    cout << s << endl;
    cout << t << endl;

    //cout << n << endl;
    return 0;
}