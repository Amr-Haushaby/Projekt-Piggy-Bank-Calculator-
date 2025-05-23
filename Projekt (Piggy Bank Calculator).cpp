#include <iostream>
using namespace std;

/* Projektname: Sparschwein-Rechner

- Der Benutzer gibt ein, wie viele Münzen im Sparschwein sind (Pennies, Nickels, Dimes, Quarters, Dollars).
- Das Programm berechnet den Gesamtwert in Pennies.
- Anschließend zeigt es den Gesamtbetrag in Dollar (durch 100 geteilt).

*/

struct stPiggyBankContent
{
    int Pennies,Nickels ,Dimes ,Quarters ,Dollars;
};

stPiggyBankContent ReadPiggyBankContent()

{
    stPiggyBankContent PiggyBankContent;

    cout << "Please enter a Total Pennies?" << endl;
    cin >> PiggyBankContent.Pennies;

    cout << "Please enter a Total Nickels?" << endl;
    cin >> PiggyBankContent.Nickels;

    cout << "Please enter a Total Dimes?" << endl;
    cin >> PiggyBankContent.Dimes;

    cout << "Please enter a Total Quarters?" << endl;
    cin >> PiggyBankContent.Quarters;

    cout << "Please enter a Total Dollars?" << endl;
    cin >> PiggyBankContent.Dollars;

    return PiggyBankContent;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)

{
    int TotalPennies = 0;

    TotalPennies = PiggyBankContent.Pennies * 1
        + PiggyBankContent.Nickels * 5
        + PiggyBankContent.Dimes * 10
        + PiggyBankContent.Quarters * 25
        + PiggyBankContent.Dollars * 100;

    return TotalPennies;
}

int main()
{
    int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());

    cout << endl << "Total Pennies = " << TotalPennies << endl;
    cout << endl << "Total Dollars = " << (float)TotalPennies / 100 << endl;
    return 0;
}