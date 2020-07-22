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
    unsigned short a[3][3];
    bool cnt[3][3];
    REP(i,3){
        REP(j,3){
            cin >> a[i][j];
            cnt[i][j] = false;
        }
    }
    unsigned short n;
    cin >> n;
    vector<unsigned short> b(n);
    REP(i,n)cin >> b[i];

    REP(i,3){
        REP(j,3){
            auto result = find(ALL(b), a[i][j]);
	        if (result != b.end()) {cnt[i][j] = true;}   
        }
    }

    short ix = 0,iy = 0;
    bool flg = false;
    REP(i,3){
        if((cnt[0][i] == true && cnt[1][i] == true && cnt[2][i] == true) ||
         (cnt[i][0] == true && cnt[i][1] == true && cnt[i][2] == true)){
            flg = true;
        }
    }
    if((cnt[0][0] == true && cnt[1][1] == true && cnt[2][2] == true) ||
    (cnt[2][0] == true && cnt[1][1] == true && cnt[0][2] == true)){
        flg = true;
    }
    if(flg == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}