#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

//あらかじめ定数にしておくことも多い
const unsigned int BIT_FLAG_0 = (1 << 0); // 0000 0000 0000 0001
const unsigned int BIT_FLAG_1 = (1 << 1); // 0000 0000 0000 0010
const unsigned int BIT_FLAG_2 = (1 << 2); // 0000 0000 0000 0100
const unsigned int BIT_FLAG_3 = (1 << 3); // 0000 0000 0000 1000
const unsigned int BIT_FLAG_4 = (1 << 4); // 0000 0000 0001 0000
const unsigned int BIT_FLAG_5 = (1 << 5); // 0000 0000 0010 0000
const unsigned int BIT_FLAG_6 = (1 << 6); // 0000 0000 0100 0000
const unsigned int BIT_FLAG_7 = (1 << 7); // 0000 0000 1000 0000

int main(){
    int a = 0x2f;
	int b = 0xff;
	int c = 43;

	//ビット演算子
	cout << a << " AND " << b << " = " << (a & b) << endl;
	cout << a << " OR " << c << " = " << (a | c) << endl;
	// ~ ビット否定 
	// ^ 排他的論理和 a ^= b 代入
	// << 左シフト a <<= b;
	// >> 右シフト a >>= b;
	
	//代替演算子　and and_eq bitand or bitor or_eq  

	//std::bitset ビットを見やすく
	cout << bitset<8>(a) << " AND " << bitset<8>(b) << " = " << bitset<8>(a & b) << endl;
	cout << bitset<8>(a) << " OR " << bitset<8>(c) << " = " << bitset<8>(a | c) << endl;

	//ビットシフト演算子　>> << 
	//a 番目のフラグが立っている状態は (1<<a) と表せます。
	for (int i = 0; i < 8; i++) {
		if (a & (1 << i)) { //if (bit & BIT_FLAG_3) {
			//a に i 番目のフラグが立っているかどうか
		}
		if (!(a & (1 << i))) { //if (!(bit & BIT_FLAG_0)) {
			//ビット bit に i 番目のフラグが消えているかどうか	
		}
		//i 番目のフラグを立てる
		//a |= (1 << i);
		//i 番目のフラグを消す
		//a &= ~(1 << i);
		//i 番目のフラグを立てたもの
		//cout << i << " 番目のフラグを立てたもの:" << (a | (1 << i)) << "\n";
		// i 番目のフラグを消したもの
		//cout << i << " 番目のフラグを消したもの :"<< (a & ~(1 << i)) << "\n";

		//何個のフラグが立っているか
		// GCC のビルトイン関数ですので、GCC で用いる必要があります。
		//cout << __builtin_popcount(a) << a;
	}

	// {1, 3, 5} にフラグの立ったビット
	unsigned int mask = BIT_FLAG_1 | BIT_FLAG_3 | BIT_FLAG_5;
	cout << "{1, 3, 5} = " << bitset<8>(mask) << endl;

	//mask で表された部分のフラグをまとめて立てる
	//a |= mask;
	//mask で表された部分のフラグをまとめて消す
	//a &= ~mask;
	//mask で表された部分の情報のみを取り出したもの
	cout << (a & mask)<< "\n";
	//mask で表された部分のどれかのフラグが立っているかどうか
	if (a & mask);
	//mask で表された部分のすべてのフラグが立っているかどうか
	if ((a & mask) == mask)
	cout << bitset<8>(a) << "\n";

	int n = 5; 

	//組み合わせ2進数の0 01 11を利用　1が立っているところの数字で列挙できる
	//1 << 5 == 32
	// {0, 1, ..., n-1} の部分集合の全探索
	for (int bit = 0; bit < (1 << n); ++bit)
	{
		/* bit で表される集合の処理を書く */
		/* きちんとできていることを確認してみる */

		// bit の表す集合を求める
		vector<int> S;
		for (int i = 0; i < n; ++i) {
			if (bit & (1 << i)) { // i が bit に入るかどうか
				S.push_back(i);
			}
		}

		// bit の表す集合の出力
		cout << bit << ": {";
		for (int i = 0; i < (int)S.size(); ++i) {
			cout << S[i] << " ";
		}
		cout << "}" << endl;
	}
}