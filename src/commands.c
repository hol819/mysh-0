#include <string.h>

#include "commands.h"

int do_cd(int argc, char** argv) {
	if (!validate_cd_argv(argc, argv))
    		return -1;

	// TODO: Fill it!
	else if(argc == 1)
		chdir(getenv("HOME"));
	
	else if(argc == 2)
	{
		if(chdir(argv[1])
			printf("Can't go to %s",argv[1]);
	}
	
	return 0;
}

int do_pwd(int argc, char** argv) 
{
	if (!validate_pwd_argv(argc, argv))
		return -1;
	
	// TODO: Fill it!

	else
	{
		printf("%s\n", getenv("PWD"));
	}
	return 0;
}

int validate_cd_argv(int argc, char** argv) 
{
	if(argc > 2)
	{
		printf("please input cd [dir]\n");
		return 0;
	}	


	// TODO: Fill it!
	return 1;
}

int validate_pwd_argv(int argc, char** argv) {
  // TODO: Fill it!
  return 1;
}
