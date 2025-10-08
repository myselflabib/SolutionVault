#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int age;
        int cls;

        Student(string name, int age, int cls){
            this->name = name;
            this->age = age;
            this->cls = cls;
        }
};

int main()
{

    Student* std1 = new Student("Labib", 22, 8);

    cout << std1->name << " " << std1->age << " " << std1->cls << endl;
    // string s = "LABIB";
    // sort(s.begin(), s.end());

    // cout << s << endl;
    return 0;
}