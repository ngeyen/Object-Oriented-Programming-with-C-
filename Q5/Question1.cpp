#include<iostream>
using namespace std;
class Student{
    public:
        int id_Number;
        char name[10];
        char gender[6];

};
class Test: public Student{

        public:
            void getInfo(){
                cout<<"Student ID: ";
                cin>>id_Number;
                cout<<"Student Name: ";
                cin>>name;
                cout<<"Student Gender: ";
                cin>>gender;
                cout<<"\n\n";
            }
            void displayInfo(){
                cout<<"Student Id number: " << id_Number <<"\n";
                cout<<"Student Name: " << name <<"\n";
                cout<<"Student Gender: " << gender <<"\n";
                cout<<"\n\n";
            }

};

main()
{
   Test Management;
   cout<<"********** Management ****************\n";
        Management.getInfo();
        Management.displayInfo();

    Test Accounting;
    cout<<"********** Accounting ****************\n";
        Accounting.getInfo();
        Accounting.displayInfo();

        Test cpp;
    cout<<"********** C++ ****************\n";
        cpp.getInfo();
        cpp.displayInfo();

        Test geography;
    cout<<"********** Geography ****************\n";
        geography.getInfo();
        geography.displayInfo();
}
