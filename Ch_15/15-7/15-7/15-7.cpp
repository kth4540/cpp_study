#include <iostream>
#include <string>
using namespace std;
class person
{
    string m_name;
    weak_ptr<person> m_partner;
public:
    person(const string& name) :m_name(name)
    {
        cout << m_name << " created\n";
    }
    ~person()
    {
        cout << m_name << " destroyed\n";
    }

    friend bool partnerUp(shared_ptr<person>& p1, shared_ptr<person>& p2)
    {
        if (!p1 || !p2)
            return false;

        p1->m_partner = p2;
        p2->m_partner = p2;

        cout << p1->m_name << "is partnered with " << p2->m_name << "\n";
        return true;
    }

    //const shared_ptr<person> getPartner() const
    //{
    //    return m_partner.lock();
    //}

    const string& getName() const
    {
        return m_name;
    }

};
int main()
{
    auto lucy = make_shared<person>("lucy");
    auto ricky = make_shared<person>("ricky");

    partnerUp(lucy, ricky);
}
