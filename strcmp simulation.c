#include <stdio.h>

int main()
{
    int i=0;
    char str1[100]="Sunbeam";
    char str2[100]="sunbeam";
    if(str1[i]==str2[i]){
        printf("str are equal");
    }
    else if(str1[i]!=str2[i]){
        printf("str are not equal");    
    }
    return 0;
}
