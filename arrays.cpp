#include<iostream>
using namespace std;

int main(){

	int roll_number[] = {12, 10, 30, 40};
	
	  cout<<"these are the roll numbers" <<endl;
	  cout<<roll_number[0]<<endl;
	  cout<<roll_number[1]<<endl;
	  cout<<roll_number[2]<<endl;
	  cout<<roll_number[3]<<endl;

// taking input by user 

int math_marks[3];


cin>>math_marks[0];
cin>>math_marks[1];
cin>>math_marks[2];

cout<<"the value in 0th index is " <<math_marks[0]<<endl;
cout<<"the value in 1th index is " <<math_marks[1]<<endl;
cout<<"the value in 2th index is " <<math_marks[2]<<endl;

return  0;
}