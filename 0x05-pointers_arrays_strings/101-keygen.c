#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * 101-keygen - generates random valid passwords for the program
  * @int: The int to be treated
  *
  * Return: 0( sucess )
  */
void generatePassword(int len) {
   char possibleChars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()";
   char password[len+1];
   int i;
   
   srand(time(0)); 
   for(i = 0; i < len; i++) {
      int randomIndex = rand() % (sizeof(possibleChars) - 1);
      password[i] = possibleChars[randomIndex];
   }
   
   password[len] = '\0'; 
   printf("The randomly generated password is: %s\n", password);
}

int main() {
   int len = 10; 
   generatePassword(len);
   return 0;
}
