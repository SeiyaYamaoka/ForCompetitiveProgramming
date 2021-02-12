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
    int n;
    cin >> n;
    vector<int> a(n),syu;
    REP(i,n){
        cin >> a[i];
        auto it = find(ALL(syu), a[i]);
        if (it == syu.end()) {
            syu.emplace_back(a[i]);
        }
    }
    int max = -1;
    for(int i = 0;i<syu.size();i++){
        int cn = 0;
        for(int j = 0;j<n;j++){
            //debug(cn);
            if(syu[i] > a[j]){
                if(max < cn){
                    max = cn;
                }
                cn = 0;
                continue;
            }
            cn += syu[i];
        }
        if(max < cn){
            max = cn;
        }
    }

    cout << max << endl;

    return 0;
}