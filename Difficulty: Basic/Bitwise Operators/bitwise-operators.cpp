#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cin >> a >> b >> c;
    int d=a^a;
    int e=c^b;
    int f=a&b;
    int g=c|(0);
    e=~e;
    cout <<d <<" " <<e <<" " <<f <<" " <<g;
    // perform bitwise operations here

    return 0;
}