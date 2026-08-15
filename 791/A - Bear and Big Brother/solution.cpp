#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b;
    c = 0;
    while(a <= b){
        c += 1;
        a *= 3;
        b *= 2;
    }
    cout << c;
    return 0;
}