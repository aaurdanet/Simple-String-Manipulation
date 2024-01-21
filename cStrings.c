#include <Header01.c>

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h> // Include string.h for strlen and strrev functions
#include <conio.h>
#define CLS system("cls")
#define PAUSE system("pause")
#define SIZE 100

int main() {

	char s[SIZE];



	do {
		// get string
		printf("Enter a String please:\n");
		scanf(" %[^\n]", &s);// gets string
		printf("\nThe string you entered is bellow..... \n");

		// print normal string
		printf("\nForward: %s\n ", &s);


		//print vertically
		printf("\nVertically:\n ");
		printf("\n");
		for (int i = 0; s[i] != '\0'; i++) {

			printf("%c", s[i]);
			printf("\n");
		}// end vertically

		//print triangle
		int length = 0, c;
		printf("\nTriangle:\n");
		length = strlen(s);
		for (int i = length; i >= 0; i--) {
			printf("\n");
			for (c = 0; c < i; c++) {
				printf("%c", s[c]);
			}
		}// end triangle

		//reverse string
		_strrev(s);// reverses string
		printf("\nBackward: %s\n ", &s);//end of reverse

		//count char in string
		int count = 0;
		for (int i = 0; s[i] != '\0'; i++) {
			count++;

		}// counts chars in string 

		printf("\nThe number of characters in the string is %i.\t\n", count);// how to add more text after variable?
		printf("\n");
		count = 0;

	} while (s[SIZE] != 'Y' || 'N');// maybe use if statement but still works

	PAUSE;
	return 0;


}// end of main