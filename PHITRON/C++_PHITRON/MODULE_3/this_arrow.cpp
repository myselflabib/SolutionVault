#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int cls;  
    int roll;         
    double GPA; 
    Student(int cls, int roll, double GPA){
        this->cls = cls;
        this->roll = roll;
        this->GPA = GPA;
    }        
};

int main(){
    Student rahim(4, 5, 6.7);
    Student karim(4, 4, 8.9);
    
    cout << rahim.cls << " " << rahim.roll << " " << rahim.GPA <<endl;
    cout << karim.cls << " " << karim.roll << " " << karim.GPA <<endl;
    return 0;
}