#include<iostream>
using namespace std;

class Teacher{
protected:
    string subject;

public:
    void setSubject(string s){
        subject = s;
    }
};

class Researcher{
protected:
    int papers;

public:
    void setPapers(int p){
        papers = p;
    }
};

class Professor : public Teacher, public Researcher{
public:
    void display(){
        cout<<"Subject: "<<subject<<endl;
        cout<<"Research papers: "<<papers<<endl;
    }
};

int main(){
    Professor p;

    p.setSubject("Computer Science");
    p.setPapers(10);

    p.display();

    return 0;
}