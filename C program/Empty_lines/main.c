#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    int empty_lines = 0;

    fp=fopen("text.txt","r");
    if(fp==NULL)
    {
        printf("\nFile cannot open or file not found...");
    }
    else
    {
        //extract character from file and store in fp
        c=getc(fp);
        while(c!=EOF)
        {
            c=fgetc(fp);
            if(c==EOF)
                break;
            printf("%c",c);

            if (c == '\n')
            {
                if ((c = fgetc(fp))  ==  '\n')
                {
                    fseek(fp, -1, 1);
                    //Count emptyline is encountered
                    empty_lines++;
                }
            }

        }
        //File close
        fclose(fp);

        printf("\n\n There are %d empty lines in a file\n", empty_lines);
    }
    return 0;
}
