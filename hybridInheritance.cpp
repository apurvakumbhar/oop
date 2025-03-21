#include<iostream>
using namespace std;

class X{
	public:
		int a;
		int b;
	void get(){
		cout<<"a=";
		cin>>a;
		cout<<"b=";
		cin>>b;
	}
};
class Y :  virtual public X
{
	public :
		int c;
		void add()
		{
			  c= a+b;
			
		}
};
class Z :  virtual public X
{
	public :
		int d;
		void diff()
		{
			  d= a-b;
			
		}
};
class A : public Y , public Z {
	public :
		void show()
		{
			cout<<"\n Sum is "<<c;
			cout<<"\n Difference  is "<<d;
			
		}
		
};
int main()
{
	A obj;
	obj.get();
	obj.add();
	obj.diff();
	obj.show();
	return 0 ;
 } 

