#include<iostream>
using namespace std;

class number3;

//class number2;
class number1{
	
	protected:
		
		int data1;
		int data2;
		
		public:
		void setDeta(int a, int b){
		data1=a;
		data2=b;
			
		
		}
		
	};
	
	class number2{
		
		protected:
			int data3;
			int data4;
			public:
			
		void setnum(int c, int d){
		data3=d;
		data4=d;
	}
			
	};

	class number3{
		
		protected:
			int data5;
			int data6;
			public:
			
		void setval(int e, int f){
		data5=e;
		data6=f;
	}
			
	};

class derived_class : public number1, public number2, public number3{
	
	public:
		
			int mult(){
			int c;
			
			c= data1 * data2 * data3 * data4;
			   cout<<"the resut is " <<c<<endl;			
		}	
	
	int add(){
		int result;
		
		result = data3 + data4;
	     cout<<"the result is " <<result<<endl;			
		
	}
	
	
	   int subt(){
		
		int subtract;
		subtract = data5 - data6;
	     cout<<"the result is " <<subtract<<endl;			
	}
	
	
	
};

int main(){

    derived_class obj1;
    
    obj1.setDeta(2,2);
    obj1.setnum(2,2);
    obj1.setval(2,2);
    obj1.mult();
    obj1.add();
    obj1.subt();


return 0;
}
