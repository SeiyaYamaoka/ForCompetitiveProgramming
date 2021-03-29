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

int kiriage(int ab){
    if(ab % 10 == 0){
        return ab;
    }else{
        return (ab / 10 + 1) * 10;
    }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);

    vector<int> a(5);
    int min = 10;
    int last = 0;
    REP(i,5){
        cin >> a[i];
        int aa = a[i] % 10;
        debug(aa);
        if(aa != 0){
            if (min > aa) {
                min = aa;
                last = i;
            }
        }
    }

    int ans = 0;
    REP(i,5){
        int ki = kiriage(a[i]);
        //debug(ki);
        if(i != last){
            ans += ki;
        }
        //debug(ans);
    }
    ans += a[last];
    //out(min);
    out(ans);
    return 0;
}