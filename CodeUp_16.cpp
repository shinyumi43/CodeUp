#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    string h, m;
    int i_h, i_m;
    int i;
    cin >> str;
    for (i = 0; i < str.length(); i++) {
        if (str[i] == ':') {
            h = str.substr(0, i);
            break;
        }
    }
    m = str.substr(i + 1);
    i_h = atoi(h.c_str());
    i_m = atoi(m.c_str());
    cout << i_h << ":" << i_m << endl;
    return 0;
}
