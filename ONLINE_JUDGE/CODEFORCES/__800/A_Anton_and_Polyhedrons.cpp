#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int count = 0;
    while(t--){
        string s;
        cin >> s;

        if(s == "Tetrahedron") count+=4;
        else if(s == "Cube") count+=6;
        else if(s == "Octahedron") count+=8;
        else if(s == "Dodecahedron") count+=12;
        else if(s == "Icosahedron") count+=20;
    }

    cout << count << endl;
    return 0;
}


// Tetrahedron. Tetrahedron has 4 triangular faces.
// Cube. Cube has 6 square faces.
// Octahedron. Octahedron has 8 triangular faces.
// Dodecahedron. Dodecahedron has 12 pentagonal faces.
// Icosahedron. Icosahedron has 20 triangular faces.