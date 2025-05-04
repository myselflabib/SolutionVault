#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];  //100byte
    int roll;          //4byte
    double GPA;         //8byte
};

int main(){
    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.GPA;
    cin.ignore();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.GPA;
    //  char tem[100] = "LABIB";
    // strcpy(a.name, tem);
    cout << a.name << " " << a.roll << " " << a.GPA <<endl;
    cout << b.name << " " << b.roll << " " << b.GPA <<endl;
    return 0;
}