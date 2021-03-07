#include <iostream>
#include <deque>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include<set>

using namespace std;

void sequence_containers()
{
	//vector	-> push_back만 가능
	//vector<int> vec;
	//for (int i = 0; i < 10; ++i)
	//	vec.push_back(i);

	//for (auto& e : vec)
	//	cout << e << " ";
	//cout << endl;

	//deque	-> push_back, push_front 둘 다 가능
	deque<int> deq;
	for (int i = 0; i < 10; ++i)
	{
		deq.push_back(i);
		deq.push_front(i);
	}
	for (auto& e : deq)
		cout << e << " ";
	cout << endl;
}

void associate_containers()
{
	//set	-> 원소가 중복되지 않음
	//set<string> str_set;
	//str_set.insert("hello");
	//str_set.insert("world");
	//str_set.insert("hello");

	//cout << str_set.size() << endl;

	//for (auto& e : str_set)
	//	cout << e << " ";
	//cout << endl;

	//multiset: 원소 중복 허용
	//multiset<string> str_set;
	//str_set.insert("hello");
	//str_set.insert("world");
	//str_set.insert("hello");

	//cout << str_set.size() << endl;

	//for (auto& e : str_set)
	//	cout << e << " ";
	//cout << endl;

	//map
	//map<char, int> m;
	//m['a'] = 10;
	//m['b'] = 20;
	//m['c'] = 50;

	//cout << m['a'] << endl;
	//m['a'] = 100;
	//cout << m['a'] << endl;

	//for (auto& e : m)
	//	cout << e.first << " " << e.second << " ";
	//cout << endl;
	/*first=key(char), second=value(int)*/

	//multimap:key 중복 허용
	multimap<char, int>m;
	m.insert(pair<char, int>('a', 10));
	m.insert(pair<char, int>('b', 10));
	m.insert(pair<char, int>('c', 10));
	m.insert(pair<char, int>('a', 100));

	cout << m.count('a') << endl;	//key에 대응하는 원소 갯수
	for (auto& e : m)
		cout << e.first << " " << e.second << " ";
	cout << endl;

}

void container_adapters()
{
	//stack	->선입후출
	//cout << "stack" << endl;
	//stack<int> s;
	//s.push(1);	//push adds a copy
	//s.emplace(2);	// emplace constructs a new object
	//s.emplace(3);
	//cout << s.top() << endl;
	//s.pop();
	//cout << s.top() << endl;

	//queue	->선입선출
	//cout << "queue" << endl;
	//queue<int> q;
	//q.push(1);
	//q.push(2);
	//q.push(3);
	//cout << q.front() << " " << q.back() << endl;
	//q.pop();
	//cout << q.front() << " " << q.back() << endl;

	//priority_queue	-> 정렬
	cout << "priority_queue" << endl;
	priority_queue<int> q;
	for (const int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
		q.push(n);
	for (int i = 0; i < 10; ++i)
	{
		cout << q.top() << endl;
		q.pop();
	}
}
int main()
{
	//sequence_containers();
	//associate_containers();
	container_adapters();
	return 0;
}
