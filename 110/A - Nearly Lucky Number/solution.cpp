#include <iostream>
using namespace std;
int main() {
    string n;
    cin >> n;
    int count = 0;
    for (char x : n) {
        if (x == '4' || x == '7')
            count++;
    }
    if (count == 4 || count == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}