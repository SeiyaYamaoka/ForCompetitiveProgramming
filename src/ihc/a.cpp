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

    int d;
    cin >> d;
    int c[26];
    int last[26];
    REP(i,26)last[i] = -1;
    vector<vector<int>> s(d,vector<int>(26));
    vector<int> t(d);
    REP(i,26)cin >> c[i];
    REP(i,d)REP(j,26)cin >> s[i][j];

    REP(i,d){
        // int tmp = *max_element(ALL(s[i]));
        // t[i] = tmp;
        // std::vector<int>::iterator maxIt = *std::max_element(s[i].begin(), s[i].end());
        // std::size_t d = std::distance(s[i].begin(), tmp);
        // if(i!=0)t[i] += t[i - 1];
    }
    REP(i,d)cout << t[i] << "\n";
    //cout << "ok" << endl;
    return 0;
}