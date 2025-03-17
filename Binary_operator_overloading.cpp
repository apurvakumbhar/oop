#include<iostream>
using namespace std;
class point{
	private:
		int x_co;
		int y_co;
	public:
		point(int x=0,int y=0):x_co(x),y_co(y){};
		point operator-(const point&obj){
			return point(obj.x_co-x_co,obj.y_co-y_co);
		};
		void show(){
			cout<<"New x is:"<<x_co<<endl;
			cout<<"New y is:"<<y_co<<endl;
		};
};
int main(){
	point p1(10,8),p2(6,3);
	point p3=p1-p2;
	p3.show();
}
