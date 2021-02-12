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

void cf(double xx, double rr, int *low, int *high){
    *low = ceil(xx-rr);
    *high = floor(xx+rr);
}


int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    double x,y,r,p;
    int num = 0;
    int dnum=0;
    int start = 0,end = 0,top = 0,bottom = 0;
    cin >> x >> y >> r;

    cf(x,r,&start,&end);

    for(int i=start;i<=end;i++){

        p = sqrt(pow(r,2)-pow((x-(double)i),2));

        cf(y,p,&bottom,&top);

        //cout << top << ":" << bottom << "\n";
        if(top == bottom){
            dnum += 1;
        }else{
            dnum += top - bottom + 1;
        }
        
        
        // for(int j=bottom;j<=top;j++){
        //     num = num + 1;
        // }
    }
    cout << dnum << endl;
    //cout << num << endl;

    return 0;
}