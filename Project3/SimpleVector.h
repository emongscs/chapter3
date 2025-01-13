#pragma once
#ifndef SIMPLEVECTOR_H_
#define SIMPLEVECTOR_H_


template<typename T>
class SimpleVector
{
public :
	SimpleVector();
	SimpleVector(int capacity);
	~SimpleVector();
	void push_back(const T& value);
	T getvalue(int dex);
	void pop_back();
	int size();
	int capacity();
	void sortData();


private:
	T* data;
	int idx;
	int currentsize;

};



#endif