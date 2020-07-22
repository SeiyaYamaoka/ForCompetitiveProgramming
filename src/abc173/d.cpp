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
    int n;
    cin >> n;
    vector<int> a(n);
    REP(i,n)cin >> a[i];
    sort(ALL(a)); 
    //sort(ALL(a),greater<int>()); 
    int ans = 0;
    for(int i = 0;i < n - 1;i++){
        ans += (i * a[n - 1]) - (i / 2);
        debug(i);
        debug(a[n - 1]);
        debug(i/2);
        debug(ans);
    }
    // REP(i,n - 1){
    //     int hen = INF;
    //     if(i != 0){
    //         REPS(j,i){
    //             chmin(hen,(min(a[j],a[j - 1])));
    //         }
    //     }else{
    //         hen = a[i];
    //     }
       
    //     ans += hen;
    // }
    cout << ans << endl;
    return 0;
}