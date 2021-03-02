#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    string str;
    string y, m, d;
    int i_y, i_m, i_d;
    int i, j;
    cin >> str;
    for (i = 0; i < str.length(); i++) {
        if (str[i] == '.') {
            y = str.substr(0, i);
            break;
        }
    }
    for (j = i + 1; j < str.length(); j++) {
        if (str[j] == '.') {
            m = str.substr(i + 1, j);
            break;
        }
    }
    d = str.substr(j + 1);
    i_y = atoi(y.c_str());
    i_m = atoi(m.c_str());
    i_d = atoi(d.c_str());
    cout << setw(4) << setfill('0') << i_y << "." << setw(2) << setfill('0')
        << i_m << "." << setw(2) << setfill('0') << i_d << endl;
    return 0;
}
