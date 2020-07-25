#include<iostream>
using namespace std;

class number1{
	public:
		
		int a;
		int b;
		
		 number1(int data1,int data2){
			a = data1;
			b = data2;
			cout<<"constructor first called here"<<endl;
			
		}
		
		void print_number1(){
			cout<<"the value of number1 is "<<a<<endl;
			cout<<"the value of number1 is "<<b<<endl;
			
		}
};

class number2{
	
	public:
		int c;
		int d;
		
		number2(int data3, int data4){
		c = data3;
		d = data4;
		cout<<"then here" <<endl;
		}		
		
		void print_number2(){
			
			cout<<"the value of number2 "<<c<<endl;
			cout<<"the value of number2 "<<d<<endl;
			
		}
};

class derived : public number2,  public number1{
	public:
	int der1, der2;
	
	derived(int a, int b, int c, int d, int e, int f) : number1(a,b), number2(c,d){
		der1 = e;
		der2 = f;
		
	}
         void print_derived(){
         	
         	cout<<"the value of derived is "<<der1<<endl;
         	cout<<"the value of derived2 is "<<der2<<endl;
         }
 };
 
 int main(){

        derived mangal(1, 2, 3, 4, 5 ,6);
         mangal.print_number1();
         mangal.print_number2();
	     mangal.print_derived();
return 0;

};