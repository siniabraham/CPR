#include "manipulating.h"
#include <stdio.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
void manipulating() {
/* Version 1 */

printf("*** Start of Concatenating Strings Demo ***\n");
char string1[BUFFER_SIZE];
char string2[BUFFER_SIZE];

do {
	printf("Type the 1st string (q - to quit):\n");
	fgets(string1, BUFFER_SIZE, stdin);
	string1[strcspn(string1, "\n")] = '\0';
	if (strcmp(string1, "q") == 0)
		break;

	printf("Type the 2nd string:\n");
	fgets(string2, BUFFER_SIZE, stdin);
	string2[strcspn(string2, "\n")] = '\0';

	if (strlen(string1) + strlen(string2) < BUFFER_SIZE - 1) {
		strcat(string1, string2);
		printf("Concatenated string is '%s'\n", string1);
	}
	else {
		printf("Concatenation exceeds buffer size!\n");
	}
} while (1);
printf("*** End of Concatenating Strings Demo ***\n");
}

int main() {
	manipulating();
	return 0;

}
