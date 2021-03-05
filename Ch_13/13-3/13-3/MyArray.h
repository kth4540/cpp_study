#pragma once
#include <assert.h>
#include <iostream>
template<typename T,unsigned int T_SIZE>	
class MyArray
{
private:
	//int m_length;
	T* m_data;
public:
	MyArray()
	{
	//	m_length = 0;
		m_data = new T[T_SIZE];
	}

	void reset()
	{
		delete[] m_data;
		m_data = nullptr;
	//	m_length = 0;
	}

	T& operator[](int index)
	{
		assert(index >= 0 && index < T_SIZE);
		return m_data[index];
	}

	int getLength()
	{
		return T_SIZE;
	}

	void print()
	{
		for (int i = 0; i < T_SIZE; ++i)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}
	//size를 parameter로 받으면 구현이 너무 어렵기 때문에 다시 header로
};


