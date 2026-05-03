#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cout << "=== Simple Calculator ===\n";
    cout << "Enter first number: "; cin >> a;
    cout << "Operator (+ - * /): "; cin >> op;
    cout << "Enter second number: "; cin >> b;
    
    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': if(b!=0) cout << a / b; break;
    }
    cout << endl;
    return 0;
}
