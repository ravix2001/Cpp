#include<iostream>
using namespace std;

class student{
    private:
        char name[25];
        int score[5];
    public:
        void getdata();
        void showdata();
        void showtotal();
};

void student::getdata(){
    cout<<"Enter data for student:"<<endl;
    cout<<"Name: ";
    cin>>name;
    for (int i=0 ; i<5 ; i++)
    {
        cout<<"Marks in subject "<<i+1<<" : ";
        cin>>score[i];
    }
}

void student::showdata(){
    cout<<"\nStudent data:"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Marks in 5 subjects : "<<endl;
    for(int j=0 ; j<5 ;++j)
    {
        cout<<score[j]<<endl;
    }
}

void student::showtotal(){
    int total=0;
    for(int i=0 ; i<5 ; i++)
    {
        total=total+score[i];
    }
    cout<<"Total marks = "<<total;
}

int main(){
    student s;
    s.getdata();
    s.showdata();
    s.showtotal();
    return 0;
}