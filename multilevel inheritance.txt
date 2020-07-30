#include<iostream>
using namespace std;

class student{
	int roll;
	
	public:
		void setroll(int r);
		void getroll();
		
		
};

void student :: setroll(int r){
	
	roll=r;
	
	
}

void student :: getroll(){
	
	cout<<"Your roll no is " <<roll<<endl; 
	}
	
class exam : public student{
	
	public:
		float maths;
		float chemistry;
		
		void setmarks(float m1, float m2){
			
			maths = m1;
			chemistry = m2;
			
		}
	      void getmarks(){
	      	
	      	cout<<"the marks in maths is " <<maths<<endl;
	      	cout<<"the marks in chemistry is " <<chemistry<<endl;
		  }
};	

class result : public exam{
  float percent;
  
  public:
  //setroll();
  //getroll
  
  void print(){
  cout<<" the percentage is  "<<(maths + chemistry)/2<<"%"<<endl;
  }	

};
int main(){
	
	result mangal;
	mangal.setroll(1020);
	mangal.getroll();
	mangal.setmarks(90.5, 90.6);
	mangal.getmarks();
	mangal.print();



return 0;
}
