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
    int n;
    cin >> n;
    vector<ll> l(n);
    REP(i,n)cin >> l[i];
    int ans = 0;

    // REP(i,n){
    //     REP(j,n){
    //         if(i != j && l[i] != l[j]){
    //             REP(k,n){
    //                 if(i != k && l[i] != l[k] && j != k && l[j] != l[k]){
    //                     if(l[i] + l[j] > l[k] && l[k] + l[j] > l[i] && l[k] + l[i] > l[j]){
    //                         cout << 1 + i << " " << 1 + j << " " << 1 + k << "\n";
    //                         ans++;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }

    for (int bit = 0; bit < (1 << n); ++bit)
	{
		vector<int> S;
		for (int i = 0; i < n; ++i) {
			if (bit & (1 << i)) { 
				S.push_back(i);
			}
		}
        if(S.size() == 3){
            
            if(l[S[0]] != l[S[1]] && l[S[1]] != l[S[2]] && l[S[2]] != l[S[0]])
            {
                if(l[S[0]] + l[S[1]] > l[S[2]] && l[S[1]] + l[S[2]] > l[S[0]] && l[S[2]] + l[S[0]] > l[S[1]]){
                    REP(i,3){
                        cout << S[i] << " ";
                    }cout << "\n";
                    ans++;
                }
            }
            
        }
    }
    cout << ans << endl;

    return 0;
}