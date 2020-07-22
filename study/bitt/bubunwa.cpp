#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

int main(){
    //すべての場合の和を計算
	vector<int> list = { 4, 10, 1 };
	int ans = 0;
	for (int bits = 1; bits < (1 << (int)list.size()); bits++) {  // 2^3 の全ての場合を探索する

		vector<int> S;
		for (int i = 0; i <  (int)list.size(); ++i) {
			if (bits & (1 << i)) { // i が bit に入るかどうか
				S.push_back(list[i]);
			}
		}

		cout << bits << ": {";
		for (int i = 0; i < (int)S.size(); ++i) {
			cout << S[i] << ",";
		}
		cout << "}" << endl;

		int sum = 0;
		for (int i = 0; i < (int)list.size(); i++) {
			int mask = 1 << i;
			if (bits & mask) {  // i番目のbitが立っていれば加算する
				sum += list[i];
			}
		}
		ans += sum;
	}
	cout << ans << endl;
}