#include "SimpleVector.hpp" 
#include<iostream>
using namespace std;

int main()
{
	SimpleVector<int> vec(2);

	vec.push_back(3);
	vec.push_back(4);

	cout << vec.size() << endl;
	cout << vec.capacity() << endl;
	cout << vec.getvalue(0) << endl;
	cout << vec.getvalue(1) << endl;
	cout << endl;

	vec.push_back(5);
	cout << vec.size() << endl;
	cout << vec.capacity() << endl;
	cout << vec.getvalue(0) << endl;
	cout << vec.getvalue(1) << endl;
	cout << vec.getvalue(2) << endl;

	return 0;

}