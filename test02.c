#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	char at[] = "cat ";
	char *command;
	size_t commandLength;

	commandLength = strlen(at) + strlen(argv[1])+1;
	command =(char *)malloc(commandLength);
	strncpy(command, at, commandLength);
	strcat(command, argv[1]);
	system(command);
	return(0);
}
