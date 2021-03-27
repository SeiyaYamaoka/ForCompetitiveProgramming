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
template<class T> void debug(T x,string s = "#x"){
    cout << s << ": " << x << "\n";
}
template<class T> void debug(T *x,int max = 0){
    for(int i = 0;i < max;i++){
        cout << x[i] << "\n";
        //x++;
    }
}
template<class T> void debug(const vector<T> &v2){
    for(const auto &a : v2){
        cout << a << " ";
    }
    cout << "\n";
}
template<class T> void debug(const vector<vector<T>> &v2){
    for(const auto &a : v2){
        for(const auto &b : a){
            cout << b << " ";
        }
        cout << "\n";
    }
}
#define out(x) cout << x << endl

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}

int fact(int n){
    //(n == 0)?return 1:return n * fact(n-1);
    cout<< n << endl;
    return (n==0)? 1 : n * fact(n-1);
}

const int max_n = 100;
int memo[max_n];
int fib(int n){
    // if(n <= 1)return n;
    // if(memo[n] != 0)return memo[n];
    // return memo[n] = fib(n - 1) + fib(n - 2);

    return (n <= 1) ? n:(memo[n] != 0) ? memo[n]:memo[n] = fib(n - 1) + fib(n - 2);
}

int a[max_n];

bool dfs(int i,int sum){

}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;

    //fact(n);
    //fib(n);
    //debug(memo,n);

    REP(i,n){
        cout << fib(i) << "\n";
    }

    return 0;
}