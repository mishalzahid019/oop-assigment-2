// Multilevel inheritance
#include<iostream>            //include library
using namespace std;
int a,b;//global variable
class A{             //Base class

		public:
			void inp(){
				cout<<"enter value of a and b";
				cin>>a>>b;
			}
			public:
				int sum;
			void Sum(){
				
				sum=a+b;
				
			}
	
};
class B:public A{
		public:
				int sub;
		void Sub(){
				
			sub=a-b;
			
		}
};
class C:public B{
		public:
			void Mult(){
				int mult;
				mult=a*b;
				cout<<"your addition is"<<" "<<sum<<endl<<"your subtractin is"<<" "<<sub<<endl<<"your multiplication is"
				<<mult;
			}
		
};
int main() 
{
	C obj;
	obj.inp();
	obj.Sum();
	obj.Sub();
	obj.Mult();
}


