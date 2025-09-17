// SWITCH CASE PRACTICE
// 1.CALCULATOR
#include<iostream>
using namespace std;
int main(){

    int a,b;
    char op;
    cout<<"WELCOME TO DOKA247 CALCULATOR!"<<endl;
    cout<<"HERE YOU CAN DO ADDITION,SUBTRACTION,MULTIPLICATION,DIVISION AND MODULUS."<<endl;
    cout<<"ENTER VALUE OF a : ";
    cin>>a;
    cout<<"ENTER VALUE OF b : ";
    cin>>b;

    cout<<"what operation you want to do : ";
    cin>>op;

    switch(op)
    {
    case '+':
        cout<<"the sum of a & b : "<<a+b<<endl;
        break;
    case '-':
        cout<<"the sub of a & b : "<<a-b<<endl;
        break;
    case '*':
        cout<<"the mul of a & b : "<<a*b<<endl;
        break;
    case '/':
        cout<<"the div of a & b : "<<a/b<<endl;
        break;
    case '%':
        cout<<"the mod of a & b : "<<a%b<<endl;
        break;
    default:
    cout<<"special operator!!"<<endl;
    break;

    }
    
    return 0;

}