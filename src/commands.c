#include <string.h>

#include "commands.h"
int do_cd(int argc, char** argv) {

	if (!validate_cd_argv(argc, argv))
    		return -1;

	// TODO: Fill it!
	else if(argc == 1)
		chdir("/home/aeis");
	
	else if(argc == 2)
	{
		if(chdir(argv[1]))
			return -1;
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
		char buf[255];
		getcwd(buf,255);
		printf("%s\n", buf);
	}
	return 0;
}

int validate_cd_argv(int argc, char** argv) 
{
	if(strcmp(argv[0],"cd")==0)
	{
		if(argc == 2)
			return 1;
		
		else
		{
			printf("validate fail...\n");
			return 0;
		}
	}
	else	// TODO: Fill it!
		return 0;
}

int validate_pwd_argv(int argc, char** argv) {
  // TODO: Fill it!
	if(strcmp(argv[0],"pwd")==0)
	{
		if(argc==1)
			return 1;
		else
		{
			printf("validate fail...\n");
			return 0;
		}
	}
	else
		return 0;
}
