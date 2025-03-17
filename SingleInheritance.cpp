#include<iostream>
using namespace std;
class Person{
	public:
		void eat(){
			cout<<"I do eat"<<endl;
		}
};
class Student:public Person{
	public:
		void study(){
			cout<<"I do study"<<endl;
		}
		void exam(){
			cout<<"I give exam"<<endl;
		}
};
int main(){
	Student s1;
	s1.study();
	s1.exam();
	s1.eat();
	return 0;
}
