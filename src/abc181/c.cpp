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

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}
void foreach_comb(int n, int k, std::function<void(int *)> f) {
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    vector<int> x(n),y(n);
    vector<pair<int,int>> xy(n);
    REP(i,n)cin >> x[i] >> y[i];    
    bool is = false;
    foreach_comb(n, 3, [x,y,&is](int *indexes) {

        int x1,x2,y1,y2;
        x1 = x[indexes[0]] - x[indexes[2]];
        x2 = x[indexes[1]] - x[indexes[2]];
        y1 = y[indexes[0]] - y[indexes[2]];
        y2 = y[indexes[1]] - y[indexes[2]];
        // cout << x[indexes[0]] << " : " << y[indexes[0]] << "\n";
        // cout << x[indexes[1]] << " : " << y[indexes[1]] << "\n";
        // cout << x[indexes[2]] << " : " << y[indexes[2]] << "\n";
        if(x1 * y2 == x2 * y1){
            is = true;
        }
    });

    if(is){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
    return 0;
}