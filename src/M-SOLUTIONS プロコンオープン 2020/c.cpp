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
    int n,k;
    cin >> n >> k;
    vector<ll> a(n);
    REP(i,n)cin >> a[i];
    
    ll b[200000];
    unsigned int bcn = 0;
    
    for(int i = k - 1;i < n;i++){
        ll tm = 1;
        for(int j = i;j > i - k;j--){
            tm *= a[j];
        }
        b[bcn] = tm;
        bcn++;
    }

    // for(int i = 0; i< bcn;i++){
    //     cout << b[i] << " ";
    // }
    // cout << "\n";

    bcn--;
    REP(i,bcn){
        if(b[i] < b[i + 1]){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }

    return 0;
}