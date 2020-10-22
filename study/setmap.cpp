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
    
    //宣言
    //set<int> st;

    //orgをコピーする　1,3,4　の値を持つ動的配列xを宣言
    // set<int> org{3,1,4};
    // set<int> x(org);

    //set : 重複を許さない順序付き集合、重複データは自動的に削除される。
    set<int> st{3,1,4,1,9,0,6,56,87,99,0};

    //set<型>::iterator = auto 
    //setのイテレータはランダム・アクセス不可..6番目の要素にアクセスしたい場合6回インクリメントする
    auto itr = st.begin();

    REP(i,st.size()){
        cout << *itr << ",";
        itr++;
    }cout << "\n";
    //お決まりの全表示
    for (auto itr = st.begin(); itr != st.end(); ++itr) {
        cout << *itr << ",";
    }cout << "\n";
    for (auto x : st) {
        cout << x << ",";
    }cout << "\n";
   
   //追加
   st.insert(32);

    //削除
    st.erase(1);
    for (auto itr = st.begin(); itr != st.end(); ++itr) {
        cout << *itr << ",";
    }cout << "\n";


    auto first = st.find(3);//trueじゃないとバグる
    auto last = st.find(32);
    st.erase(first, last);

    for (auto itr = st.begin(); itr != st.end(); ++itr) {
        cout << *itr << ",";
    }cout << "\n";
    return 0;
}