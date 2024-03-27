#include<bits/stdc++.h>
using namespace std;
class employee{
    public:
    string name;
    int age,salary,ID;
    void employeeinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"ID no: "<<ID<<endl;
        cout<<"salary: "<<salary<<endl;
    }
};
class triangle{
    public:
    int base,height,area;
    double hypotenuse,perimeter; 
    void triangleinfo(){
         cout<<"Base: "<<base<<endl;
         cout<<"Height: "<<height<<endl;
         hypotenuse=sqrt((height*height)+(base*base));
         cout<<"Hypotenuse: "<<hypotenuse<<endl;
         perimeter=height+base+hypotenuse;
         cout<<"Perimeter: "<<perimeter<<endl;
         area=(base*height)/2;
         cout<<"Area: "<<area<<endl;
}
};
int main()
{
    employee e;
    e.name="Numan";
    e.age=26;
    e.ID=22012;
    e.salary=20000;
    e.employeeinfo();
    triangle t;
    t.base=10;
    t.height=12;
    t.triangleinfo();
    return 0; 
}
