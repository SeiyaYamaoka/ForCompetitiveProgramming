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

template<class T> void kakunin(const vector<T> &v2);
template<class T> void kakunin(const vector<vector<T>> &v2);

int main(){
    ios::sync_with_stdio(false);cin.tie(0);

    //初期化
    //vector<int> a;
    int n = 3;//要素数
    int d = 2;//初期化する値    
    vector<int> v(n,d);
    vector<int> vec{ 1, 2, 3 };

    vector<pair<int,int>> p(n,MP(3,1));
    //for(auto &a : p)cout << a.first << " " << a.second << "\n";

    //二次元配列
    vector<vector<int>> vv(n + 1,vector<int>(n,d - 1));
    //kakunin(vv);

    //要素数を変更
    v.resize(n);

    vv.resize(n);
    for(size_t i=0; i<n; i++){
        vv[i].resize(n);
    }
    //kakunin(vv);

    //末尾に要素を追加
    v.push_back(10);
    vv[1].push_back(20);
    vec.emplace_back(30);
    kakunin(v);
    // kakunin(vv);

    //末尾の要素を削除
    vec.pop_back();

    //配列をコピー
    vector<int> v2 = v;
    //範囲指定　vv　の　aa ~ bbまでをv2にコピー
    int aa = 1,bb = 4;
    copy(vv[1].begin()+aa, vv[1].begin()+bb, v2.begin()+aa);
    kakunin(vv[1]);
    kakunin(v2);

    //昇順ソート
    //sort(v.begin(), v.end());

    //降順ソート
    //sort(v.begin(), v.end(), greater<int>());

    //指定要素の削除
    //v.erase(v.begin());//先頭
    //v.erase(v.end());//末尾
    v2.erase(v2.begin()+2);//先頭から2番目
    
    //指定要素に追加
    v2.insert(v2.begin() + 2, 6);
    kakunin(v2);

    //find　最初に見つかった値のイテレータを返す。なければend()
    int num = 20;
    auto it = std::find(vec.begin(), vec.end(), num);
    if (it != vec.end()) {
        cout<<"見つけた…\n";
    }else{
        cout << "見つけられなかった\n";
    }

    
    return 0;
}
template<class T> void kakunin(const vector<T> &v2){
    for(const auto &a : v2){
        cout << a << " ";
    }
    cout << "\n";
}
template<class T> void kakunin(const vector<vector<T>> &v2){
    for(const auto &a : v2){
        for(const auto &b : a){
            cout << b << " ";
        }
        cout << "\n";
    }
}