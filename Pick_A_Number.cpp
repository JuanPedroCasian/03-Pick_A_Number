/*
Pick_A_Number.cpp
Aug 15, 2017
Juan Casian
*/


#include <iostream> // input and output stream
#include <cstdlib> //imports the comand of "rand" (random) and "srand"
#include <ctime> /*imports time funcion para regresar milisegundos desde un punto en tiempo
                    */

#include <cstdio> /*imports NULL es igual nada
                      */

using namespace std; //importing std family namespace

int main () {

  int SecretValue, GuessedValue, NumberOfTries;
  NumberOfTries = 0;

  srand (time(NULL)); /* time(NULL) means to take time as cero from the beginning of
                          the program, so it will run in miliseconds from the time you
                          start the program */

                 /* This command is crucial, because it
                                        this is what makes the random number
                                        given by rand to be different each time
                                        you run the program.

                                        A seed is a value that makes another
                                        command to change its way of work.

                                        In this case we use srand which generates
                                        a seed for the random command. Inside
                                        "srand (here (NULL))" you must give the
                                        integer that gives the seed ex: srand(1)
                                        or another command that gives an integer
                                        like in our case "srand (time(NULL))".
                                        In this case we used the time command to
                                        get a seed fron the time the computer is
                                        set to. This works because there will
                                        never be a repetition of the seed because
                                        time never repeats.

                                        time command works with a parameter, in
                                        this case we used null to set the parameter
                                        to nothing.
                                        */


  SecretValue = rand()  % 100 + 1; /* "rand" is the command to get a random number,
                                    in this sample it is used to set variable
                                    "SecretValue" a random number between
                                    1 and 100.

                                    The way this command works is:

                                    "Rand() %" (# which is the range span you want) + (The initial value of the range)

                                    v1 = rand() % 100;          v1 in the range 0 to 99
                                    v2 = rand() % 100 + 1;      v2 in the range 1 to 100
                                    v3 = rand() % 30 + 1985;    v3 in the range 1985-2014

                                    */

                                    /*

  cout << SecretValue <<endl;       Here we used a print out to check if the
                                    number generated by the "rand" command
                                    is always different. This was only used to
                                    test our program and won't be used from now
                                    on.
                                    */



  cout << "I have chosen a number from 1 to 100." << endl;
                                                          //Printing instructions for the game

  cout << "Please guess a number from 1 to 100" << endl;

  cin >> GuessedValue;        //inputs the value to the variable "GuessedValue"

  do {
                            /* This activity uses for the first time a loop
                            in his case a "do while loop"

                            How to use it:
                            do {
                            "in here all the things you want to happen in
                            the loop" (in our case has a if inside

                            } while (here you put a condition)

                            the condition inside the parenthesis is something that
                            should be happenning in the loop

                            in our case the condition is that the program will
                            run while "Guessed value" is not equal to
                            "SecretValue"

                            As soon as this two variables are the same the
                            program exits the loop


                            */

    NumberOfTries = NumberOfTries + 1;

if (GuessedValue > SecretValue) {   //Use of if command to give clues about the secret number

  cout << "Your guess was too high!"; cout << "Please Try again" << endl;
  cin >> GuessedValue;

} else if (GuessedValue < SecretValue){

  cout << "Your guess was too low!"; cout << "Please Try again" << endl;
  cin >> GuessedValue;

}



  } while (SecretValue != GuessedValue);


  cout << "Congratulations! You guessed it in "; cout << NumberOfTries; cout << " tries." <<endl;

return 0;

}
