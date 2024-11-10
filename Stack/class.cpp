#include <iostream>
using namespace std;

class vote
{
    int age;
    string name;

public:
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        if (age >= 18)
        {
            this->age = age;
        }
        else
        {
            cout << "grow up age" << endl;
        }
    }
};

int main()
{
    vote r;
    int age;
    cout << "Enter your age" << endl;
    cin >> age;

    r.setAge(age);

    return 0;
}