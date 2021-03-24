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
#define debug(x) cout << #x << ":\t" << x << "\n"
#define out(x) cout << x << endl

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}



int H, W, A, B, ans = 0;
int rec[20][20];
void dfs(int i,int *r,int A,int B){
    
}

void dfscopy(int i, int bit, int A, int B){
    debug(i);
    cout << "bit:\t" << bitset<8>(bit) << "\n";
    debug(A);
    debug(B);
    debug(ans);

    if(i == H * W){//終了か
        out("if(i == H * W){");
        return (void)ans++;
    }
    if(bit & 1 << i){//現時点iが畳であるときi++して続きをする
        out("if(bit & 1 << i){");
        return dfscopy(i + 1, bit, A, B);
    } 
    if(B){//現時点iのbitを1にするB--するi++
        out("if(B){");
        dfscopy(i + 1, bit | 1 << i, A, B - 1);
    }
    if(A){
        out("if(A){");//横
        if(i % W != W - 1 && ~bit & 1 << (i + 1)){
            out("if(i % W != W - 1 && ~bit & 1 << (i + 1)){");
            dfscopy(i + 1, bit | 1 << i | 1 << (i + 1), A - 1, B);
            //i++;
            //bitの現時点を1にi+1を1にして
            //A--;
        }
        if(i + W < H * W){
            out("if(i + W < H * W){");//縦
            dfscopy(i + 1, bit | 1 << i | 1 << (i + W), A - 1, B);
            //i++;
            //bitの現時点を1にi+Wを1にして
            //A--;
        } 
    }
    //何も入らなかったら終わる　ans++されない
    cout << "-------------------" << endl;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    //int h,w,a,b;
    //cin >> h >> w >> a >> b;
    //out(h);
    

    cin >> H >> W >> A >> B;
    dfscopy(0, 0, A, B);
    out(ans);

    return 0;
}