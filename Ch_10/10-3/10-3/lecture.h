#pragma once
#include <vector>
#include "student.h"
#include "teacher.h"

class Lecture
{
private:
	std::string m_name;
	Teacher* teacher;
	std::vector<Student*> students;

public:
	Lecture(const std::string& name_in)
		:m_name(name_in) {}

	void assignTeacher(Teacher* const teacher_input)
	{
		teacher =teacher_input;
	}

	void registerStudent(Student* const student_input)
	{
		students.push_back(student_input);

		//&student_input�� &students[0] �� �ּҴ� �ٸ�
	}

	friend std::ostream& operator<<(std::ostream& out, const Lecture& lec)
	{
		out << "lecture name: " << lec.m_name << std::endl;

		out << *(lec.teacher) << std::endl;
		for (auto elem : lec.students)
			out << *elem << std::endl;

		return out;
	}

	void study()
	{
		std::cout << m_name << "study" << std::endl << std::endl;

		//for (auto elem : students)	// '&' ���̴� ������Ʈ ���� ����
		//	elem.setIntel(elem.getIntel() + 1);

		for (auto elem : students)
			(*elem).setIntel((*elem).getIntel() + 1);
	}
};