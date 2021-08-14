#include <iostream>
using namespace std;
class Savings
{
private:
    long dollars;
    long cents;

public:
    Savings()
    {
        dollars = 0;
        cents = 0;
    }
    Savings(int startDollars, int startCents)
    {
        dollars = startDollars;
        cents = startCents;
    }

    void depAmount(int depositDollars, int depositCents)
    {
        dollars += depositDollars;
        cents += depositCents;
 
        int process = cents / 100;
        dollars += process;
        cents = cents - process * 100;
    }

    void withdrawalAmount(int withdrawalDollars, int withdrawalCents)
    {
        int process;
        if (withdrawalCents > 100)
        {
            process = withdrawalCents % 100;
            withdrawalDollars += process;
            withdrawalCents -= (withdrawalCents / 100);
        }
        if (withdrawalDollars > dollars)
        {
            cout << "There are insufficient funds in your account to complete this transaction.\n";
            return;
        }

        dollars -= withdrawalDollars;
        cents -= withdrawalCents;

        if (cents < 0)
        {
            dollars--;
            cents += 100;
        }
    }

    void accBal()
    {
        cout << "Dollars = " << dollars << " Cents = " << cents << endl;

    }
};