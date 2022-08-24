#include <stdio.h>
#include <stdlib.h>

    int main()
    {
        FILE *fp;
        char c;
        fp=fopen("text.txt","r");
        if(fp==NULL)
        {
            printf("\nFile cannot open or file not found...");
        }
        c=getc(fp);
        while(c!=EOF)
        {
            c=fgetc(fp);
            if(c==EOF)
                break;
            printf("%c",c);
        }
        return 0;
    }
