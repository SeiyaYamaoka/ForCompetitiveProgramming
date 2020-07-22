#include <iostream>
#include <vector>

using namespace std;
const int mod = 1000000007;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    while(a.size() != 1){
        for(int i = 0;i<n-1;i++){
            a[i] += a[i + 1];
            a[i] %= mod;
        }
        a.pop_back();
    }

    cout << a[0] << endl;
	return 0;
}
