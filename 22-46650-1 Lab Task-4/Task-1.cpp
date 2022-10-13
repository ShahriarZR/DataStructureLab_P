#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int id;
    float cgpa;
    Student()
    {

    }

    Student(string name, int id, float cgpa)
    {
        this->name=name;
        this->id=id;
        this->cgpa=cgpa;
    }
};

int main()
{
    /*int arr[6] = {1,2,3,4,5,6};
    int n;
    cout<<"Enter how many elements in the array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        cout<<endl;
    }*/

    Student s1("Antor", 224556, 3.99);
    Student s2("Abtor", 224555, 3.98);
    Student s3("Actor", 224554, 3.97);
    Student s4("Aptor", 224553, 3.96);
    Student s5("Astor", 224552, 3.95);
    Student s6("Altor", 224551, 3.94);

    Student student[6]={s1,s2,s3,s4,s5,s6};

    int min_index =0;
    Student temp;

    for(int i=0; i<6;i++){
        cout<<student[i].name<<" ";
        cout<<student[i].id<<" ";
        cout<<student[i].cgpa<<" ";
        cout<<endl;
    }
    cout<<"---------"<<endl;

    for(int i=0; i<6; i++){
        min_index = i;

        for(int j=i+1; j<6; j++){
            if(student[min_index].cgpa > student[j].cgpa){
                min_index = j;
            }
        }

        temp = student[min_index];
        student[min_index] = student[i];
        student[i] = temp;
    }

    for(int i=0; i<6;i++){
        cout<<student[i].name<<" ";
        cout<<student[i].id<<" ";
        cout<<student[i].cgpa<<" ";
        cout<<endl;
    }

    cout<<endl;

    return 0;
}
