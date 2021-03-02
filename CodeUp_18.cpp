#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    string fro, bac;
    int i;
    cin >> str;
    for (i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            fro = str.substr(0, i);
            break;
        }
    }
    bac = str.substr(i + 1);
    cout << fro << bac << endl;
    return 0;
}