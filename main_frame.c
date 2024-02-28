#include <stdio.h>
#include <unistd.h>
#include <string.h>

void main() {
	char user[100], color[20], command[1000];
	char colors[100] = {"!" "@" "#" "$" "%" "^" "&"};
	int i, j;

	sleep(2);
	printf("Booting drivers...\n");

	sleep(2);
	printf("Starting...\n");

	sleep(2);
	printf("Hello! I'm a computer program.\n");

	sleep(2);
	printf("What's your name? ");

	scanf("%s", user);
	sleep(2);
	printf("%s,", user);

	sleep(2);
	printf(" pick a number:\n");
	sleep(2);

	for (i = 1;colors[i-1] != '\0';++i) {
		printf("%d. %c\n", i, colors[i-1]);
	}
	scanf("%d", &j);

	switch (j) {
		case 1:
			strcpy(color, "red");
			break;
		case 2:
			strcpy(color, "green");
			break;
		case 3:
			strcpy(color, "yellow");
			break;
		case 4:
			strcpy(color, "blue");
			break;
		case 5:
			strcpy(color, "magenta");
			break;
		case 6:
			strcpy(color, "cyan");
			break;
		case 7:
			strcpy(color, "white");
			break;
		default:
			strcpy(color, "default");
			break;
	}	
	sleep(2);
	printf("Welcome to the Matrix...\n");
	sleep(2);
	sprintf(command, "cmatrix -M %s -C %s", user, color);
	system(command);
}
