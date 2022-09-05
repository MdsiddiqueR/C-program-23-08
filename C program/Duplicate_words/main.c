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
    //checking for file
    if(fp==NULL)
    {
        printf("\nFile cannot open or file not found...");
    }
    else
    {
        printf("%s",fgets(string,300,fp));
        
        //Spliting the string into words such that each row of array words represents a word.
        for(k=0; string[k]!='\0'; k++)
        {
            //i represents row and j represents column of two-dimensional array words.  
            if(string[k] != ' ' && string[k] != '\0')
            {
                //Converts the string into lowercase and add it to array words.
                words[i][j++] = tolower(string[k]);
            }
            else
            {
                words[i][j] = '\0';
                 //Increment row count to store new word
                i++;
                //Set column count to 0  
                j = 0;
            }
        }
        //Storing row count in variable length 
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
                    //Set words[j] to 0 to avoid printing visited word
                    strcpy(words[j],"0");
                }
            }
             //Displays the duplicate word if count is greater than 1 
            if(count > 1 )
                printf(" %s   : %d\n", words[i],count);
        }
        fclose(fp);
    }
    return 0;


}
