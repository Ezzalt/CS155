/**************************************
  Name: Nayan Bhattacharyya
  Course: CS 155 - Computer Science
  Semester: 5th Semester
  Due Date: 18th November
  Project 5 : You  want  to  write  a  program  That emulates the case of the hangman game.
  It should read it's puzzles from a file named as 'puzzles.txt', and track your prgoress and appropriately
  give you the result of the game.
***************************************/
#include<iostream>
#include<fstream>
#include<string>
#include<time.h>
using namespace std;

const int MAX_WORDS = 100;
const int MAX_WORD_SIZE = 20;
const int MAX_GUESSES = 5;
const int NUM_LETTERS = 26;

void readPuzzles(string words[], int &wordCount);
void displayPuzzle(string word, bool guessed[]);
bool found(string word, bool guessed[], char guess);
bool winner(bool guessed[], int letters);

/*
main function - driver function of the program
  Returns 0 on successful execution
  This function drives the program, calls each of the respective functions for displaying
   the puzzles and giving checking the progress of the user and checking if they have
   guessed the word right.
*/

int main(){
  string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";//set of guessable letters
  string words[MAX_WORDS];//array of words
  int wordNum=0, letters=0, misses=0, numWords=0;//initializing the variables for usage
  char guess;//guess charactee
  bool guessed[MAX_WORD_SIZE];//guessed array to check for the letters that have already been guessed
  readPuzzles(words, numWords);
  srand(time(0));//random fucntion initialized with a time value to get a randomized value
  wordNum=rand() % numWords;
  letters = words[wordNum].length();
  for (int i=0; i<letters; i++)//loop to initialize values of guessed to false
    guessed[i] = false;
  do  {
    displayPuzzle(words[wordNum], guessed);
    cout << "Available: " << alpha << endl;
    cout << "Guess: ";
    cin >> guess;
    guess = toupper(guess);
    for (int i=0; i<NUM_LETTERS; i++)//check whether the letter has been attempted or not
      if (alpha[i] == guess)
        alpha[i] = ' ';
    if (!(found(words[wordNum], guessed, guess)))//check fi the letter has been guessed correctly, if not, increment misses
        misses++;
      cout << "Misses: " << misses << endl;
    } while (!winner(guessed,letters) && (misses < MAX_GUESSES));//driver loop for the game
    if (misses == MAX_GUESSES)//check if the user ended the game after losing, else print win statement
      cout << "You lose. The word was: " << words[wordNum] << endl;
    else
      cout << "You win. Nice job!" << endl;
  return 0;
}

/*
readPuzzles – two arguments: string array of words, integer wordCount (reference parameter)
  Returns nothing
  This function opens up the puzzles file, verifies it opens successfully,
   reads the puzzles from the file into the array of words, updates the wordCount to reflect how many puzzles were read.
*/

void readPuzzles(string words[], int &wordCount){
  ifstream in("puzzles.txt");//opening file in object in

  if(in.is_open())//check if the file was opened succesfully
    while(in>>words[wordCount++]);//input words into the array till the end of file
}

/*
displayPuzzle – two arguments: string word, array of bool guessed
  Returns nothing
  This function loops through each of the letters of the word, looking at the
   corresponding position of the guessed  array.  If  the  letter  has  been  guessed,
   display  it.  If  not,  display  the  underscore.  Also,  display  a space between
   each letter, as well as a couple of end lines after the word. It might output something like this:
   _ A S K _ _ B A _ _
*/

void displayPuzzle(string word, bool guessed[]){

  for(int i = 0; word[i] != '\0'; i++){//loop that runs till the end of string

    if(guessed[i]==true)//if value is true then the letter will be printed
      cout<<" "<<word[i];
    else//else an underscore will be printed as a place-holder
      cout<<" _";
  }

  cout<<endl<<endl;
}

/*
found – three arguments: string word, array of bool guessed, character guess
  This functions returns a bool, true if letter guess is found in puzzle word, otherwise false
  If the guess  is in the word, the function should also change the guessed  array  to  true  at each position it exists
*/

bool found(string word, bool guessed[], char guess){

  bool res = false;//default value

  for(int i = 0; word[i] != '\0'; i++){//loop that runs till the end of string

    if(word[i]==guess){//checks that the guess is correct or not

      guessed[i] = true;//sets the value if guessed correctly
      res = true;
    }
  }
  return res;//return the value
}

/*
winner – two arguments: array of bool guessed, the integer number of letters in the puzzle
  This  function  will  loop  through  all  of  the  elements  of  the  guessed  array.  If
   any  element  is  false,  the function should return false. If all of the elements are true,
   the function should return true.
*/

bool winner(bool guessed[], int letters){
  bool win = true;
  int i = 0;

  while(guessed[i++]==true);//loop runs till there is true value

  if(i<letters)//set win to false if there were any false values and the loop didn't run completely
    win = false;
  return win;//return value fo win
}

/*
Sample Run :
[ezzalt@ezzalt-pc CS 155]$ ./run
 _ _ _ _ _ _ _ _ _ _

Available: ABCDEFGHIJKLMNOPQRSTUVWXYZ
Guess: p
Misses: 1
 _ _ _ _ _ _ _ _ _ _

Available: ABCDEFGHIJKLMNO QRSTUVWXYZ
Guess: b
Misses: 1
 B _ _ _ _ _ B _ _ _

Available: A CDEFGHIJKLMNO QRSTUVWXYZ
Guess: l
Misses: 1
 B _ _ _ _ _ B _ L L

Available: A CDEFGHIJK MNO QRSTUVWXYZ
Guess: a
Misses: 1
 B A _ _ _ _ B A L L

Available:   CDEFGHIJK MNO QRSTUVWXYZ
Guess: s
Misses: 1
 B A S _ _ _ B A L L

Available:   CDEFGHIJK MNO QR TUVWXYZ
Guess: ke
Misses: 1
 B A S K _ _ B A L L

Available:   CDEFGHIJ  MNO QR TUVWXYZ
Guess: Misses: 1
 B A S K E _ B A L L

Available:   CD FGHIJ  MNO QR TUVWXYZ
Guess: t
Misses: 1
You win. Nice job!
*/
