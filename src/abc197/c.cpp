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
#define out(x) cout << x << endl

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}



int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> a(n);
    REP(i,n)cin >> a[i];

    // ll ans = a[0] ;
    // ll ans2 = a[1] | a[2];

    // REP(i,a.size()){
    //     cout << bitset<8>(a[i]) << endl;
    // }
	// cout << bitset<8>(ans)  << endl;
	// cout << bitset<8>(ans2) << endl;

    // debug(ans);
    // debug(ans2);

    // ans ^= ans2;
    // debug(ans);

    if (n == 1) {
        cout << a[0] << endl;
        return 0;
    }


    ll min = LINF;
    int num = a.size() - 1;
	for (int bit = 1; bit < (1 << num); ++bit)
    {
        //cout << bitset<8>(bit) << endl;
        int j = 1;
        ll orp = a[0];
        vector<ll> xorp;
        for(int i = 0;i < num;i++){
            bool f = (bit & (1 << i)) ;
            //cout << "f:" << f  << ":orp:" << orp << ":j:" << j << endl;
            if(f == 0){
				orp |= a[j];
            }else if(f == 1){
                xorp.emplace_back(orp);
                orp = a[j];
            }
            j++;
        }
        //cout << "orp:" << orp << endl;
        xorp.emplace_back(orp);
        // for(int i = 0;i<xorp.size();i++){
        //     cout << "xorp[" << i << "]" << bitset<8>(xorp[i]) << endl;
        // }

        ll xorpp = xorp[0];
        for(int i = 1;i<xorp.size();i++){
            xorpp ^= xorp[i];
        }

        chmin(min,xorpp);
        // cout << "xorpp:" << xorpp << endl;
        // cout << "min:" << min << endl;
        if(min == 0)break;

	}

    cout << min << endl;
    return 0;
}