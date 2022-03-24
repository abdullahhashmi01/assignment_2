#include <iostream>

using namespace std;
int main(){

	string eq;
	string array[5];
   cout<<"Enter Your equation in the format of "<<endl<<"A+b=C"<<endl;
   cin>>eq;
   for(int i=0; i<eq.length(); i++){
   	
   	array[i]=eq[i];
   	
   }
   
  int num1= std::stoi(array[0]);
  int num2=std:: stoi(array[2]);
  int num3= std::stoi(array[4]);
  
  cout<<num1<<endl;
  cout<<num2<<endl;
  cout<<num3<<endl;
  
 
  if(num1<num2){
     	
   int a =( num1+num2);
   int b = num3-a;
   int result = (num1+a);
   cout<<a<<"+"<<num2 << "=" << num3;
   
  }
  else
  {
  	
  }
  
  
 
	return 0;
}
