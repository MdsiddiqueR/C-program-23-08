#include <stdio.h>
#define MAXLINE 1000

char line[MAXLINE];
int getline(void);

int main()
{
    int t,len;
    int location,spaceholder;
    const int MAXLENGTH=40;

    while((len=getline()) > 0)
    {
        if(len < MAXLENGTH)
        {
        }
        else
        {
            t = 0;
            location = 0;
            while(t<len)
            {
                if(line[t]==' ')
                    spaceholder = t;

                if(location==MAXLENGTH)
                {
                    line[spaceholder]='\n';
                    location=0;
                }
                location++;
                t++;
            }
        }
        printf("\n%s",line);
    }
    return 0;
}

int getline(void)
{
    int c, i;
    extern char line[];

    for(i=0; i<MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; i++)
        line[i]=c;
    if(c=='\n')
    {
        line[i] = c;
        ++i;
    }
    line[i]='\0';
    return i;
}
