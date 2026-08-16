#include <iostream>
using namespace std;
int main(){
    int n,b;
    cin >> n >> b;
    while (b > 0) {
        if (n % 10 == 0)
            n /= 10;
        else
            n -= 1;
        b--;
    }
    cout << n;
    return 0;
}