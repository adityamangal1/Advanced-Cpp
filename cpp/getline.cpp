#include<iostream>
using namespace std;


class doc{
	int a;
	int b;

	public:

		//  doc();
		 void setdata(int data  , int value ){

			 a = data;
			 b = value;


		 }

		void print(void){

			cout<<"the values are " <<a<<" + "<<b<<"i"<<endl;	
		}	
};

// doc :: doc(int p, int q){
// 	a=p;
// 	b=q;
// }

int main(){

      
	//   doc obj1;
	  doc *ptr;
	//   ptr = &obj1;

	  ptr->setdata(4,4);

	//   obj1.print();
    //   doc* ptr;
	  ptr->print();

	// d.print();
	// l.print();
	   return 0;
}