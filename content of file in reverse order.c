#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    long chLen;
    
    fp = fopen("/Users/kodebinary/first.txt",
               "r");
    
    fseek(fp, 0L, SEEK_END);
    chLen = ftell(fp); 
    fseek(fp, -1L, SEEK_CUR);
    while (chLen > 0)
    {
        ch = fgetc(fp);
        printf("%c", ch);
        chLen--;
        
        fseek(fp, -2L, SEEK_CUR);
    }
    printf("\n");
    return 0;
}