/*
  Project Description: This game will have the user guess a random computer-generated number between 0 and 100, inclusive.
  Name: Aammya Sapra
  Date: February 14, 2021
 */


#include <iostream>
#include <ctime>

using namespace std;


int main()
{
  bool playing = true;
  srand(time(NULL)); //initialize random seed to make sure different random numbers generated each time

  while (playing)
  {
    int rand_num = rand() % 101; //variable that stores random number between 0 and 100, inclusive
    int user_guess  = -1; //variable that stores user guess
    int num_guesses = 1; //variable that stores number of guesses user made
    char y_n = ' '; //variable that stores user answer to whether or not he/she wants to play again

    cout << "Guess a number between 0 and 100, inclusive" << endl;

    //loop that checks user guess and counts number of guesses
    while (user_guess != rand_num)
    {
      cin >> user_guess;
      
      if (user_guess < rand_num)
      {
        cout << "Your guess is too low. Guess again!" << endl;
        num_guesses++;
      }
      else if (user_guess > rand_num)
      {
	      cout << "Your guess is too high. Guess again!" << endl;
	      num_guesses++;
      }
    }

    //print how many tries it took for user to guess correctly
    if (user_guess = rand_num)
    {
      cout << "That is correct!" << endl;
      cout << "It took you " << num_guesses << " guesses" << endl;
    }


    //ask if user wants to continue playing or not
    while (true)
    {
      cout << "Play again (y/n)? " << endl;
      cin >> y_n;

      //check if user entered a valid response
      if (y_n == 'y' || y_n == 'Y' || y_n == 'n' || y_n == 'N')
      {
        break;
      } else {
        cout << "Please enter \'y\' or \'Y\' or \'n\' or \'N\'" << endl;
      }
    }
    
    //restart or end game based on user response
    if (y_n == 'y' || y_n == 'Y')
    {
      playing = true;
    }
    else if (y_n == 'n' || y_n == 'N')
    {
      playing = false;
      cout << "Okay. Thanks for playing!";
    }
    
    
  } // end of main loop
  return 0;
}
