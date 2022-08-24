#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char string[300];
    char words[300][300];
    int i = 0, j = 0, k, length, count;

    fp=fopen("text.txt","r");
    if(fp==NULL)
    {
        printf("\nFile cannot open or file not found...");
    }
    else
    {
        printf("%s",fgets(string,300,fp));

        for(k=0; string[k]!='\0'; k++)
        {

            if(string[k] != ' ' && string[k] != '\0')
            {
                words[i][j++] = tolower(string[k]);
            }
            else
            {
                words[i][j] = '\0';
                i++;
                j = 0;
            }
        }
        length = i+1;

        printf("\n Duplicate words are : \n");
        printf("\-----------------------\n");
        for(i = 0; i < length; i++)
        {
            count = 1;
            for(j = i+1; j < length; j++)
            {
                if(strcmp(words[i], words[j]) == 0 && (strcmp(words[j],"0") != 0))
                {
                    count++;
                    strcpy(words[j],"0");
                }
            }
            if(count > 1 )
                printf(" %s   : %d\n", words[i],count);
        }
        fclose(fp);
    }
    return 0;


}
