#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int id,credit;
    float cgpa;
    Student()
    {
        //Empty Constructor
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setId(int id)
    {
        this->id=id;
    }
    void setCredit(int credit)
    {
        this->credit=credit;
    }
    void setCgpa(float cgpa)
    {
        this->cgpa=cgpa;
    }
};

int main()
{
    string name;
    int n, id, credit;
    float cgpa;
    char x;
    cout<<"Enter How Many Students: "<<endl;
    cin>>n;
    Student student[n];

    for(int i=0; i<n; i++)
    {
       cout<<"Enter Information of Student Number: "<<i+1<<" (ID, Name, Cgpa, Credit)"<<endl;
       cin>>id>>name>>cgpa>>credit;
       student[i].setId(id);
       student[i].setName(name);
       student[i].setCgpa(cgpa);
       student[i].setCredit(credit);
    }
    cout<<endl;

    cout<<"-------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------"<<endl;

    cout<<"a. Bubble sort to CGPA wise\nb. Selection sort credit wise\nc. Search based on CGPA"<<endl;
    cin>>x;
    cout<<endl;

    Student temp;

    switch(x)
    {
    case 'a':
        {
            int l=0;
            int k=0;
            cout<<endl<<"After Bubble Sorting: "<<endl<<endl;
            for (int i=0; i<(n-1); i++)
            {
                for(int j=0; j<(n-i-1); j++)
                {

                    l++;
                    if(student[j].cgpa>student[j+1].cgpa)
                    {
                        temp = student[j];
                        student[j]=student[j+1];
                        student[j+1]=temp;
                        k++;

                    }
                }
            }
            for(int i=0; i<n;i++)
            {
                cout<<"Student's Id              : "<<student[i].id<<endl;
                cout<<"Student's Name            : "<<student[i].name<<endl;
                cout<<"Student's Cgpa            : "<<student[i].cgpa<<endl;
                cout<<"Student's Credit Completed: "<<student[i].credit<<endl;
                cout<<endl;
            }
            cout<<"Number of Comparisons: "<<l<<endl;
            cout<<"Number of Excxhange  : "<<k<<endl;
            break;
        }
    case 'b':
        {
            int l=0;
            int k=0;
            int min_index =0;
            for(int i=0; i<n; i++)
            {
                min_index = i;
                for(int j=i+1; j<n; j++)
                {
                        if(student[min_index].credit > student[j].credit)
                        {
                            min_index = j;
                        }
                }
                temp = student[min_index];
                student[min_index] = student[i];
                student[i] = temp;
            }
            cout<<endl<<"After Selection Sorting: "<<endl<<endl;
            for(int i=0; i<n;i++)
            {
                cout<<"Student's Id              : "<<student[i].id<<endl;
                cout<<"Student's Name            : "<<student[i].name<<endl;
                cout<<"Student's Cgpa            : "<<student[i].cgpa<<endl;
                cout<<"Student's Credit Completed: "<<student[i].credit<<endl;
                cout<<endl;
            }
            cout<<"Number of Comparisons: "<<l<<endl;
            cout<<"Number of Excxhange  : "<<k<<endl;
            break;
        }
    case 'c':
        {
            float p;
            int m=0;
            cout<<"Enter Cgpa: ";
            cin>>p;
            for(int i=0; i<n; i++)
            {
                if(student[i].cgpa==p)
                {
                    cout<<"Student's Id              : "<<student[i].id;
                    cout<<"Student's Name            : "<<student[i].name;
                    cout<<"Student's Cgpa            : "<<student[i].cgpa;
                    cout<<"Student's Credit Completed: "<<student[i].credit;
                    cout<<endl;
                    m++;
                }
            }
            if (m==0)
                {
                    cout<<"No Students with Cgpa "<<p<<endl;
                }
            break;
        }
    default:
        {
            cout<<"Invalid Input!"<<endl;
        }
        }

    return 0;
}
