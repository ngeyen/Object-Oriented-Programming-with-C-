#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class staff
{
    protected:

        int profession;
        string name[2];
        int code[2];

    public:
        void getData()
        {
           for(int i = 0; i< 2; i++)
            {
                cout<<"Staff Name: ";
                getline(cin, name[i]);
                cout<<"Staff Code: ";
                cin>>code[i];
            }
            cout<<endl<<endl;
        }
        void displayInfo()
        {
            for(int i = 0; i< 2; i++)
            {
                cout<<"Staff code: "<<code[i]<<"\t"<<"Staff Name: "<<name[i]<<endl;
            }
        }

};
class Teacher : public staff
{
    string publication[2];
    string subject[2];

     public:
        void getTeacherData()
        {
          for(int i = 0; i< 2; i++)
            {
                cout<<"Publication: ";
                getline(cin, publication[i]);
                cout<<"\nSubject: ";
                getline(cin, subject[i]);
            }
            cout<<endl<<endl;

        }
        void displayTeacherInfo()
        {
            for(int i = 0; i< 2; i++)
            {
                cout<<"Subject: "<<subject[i]<<"\t"<<"Publication: "<<publication[i]<<endl;
            }
        }
};
class officer : public staff
{
    char grade[2];

     public:
        void getOfficerData()
        {
        for(int i = 0; i< 2; i++)
            {
                cout<<"Grade: ";
                cin>>grade[i];
            }
            cout<<endl<<endl;
        }
        void displayOfficerInfo()
        {
            for(int i = 0; i< 2; i++)
            {
                cout<<"Grade: "<<grade[i]<<endl;
            }
        }
};
class typist : public staff
{
    int speed[2];

     public:
        void getTypistData()
        {
         for(int i = 0; i < 2; i++)
            {
                cout<<"Speed: ";
                cin>>speed[i];
            }
            cout<<endl<<endl;
        }
        void displayTypistInfo()
        {
            for(int i = 0; i < 2; i++)
            {
                cout<<"Speed: "<<speed[i]<<endl;
            }
        }
};
class regular : public typist
{

};
class casual : public typist
{
    int pay[2];

     public:
        void getCtypistData()
        {
         for(int i = 0; i < 2; i++)
            {
                cout<<"Daily Pay: ";
                cin>>pay[i];
            }
            cout<<endl<<endl;
        }
        void displayCtypistInfo()
        {
            for(int i = 0; i < 2; i++)
            {
                cout<<"Daily Pay: "<<pay[i]<<endl;
            }
        }
};

main()
{
    int profession;

    cout<<"1) Teacher \n2) Officer\n3) Typist\n\n";
    cout<<"Select Profession: ";
    cin>>profession;
    if (profession == 1)
    {
        Teacher employee1;
        employee1.getData();
        employee1.getTeacherData();
        cout<<endl<<endl;
        employee1.displayInfo();
        employee1.displayTeacherInfo();
    }
    else if (profession == 2)
    {
        officer employee1;
        employee1.getData();
        employee1.getOfficerData();
        cout<<endl<<endl;
        employee1.displayInfo();
        employee1.displayOfficerInfo();
    }
    else
    {
        int i;
        cout<<"Type of Typist\n";
        cout<<"1) Regular\n2) Casual";
        cin>>i;
        if(i==1)
        {
            regular employee1;
            employee1.getData();
            employee1.getTypistData();
            cout<<endl<<endl;
            employee1.displayInfo();
            employee1.displayTypistInfo();
        }
        else
        {
            casual employee1;
            employee1.getData();
            employee1.getCtypistData();
            cout<<endl<<endl;
            employee1.displayInfo();
            employee1.displayCtypistInfo();
        }

    }
}
