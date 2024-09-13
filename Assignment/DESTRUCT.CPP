//EXAMPLE OF DESTRUCTOR
#include<iostream.h>
#include<conio.h>
int count=0;  //initialize the static count variable
class alpha //here I define the class which name is 'alpha'
{
	public:
	alpha() //constructor of the class
	{
		count++;
		cout<<"\n \t no . of object created :"<<count<<endl;
	}
	~alpha() //destructor of the class
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
