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

const int MOD = 1000000007;
const long double PI = 3.1415926535897932384626433827950;
const double rad = PI / 180;

const long long LINF = ~(1LL << 63);
const long long LMINF = 1LL << 63;
const int INF = ~(1 << 31);

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}
template<typename T> T in() { T x; cin >> x; return (x); }
template<class T> constexpr const T& clamp(const T& v, const T& lo, const T& hi) { return (v < lo) ? lo : (hi < v) ? hi : v; }

inline int gcd(int a, int b) { if (a%b == 0)return (b); return (gcd(b, a%b)); }
inline int lcm(int a, int b) { return a * b / gcd(a, b); }

bool check_int(string str);
ll modinv(ll a, ll m);
ll modpow(ll a, ll n, ll mod);
ll mod(ll v, ll m);
void permutation();
ll bpow(ll a,ll n);
void Prfac(ll n);

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    
    //ll n = 3;                                       //long long n = 3;
    //REP(i,n)    {cout << i << " ";}cout << "\n";    //012
    //RREP(i,n)   {cout << i << " ";}cout << "\n";    //210
    //REPS(i,n)   {cout << i << " ";}cout << "\n";    //123
    //RREPS(i,n)  {cout << i << " ";}cout << "\n";    //321
    //ll a = in<ll>();

    //---------------------------------------------------------------------------------------------
    int b = clamp(1, 2, 7);                         //b:2   //iの値を範囲[2, 7]に収める
    //---------------------------------------------------------------------------------------------
    //---------------------------------------------------------------------------------------------
	double r = 3;
	cout << fixed << setprecision(20) << r * PI << endl;    //小数点以下20桁表示
	cout << scientific << r << endl;                        //指数表記 3.14E+04 みたいな書き方  
    //---------------------------------------------------------------------------------------------     
	//---------------------------------------------------------------------------------------------
	int max = -20000; vector<int> vec = {3,1,4};            //最大値を求める
	for (auto &p : vec)chmax(max, p);
	cout << "max:" << max << "\n";
    //---------------------------------------------------------------------------------------------
    //---------------------------------------------------------------------------------------------
    int min = 20000;		                                //初期値は最大から
	for (auto &p : vec)chmin(min, p);                       //最小値を求める
	cout << "min:" << min << "\n";
    //---------------------------------------------------------------------------------------------
    //---------------------------------------------------------------------------------------------
    ll sum = accumulate(ALL(vec), 0LL);                     //配列内すべて足し算
	cout << "sum:" << sum << "\n";
    //---------------------------------------------------------------------------------------------
    //---------------------------------------------------------------------------------------------
    double avg = accumulate(ALL(vec), 0.0) / vec.size();    //配列内　平均　0.0に注意
	cout << "avg:" << avg << "\n";
    //---------------------------------------------------------------------------------------------
    //---------------------------------------------------------------------------------------------
	cout << "abs:" << abs(min - max) << "\n";               //絶対値
    //---------------------------------------------------------------------------------------------
    //---------------------------------------------------------------------------------------------
    //stable_sort: マージソート、同じ値同士の順序が維持されます
    stable_sort(vec.begin(), vec.end());                    //昇順ソート
	for (auto &p : vec)cout << p << " ";                    
	cout << "\n";

    //sort : クイックソートのため、同じ値同士の順序が維持されません
	sort(vec.begin(), vec.end(), std::greater<int>());      //降順ソート
	for (auto &p : vec)cout << p << " ";
	cout << "\n";
    //---------------------------------------------------------------------------------------------
    //---------------------------------------------------------------------------------------------
    //ユークリッドの互除法
    //2つの自然数の最大公約数を求める手法の一つ
    //2つの自然数a,b(a>=b)についてaのbによる剰余をrとするとaとbの最大公約数はbとrの最大公約数に等しくなる性質がある。
    //この性質を利用してbをrで割った剰余　除数rをその剰余で割った剰余と剰余を求める計算を逐次繰り返すと剰余が0になったときの除数がaとbの最大公約数となる
    cout << gcd(48, 12) << "\n";                            //最大公約数
    cout << lcm(2, 999999999) << "\n";                      //最小公倍数
    //---------------------------------------------------------------------------------------------
    //順列の生成
    permutation();
    //---------------------------------------------------------------------------------------------
    //---------------------------------------------------------------------------------------------
    //find 存在しているかどうか、ない場合最後の要素を指す
	auto result = find(ALL(vec), 1);
	if (result == vec.end()) {cout << "not found" << endl;}
	else {cout << "found: " << *result << endl;}

	//要素に対応する添え字をとってくる
	int dis = distance(vec.begin(), result);
    //---------------------------------------------------------------------------------------------
    //---------------------------------------------------------------------------------------------
    vector<vector<pair<int, int>>> vp;
	int n = 5;
	//内容量変えれる　少なくすると消える
	vp.resize(n);
    //---------------------------------------------------------------------------------------------
    //---------------------------------------------------------------------------------------------
    //無限大の値
	//INF＋INFしてもオーバーフローしない範囲でそれなりに大きい数字でやるそう。現状表現できる最大値最小値になる
	debug(LINF);
    debug(LMINF);
    cout << bitset<64>(LINF) << endl;
    cout << bitset<64>(LMINF) << endl;
    cout << LLONG_MAX << endl;
    //---------------------------------------------------------------------------------------------

	string S = "RRS";
	//S[] == 'R'の結果をboolに代入している
    bool p = S[0] == 'R';
    bool q = S[1] == 'R';
    bool rr = S[2] == 'R';
	cout << "pqr:";
	//boolの内部的には0がfalse 1 がtrue
	cout << p  << " " << q << " " << rr << endl;
	//c++では一部の演算子に対して代替表現を用意している。 and = &&   or = || 
    if (p and q and rr) {
        cout << 3 << endl;
    } else if ((p and q) or (q and rr)) {
        cout << 2 << endl;
    } else if (p or q or rr) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }


}

