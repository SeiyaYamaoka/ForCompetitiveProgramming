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

void func(pair<int,string> p);

int main(){
    ios::sync_with_stdio(false);cin.tie(0);

    //初期化
    //pair<int,int> p;
    //cin >> p.first >> p.second;
    // p.first *= 3;
    // p.second *= 4;
    // cout << p.first << " " << p.second << endl;


    // auto [x1, y1] = A[i];
    // auto [x2, y2] = A[j];
    //make_pairによる生成
    pair<int,double> p2 = MP(3,2.33);
    auto p3 = MP(4,"abc");
    func(MP(39,"thank you"));

    std::pair<int, const char*> a(10, "abc");
    
    return 0;
}

void func(pair<int,string> p){
    cout << p.first << p.second << endl;
}