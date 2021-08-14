#include <iostream>
#include "Savings Account.h"
using namespace std;
int main()
{
    char options = 'y';
    int dollars, cents;

    cout << "Please input the initial dollars: ";
    cin >> dollars;
    cout << "Please input the initial cents: ";
    cin >> cents;
    Savings atm(dollars, cents);

    cout << "Would you like to make a deposit (Y or y for yes/N or n for no)? ";
    cin >> options;

    while (options == 'y' || options == 'Y')
    {
        cout << "Please input the dollars to be deposited: ";
        cin >> dollars;
        cout << "Please input the cents to be deposited: ";
        cin >> cents;
        atm.depAmount(dollars, cents);
        atm.accBal();
        cout << "Would you like to make another deposit (Y or y for yes/N or n for no)? ";
        cin >> options;
    }

    cout << "Would you like to make a withdrawal (Y or y for yes/N or n for no)? ";
    cin >> options;

    while (options == 'y' || options == 'Y')
    {
        cout << "Please input the dollars to be withdrawn: ";
        cin >> dollars;
        cout << "Please input the cents to be withdrawn: ";
        cin >> cents;
        atm.withdrawalAmount(dollars, cents);
        atm.accBal();
        cout << "Would you like to make another withdrawal (Y or y for yes/N or n for no)? ";
        cin >> options;
    }

    cout << "Balance: ";
    atm.accBal();

    system("pause");
    return 0;
}