#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int id;
    float cgpa;
    Student(){}
    Student(string name, int id, float cgpa)
    {
        this->name=name;
        this->id=id;
        this->cgpa=cgpa;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setId(int id)
    {
        this->id=id;
    }
    void setCgpa(float cgpa)
    {
        this->cgpa=cgpa;
    }
};
class Node{
public:
    Student data;
    Node *next;
};

class LinkedList{

private:
    Node *head;
    Node *tail;

public:
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
    }

    void createNewNode(Student data){
        static int i=0;
        cout<<"Enter Name of Student No. "<<++i<<endl;
        cin>>data.name;
        cout<<"Enter ID of Student No. "<<i<<endl;
        cin>>data.id;
        cout<<"Enter CGPA of Student No. "<<i<<endl;
        cin>>data.cgpa;

        Node *temp = new Node();
        temp->data = data;
        temp->next = NULL;


        if(head == NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }

    void ShowList(){
        while(head->next != NULL){
            cout<<head->data.name<< " "<<head->data.id<< " "<<head->data.cgpa<<endl;
            head = head->next;
        }
        cout<<head->data.name<< " "<<head->data.id<< " "<<head->data.cgpa<<endl;
    }
};

int main()
{
   LinkedList *myList = new LinkedList();
  /* Student s1("RAKIB", 2568, 3.65);
   Student s2("RAFI", 2570, 3.45);
   Student s3("RAQIB", 2558, 3.00);
   Student s4("SAKIB", 2550, 2.65);
   Student s5("ZAKIB", 2566, 3.95);*/

   Student s1, s2, s3, s4, s5;

   myList->createNewNode(s1);
   myList->createNewNode(s2);
   myList->createNewNode(s3);
   myList->createNewNode(s4);
   myList->createNewNode(s5);
   myList->ShowList();

    return 0;
}
