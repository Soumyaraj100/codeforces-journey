#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int people = 0;
    int maximum = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        people -= a;
        people += b;
        if (people > maximum)
            maximum = people;
    }
    cout << maximum;
    return 0;
}