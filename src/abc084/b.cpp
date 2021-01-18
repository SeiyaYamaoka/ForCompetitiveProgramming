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
    int a,b;
    cin >> a >> b;
    string s;
    cin >> s;

    if(s[a] != '-'){
            cout << "No" << endl;
            return 0;
    }
    REP(i,a){
        //debug(i);
        if(!('0' <= s[i] && s[i] <= '9')){
            cout << "No" << endl;
            return 0;
        }
    }
    for(int i = a+1;i<a+b;i++){
        //debug(i);
        if(!('0' <= s[i] && s[i] <= '9')){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    // if(s[a] == '-' && a + b + 1 == s.length()){
        
    //     REP(i,s.length()){
    //         if(i == a)continue;
    //         if(isdigit(s[i]))y = true;
            
    //     }
    // }
    // if(y){
    //     cout << "Yes" << endl;
    // }else{
    //     cout << "No" << endl;
    // }
    
    return 0;
}