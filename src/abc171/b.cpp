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

    int n,k;
    cin >> n >> k;
    vector<int> p(n);
    REP(i,n)cin >> p[i];

    sort(ALL(p));

    int ans = 0;
    REP(i,k)ans +=p[i];

    cout << ans << endl;

    return 0;
}