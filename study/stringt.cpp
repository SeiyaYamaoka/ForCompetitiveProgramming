#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void sstreamtest();
vector<string> split(string str, string separator);

int main(){
    string s1 = "abcdefg";
	string s2 = "";
	string s3 = "TEST";

	//cin >> s1;
	//基本的な表示
	cout << "s1:" << s1 << "\ns2:" << s2 << "\ns3:" << s3 << "\n";

	//n番目の文字を抽出
	char c = s1[0];
	cout << "s1[0]" << c << "\n";

	//文字列のサイズ　sizeはコンテナインターフェースのために用意されたものらしい　どちらを使ってもよい
	cout << "s1.size(): " << s1.size() << "\n";
	cout << "s1.length(): " << s1.length() << "\n";

	//文字が空かどうか 空だったら 1 が返る
	cout << "s1.empty: " << s1.empty() << "\n";
	cout << "s2.empty: " << s2.empty() << "\n";

	//文字列の連結
	string s4 = s1 + s3;
	cout << "s1 + s3 = " << s4 << "\n";

	//n番目以降を取り出す
	cout << "s1.substr(3) :" << s1.substr(3) << "\n";
	//n番目以降　m文字　取り出す
	cout << "s1.substr(1,3) :" << s1.substr(1, 3) << "\n";

	//split 区切りわけ
	string s5 = "ssei1,asjf0,2223sdf";
	vector<string> arr = split(s5, ",");
	for(auto &p : arr)cout << p << " : ";
	cout << "\n";

	//逆文字
	string s6 = "reverse";
	//reverse(s6.begin(), s6.end());
	cout << s6 << endl;
    return 0;
}

void sstreamtest(){
	//stringstream 文字から数値を取り出す、空白で区切る、0埋めなどで使用
	//std:省略
	stringstream ss;

	string s1 = "abcdefghijklmnopqrstu";
	int num = 52020;

	ss << s1 << num;

	cout << ss.str() << "\n";


}

vector<string> split(string str, string separator){
	if (separator == "") return { str };
	vector<string> result;

	string tstr = str + separator;

	long l = tstr.length(), sl = separator.length();

	string::size_type pos = 0, prev = 0;

	for (; pos < l && (pos = tstr.find(separator, pos)) != string::npos; prev = (pos += sl)) {

		result.emplace_back(tstr, prev, pos - prev);

	}

	return result;
}