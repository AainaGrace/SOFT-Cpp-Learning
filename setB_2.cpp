#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int num3;
    
    cout << "Enter first number: ";
    cin>>num1;

    cout << "Enter second number: ";
    cin>>num2;

    cout << "Enter third number: ";
    cin>>num3;
    
    if(num1 > num2&&num1 > num3){
        cout<<num1<<"is the larger number";}

        else if(num2 > num1&&num1 > num3){
        cout<<num2<<"is the large number";}

        else if(num3 > num1&&num3 > num2){
            cout<<num3<<"is the large number";}

        else (num1 == num2 && num2 == num3){
            cout<<num1<<num2<<num3<<"are equal";}
            
       
    return 0;
}
