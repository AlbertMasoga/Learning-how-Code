#include <iostream>
#include <string>

class Person
{
    public:

        Person(std::string name = "", int age = 0): m_name(name), m_age(age)
        {
        }
        std::string getName() const {return m_name;}
        std::string setName(std::string name)
        {
        m_name = name;
        }
        int getAge() const {return m_age;}
        int setAge(int age)
        {
        m_age = age;
        }
        void printNameAndAge()
        {
                std::cout << getName() << ": "<< getAge();
        }
    private:
        std::string m_name;
        int m_age;

};

class Baseballplayer: public Person
{
    public:


        Baseballplayer(double battingAverage = 0.0, int homerun = 0)
        :m_battingAverage(battingAverage), m_homerun(homerun)
        {
        }
        double getBattingAverage() const {return m_battingAverage;}
        int getHomerun() const {return m_homerun;}

    private:
        double m_battingAverage;
        int m_homerun;
};

class Employee: public Person
{
public:
    Employee(double hourlySalary = 0.0, long employeeID = 0)
    : m_hourlySalary(hourlySalary), m_employeeID(employeeID)
    {
    }
   double getHourlySalary()
    {
        return m_hourlySalary;
    }
   double setHourlySalary(double HourlySalary)
    {
        m_hourlySalary = HourlySalary;
    }
    long getEmployeeID()
    {
        return m_employeeID;
    }

    long setEmployeeID(long EmployeeID)
    {
        m_employeeID = EmployeeID;
    }

    void printNameAndSalary()
    {
        std::cout << getName() << ": "<< getEmployeeID();
    }
private:
    double m_hourlySalary;
    long m_employeeID;
};

class Supervisor: public Employee
{
public:
    Supervisor()
    {
    }
    long getOverseesIDs()
    {
        return m_overseesIDs;
    }
private:
long m_overseesIDs = 900275;

};


using namespace std;

int main()
{

Baseballplayer joe;
joe.setName("Joe");
std::cout << joe.getName() << endl;

Supervisor Albert;
Albert.setName("Albert");
Albert.setAge(25);
Albert.setHourlySalary(150000);
Albert.setEmployeeID(Albert.getOverseesIDs());
Albert.printNameAndSalary();
cout<<endl;
Albert.printNameAndAge();


    return 0;
}
