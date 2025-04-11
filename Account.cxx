#include "Account.hxx"

double Account::deposit(double amount)
{
    myBalance += amount;
    return (getBalance());
}

void foo1( int a, int b );           // Violation
void foo1( int a, int b ) {}

double Account::debit(double amount)
{
    myBalance -= amount;
    return (getBalance());
}
