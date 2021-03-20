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
    int t;
    cin >> t;
    vector<int> l(t),r(t);
    REP(i,t)cin >> l[i] >> r[i];

    // int test = 0;
    // for(int i = l[test];i < r[test];i++){
    //     for(int j = i + 1)
    // }

    for(int i = 0;i<t;i++){
        if(l[i] == 0 && r[i] == 0){
            // cout << 1 << endl;
            // continue;
        }else if(l[i] == r[i]){
            // cout << 0 << endl;
            // continue;
        }else if(r[i] < l[i] * 2){
            // cout << 0 << endl;
            // continue;
        }
        ll b = r[i] - (l[i] * 2) + 1;
        ll a2 = (1 + b) * b;
        ll a;
        if(a2 % 2 == 0){
            a = a2 / 2;
        }else{
            cout << "error";
        }
        cout << a << endl;
    }

    //cout << t << endl;
    return 0;
}