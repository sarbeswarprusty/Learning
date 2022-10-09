#include <iostream>
using namespace std;

int modulation_function(int a,int b)
{
	return a%b;
}

int main()
{
	cout << "Hello World"<<modulation_function(50,10)<<endl;
	return 0;
}