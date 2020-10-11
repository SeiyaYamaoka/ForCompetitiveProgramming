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

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> p(n);
    REP(i,n)cin >> p[i];
    vector<ll> sta;
    ll po = 0;
    
    REP(i,n){
        if(po == p[i]){
            //stable_sort(ALL(sta)); 
            //ぽの中身入れ替えスタックみてぽからたどり最小の値
            bool is = false;
            int cnt = 0;
            for(int j = 1;j <= sta.size();j++){
               //debug(j);
                is = false;
                for(int k = 0;k < sta.size();k++){
                  // debug(k);
                   //debug(sta.size());
                    if(po + j == sta[k]){
                     //   debug(po + j);
                       // debug(sta[k]);
                        is = true;
                        cnt++;
                        break;
                    }
                }
                //debug(cnt);
                if(cnt == sta.size()){
                    po = po + cnt + 1;
                    break;
                }
                if(is == false){
                   //debug(j + po);
                    po = j + po;
                    break;
                }

            }
        }
        sta.push_back(p[i]);
       // kakunin(sta);
        cout << po << endl;
    }

    return 0;
}