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

template<class T> void kakunin(const vector<vector<T>> &v2){
    for(const auto &a : v2){
        for(const auto &b : a){
            cout << b << " ";
        }
        cout << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int h,w;
    cin >> h >> w;
    int ch,cw,dh,dw;
    cin >> ch >> cw;
    cin >> dh >> dw;
    vector<vector<char>> s(w,vector<char>(h));
    REP(i,w)REP(j,h)cin >> s[i][j];

    // cout << "\n";

    //歩いて移動できるかどうか
    //5*5の範囲で検索あれば1
    

    kakunin(s);

    
    return 0;
}