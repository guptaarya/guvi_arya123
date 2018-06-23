
#include<stdio.h>
#include<string.h>

int main(){
    char word[50];
    gets(word);
    int len = strlen(word);
    //printf("%d",len);
    char nword[len];
    char s[100];
    strcpy(nword,word);
    puts(nword);
    printf("\n");
    gets(s);
    //printf("%d",strlen(s));
    char a[50][50];
    int i,j,k;
    j = 0;
    for(i=0;i<strlen(s);i++)
    {
        a[i][j] = s[i];
        printf("%c",a[i][j]);
        if(s[i] == ' ')
        {
            j++;
            printf("\n");
        }
    }
    printf("%d",j);
    k = j;
    //printf("\nk assigned\n");
    j = 0;
    //printf("j equal to zero\n");
    int count = 0;
    int temp = 0;
    //printf("count initialized.\n");
    for(i=0;i<k;i++)
    {
        if(strcmp(a[i],nword) == 0)
            count++;
    }
    printf("\n%d",count);
    return 0;
}
