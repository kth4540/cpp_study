//#include "MyArray.h"
//template<typename T>
//void MyArray<T>::print()
//{
//	for (int i = 0; i < m_length; ++i)
//		std::cout << m_data[i] << " ";
//	std::cout << std::endl;
//}
//// main에서 instantiation 할 때 include 된 MyArr.h만 compile한다
//// 따라서 어떤 type으로 instanciation 해야하는지 몰라 error 발생
//
////해결방법: explicit instantiation
//
////template void MyArray<double>::print();
//template class MyArray<char>;
//template class MyArray<double>;