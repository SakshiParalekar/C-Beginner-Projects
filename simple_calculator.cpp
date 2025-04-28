#include<iostream>
using namespace std;

int main()
{
    char operation;
    float num1, num2;
    
    cout<< "Simple Calculator" << endl;
    
    cout<< "Enter an operation(+, -, *, /):";
    cin>>operation;
    
    cout<< "Enter First Number:";
    cin>>num1;
    
    cout<< "Enter Second Number:";
    cin>>num2;
    
    switch(operation)
    {
        case '+':
            cout<< "Result=" << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout<< "Result=" << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout<< "Result=" << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0)
                cout<< "Result=" << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else{
                cout<< "Error! Division By Zero" << endl;
            }
                break;
        default:
                cout<< "Invalid Operation"<< endl;
    }
    return 0;
}