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
    int abc[3],k;
    cin >> abc[0] >> abc[1] >> abc[2];
    cin >> k;

    bool ans = false;
    REP(i,k + 1){
        //cout << abc[0] << " " << abc[1] << " " << abc[2] << "\n";
        if(abc[0] < abc[1] && abc[1] < abc[2]){
            ans = true;
            break;
        }
        if(abc[0] >= abc[1]){
            abc[1] *= 2;
        }else if(abc[1] >= abc[2]){
            abc[2] *= 2;
        }
    }

    
    if(ans == true){cout << "Yes" << endl;}else{cout << "No" << endl;}

    return 0;
}