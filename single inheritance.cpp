#include<iostream>
using namespace std;


class number{
	
    int data1;
	
   public:
		
    int data2;
	
	void Data(int a, int b){
		data1=a;
		data2=b;
		
		
	}		
		int getdata(){
			
			return data1;
		}	
		
};

class number2 : public number{

	
	public:
		
	int data3;
		
	void sum(){
			
	data3=data2 + getdata();
     }
		
	void print(){
			
	cout<<"the data1 is " <<getdata()<<endl;
	cout<<"the data2 is " <<data2<<endl;
	cout<<"the data3 is " <<data3<<endl;
	}
};

int main(){

number2 obj1;
obj1.Data(4,5);
obj1.sum();
obj1.print();


return 0;
}
