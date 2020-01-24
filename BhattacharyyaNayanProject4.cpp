//**************************************
//  Name: Nayan Bhattacharyya
//  Course: CS 155 - Computer Science
//  Semester: 5th Semester
//  Due Date: 29th August
//  Project 4 : You  want  to  write  a  program  that  asks  you  for  all  of
//  your  grades,  one  graded  activity  at  a time, one grade at a time.
//  You need to write a program that does this making use of the following functions:
//**************************************
#include <iostream>
using namespace std;

//FUNCTION DECLARATIONS - ***DO NOT MODIFY***
/*name: printPrompt
  INCOMING:  An integer of possible values 1 through 4 indicating a specific graded activity
  OUTGOING:  None
*/
void printPrompt(int);

/*name: average
  INCOMING: None
  OUTGOING: The double average of the integer grades as entered by the user
*/
double average();

/*name: weightedAverage
  INCOMING: Four double values representing the averages for the four graded activities
  OUTGOING: The double value representing the weighted average for the course so far (a.k.a. the current grade)
*/
double weightedAverage(double, double, double, double);

/*name: outputAverages
  INCOMING: A double value representing the current grade and four double values for four graded activity averages
  OUTGOING: None
*/
void outputAverages(double, double, double, double, double);

//MAIN FUNCTION - ***DO NOT MODIFY***
int main(){
   double quizAvg = 0, assignAvg = 0, examAvg = 0, projAvg = 0, currentGrade = 0;
   int count = 1;
   while (count<=4){
      printPrompt(count);
      switch(count){
         case 1:
         //1 - getting the quiz grades
            quizAvg = average();
            break;
         case 2:
         //2 - getting the homework grades
            assignAvg = average();
            break;
         case 3:
         //3 - getting exam grades
            examAvg = average();
            break;
         case 4:
         //4 - getting assignment grades
            projAvg = average();
            break;
      }
      count++;
   }

   //get the current grade, based on the different averages and their weights.
   currentGrade = weightedAverage(quizAvg, assignAvg, examAvg, projAvg);


   outputAverages(currentGrade, quizAvg, assignAvg, examAvg, projAvg);

}
//END MAIN FUNCTION


//**--YOUR WORK HERE--**
//**PLACE YOUR FUNCTION DEFINITIONS (a.k.a. IMPLEMENTATIONS) BELOW**
void printPrompt(int count){
    switch(count){

      //switch case construct for decisions
      case 1:
        cout<<"Enter your quiz grades (-1 to end input):"<<endl;
        break;
      case 2:
        cout<<"Enter your assignment grades (-1 to end input):"<<endl;
        break;
      case 3:
        cout<<"Enter your exam grades (-1 to end input):"<<endl;
        break;
      case 4:
        cout<<"Enter your project grades (-1 to end input):"<<endl;
        break;
      }
}

double average(){

  //initialisation
  double input = 0, avg = 0, count = 0;

  //input loop
  cin>>input;
  while(input!=-1){
    avg=avg+input;
    count++;
    cin>>input;
  }

  //calculation on average
  avg/=(double)count;
  return(avg);
}

double weightedAverage(double quiz,double assignment,double exam,double project){

  //formula for conversion into weighted average
  double result = ((quiz*5/100) +(assignment*15/100) + (exam*30/100) +(project*30/100))*100/80;
  return(result);
}

void outputAverages(double result,double quiz,double assignment,double exam,double project){

  //output averages
  cout<<endl<<endl;
  cout<<"Your quiz average: "<< quiz<< endl;
  cout<<"Your assignment average: "<<assignment<<endl;
  cout<<"Your exam average: "<<exam<<endl;
  cout<<"Your project average: "<<project<<endl;
  cout<<"Your current grade in this course is: "<<result<<endl;
}
