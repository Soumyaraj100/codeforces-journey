#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string prev, curr;
    cin >> prev;
    int ans = 1;
    for(int i = 1; i < n; i++) {
        cin >> curr;
        if(curr != prev)
            ans++;
        prev = curr;
    }
    cout << ans;
    return 0;
}