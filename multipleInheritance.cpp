#include<iostream>
using namespace std;
class Teaching{
	public:
		void teach(){
			cout<<"I do teach"<<endl;
			cout<<"Teaching is my hobby"<<endl;
		}
};
class Non_teaching{
	public:
		void management(){
			cout<<"I do data managing"<<endl;
		}
};
class Assistant:public Teaching,public Non_teaching{
	public:
		void monitor(){
	    	cout<<"I do monitor"<<endl;
		}
};
int main(){
	Assistant a1;	
	a1.monitor();
	a1.teach();
	a1.management();	
	return 0;
}
