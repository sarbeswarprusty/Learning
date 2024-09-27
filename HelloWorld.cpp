#include <iostream>
using namespace std;

int modulation_function(int a,int b)
{
	return a%b;
}

int add(int a,int b)
{ 
return a+b;
}

int main()
{
	cout << "Hello World"<<modulation_function(50,10)<<endl;
	cout << "Hello World"<<add(10,20)<<endl;
	return 0;
}