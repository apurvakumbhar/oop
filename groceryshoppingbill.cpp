#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	string item[10];
	int price[10];
	int total,i,j;
	total = 0;
	cout<<"Enter total no of items:";
	cin>>j;
	
	for(i=0;i<j;i++)
	{   
		cout<<"Enter item name:"<<endl;
		cin>>item[i];
		cout<<"Enter item price:"<<endl;
		cin>>price[i];
		total = total + price[i];
	}
	cout<<"Item"<<'\t'<<"Price"<<endl;
	for(i=0;i<j;i++){
		cout<<item[i]<<'\t'<<setw(5)<<price[i]<<endl;
	}
	cout<<"Total is: "<<total<<endl;
	return 0;
}
