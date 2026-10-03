#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks :";
    cin>>marks;

    if(marks<0 || marks>100){
        cout<<"Invalid marks! Please enter a value between 0 and 100";
    }
   else if(marks>=40){
        cout<<"passed"<<endl;}
       
    else if(marks<40){                           cout<<"failed"<<endl;}

     if (marks>=90){
        cout<<"Grade :A+";}

    else if(marks>=80){
        cout<<"Grade :A";}

    else if(marks>=70){
        cout<<"Grade :B+";}

    else if(marks>=60){
        cout<<"Grade :B";}

    else if(marks>=50){
        cout<<"Grade :C+";}

    else if(marks>=40){
        cout<<"Grade :C";}

    else{
        cout<<"Grade :F";}
    
    return 0;
}
