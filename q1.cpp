#include<bits/stdc++.h>
using namespace std;
class rectangle;
class Polar
{
    long double r,q;
    public:
    Polar():r(0),q(0){}
    void get_data();
    void display();
    friend void operator ^(Polar &,rectangle &);
};
class rectangle
{
    long double x,y;
    public:
    rectangle():x(0),y(0){}
    void get_data();
    void display();
    friend void operator ^(Polar &,rectangle &);
};
void Polar::get_data()
{
    cout<<"enter radius and angle"<<endl;
    cin>>r>>q;
}
void Polar::display()
{
    cout<<r<<"   "<<q<<endl;
}
void rectangle::get_data()
{
    cout<<"enter x and y"<<endl;
    cin>>x>>y;
}
void rectangle::display()
{
    cout<<x<<"   "<<y<<endl;
}
void operator ^(Polar &a ,rectangle &b)
{
    Polar t;
    rectangle u;
    t=a;
    a.r=sqrt(pow(b.x,2)+pow(b.y,2));
    a.q=atan(b.y/b.x);
    b.x=t.r*cos(t.q);
    b.y=t.r*sin(t.q);
}
int main()
{
    Polar a;
    rectangle b;
    a.get_data();
    b.get_data();
    cout<<"before converting:"<<endl;
    a.display();
    b.display();
    cout<<"after converting"<<endl;
    a^b;
    a.display();
    b.display();
    return 0;
}