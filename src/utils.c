#include "utils.h"
#include <stdlib.h>

void mysh_parse_command(const char* command, int *argc, char*** argv)
{	
        char *str =(char*)malloc(sizeof(char)*255);
	str=command;
	if(str[strlen(str)-1]=='\n')
		str[strlen(str)-1]='\0';
	int count=0;	
	*argc = 0;

	char** stack;
	stack = (char**)malloc(sizeof(char*)*10);
	for(int i =0; i<10; i++)
		stack[i]=(char*)malloc(sizeof(char)*255);
	
                int i = 0;
                int t = 0;
		int con = 0;
                for (i = 0; *(str) != NULL; i++)
                {
                        for (t = 0; *(str) != NULL; t++)
                        {
				RE:
                                if (*(str) != '\0'&&*(str) != ' '&&*(str) != '\n'&&*(str) != '\t')
                                {
                                        *(*(stack + i) + t) = *str;
                                        str++;
					con = 1;
                                }
                                else
                                {
					if(con==1)
					{
						con = 0;
						count++;
                                        	*(*(stack+i) + t) = '\0';
                                        	str++;
						break;
					}
					else if(*(str)==NULL)
						break;
					else if(con==0);
					{
						str++;
						goto RE;
                                	}
				}
                        }
                }
                *(*(stack+i - 1) + t) = '\0';
		count++;
		
	
	
	
	/*int i=0;
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
	}*/
	if(count==0)
		count++;
	*argc=count;
	*argv=stack;
	
// TODO: Fill this!
}
