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
    int x;
    cin >> x;

    int ans;
    if(x <= 599){
        ans = 8;
    }else if(x >= 600 && x <= 799){
        ans = 7;
    }else if(x >= 800 && x <= 999){
        ans = 6;
    }else if(x >= 1000 && x <= 1199){
        ans = 5;
    }else if(x >= 1200 && x <= 1399){
        ans = 4;
    }else if(x >= 1400 && x <= 1599){
        ans = 3;
    }else if(x >= 1600 && x <= 1799){
        ans = 2;
    }else if(x >= 1800 && x <= 1999){
        ans = 1;
    }
    
    cout << ans << endl;
    
    return 0;
}