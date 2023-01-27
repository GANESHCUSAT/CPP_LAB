#include <iostream>
using namespace std;
class bank
{
private:
    string cust_name;
    int acc_no, amount;
    char acc_type;
    int balance;
    int static count;

public:
    void new_acc(void);
    void withdraw(void);
    void deposit(void);
    void balance_enquiry(void);
    void account_statement(void);
};
int bank::count;

void bank::new_acc()
{
    count++;
    acc_no = count;
    cout << "enter your name: ";
    cin >> cust_name;
    cout << "enter the type of the account\nenter S for savings\nenter c for cureent account\nenter: ";
    cin >> acc_type;
    cout << "enter the amount you need to deposit: ";
    cin >> balance;
    cout << "your account had been created and the account number is :" << acc_no;
}

void bank::withdraw()
{
    cout << "Enter the amount you have to withdraw\n";
    cin >> amount;
    if ((balance - amount) > 500)
    {
        balance = balance - amount;
        cout << "Rs." << amount << "is withdrawn";
        cout << "\nyour current balance=" << balance;
    }
    else
    {
        cout << "insufficient balance";
    }
}

void bank::deposit()
{
    cout << "Enter the amount you have to deposit\n";
    cin >> amount;
    balance = balance + amount;
    cout << "your current balance is:" << balance;
}

void bank::balance_enquiry()
{
    cout << "current balance is" << balance;
}

void bank::account_statement()
{
    cout << "********\n";
    cout << "Your Account Statement is ";
    cout << "\nAccount Holder  : " << cust_name;
    cout << "\nAccount No      : " << acc_no;
    cout << "\nAccount Type    : " << acc_type;
    cout << "\nAccount Balance : Rs." << balance;
    cout << "\n*********\n";
}
int main()
{
    int option, amount, acc_no, count = 0;
    string choice;
    bank *customer = new bank[100];

    do
    {
        cout << "*****MAIN MENU*****\n";
        cout << "1.enter 1 for New Account\n2.enter 2 to Withdraw\n3.enter 3 to Deposit\n4.enter 4 to check balance\n5.enter 5 for Account Statement\nenter: ";
        cin >> option;

        if (option == 1)
        {

            customer[count + 1].new_acc();
        }
        else if (option == 2)
        {
            cout << "kindly please enter your account number: ";
            cin >> acc_no;
            for (int i = acc_no; i == acc_no; i++)
            {
                customer[i].withdraw();
            }
        }
        else if (option == 3)
        {
            cout << "kindly please enter your account number: ";
            cin >> acc_no;
            for (int i = acc_no; i == acc_no; i++)
            {
                customer[i].deposit();
            }
        }
        else if (option == 4)
        {
            cout << "kindly please enter your account number: ";
            cin >> acc_no;
            for (int i = acc_no; i == acc_no; i++)
            {
                customer[i].balance_enquiry();
            }
        }
        else if (option == 5)
        {
            cout << "kindly please enter your account number: ";
            cin >> acc_no;
            for (int i = acc_no; i == acc_no; i++)
            {
                customer[i].account_statement();
            }
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