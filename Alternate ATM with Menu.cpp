#include <iostream>
#include "Savings Account.h"
using namespace std;

void printMenu()
{
    cout << "**********************************************" << endl;
    cout << "***** 1 ----- Deposit Amount ------------*****" << endl;
    cout << "***** 2 ----- Withdraw Amount -----------*****" << endl;
    cout << "***** 3 ----- Print Balance -------------*****" << endl;
    cout << "***** 4 ----- Exit ----------------------*****" << endl;
    cout << "**********************************************" << endl;
}

int main()
{
    int options = 0;
    int dollars, cents;

    cout << "Welcome to ATM Banking" << endl;
    cout << "Please input the initial dollars: ";
    cin >> dollars;
    cout << "Please input the initial cents: ";
    cin >> cents;
    Savings atm(dollars, cents);
    do
    {
    printMenu();
    
    cout << "Make a choice from the Menu (1,2,3,4):  ";
    cin >> options;

   
    
    
    
    
        switch (options)
        {
        case 1:
            cout << "Please input the dollars to be deposited: ";
            cin >> dollars;
            cout << "Please input the cents to be deposited: ";
            cin >> cents;
            atm.depAmount(dollars, cents);
            atm.accBal();
            break;

        case 2:
            cout << "Please input the dollars to be withdrawn: ";
            cin >> dollars;
            cout << "Please input the cents to be withdrawn: ";
            cin >> cents;
            atm.withdrawalAmount(dollars, cents);
            atm.accBal();
            break;

        case 3:
            cout << "Balance: ";
            atm.accBal();
            break;

        case 4:
            cout << "Exiting" << endl;
            break;

        default:
            cout << "Invalid entry please try again" << endl;
            break;
        }



    }while (options != 4);
    
    return 0;
}