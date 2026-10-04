#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter calculation (e.g., 5 + 3): ";
    cin >> a >> op >> b;

    switch (op) {
        case '+': cout << "= " << a + b; break;
        case '-': cout << "= " << a - b; break;
        case '*': cout << "= " << a * b; break;
        case '/': 
            if (b == 0) cout << "Error: Division by zero!";
            else cout << "= " << a / b; 
            break;
        default: cout << "Invalid operator!";
    }

    return 0;
}
