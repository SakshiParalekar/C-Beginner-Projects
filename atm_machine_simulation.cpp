#include <iostream>
using namespace std;

int main()
{
    float balance = 10000, deposit, withdraw;
    int choice;
    
    do {
        cout<< "ATM Machine" << endl;
        cout<< "1.Check Balance\n2.Deposit Money\n3.Withdraw Money\n4.Exit"<< endl;
        
        cout<< "Enter Your Choice:";
        cin >> choice;
        
        switch(choice)
        {
            case 1:
                cout<< "Your balance is:" << balance << endl;
                break;
            case 2:
                cout<< "Enter amount to deposit:";
                cin>> deposit;
                balance += deposit;
                cout<< "Deposit Successful! Your new balance is:"<< balance << endl;
                break;
            case 3:
                cout<< "Enter amount to withdraw:";
                cin>> withdraw;
                
                if(withdraw > balance) {
                    cout<< "Insufficient balance!" << endl;
                }
                else {
                    balance -= withdraw;
                    cout<< "Withdrawal Successful! Your new balance is:" << balance << endl;
                }
                break;
            case 4:
                cout<< "THANK YOU FOR USING ATM!"<< endl;
                break;
            default:
                cout<< "Invalid Choice! Please try again." << endl;
                
        }
    } while(choice != 4);
    return 0;
}