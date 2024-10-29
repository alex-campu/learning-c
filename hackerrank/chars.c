#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch[100];
    char s[100];
    char sen[100];
    
    scanf("%s", &ch);
    scanf("%s", &s);
    scanf("\n");
    scanf("%[^\n]%*s", &sen);
    
    printf("%s\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
