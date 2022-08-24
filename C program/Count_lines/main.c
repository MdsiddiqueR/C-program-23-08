#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    int count_lines = 0;
    int empty_lines = 0;

    fp=fopen("text.txt","r");
    if(fp==NULL)
    {
        printf("\nFile cannot open or file not found...");
    }
    else{
    c=getc(fp);
    while(c!=EOF)
    {
        c=fgetc(fp);
        if(c==EOF)
            break;
        printf("%c",c);

        if (c == '\n')
        {
            count_lines++;
        }

    }
    fclose(fp);
    printf("-------------------------------------------------------------------------");
    printf("\n There are %d lines in a file\n", count_lines);
    }
    return 0;
}
