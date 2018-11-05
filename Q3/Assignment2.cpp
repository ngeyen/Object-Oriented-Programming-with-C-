#include<iostream>
using namespace std;
class Account
{
    protected:
        int accountNumber;
        char accountName[10];
        float newAmount;
        float availableAmount = 10000;

    public:
        void getAccountInfo()
        {
            cout<<"Enter Account Name: ";
            cin>>accountName;
            cout<<"Enter Account Number: ";
            cin>>accountNumber;

        }
        void deposit()
        {
            cout<<"Enter Amount : ";
            cin>>newAmount;
            availableAmount = newAmount + availableAmount;
            cout<<"\n\nTotal amount available = "<<availableAmount<<endl;
            cout<<"Transaction Complete!\n\n";

        }
        void withdraw()
        {
            cout<<"Enter amount: ";
            cin>>newAmount;
            if (availableAmount == 0)
            {
                cout<<"Insufficient funds";
            }
            else
            {
                availableAmount = availableAmount - newAmount;
                cout<<"Your remaining Amount is: "<<availableAmount<<endl;
                cout<<" Transaction Complete! :)";
            }

            }
            void getBalance()
            {
                cout<<"Your balance is : ";
                cout<<availableAmount;
            }

};
class SavingsAccount:public Account
{


};

class CurrentAccount : public Account
{

};
class fixedDepositAccount : public Account
{

};
class ShortTerm : public fixedDepositAccount
{

};
class MediumTerm : public fixedDepositAccount
{

};
class LongTerm : public fixedDepositAccount
{

};




main()
{
    int transaction;
    int i;
        cout<<"******** Make a Deposit *******\n\n";


               cout<<"\n1) Current Account \n2) Savings Account \n3) Fixed Deposit Account\n\n";
               cout<<"Enter number to select Account: ";
               cin>>i;
               if (i == 1)
               {
                    cout<<"\n***** Current Account ******\n";
                    CurrentAccount user;
                    user.getAccountInfo();
                    user.deposit();
               }
               else if(i == 2)
               {

                    cout<<"\n***** Savings Account ******\n";
                    SavingsAccount user;
                    user.getAccountInfo();
                    user.deposit();
               }
               else
               {
                    cout<<"\n***** Fixed Deposit Account ******\n";
                    cout<<"\n1) Short Term \n2) Medium Term \n3) Long term\n\n";
                    cout<<"Enter number to select Account: ";
                    cin>>transaction;
               if (transaction == 1)
               {
                    cout<<"\n***** Short Term Account ******\n";
                    ShortTerm user;
                    user.getAccountInfo();
                    user.deposit();
               }
               else if(i == 2)
               {
                    cout<<"\n***** Medium Term Account ******\n";
                    MediumTerm user;
                    user.getAccountInfo();
                    user.deposit();
               }
               else
               {
                    cout<<"\n***** Long Term Account ******\n";
                    LongTerm user;
                    user.getAccountInfo();
                    user.deposit();
               }
               }


}
