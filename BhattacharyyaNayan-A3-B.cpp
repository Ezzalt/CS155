//**************************************
//  Name: Nayan Bhattacharyya
//  Course: CS 155 - Computer Science
//  Semester: 5th Semester
//  Due Date: 29th August
//  Assignment 3 - B : Output of values
//  Initial error log on G++:
//  /home/ezzalt/Bhattacharyya-A3b.cpp:2:17: error: missing terminating > character
//     2 | #include <string
//        |                 ^(Added character > for terminating the include statement)
//  /home/ezzalt/Bhattacharyya-A3b.cpp: In function ‘int main()’:
//  /usr/include/c++/9.1.0/bits/basic_string.tcc:1466:5: note:   template argument deduction/substitution failed:
//  /home/ezzalt/Bhattacharyya-A3b.cpp:32:13: note:   ‘std::ostream’ {aka ‘std::basic_ostream<char>’} is not derived from ‘std::basic_istream<_CharT, _Traits>’
//     32 |     cout >> "i1: " >> i1 >> endl;
//        |             ^~~~~~ (The output statements all have reversed operators for the cout objects
//        which cause them to throw an error)
// Errors fixed :2
//**************************************
#include <iostream>
#include <string>
using namespace std;

int main(){
    double d1, d2;
    int i1, i2;
    string val;

    cout << "Input 2 real numbers, separated by spaces: ";
    cin >> d1 >> d2;

    i1 = d1;
    i2 = d2;

    val = "This is really fun";

    cout << "d1: " << d1 << endl;
    cout << "d2: " << d2 << endl;
    cout << "i1: " << i1 << endl;
    cout << "i2: " << i2 << endl;
    cout << "val: " << val << endl;


    return 0;
}
