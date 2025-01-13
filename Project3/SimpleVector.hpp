#include "SimpleVector.h"
#include<algorithm>

template<typename T>
SimpleVector<T>::SimpleVector()
{
	idx = 0;
	currentsize = 10;
	data = new T[currentsize];
}

template<typename T>
SimpleVector<T>::SimpleVector(int capacity)
{
	idx = 0;
	currentsize = capacity;
	data = new T[currentsize];
}

template<typename T>
SimpleVector<T>::~SimpleVector()
{
	delete[] data;
}

template<typename T>
void SimpleVector<T>::push_back(const T& value)
{
	if (idx == currentsize)
	{
		T* newdata = new T[currentsize + 5];

		for (int i = 0; i < idx; i++)
			newdata[i] = data[i];

		newdata[idx] = value;
		idx = idx + 1;
		
		delete[] data;

		data = newdata;
		currentsize = currentsize + 5;

		return;
	}
	else
	{
		data[idx] = value;
		idx = idx + 1;
	}
}

template<typename T>
void SimpleVector<T>::pop_back()
{
	if (idx == 0)
		return;

	idx = idx - 1;
}

template<typename T>
int SimpleVector<T>::size()
{
	return idx;
}

template<typename T>
int SimpleVector<T>::capacity()
{
	return currentsize;
}

template<typename T>
T SimpleVector<T>::getvalue(int idx)
{
	return data[idx];
}

template<typename T>
void SimpleVector<T>::sortData()
{
	sort(data, data + idx);
}