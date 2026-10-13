#include <iostream>

using namespace std;

int main(){

    long long a,b;
    char op;
    cin >> a >> b >> op;

    if (op == '+'){
        cout << a + b << endl;
    }
    if (op == '-'){
        cout << a - b << endl;
    }
    if (op == '*'){
        cout << a * b << endl;
    }
    if (op == '/'){
        cout << a / b << endl;
    }
    return 0;
}