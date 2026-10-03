#include <iostream>
using namespace std;

int main() {
    int units;
    int total_bill;
    
    cout << "Enter the total units consumed: ";
    cin >> units;

    if (units <= 100) {
        total_bill = units * 5;}
    
    else {
        total_bill = (100 * 5) + ((units - 100) * 7);
    }

    cout << "Total Electricity Bill: ₹" << total_bill << endl;

    return 0;
}
