//EXAMPLE OF DESTRUCTOR
#include<iostream.h>
#include<conio.h>
int count=0;
class alpha
{
	public:
	alpha()
	{
		count++;
		cout<<"\n \t no . of object created :"<<count<<endl;
	}
	~alpha()
	{
		cout<<"\n \t no. of object created :"<<count<<endl;
		count--;
	}
};
int main()
{
	alpha a,b;
	alpha c;
	getch();
	return 0;
}