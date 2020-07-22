#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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

int main(){

    // ll n;
    // cin >> n;
    // ll nt = n; 
    // int cnt = 0;
    // int m = 0;
    vector<int> as;

    // if(n <= 26){
    //     char a = 97 + (n - 1);
    //     cout << a << endl;
    //     return 0;
    // }

    REP(i,705){
        while(i != 0){
            i /= 26;
            
            cout << i << ":" << i % 26 << "\n";
        }
    }

    for(int i = 0;i<as.size();i++){
        char a = 97 + as[i];
        cout << a;
    }

    cout << endl;

    return 0;
}