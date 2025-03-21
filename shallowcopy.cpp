#include<iostream>
using namespace std;
class Demo{
	private:
		int *p;
	public:
		void getInfo(){
			cout<<*p<<endl;
		}	
		void setInfo(int v){
			*this->p=v;
		}
		Demo(int x){
			p=new int(x);
		}
		Demo(const Demo & obj){
			p=obj.p;
	    }
		~Demo(){
			cout<<"Destructor is called"<<endl;
	}
		
};
int main()
{
	Demo d1(111);
	d1.getInfo();
	Demo d2(d1);
	d2.getInfo();
	d2.setInfo(222);
	//d2.~Demo();
	d2.getInfo();
	d1.getInfo();
	
	return 0;
}
