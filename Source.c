#include <stdio.h>
#include <string.h>

int main() {
	// declare and initialize the variables
	int iFind[5] = { 0 };
	char cStringA[11] = { '\0' };
	char cStringB[6] = { '\0' }; // index of 6 was used so the variable can terminate with a null
	int x;

	// enter the first string array and find character z
	printf("Please enter 5 characters with no spaces and press enter when done for string #1\n");
	printf("The program will detect if there is a \'Z\' or a \'z\' was entered in this string\n");
	gets(cStringA); // used gets instead of a loop to enter the string
	for (x = 0; x <= 4; x++) {
		if (cStringA[x] == 'z' || cStringA[x] == 'Z') {
			iFind[x] = 1;
		} // end if
	} // end for loop
	/* printf("\n%s\n", cStringA); test print */
	
	// output for Z match 
	if (iFind[0] == 1 || iFind[1] == 1 || iFind[2] == 1 || iFind[3] == 1 || iFind[4] == 1) {
		printf("\nMatch with character Z at position(s) ");
		for (x = 0; x <= 4; x++) {
			if (iFind[x] == 1) {
				printf("%d ", x);
			} // end if
		} // end for loop
		printf("detected\n");
	} // end if
	else {
		printf("\nThe character Z was not found\n");
	} // end else
	// enter the second string array and concatenate the first and second string into the first string
	printf("\nPlease enter 5 characters with no spaces and press return when done for string #2\n");
	gets(cStringB);
	/* printf("\n%s\n", cStringB); test print */
	strcat_s(cStringA, 11, cStringB); //strcat_s requires a size between the two strings
	printf("\n%s\n", cStringA);
	return 0;
} // end main