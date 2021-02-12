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
    int n,m;
    cin >> n >> m;
    vector<int> l(m),r(m);
    REP(i,m)cin >> l[i] >> r[i];

    int ans=0;
    // for(int i = 0;i<n;i++){
    //     int ch = 0;
    //     for(int j = 0;j < m;j++){
    //         cout << i << " : " << j;
    //         if(l[j] <= i + 1 && i + 1 <= r[j]){
    //             cout << " --OK-- ";
    //             ch++;
    //         }
    //         cout << "\n";
    //     }
    //     if(ch == m)ans++;
    // }
    int max = -1,min = INF;
    REP(i,m){
        chmax(max,l[i]);
        chmin(min,r[i]);
    }
    // debug(max);
    // debug(min);
    if(min >= max){
        ans = min - max + 1;
    }else{
        ans = 0;
    }
    cout << ans << endl;
    return 0;
}