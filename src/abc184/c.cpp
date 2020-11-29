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
    ll r1,r2,c1,c2;
    cin >> r1 >> c1;
    cin >> r2 >> c2;
    
    ll a = r1,b = c1;
    ll c = r2,d = c2;

    cout << a + b << " : " << c + d << "\n";
    cout << a - b << " : " << c - d << "\n";
    cout << abs(a - c) << " + " << abs(b - d) << "\n";

    if(a + b == c + d ||a - b == c - d ||abs(a - c) + abs(b - d) <= 3){
        cout << "yes" << endl;
    }


    return 0;
}