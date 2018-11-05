#include<iostream>
using namespace std;
class employees
{
    char name[10];
    float basicPay = 200000;
    float annualPay = basicPay * 12;
    int numberOfLeaves;
    int extraDays;
    float grossSalary;
    float bonus;

  public:
    void getInfo();
    void getGrossSalary();
    void displayInfo();
};
void employees:: getInfo()
{
    cout<<"Employee Name: ";
    cin>>name;
    cout<<"Number of days on leave: ";
    cin>>numberOfLeaves;
    cout<<endl<<endl;
}
void employees:: getGrossSalary()
{
    if (numberOfLeaves == 0)
    {
        bonus = basicPay * 50/100;
        grossSalary = float(annualPay + bonus);
        cout<<"Gross Salary = "<<grossSalary;
    }
    else if (numberOfLeaves > 30)
    {
        extraDays = numberOfLeaves - 30;
        float dailyPay = float(basicPay/30);
        bonus = float(dailyPay * extraDays);

        cout<<"Your Charges: "<<bonus<<endl;
        grossSalary = float(annualPay - bonus);
        cout<<"Gross Salary = "<<grossSalary;
    }
    else
    {
        grossSalary = annualPay;
        cout<<"Gross Salary = "<<grossSalary;
    }

    cout<<"\n\n\n";
}
void employees :: displayInfo()
{
    cout<<"Hello! "<<name<<endl;
}
main()
{
    employees employee1;
    employee1.getInfo();
    employee1.displayInfo();
    employee1.getGrossSalary();
}
