#include<iostream>
using namespace std;

int main()
{
    //SIMPLE CALCULATOR
    long long num1;
    long long num2;
    //Ask user to enter two numbers
    cout<<"Enter First Number: "<<endl;
    cin>>num1;
    cout<<"Enter Second Number: "<<endl;
    cin>>num2;
    //Ask user to enter operator
    cout<<"Enter an operator(+,-,*,/)";
    char op;
    cin>>op;

    switch(op)
    {
        case '+':
            cout<<"Sum is: "<<num1+num2<<endl;
            break;
        case '-':
            cout<<"Difference is: "<<num1-num2<<endl;
            break;
        case '*':
            cout<<"Product is: "<<num1*num2<<endl;
            break;
        case '/':
            cout<<"Divisiom is: "<<num1/num2<<endl;
            break;
        default:
            cout<<"Enter a valid operator"<<endl;
            break;

    }

    return 0;

}
