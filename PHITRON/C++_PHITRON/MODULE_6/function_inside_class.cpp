#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int math;
    int eng;
    Student(string name, int roll, int math, int eng){
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->eng = eng;
    }
    void hello(){
        cout <<"Total marks of " << name << " = " << math+eng << endl;
    }
};
int main(){
    Student sakib("Sakib Ahmed", 1001, 89, 85);
    sakib.hello();
    return 0;
}