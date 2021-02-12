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
    int h,w;
    cin >> h >> w;
    vector<vector<char>> a(h+2,vector<char>(w+2));

    for(int i = 0; i < h +2;i++){
        for(int j = 0;j<w + 2;j++){
            a[i][j] = '.';
        }
    }
    for(int i = 1; i < h + 1;i++){
        for(int j = 1;j<w + 1;j++){
            cin >> a[i][j];
        }
    }
    
    int ans = 0;
    for(int i = 1; i < h + 1;i++){
        for(int j = 1;j<w + 1;j++){
            if(a[i][j] == '#'){
                if(a[i - 1][j] != '#' && a[i][j + 1] != '#')ans++;
                if(a[i + 1][j] != '#' && a[i][j + 1] != '#')ans++;
                if(a[i + 1][j] != '#' && a[i][j - 1] != '#')ans++;
                if(a[i - 1][j] != '#' && a[i][j - 1] != '#')ans++;
            }else{
                if(a[i - 1][j] == '#' && a[i][j + 1] == '#')ans++;
                if(a[i + 1][j] == '#' && a[i][j + 1] == '#')ans++;
                if(a[i + 1][j] == '#' && a[i][j - 1] == '#')ans++;
                if(a[i - 1][j] == '#' && a[i][j - 1] == '#')ans++;
            }
            // cout << i << " " << j << "\n";
            // debug(ans);
        }
    }
    
    // for(int i = 0; i < h + 2;i++){
    //     for(int j = 0;j<w + 2;j++){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    cout << ans << endl;
    return 0;
}