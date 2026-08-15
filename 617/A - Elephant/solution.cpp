#include <iostream>
using namespace std;
int main(){
    int a, x;
    cin >> a;
    x = a / 5;
    if(a % 5 != 0)
        x += 1;
    cout << x;
    return 0;
}