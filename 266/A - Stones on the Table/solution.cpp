#include <iostream>
#include <string>
using namespace std;
int main(){
    int n, x;
    string s, newstr;
    cin >> n;
    cin >> s;
    x = 0;
    newstr = "";
    newstr += s[0];
    for(int i = 1; i < n; i++){
        if(s[i] == newstr[newstr.length() - 1]){
            x += 1;
        }
        else{
            newstr += s[i];
        }
    }
    cout << x;
    return 0;
}