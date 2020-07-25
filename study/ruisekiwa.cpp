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

    //累積和    
    //適切な前処理をしておくことで、配列上の区間の総和を求めるクエリを爆速で処理できるようになる手法

    // 配列 a0,a1,a2,…,aN−1a0,a1,a2,…,aN−1 に対して
    // 配列 s0,s1,s2,…,sN−1,sNs0,s1,s2,…,sN−1,sN を以下のように定めたもの
    // s0 = 0
    // s1 = a0
    // s2 = a0 + a1
    // s3 = a0 + a1 + a2
    // ……
    // sN = a0 + a1 + a2 + ⋯ + aN − 1

    vector<int> a{32,65,12,61,40};
    vector<int> s;
    s.push_back(a[0]);
    REPS(i,4)s.push_back(s[i - 1] + a[i]);

    for(auto &a : s)cout << a << " ";
    cout << "\n";

    return 0;
}