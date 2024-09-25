// copy constuctor

#include<iostream>
using namespace std;
class B{
	public:
		int a,c;
		B(int b,int c1)
		{
			a=b;
			c=c1;
			cout<<"the value of b2 "<< b ;
			cout<<" the value of c1 "<< c1 ;
		}
		B(B &obj)
		{
			a=obj.a;
			c=obj.c;
		}
};
int main()
{
	B b1(20,30);
	B b2(b1);
	
}
