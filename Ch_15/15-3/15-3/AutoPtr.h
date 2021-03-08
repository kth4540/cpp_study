#pragma once
#include <iostream>

template<class T>
class AutoPtr
{
public:
	T* m_ptr = nullptr;
public:
	AutoPtr(T* ptr = nullptr)
		:m_ptr(ptr)
	{
		std::cout << "AutoPtr default constructor" << std::endl;
	}
	~AutoPtr()
	{
		std::cout << "AutoPtr destructor" << std::endl;

		if (m_ptr != nullptr)
			delete m_ptr;
	}

	T& operator*() const { return *m_ptr; }
	T* operator->()const { return m_ptr; }
	bool isNull()const { return m_ptr == nullptr; }

	AutoPtr(const AutoPtr& a)
	{
		std::cout << "AutoPtr copy constructor" << std::endl;
		//deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr;
	}	

	AutoPtr& operator=(const AutoPtr& a)
	{
		std::cout << "AutoPtr copy assignement" << std::endl;


		if (&a == this)
			return *this;

		//deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr;
		return *this;
	}	
	

	//AutoPtr(AutoPtr&& a) :m_ptr(a.m_ptr)
	//{
	//	a.m_ptr = nullptr;
	//	std::cout << "AutoPtr move constructor" << std::endl;
	//}

	//AutoPtr& operator=(AutoPtr&& a)
	//{
	//	std::cout << "AutoPtr move assignment" << std::endl;
	//	if (&a == this)
	//		return *this;

	//	if (!m_ptr)delete m_ptr;

	//	//shallow copy
	//	m_ptr = a.m_ptr;
	//	a.m_ptr = nullptr;

	//	return *this;
	//}
};

