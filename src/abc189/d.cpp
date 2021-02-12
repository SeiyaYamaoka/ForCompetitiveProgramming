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
    vector<string> s(n);
    REP(i,n)cin >> s[i];
    int cnt = 0;
    for (int bit = 0; bit < (1 << (n + 1)); ++bit)
    {
        //cout << bitset<8>(bit) << endl;
        bool cn = (bit & (1 << 0));
        for(int i = 0;i<n;i++){
            bool de = (bit & (1 << (i + 1))) ;
            //debug(de);
            if(s[i] == "AND"){
                //cout << cn << " & " << de << endl;
                cn = cn & de;
                
            }else if(s[i] == "OR"){
                //cout << cn << " | " << de << endl;
                cn = cn | de;
            }
            
        }
        if(cn == 1)cnt++;
	}
    cout << cnt << endl;

    return 0;
}