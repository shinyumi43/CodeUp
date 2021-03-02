#include <iostream>
using namespace std;
int main() {
    char data[2001] = "";
    cin.getline(data, 2000, '\n');
    cout << data;
}