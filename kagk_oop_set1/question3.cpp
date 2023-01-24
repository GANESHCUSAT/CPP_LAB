#include<iostream>
using namespace std;
class bank
{
    private:
     string cust_name;
     int acc_no,balance;
     char acc_type;
    public:
     void new_acc(void);
     void withdraw(void);
     void deposit(void);
     void balance_enquiry(void);
     void account_statement(void);
};

void bank::new_acc(void)
{
    cout<<"ente ryour name: ";
    

}