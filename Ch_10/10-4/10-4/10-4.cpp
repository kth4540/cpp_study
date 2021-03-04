#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Doctor;	//forward declaration
class Patient;
class Patient
{
private:
	string m_name;
	vector<Doctor*> m_doctors;

public:

	friend class Doctor;

	Patient(string name_in)
		:m_name(name_in) {}

	void addDoctor(Doctor* new_doctor)
	{
		m_doctors.push_back(new_doctor);
	}

	void meetDoctors();
};

class Doctor
{
private:
	string m_name;
	vector<Patient*> m_patients;

public:

	friend class Patient;

	Doctor(string name_in)
		:m_name(name_in) {}

	void addPatients(Patient* new_patients)
	{
		m_patients.push_back(new_patients);
	}

	void meetPatients()
	{
		for (auto& elem : m_patients)
		{
			cout << "meet patient: " << elem->m_name << endl;
		}
	}
};

void Patient::meetDoctors()

{
	for (auto& elem : m_doctors)
	{
		cout << "meet doctor: " << elem->m_name << endl;
	}
}

int main()
{
	Patient* p1 = new Patient("jack");
	Patient* p2 = new Patient("dash");
	Patient* p3 = new Patient("violet");

	Doctor* d1 = new Doctor("dr.k");
	Doctor* d2 = new Doctor("dr.h");

	p1->addDoctor(d1);
	d1->addPatients(p1);

	p2->addDoctor(d2);
	d2->addPatients(p2);

	//patients meet doctors
	p1->meetDoctors();

	//doctors meet patients
	d2->meetPatients();

	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;

	return 0;
}
