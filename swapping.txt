#include<iostream>
using namespace std;

int swap(int &a, int &b)
{
	
	int temp = a;
	    a=b;
	    b=temp;
	    	
}



int main(){
	
	int x=3;
	int y=4;
	
	cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
	swap(x,y);
	cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
return 0;
}
