#include <iostream>
#include <set>
using namespace std;
int main() {
    string s;
    cin >> s;
    set<char> unique(s.begin(), s.end());
    if (unique.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}