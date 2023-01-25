#include <iostream>
using namespace std;
class bank
{
private:
    string  cust_name;
    int acc_no,balance;
    char acc_type;
    int static count;
    

public:
    bank(int a)
    {
        acc_no = a;
    }
    bank()
    {
    }
    void new_acc(void );
    void withdraw(void );
    void deposit(void );
    void balance_enquiry(void );
    void account_statement(void );
};
int bank::count;


void bank::new_acc()
{
    count++;
    acc_no=count;
    cout << "enter your name: ";
    cin >> cust_name;
    cout << "enter the type of the account\nenter S for savings\nenter c for cureent account\nenter: ";
    cin >> acc_type;
    cout << "enter the amount you need to deposit: ";
    cin >> balance;
    cout << "your account had been created and the account number is :" << acc_no;
}

void bank::withdraw()
{   int amount;
    cout<<"Enter the amount you have to withdraw\n";
	cin>>amount;
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

void bank::deposit()
{   int amount;
    cout<<"Enter the amount you have to deposit\n";
	cin>>amount;
    balance = balance + amount;
    cout << "your current balance is:" << balance;
}

void bank::balance_enquiry()
{
    cout<<"Current Balance is Rs."<<balance;
}

void bank::account_statement()
{
    cout << "********\n";
    cout << "Your Account Statement is \n";
    cout << "Account Holder  : " << cust_name;
    cout << "Account No      : " << acc_no;
    cout << "Account Type    : " << acc_type;
    cout << "Account Balance : Rs." << balance;
    cout << "*********\n";}

int main() 
{
	int customer_number,choice;
	cout<<"Enter No of Customers";
	cin>>customer_number;
	bank* customer=new bank[customer_number];

	for (int i = 0; i < customer_number; ++i) {
		cout<<"Main Menu\n1.Press 1 for New Account\n2.Press 2 to Withdraw\n3.Press 3 to Deposit\n4.Press 4 to check balance\n5.Press 5 for Account Statement";
		cin>>choice;
		switch (choice) {
			case 1:
			    customer[i].new_acc();
				break;
			case 2:
				customer[i].withdraw();
				break;
			case 3:
				customer[i].deposit();
				break;
			case 4:
				customer[i].balance_enquiry();
				break;
			case 5:
				customer[i].account_statement();
				break;
			default:
				cout<<"Error! , Try Again";
				break;
		}
	}
	return 0;
}