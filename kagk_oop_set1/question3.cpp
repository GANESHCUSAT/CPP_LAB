#include <iostream>
using namespace std;
class bank
{
private:
    string static cust_name;
    int acc_no;
    char acc_type;
    int static count;
    int static balance;

public:
    bank(int a)
    {
        acc_no = a;
    }
    bank()
    {
    }
    int new_acc(int acc_no);
    int withdraw(int acc_no, int amount, bank);
    int deposit(int acc_no, int amount, bank);
    int balance_enquiry(int acc_no);
    int account_statement(int acc_no);
};
int bank::count;
int bank::balance;

int bank::new_acc(int acc_no)
{
    int a;
    a = acc_no;
    cout << "enter your name: ";
    cin >> cust_name;
    cout << "enter the type of the account\nenter S for savings\nenter c for cureent account\nenter: ";
    cin >> acc_type;
    cout << "enter the amount you need to deposit: ";
    cin >> balance;
    cout << "your account had been created and the account number is :" << acc_no;
}

int bank::withdraw(int acc_no, int amount, bank customer)
{
    balance = customer.balance_enquiry(acc_no);
    if ((balance - amount) > 500)
    {
        balance = balance - amount;
        cout << "Rs." << amount << "is withdrawn";
        cout << "\nyour cureent balance=" << balance;
    }
    else
    {
        cout << "insufficient balance";
    }
}

int bank::deposit(int acc_no, int amount, bank customer)
{
    balance = customer.balance_enquiry(acc_no);
    balance = balance + amount;
    cout << "your current balance is:" << balance;
}

int bank::balance_enquiry(int acc_no)
{
    // cout << "current balance is" << balance;
    return balance;
}

int bank::account_statement(int acc_no)
{
    cout << "********\n";
    cout << "Your Account Statement is \n";
    cout << "Account Holder  : " << cust_name;
    cout << "Account No      : " << acc_no;
    cout << "Account Type    : " << acc_type;
    cout << "Account Balance : Rs." << balance;
    cout << "*********\n";
}
int main()
{
    int acc_number, b, option, amount, acc_no, count = 0;

    string customer, choice, an, acc;

    do
    {
        cout << "*****MAIN MENU*****\n";
        cout << "1.enter 1 for New Account\n2.enter 2 to Withdraw\n3.enter 3 to Deposit\n4.enter 4 to check balance\n5.enter 5 for Account Statement\nenter: ";
        cin >> option;

        if (option == 1)
        {

            count++;
            acc_no = count;
            an = acc_no
            acc = to_string(an);
            customer = "customer" + acc;
            bank customer;
            customer.new_acc(acc_no);
        }
        else if (option == 2)
        {
            cout << "kindly please enter your account number: ";
            cin >> acc_number;
            cout << "enter the amount to be withdrawn: ";
            cin >> amount;
            an=acc_number;
            acc = to_string(an);
            customer = "customer" + acc;
            bank customer;
            customer.withdraw(acc_number, amount, customer);
        }
        else if (option == 3)
        {
            cout << "kindly please enter your account number: ";
            cin >> acc_number;
            cout << "enter the amount to be deposit: ";
            cin >> amount;
            an=acc_number;
            acc = to_string(an);
            customer = "customer" + acc;
            bank customer;
            customer.deposit(acc_number, amount, customer);
        }
        else if (option == 4)
        {
            cout << "kindly please enter your account number: ";
            cin >> acc_number;
            an=acc_number;
            acc = to_string(an);
            customer = "customer" + acc;
            bank customer;
            b = customer.balance_enquiry(acc_number);
            cout << "your cureent balance is:" << b;
        }
        else if (option == 5)
        {
            cout << "kindly please enter your account number: ";
            cin >> acc_number;
            an = acc_number;
            acc = to_string(an);
            customer = "customer" + acc;
            bank customer;
            customer.account_statement(acc_number);
        }
        else
        {
            cout << "invalid input";
        }

        cout << "\ndo you want to continue(enter yes or no): ";
        cin >> choice;
    } while (choice == "yes");

    return 0;
}