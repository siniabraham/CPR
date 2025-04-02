#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

void converting(void) {
	printf("*** Start of Converting String to int Demo ***\n");
	char intString[BUFFER_SIZE];
	int intNumber;
	do {
	    printf("Type an int numeric string (q - to quit):\n");
		fgets(intstring, BUFFER_SIZE, stdin);
		intString[strlen(intString) - 1] = '\0';
		  if (strcmp(intString, "q") != 0) 
		  {
			intNumber = atoi(intstring);
			printf("Converted number is %d\n", intNumber);

		  }

	 }

	while (strcmp(intString, "q") != 0);
	printf("*** End of Converting String to int Demo ***\n\n");

		

}
