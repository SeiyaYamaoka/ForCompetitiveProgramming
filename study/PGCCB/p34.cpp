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

#define MAX_N 100

int a[MAX_N] = {1,2,4,7};
int n = 4,k = 13;

bool dfs(int i,int sum){
    debug(i);
    debug(sum);
    //n個決め終わったら、今までの和sumがkと等しいかを返す
    if(i == n)return sum == k;

    //a[i]を使わない場合
    if(dfs(i + 1,sum))return true;

    //a[i]を使う場合
    if(dfs(i + 1,sum + a[i])) return true;

    //a[i]を使う使わないにかかわらずkが作れないのでfalseを返す
    return false;
}

void solve(){
    
    cout << ((dfs(0,0)) ? "Yes" : "No") << endl;

}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
 
    solve();

    return 0;
}