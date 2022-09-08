#include<iostream>
using namespace std;

class  abc{
	
	public:
		
	 virtual void fun() = 0;
	
};

class abcd : public abc{
	
	  public:
	  	void fun(){
	  		
	  		cout<<" ABCD function "<<endl;
		  }
};

main(){
	
	 abcd obj;
	 
	 obj.fun();
}
