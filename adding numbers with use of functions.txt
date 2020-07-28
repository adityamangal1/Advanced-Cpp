  // using of functions
  
  
#include<iostream>
using namespace std;

int add(int, int);

int main(){
int num1;
int num2;

cin>>num1;
cin>>num2;
cout<<"the sum is "<<add(num1,num2);

return 0;
}


int add(int a , int b){
return a+b;
}
