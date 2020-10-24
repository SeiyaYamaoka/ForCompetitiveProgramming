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
    ll n;
    cin >> n;
    int i = 1;
    int j = 1;
    while(1){
        ll a = bpow(3,i);
        if(a > n){
            cout << -1 << endl;
            return 0;
        }
        j = 1;
        while(1){
            ll b = bpow(5,j);
            if(b > n)break;
            if(a + b == n){
                cout << i << " " << j << endl;
                return 0;
            }
            j++;
        }
        i++;
    }
    return 0;
}