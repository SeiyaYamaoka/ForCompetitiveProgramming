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

template<class T> void kakunin(const vector<T> &v2){
    for(const auto &a : v2){
        cout << a << " ";
    }
    cout << "\n";
}
int ctoi(const char c){
  switch(c){
    case '0': return 0;
    case '1': return 1;
    case '2': return 2;
    case '3': return 3;
    case '4': return 4;
    case '5': return 5;
    case '6': return 6;
    case '7': return 7;
    case '8': return 8;
    case '9': return 9;
    default : return -1;
  }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    string n;
    cin >> n;
    vector<int> kcnt(10);
    for(char x : n) kcnt[x - '0']++;
    int cn = 0;
    for (int i = 0;i<10;i++){
        cn += i * kcnt[i];
    }
    if(cn % 3 == 0){
        cout << 0 << endl;
        return 0;
    }
    if(cn <= 2){cout << -1 << endl;return 0;}
    int bit = n.size();
    for (int i = n.size(); i >= 0; i--) {
        cn = 0;
        for(char x : n){
            if (bit & (1 << i)) { //if (bit & BIT_FLAG_3) {
                //a に i 番目のフラグが立っているかどうか
                cn += ctoi(n[i]);
            }
        }
        debug(cn);
    }


    cout << cn << endl;
    
    return 0;
}