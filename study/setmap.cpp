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
    
    //----------------------------std::set<>--------------------------------
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




    //----------------------------std::map<>--------------------------------
    //https://qiita.com/_EnumHack/items/f462042ec99a31881a81

    //平衡二分木
    //要素の要素数に対する対数オーダーでの高速な検索能力  内部で要素がソート状態で保持される
    //高速な要素検索のみが必要でソートされることに関心がない場合はふつうunordered_mapを使い, mapを使わない.

    //第一引数のstd::stringがkey  第二引数のintがvalue
    //mapはkeyからvalueを検索するのが得意  mapを利用する理由の殆どはその高速な値の検索にある
    // map<string,int> salary;

    // salary["John"] = 1400;
    // salary["Tom"] = 1000;
    // salary["Harry"] = 0;

    // int a = salary["John"]; // 1400
    // int b = salary["Tom"]; // 1000
    // int c = salary["Harry"]; // 0

    std::map<int,int> m{};
    //計算量は要素数に対して対数時間となる.
    cout << m.size() << endl; // 何も要素を追加していないので当然 0
    cout << m[1] << endl; // 要素は存在しない, 自動で0が追加される
    cout << m.size() << endl; // 自動で要素が追加されているので 1

    //cout << m.size() << endl; // 何も要素を追加していないので当然 0
    //cout << m.at(1) << endl; // 要素は存在しない, Abort! out_of_range

    //mapはitereter取得可能
    //mapの内部ではキーが昇順になるよう要素がソートされている
    // map<key, value>のイテレータを参照剥がしして得られる型は.std::pair<const key, value>である.
    // 言い換えるとmap<key, value>のvalue_typeはpair<const key, value>である.
    // mapの内部ではkeyとvalueはセットで保持されており, keyは変更されないのが前提なのでconstになっている
    map<string,unsigned> dictionary{
        {"John",1000},
        {"Tom",1400},
        {"Harry",800}
    };
    //typename std::map<std::string, unsigned>::iterator = auto
    auto itrm = begin(dictionary);  // 最初の要素を指すイテレータを取得
    //std::pair<const std::string, unsigned>
    auto p = *itrm;                 // 参照剥をがして最初の要素をとり出す
    const string& name = p.first;   //名前の辞書順でソートされてるのでHarryが入る
    unsigned& sarary = p.second;

    cout << name << " " << sarary << "\n";


    //キーが存在するかしないか　find か count
    // if (auto iter = dictionary.find("hoge"); iter != end(dictionary) ) { //if(dictionary.count("hoge")) //暗黙の型変換になる
    //     std::cout << iter->second << std::endl;
    // } else {
    //     std::cout << "not exists" << std::endl;
    // }
    
    //範囲for
    for (auto &e : dictionary){
        std::cout << e.first << " => " << e.second << "\n";
    }

    //イテレーターの種類
    //前方向イテレータ　            前にだけ進めることができる　itr++
    //双方向イテレータ　            前と後ろに進めることができる　itr++  itr--
    //ランダムアクセスイテレータ     任意の位置に進めることができる　itr = itr + 3 etc

    //mapは双方向イテレータである //進める場合はnextを使う
    auto iter3 = dictionary.begin();
    iter3 = std::next(iter3, 2); // iterをふたつすすめる
    std::cout << iter3->first << std::endl; // Tom

    //挿入
    map<int,int> dic{};
    dic.insert(std::make_pair(1,3));
    // こちらは値をkeyとvalueのコンストラクタに転送し値を構築する.
    dic.emplace(3,3); // dic.insert(std::make_pair(1,3))と同様のことができる

    //削除
    //dic.erase(1); // (1,3)は消える
    //dic.erase(begin(dic)); // 最初の要素が消える
    
    //dic.erase(begin(dic), std::next(begin(dic), 3)); // 最初のから数えて３つ分消す

    //dic.clear(); //全削除



    return 0;
}