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
    int h,w,k;
    cin >> h >> w >> k;
    vector<vector<char>> c(h,vector<char>(w));
    int blcnt = 0,whcnt = 0;
    REP(i,h){REP(j,w){cin >> c[i][j];}}

    //if(c[i][j] == '#'){whcnt++;}else{blcnt++;}
    // if(blcnt < k){
    //     cout << 0 << endl;
    //     return 0;
    // }else if(blcnt == k){
    //     cout << 1 << endl;
    //     return 0;
    // }

    int ans = 0;
	for (int bi = 0; bi < (1 << h); ++bi){ 
        for (int bj = 0; bj < (1 << w); ++bj){
            blcnt = 0;
            REP(i,h){
                if (bi & (1 << i)){ 
                    REP(j,w){
                        if (bj & (1 << j)){ 
                            if(c[i][j] == '#'){blcnt++;}
                        }
                    }
                }
            }
            if(blcnt == k){ans++;}

        }
    }

    //REP(i,h){REP(j,w){cout << c[i][j] << " ";}cout << endl;}
    cout << ans << endl;


    return 0;
}