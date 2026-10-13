#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cin >> x;
    string s = "";

    if (x >= 1000) { s += string(x / 1000, 'M'); x %= 1000; }
    if (x >= 900)  { s += "CM"; x -= 900; }
    if (x >= 500)  { s += "D";  x -= 500; }
    if (x >= 400)  { s += "CD"; x -= 400; }
    if (x >= 100)  { s += string(x / 100, 'C'); x %= 100; }
    if (x >= 90)   { s += "XC"; x -= 90; }
    if (x >= 50)   { s += "L";  x -= 50; }
    if (x >= 40)   { s += "XL"; x -= 40; }
    if (x >= 10)   { s += string(x / 10, 'X'); x %= 10; }
    if (x >= 9)    { s += "IX"; x -= 9; }
    if (x >= 5)    { s += "V";  x -= 5; }
    if (x >= 4)    { s += "IV"; x -= 4; }
    if (x >= 1)    { s += string(x, 'I'); }

    cout << s << endl;
    return 0;
}