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
    vector<pair<int,int>> a(n),b(n);
    REP(i,n){
        cin >> a[i].first >> b[i].first;
        a[i].second = i;
        b[i].second = i;
    }
    // int aans = INF,bans=INF;
    // int aindex = -1,bindex = -1;
    // for(int i = 0;i<n;i++){
    //     if(chmin(aans,a[i])){
    //         aindex = i;
    //     }
    //     if(chmin(bans,b[i])){
    //         bindex = i;
    //     }
    // }
    // int ans = a[aindex] + b[bindex];
    // debug(ans);
    // int abans =  max(aans,bans);
    // debug(abans);
    // if(aindex == bindex){
    //     if(ans <= abans){
    //         cout << ans << endl;
    //         return 0;
    //     }
    // }
    //cout << abans << endl;

    // vector<int> aa = a,bb = b;
    stable_sort(ALL(a));
    stable_sort(ALL(b));
	// for (auto &p : a)cout << p.first << ":" << p.second << " ";                    
	// cout << "\n";
	// for (auto &p : b)cout << p.first << ":" << p.second << " ";                    
	// cout << "\n";
    int ans[3];
    if(a[0].second == b[0].second){
        ans[0] = a[0].first + b[0].first;
        ans[1] = max(a[0].first,b[1].first);
        ans[2] = max(a[1].first,b[1].first);
    }else{
        cout << max(a[0].first,b[0].first) << endl;
        return 0;
    }
    int an = INF;
    for(int i = 0;i<3;i++){
        chmin(an,ans[i]);
        //debug(ans[i]);
    }
    cout << an << endl;
    return 0;
}