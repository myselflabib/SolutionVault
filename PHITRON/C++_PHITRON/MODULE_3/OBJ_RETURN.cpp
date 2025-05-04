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

Student fun(){
    Student rahim(4, 5, 6.7);
    return rahim;
}

int main(){
    Student obj = fun();
    cout << obj.cls << " " << obj.roll << " " << obj.GPA <<endl;
    return 0;
}