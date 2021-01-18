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


int c[30];

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    string s;
    cin >> s;

    //c[s[0] - 'a'];
    REP(i,s.size()){
        c[s[i] - 0x61] += 1; 
    }
    REP(i,30){
        if(c[i] != 0){
            if(c[i] != 1){
                cout << "no" << endl;
                return 0;
            }
        }
        //cout << c[i] << "\n";
    }

    cout << "yes" << endl;
    
    return 0;
}