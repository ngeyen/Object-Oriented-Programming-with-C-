#include<iostream>
using namespace std;
class DomesticUsers
{
   float units;
   float charges;
   float amount;
   char name[10];

  public:
    void getInfo();
    float calculateBill();//returns the amount which will be printed on the bill
    void displayInfo();
};
void DomesticUsers:: getInfo()
{
    cout<<"Domestic users Name: ";
    cin>>name;
    cout<<"Number of Units Consumed: ";
    cin>>units;
    cout<<endl<<endl;
}
float DomesticUsers ::calculateBill()
{
    float newAmount;
    if (units <= 100)
    {
        amount = units * 60;
    }
    else if (units >= 200 || units < 300)
    {
        amount = units * 80;
    }
    else
    {
        amount = units * 90;
    }

    if (amount < 50)
    {
        newAmount = 50;
    }
    else if (amount >= 50 || amount <300)
    {
      newAmount = amount;
    }
    else
    {
        newAmount = amount * 15/100;
    }
    return newAmount;
}
void DomesticUsers :: displayInfo()
{
    float bill;
    bill = calculateBill();
    cout<<"Name "<<name<<endl;
    cout<<"Units: "<<units<<endl;
    cout<<"Bill: "<<bill<<endl<<endl;
}
main()
{
    DomesticUsers employee1;
    employee1.getInfo();
    employee1.displayInfo();
}
