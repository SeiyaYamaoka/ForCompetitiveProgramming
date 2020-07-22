#include <iostream>
#include <cmath>

using namespace std;
const long double PI = 3.1415926535897932384626433827950;
const double rad = PI / 180;
#define debug(x) cerr << #x << ": " << x << "\n"

int main() {
	ios::sync_with_stdio(false);cin.tie(0);
    int x;
    cin >> x;
    // while(x <= 179){
    //     double xx = round(360.0 / (double)x);

    //     cout << xx << ":"<< 360 / x << ":" << (360 + (x-1)) / x << endl;
    //     x++;
    // }
    double cx = cos(x * rad);
    double sx = sin(x * rad);
    double sy = sin(x * rad);
    double cy = cos(x * rad);
    debug(cx);
    debug(sx);
    debug(cy);
    debug(sy);

    double xx = 0,yy = 0;
    
    // for(int i = 0;i<100;i++){
    //     double tx = xx * cx - yy * cy;
    //     double ty = xx * sx - yy * sy;
    //     xx = tx;
    //     yy = ty;
    //     cout << xx << ":" << yy << "\n";
    // }

    
	return 0;
}
