
// default construtor

#include<iostream>
using namespace std;
class space{
	
	public:
		char str[20];
		space()//default constructor
		{
			cout<<"enter your string"<<endl;
			cin>>str;
			cout<<"my name is:"<<str;
			
		}
};
int main()
{
	space s1;
}
