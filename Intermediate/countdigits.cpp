#include<iostream>
using namespace std;

int main(){
    int n, count = 0;

    cout << "Enter numbers: ";
    cin >> n;

    while(n != 0){
        n = n / 10;
        count++;
    }

    cout << "Number of digit: " << count;
    return 0;
}
