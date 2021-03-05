#pragma once
template<class T>
class Storage8
{
private:
	T m_arr[8];
public:
	void set(int idx, const T& val)
	{
		m_arr[idx] = val;
	}
	const T& get(int idx)
	{
		return m_arr[idx];
	}
};
template<>
class Storage8<bool>
	//bool은 1bit 로도 표현 가능하지만 메모리 체계상 1byte 할당
	//->8개의 bool을 동시에 처리 가능
{
private:
	unsigned char m_data;
public:
	Storage8() :m_data(0) {}

	void set(int idx, bool val)
	{
		unsigned char mask = 1 << idx;
		if (val)
			m_data |= mask;
		else
			m_data &= ~mask;
	}
	bool get(int idx)
	{
		unsigned char mask = 1 << idx;
		return (m_data & mask) != 0;
	}
};