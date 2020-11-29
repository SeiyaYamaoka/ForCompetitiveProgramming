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

bool solve(string s){
    if(s.size() == 1) return s == "8";
    if(s.size() == 2){
        if(stoi(s) % 8 == 0) return 1;
        swap(s[0], s[1]);
        return stoi(s) % 8 == 0;
    }
    vector<int> cnt(10);
    //数字の分布から
    //3桁の数字を作れるか判定している。つまりすべての分布が0以上だったら作れるというわけ
    //1234 から　112 は作れない　1が二つ　2が1つ必要になるために
    for(char x : s) cnt[x - '0']++;//数字の分布をもとめる
    for(int i = 112; i < 1000; i += 8){//104~ではないのか
        auto c = cnt;
        for(char x : to_string(i)) c[x - '0']--;//数字を引く
        cout << i << endl;
        kakunin(c);
        //全ての数字の分布が0以上だったら終わり
        if(all_of(c.begin(), c.end(), [](int x){ return x >= 0; })) return 1;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    string s;
    cin >> s;
    cout << s << endl;
    vector<int> cnt(10);
    //for(char x : s){debug(x - '0');debug(x);}

    //kakunin(cnt);

    puts(solve(s) ? "Yes" : "No");
    
    return 0;
}

