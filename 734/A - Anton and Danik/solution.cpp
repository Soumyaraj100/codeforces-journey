#include <iostream>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    int a = 0, d = 0;
    for (char x : s) {
        if (x == 'A')
            a++;
        else
            d++;
    }
    if (a > d)
        cout << "Anton";
    else if (d > a)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}