#include<bits/stdc++.h>
using namespace std;
class Distance
{
    long double feet;
    long double inches;
    public:
    Distance():feet(0),inches(0){}
    Distance(long double ft,long double in):feet(ft),inches(in){}
    void display();
    Distance operator +(Distance );
    Distance operator -(Distance );
    Distance operator +=(Distance );
    Distance operator -=(Distance );
    Distance operator >(Distance );
    Distance operator <(Distance );
};
void Distance::display()
{
    cout<<feet<<" \" "<<inches<<" \' "<<endl;
}
Distance Distance::operator+(Distance D)
{
    Distance t;
	t.i = i + D.i;
	t.f =0;
	if(t.i>=12.0)
	{
		t.i-=12.0;
		t.f++;
	}
	t.f += f + D.f;
	return t;
}
Distance Distance::operator-(Distance D)
{
    Distance t;
	t.i = i - D.i;
	t.f =0;
	if(t.i<0)
	{
		t.i=12.0+t.i;
		t.f--;
	}
	t.f += f -  D.f;
	return t;
}
Distance Distance::operator+=(Distance D)
{
    
}
Distance Distance::operator-=(Distance D)
{
    
}
Distance Distance::operator>(Distance D, Distance B)
{
    
}
Distance Distance::operator<(Distance D, Distance B)
{
    
}
int main()
{
    Distance d(10,15.0),e(23,13.7),z;
    z=d+e;
    z=e-d;
    z.display();
    return 0;
}