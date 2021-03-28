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

#define MAX 102
int h,w,xx,yy;
char s[MAX][MAX];
int ans;

int dfs(int x,int y,int d){
    // cout << x << " " << y << endl;
    // debug(s[x][y]);
    // debug(d);
    if(s[x][y] == '#' || x < 0 || x > h || y < 0 || y > w){
        return 0;
    }else if(s[x][y] == '.'){
        if(xx - 1 != x || yy - 1 != y){
            ans++;
        }
        if(d == 1){
            dfs(x,y - 1,d);
        }else if(d == 2){
            dfs(x + 1,y,d);
        }else if(d == 3){
            dfs(x,y + 1,d);
        }else if(d == 4){
            dfs(x - 1,y,d);
        }
    }
    return 0;
}


int main(){
    ios::sync_with_stdio(false);cin.tie(0);

    cin >> h >> w >> xx >> yy;
    
    REP(i,h){
        REP(j,w){
            cin >> s[i][j];
        }
    }

    REPS(i,4){
        dfs(xx - 1,yy - 1,i);
    }
    
    ans++;
    cout << ans << endl;
 
    return 0;
}