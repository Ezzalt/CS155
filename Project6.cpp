/**************************************
  Name: Nayan Bhattacharyya
  Course: CS 155 - Computer Science
  Semester: 5th Semester
  Due Date: 3rd December
  Project 6 : You  want  to  write  a  program that mimics the game memory. You are to
  do this by having two decks of cards with value 1-10, randomly inserted into each deck
***************************************/
#include<iostream>
#include<time.h>
using namespace std;

const int MAX_DECK_SIZE = 10;

void randomDeck(int deck[][10]);
void displayDeck(bool guessed[][10]);
bool match(int deck[][10],int first, int second, bool guessed[][10]);
bool winner(int deck[][10], bool guessed[][10]);

/*
main function - driver function of the program
  Returns 0 on successful execution
  This function drives the program, calls each of the respective functions for
   displaying the cards and giving checking the progress of the user and
   checking if they have guessed the cards right.
*/

int main(){
  int deck[2][MAX_DECK_SIZE] = {{1,2,3,4,5,6,7,8,9,10},
                                {1,2,3,4,5,6,7,8,9,10}};//array of cards
  int guess1 = 0, guess2 = 0;//guessed numbers
  bool guessed[2][MAX_DECK_SIZE];//guessed array to check for guessed values
  randomDeck(deck);
  for (int i=0; i < 2; i++)//loop to initialize values of guessed to false
    for(int j = 0; j < 10; j++)
      guessed[i][j] = false;
  do  {
    cout<<"*************************************";
    displayDeck(guessed);
    cout << "What number card would you like to check from the first row? ";
    cin >> guess1;
    cout << guess1 << " is a(n) " << deck[0][guess1-1];
    cout<<endl<<endl;
    cout << "What number card would you like to check from the second row? ";
    cin >> guess2;
    cout << guess2 << " is a(n) " << deck[1][guess2-11];
    cout<<endl;
    if(match(deck,guess1-1,guess2-11,guessed))
      cout<<"Match!";
    else
      cout<<"No match!";
    cout<<endl;
  } while (!winner(deck, guessed));//driver loop for the game
    cout << "Game Over!" << endl;
  return 0;
}

/*
randomDecks – one argument: integer array of deck
  Returns nothing
  This function randomizes the values of the array deck for the game
*/

void randomDeck(int deck[][10]){
  srand(time(0));

  for(int i = 0; i<2;i++){
    for (int j=9; j>0; --j){
      int k = rand()%j;
      //swap the numbers to randomize
      int temp = deck[i][j];
      deck[i][j] = deck[i][k];
      deck[i][k] = temp;
    }
  }
}

/*
displayDeck – one argument: array of bool guessed
  Returns nothing
  This function loops to check value of guessed cards and displays their face
   down value if not guessed already and an X if guessed
   for eg.
*************************************
X	 X	X   X	 X  X	 X	X	 9  X
X	 X	13  X	 X	X	 X	X	 X	X
*/


void displayDeck(bool guessed[][10]){
cout<<endl;
int count = 1;
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 10; j++){
      if(guessed[i][j]==false)
        cout<<count++<<"\t";
      else
        cout<<"X"<<"\t";
    }
    cout<<endl;
  }

  cout<<endl;
}

/*
match – four arguments: array of deck of cards, first and second guesses,
        array of bool guessed
  This functions returns a bool, true if guess is correct, otherwise false
  If the guess  is in the word, the function should also change the guessed
   array to true at each position it exists
*/
bool match(int deck[][10], int first, int second, bool guessed[][10]){

  bool res = false;//default value

    if(deck[0][first] == deck[1][second]){//checks that the guess is correct or not

      guessed[0][first] = guessed[1][second] = true;//sets the value if guessed correctly
      res = true;
    }
  return res;//return the value
}

/*
winner – two arguments: array of deck of cards, array of bool guessed
  This function will loop  through all of the  elements of the guessed
   array. If any element is false, the function should return false. If all
   of the elements are true, the function should return true.
*/

bool winner(int deck[][10],bool guessed[][10]){
  bool win = true;
  int i = 0;

  while(guessed[0][i]==true&&guessed[1][i++]);//loop runs till true value

  if(i<MAX_DECK_SIZE)//set win to false if loop didn't run completely
    win = false;
  return win;//return value fo win
}

/*
Sample Run :
*/
