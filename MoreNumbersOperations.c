/*
The program asks the user to input an integer number between 1 and 20 and then gives the user the option to choose from three calculations to be performed on that number. The options are:

a. Sum of odd numbers from 1 to the user's chosen number
b. Sum of even numbers from 1 to the user's chosen number
c. Sum of odd and even numbers from 1 to the user's chosen number.

The code then calculates and outputs the results based on the user's choice. If the user inputs a number outside the range of 1 and 20, they are prompted to enter another number. The program uses while loops nad do/while loop instead of for loops to perform the calculations.

Also program uses <math.h> library to round decimal to nearest integers.
*/

#include <stdio.h>
#include <math.h>


int main(void) {

  char opt = '\0';
  int num, count = 0, sum = 0;
  float n;

   printf("Type an integer number between 1 and 20: \n"); // Asking user for an integer number between 1 and 20
   scanf(" %f", &n); //Reading user answer


  while (1==1){//while loop to keep asking for correct number to execute the rest of the code
  if (n <= 0 || n > 20){
    printf("Enter another number: \n"); // Action taken if number is less than 1 and bigger than 20
    scanf(" %f", &n); //Reading user answer
  }else
    break;//Braking loop if number given is outside of if statement what’s mean we can execute the rest of code below
  }

  n = round(n);//Rounding decimals to nearest ineger
   printf("What option below would you like to choose to do calculations? a, b or c?"); //asking user to choose an option from menu below

  do { /* loop do while starting - this loop will execute code below first and on the end will wait for users input of chosen menu option from question
          above*/

    if (opt == 'A' || opt == 'a'){
     if (n <= 0 || n > 20)
     {
     printf("Enter another number: \n"); // Action taken if number is less than 1 and bigger than 20
     }else{
      int sum = 0, count = 0;
      // Code below will be executed if user's number is within the range between 1 and 20 and instead of for loop like used for previous grades I used while loop

      int i = 1; // Initialize "i" variable to 1

      // Use while loop instead of for loop
      while (i <= n) {

      // 1st Loop to be executed from 1 increased by 2 up to user chosen number
      // to get all odd numbers from the range from 1 up to user selection

      int j = 1; // Initialize "j" variable to 1

      // Use inner while loop instead of for loop
      while (j <= i) {
      // 2nd Loop to be executed to print off all odd numbers from
      // user chosen range of numbers (from 1 up to user selection)

      printf("%d\t", j); // Print the current value of "j"
      j += 2; // Increase the value of "j" by 2
      }
      printf("\n"); // Print a new line after the inner loop is completed

      sum += i; // Sum of numbers will be calculated by adding "i" variable each time when 2nd loop is executed
      count++; // Each time 2nd loop is executed, "count" variable will be increased by 1 to calculate amount of odd numbers within user selection

      i += 2; // Increase the value of "i" by 2
      }

      //Printing results
      printf("\n\nSum of odd numbers from 1 to %.0f: %d", n, sum);
      printf("\n\nOdd numbers found: %d\n", count);
     }

    }else if (opt == 'B' || opt == 'b'){

    if (n <= 0 || n > 20){
     printf("Enter another number: \n"); // Action taken if number is less than 1 and bigger than 20
     }else{
      // Code to print even numbers in a range specified by the user and sum them up, instead of for loop as in previous Grades i used  while loop

      int sum = 0, count = 0;

      // Check if the upper limit is within the range of 1 and 20
      if (n >= 1 && n <= 20) {

      int i = 2;
      // Loop to get all even numbers from the range from 1 up to user selection
      while (i <= n) {
      int j = 2;
      // Loop to print off all even numbers from user chosen range of numbers (from 1 up to user selection)
      while (j <= i) {
      printf("%d\t", j);
      j += 2;
      }
      printf("\n");
      sum += i; // Sum of numbers will be calculated by adding "i" variable each time when 2nd loop will be executed
      count++; // Each time 2nd loop will executed "count" variable will be increased by 1 to calculate amount of even numbers within user selection
      i += 2;
      }
      } else {
      // Error message if the upper limit is not within the specified range
      printf("The upper limit must be within the range of 1 and 20\n");
      }
     //Printing results
     printf("\n\nSum of even numbers from 1 to %.0f: %d", n, sum);
     printf("\n\nEven numbers found: %d\n", count);
     }
     }else if (opt == 'C' || opt == 'c'){//below is again while loop instead of for loop used in previous Grades
      if (n <= 0 || n > 20){
      printf("Enter another number: \n"); // Action taken if number is less than 1 and bigger than 20
      }else{
        int sum = 0, count = 0;

        // Code below will be executed if user's number is in the range between 1 and 20
        int i = 1;
        while (i <= n) { // 1st Loop to be executed from 1 increased by 2 up to user chosen number
        // to get all numbers from the range from 1 up to user selection

        int j = 1;
        while (j <= i) { // 2nd Loop to be executed to print off all numbers from user chosen range of numbers (from 1 up to user selection)
        printf("%d\t", j);
        j++;
        }
        printf("\n");

        sum += i; // Sum of numbers will be calculated by adding "i" variable each time when 2nd loop will be executed
        count++; // Each time 2nd loop will executed "count" variable will be increased by 1 to calculate amount of all numbers within user selection range
        i++;
        }
        //Printing results
        printf("\n\nSum of all numbers from 1 to %0.f: %d", n, sum);
        printf("\n\nNumbers found: %d\n", count);
      }
    }
    printf("\n\na - odd\nb - even\nc - all\n"); //printing off all menu options
    scanf(" %c", &opt); //awaiting users selection
  } while (opt == 'A' || opt == 'a' || opt == 'B' ||  opt == 'b' || opt == 'C' || opt == 'c'); // conditions to meet to to execute appropriate menu users     selection

  getch();
}
