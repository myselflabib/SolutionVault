#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int cls;  
    int roll;         
    double GPA; 
    Student(int c, int r, double g){
        cls = c;
        roll = r;
        GPA = g;
    }        
};
Student* fun(){
    Student *rahim = new Student(4, 5, 6.7);
    return rahim;
}
int main(){
    Student *rahim = fun();
    cout << rahim->cls << " " << rahim->roll << " " << rahim->GPA <<endl;
    return 0;
}