//文字か数字チェック　0x8 -> 8として通る　abc -> error　34 -> 34
bool check_int(string str) {
	try {
		int n = stoi(str);
		cout << n << endl;

	}
	catch (...) {
		cout << "error" << endl;
		return false;
	}
	return true;
}
//mod m での a の逆元 a^{-1} を計算する
ll modinv(ll a, ll m) {
	ll b = m, u = 1, v = 0;
	while (b) {
		ll t = a / b;
		//aとbを入れ替える　swap
		a -= t * b; swap(a, b);
		u -= t * v; swap(u, v);
	}
	u %= m;
	if (u < 0) u += m;
	return u;
}
// a^n mod を計算する
ll modpow(ll a, ll n, ll mod) {
	ll res = 1;
	while (n > 0) {
		if (n & 1) res = res * a % mod;
		a = a * a % mod;
		n >>= 1;
	}
	return res;
}
ll mod(ll v, ll m) {
     ll r = v % m;
      if (r < 0) r += m; 
      return r; 
}

//指定された値から始まる整数列を生成する
void permutation(){
	vector<int> nums(5);
	iota(ALL(nums), 0);
	do {
		if (nums[0] == 1 && nums[1] == 3) {
			for (int value : nums) {
				cout << value << " ";

			}
			cout << "\n";
		}
		//辞書順によるその次の順列を生成する。
	} while (next_permutation(ALL(nums)));
}
//高速な累乗
ll bpow(ll a,ll n){
	ll x = 1;
	while (n > 0) {//全てのbitが捨てられるまで。
		if (n & 1) {//1番右のbitが1のとき。
			x = x * a;
		}
		a = a * a;
		n >>= 1;//bit全体を右に1つシフトして一番右を捨てる。
	}
	return x;
}
//素因数分解
void Prfac(ll n) {
	ll a = 2;
	while (n >= a * a) {
		if (n % a == 0) {
			cout << a << " * ";
			n /= a;
		}
		else {
			a++;
		}
	}
	cout << n << endl;
}
