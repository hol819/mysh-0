#include "utils.h"

void mysh_parse_command(const char* command, int *argc, char* argv[])
{	
	argc = 0;
	const int comm = 1;
	char* stack
	for(int i=0; command[i] != '\0'; i++)
	{
		
		if(command[i] != " ")
		{
			argv[argc][i] = command[i];			
		}
		else if(command[i] == " ")
		{	
			argc++;
		}
	}
	argc++;
	/*printf("argc == [%d], argv == [ ",&argc);
	for(int i=0; i < argc; i++)
	{
		printf("'%s' ",&argv[i]);
	}
	printf("]\n");*/
	
  // TODO: Fill this!
}
