// code of class student graduatestudent and master
#include<iostream>
using namespace std;

class student
{
public:
    int student_number;
    string student_name;
    double student_average;

    student(void)
    {
        student_number = 46;
        student_name = "Mishal";
        student_average = 15.5;
    }

    void setNum(int num)
    {
        cout << "Enter your student number: ";
        cin >> num;
        student_number = num;
    }

    void setName(string name)
    {
        cout << "Enter your name: ";
        cin >> name;
        student_name = name;
    }

    void setAvg(double average)
    {
        cout << "Enter your average: ";
        cin >> average;
        student_average = average;
    }

    void print_data()
    {
        cout << "Name: " << student_name << endl
             << "Roll: " << student_number << endl
             << "Average: " << student_average << endl;
    }
};

class graduatestudent : public student
{
public:
    int level, year;

    graduatestudent(void)
    {
        level = 12;
        year = 2;
    }

    void setlevel(int levl)
    {
        cout << "Enter your level: ";
        cin >> levl;
        level = levl;
    }

    void setyear(int years)
    {
        cout << "Enter your year: ";
        cin >> years;
        year = years;
    }

    void print_data_graduatestudent()
    {
        cout << "Level: " << level << endl
             << "Year: " << year << endl;
    }
};

class master : public graduatestudent
{
public:
    int newid;

    master(void)
    {
        newid = 1;
    }

    void setnewid(int id)
    {
        cout << "Enter your new ID: ";
        cin >> id;
        newid = id;
    }

    void print_data_master()
    {
        cout << "ID: " << newid << endl;
    }
};

int main()
{
    // Question 1 Solution
    student stu;
    stu.setName("Mishal");  // You can uncomment this line if you want to set a specific name.
    stu.setAvg(1.1);        // You can uncomment this line if you want to set a specific average.
    stu.setNum(700);        // You can uncomment this line if you want to set a specific student number.
    stu.print_data();

    // Question 2 Solution
    graduatestudent gra;
    gra.setlevel(10);  // You can uncomment this line if you want to set a specific level.
    gra.setyear(3);    // You can uncomment this line if you want to set a specific year.
    gra.print_data_graduatestudent();

    master mas;
    mas.setnewid(20);  // You can uncomment this line if you want to set a specific new ID.
    mas.print_data_master();

    return 0;
}

