#include "utils.h"
#include <stdlib.h>

void mysh_parse_command(const char* command, int *argc, char*** argv)
{	
	int count=0;	
	*argc = 0;
	

	char** stack;
	stack = (char**)malloc(sizeof(char*)*10);
	for(int i =0; i<10; i++)
		stack[i]=(char*)malloc(sizeof(char)*255);
	int i=0;
	int t=0;
	int c=0;
	for(i=0;*(command+c)!=NULL;i++)
	{
		for(t=0; *(command+c)!=NULL; t++)
		{
			RE:
			if(*(command+c)!=NULL&&*(command+c)!=' '&&*(command+c)!='\n'&&*(command+c)!='\t')
			{
				*(*(stack+i)+t)=*(command+c);
				c++;
				if(*(command+c)==' '||*(command+c)==NULL||*(command+c)=='\n'||*(command+c)=='\t')
				{
					count++;
					*(*(stack+i)+t+1)='\0';
					c++;
					break;
				}
			}
			else
			{ 
				if(*(command+c)==NULL)
					break;
				c++;
				goto RE;
			}
		}
	}
	if(count==0)
		count++;
	*argc=count;
	*argv=stack;
	
// TODO: Fill this!
}
