//**************************************
//  Name: Nayan Bhattacharyya
//  Course: CS 155 - Computer Science
//  Semester: 5th Semester
//  Due Date: 29th August
//  Assignment 3 - C : Using strings
//  Initial error log on G++:
///home/ezzalt/CS 155/Bhattacharyya-A3c.cpp:12:20: error: missing terminating " character
//   12 |     char ar3[20] = "Yes, I am!;
//      |                    ^~~~~~~~~~~~(Added Double quotes)
///home/ezzalt/CS 155/Bhattacharyya-A3c.cpp: In function ‘int main()’:
///home/ezzalt/CS 155/Bhattacharyya-A3c.cpp:10:5: error: expected ‘,’ or ‘;’ before ‘char’
//   10 |     char ar2[15] = "Are you sure?";
//      |     ^~~~(Semicolon missing in previous line)
///home/ezzalt/CS 155/Bhattacharyya-A3c.cpp:14:17: error: array must be initialized with a brace-enclosed initializer
//   14 |     cout << ar1 << endl;
//      |     ~~~~~~~~~~~~^~~~~~~(Fixed with previous problem)
///home/ezzalt/CS 155/Bhattacharyya-A3c.cpp:15:13: error: ‘ar2’ was not declared in this scope; did you mean ‘ar3’?
//   15 |     cout << ar2 << endl;
//      |             ^~~(Fuixed with the previous problem)
//      |             ar3
///home/ezzalt/CS 155/Bhattacharyya-A3c.cpp:18:5: error: ‘strcopy’ was not declared in this scope; did you mean ‘strcpy’?
//   18 |     strcopy(ar1,"what?"); //HINT: Search cstring functions
//      |     ^~~~~~~
//      |     strcpy(Suggested by the copiler to check functions and the function was used incorrectly)
// Errors fixed :3
//**************************************
#include <iostream>
#include <cstring>
using namespace std;

#define STARS cout << "********" << endl;

int main(){
    char ar1[]="CS 155 is my favorite class";

    char ar2[15] = "Are you sure?";

    char ar3[20] = "Yes, I am!";

    cout << ar1 << endl;
    cout << ar2 << endl;
    cout << ar3 << endl;

    strcpy(ar1,"what?");
    strcat(ar3," Right!");

    STARS;
    cout << ar1 << endl;
    cout << ar2 << endl;
    cout << ar3 << endl;

    return 0;
}
