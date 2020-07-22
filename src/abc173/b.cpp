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
    int n;
    cin >> n;
    vector<string> s(n);
    REP(i,n)cin >> s[i];

    int j[4] = {0,0,0,0};
    REP(i,n){
        if(s[i] == "AC"){
            j[0]++;
        }else if(s[i] == "WA"){
            j[1]++;
        }else if(s[i] == "TLE"){
            j[2]++;
        }else if(s[i] == "RE"){
            j[3]++;
        }
    }

    cout << "AC x " << j[0] << "\nWA x " << j[1] << "\nTLE x " << j[2] << "\nRE x " << j[3] << endl;
    
    return 0;
}