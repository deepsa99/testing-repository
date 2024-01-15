#include<iostream>
using namespace std;

class student
{
    private:
    string name;
    int rollno;
    int phy,chem,maths;

    public:
    student(int r,string n,int p ,int m,int c)
    {
        name = n;
        rollno=r;
        phy = p;
        chem = c;
        maths = m;
    }
    int total()
    {
        return phy+chem+maths;
    }
    char grades()
    {
        float average = total()/3;
        if(average >60)
        return 'A';
        if (average<40)
        {
            return 'C';
        }
        else
        return 'B';
    }};

    int main()
    {
        int rollno;
        string name;
        int p,c,m;
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter roll no "<<endl;
        cin>>rollno;
        cout<<"enter 3 subject marks phy chem math"<<endl;
        cin>>p>>c>>m;
        student s(rollno,name ,m,c,p);
        cout<<"total marks"<<s.total()<<endl;
        cout<<"grade"<<" "<<s.grades()<<endl;
        return 0;
    }
