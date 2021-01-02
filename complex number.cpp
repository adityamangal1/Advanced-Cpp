#include<iostream>
using namespace std;


class doc{
	int a;
	int b;
	
	public:
		 doc(void);
		 
		 
		void print(void){
			
			cout<<"the values are " <<a<<" + "<<b<<"i"<<endl;	
		}	
};

doc :: doc(void){
	a=33;
	b=42;
}

int main(){
	
	doc d,f,l;
	
	d.print();
	l.print() ;
	   return 0;
}