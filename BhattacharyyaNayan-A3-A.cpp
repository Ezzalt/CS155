//**************************************
//  Name: Nayan Bhattacharyya
//  Course: CS 155 - Computer Science
//  Semester: 5th Semester
//  Due Date: 29th August
//  Assignment 3 - A : Average of three numbers
//  Initial error log on G++:
///home/ezzalt/CS 155/Bhattacharyya-A3a.cpp:16:58: warning: missing terminating " character
//   16 |     cout << Input 3 integer values, separated by spaces: ";
//      |                                                          ^
///home/ezzalt/CS 155/Bhattacharyya-A3a.cpp:16:58: error: missing terminating " character
//   16 |     cout << Input 3 integer values, separated by spaces: ";
//      |                                                          ^~ (We add a starting " double quote)
///home/ezzalt/CS 155/Bhattacharyya-A3a.cpp: In function ‘int main()’:
///home/ezzalt/CS 155/Bhattacharyya-A3a.cpp:16:13: error: ‘Input’ was not declared in this scope
//   16 |     cout << Input 3 integer values, separated by spaces: ";
//      |             ^~~~~ (Same solution as before)
///home/ezzalt/CS 155/Bhattacharyya-A3a.cpp:19:28: error: expected ‘;’ before ‘cout’
//   19 |     avg = (x + y + z) / 3.0
//      |                            ^ (We add semicolon here)
//      |                            ;
//   20 |     cout << "The average of " << x  ", " << y << ", " << z << " is " << avg << endl;
//      |     ~~~~ (We add an insertion operator << here after x)
//[Finished in 0.556s]
//  We also have to correct line 17 cin where an output operator is reverted
//  Errors fixed: 5
//**************************************
#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    cout << "Input 3 integer values, separated by spaces: ";
    cin >> x >> y >> z;
    double avg;
    avg = (double)(x + y + z) / 3.0;
    cout << "The average of " << x  << ", " << y << ", " << z << " is " << avg << endl;

    return 0;
}
