#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    void introduce()
    {
        cout << "Hi, I am "<< name << endl;
    }
};

int main() {

    Student s1,s2 ;
    s1.name = "Aaina";
    s2.name = "Sam";
    s1.introduce();
    s2.introduce();
    return 0;
    return 0;
}
