#include "Vector.h"
#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
    // level a
    Vector v1(3), v2, v3(4), v4 = v3;
    v1.insert(5);
    v1.insert(4);
    v2.insert(1);
    v2.insert(8);
    v3.insert(-2);
    v3.insert(5);
    v4.insert(-2);
    v4.insert(1);
    v4.insert(6);

    cout << "vector1 :";
    v1.print();
    cout << endl;
    cout << "vector1 :";
    v2.print();
    cout << endl;

    v1.delLast();
    cout << "after del vector1 :";
    v1.print();
    cout << endl;


    v1.clear();
    cout << "after clear  vector1 :";
    v1.print();
    cout << endl;
    cout << endl;

    //// level b  
    //v1 = v2;
    //cout << "after v1=v2  vector1 :";
    //v1.print();
    //cout << endl;

    //v4[1] = 2;
    //v4[0] *= 2;
    //cout << "v4 after change by [] " << v4 << endl;

    //int mul1 = v1 * v2 + v3 * v4;
    //double mul2 = v1 * v2 + ~v4 + v4[2];

    //cout << "mul vector " << mul1 << endl;
    //cout << "mul vector and normal " << mul2 << endl;

    //v1 *= 2;
    //v3 *= v1 * v2;
    //cout << "mul scalar " << v1 << endl;
    //cout << "mul scalar " << v3 << endl;

    //v4++;
    //v2 = ++v1;
    //cout << "v4++ " << v4 << endl;
    //cout << "v2=++v1 " << v2 << " " << v1 << endl;
    //cout << v2-- << endl;
    //cout << v2 << endl;

    //v1 == v2 ? cout << "v1 == v2" << endl : cout << "v1 != v2" << endl;
    //v1 > v2 ? cout << "v1 > v2" << endl : cout << "v1 <= v2" << endl;
    //v3 <= v4 ? cout << "v3 <= v4" << endl : cout << "v3 > v4" << endl;
}