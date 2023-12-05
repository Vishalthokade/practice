#include <stdio.h>
#include <string.h>

     void swap(char *str1, char *str2){
         char *temp;
         *temp=*str1;
         *str1=*str2;
         *str2=*temp;
     }
   
    char *strrev(char *str){
        int i=0; 
    int j=strlen(str)-1;
    while(i<j){
       swap(&str[i], &str[j]);
       i++;
       j--;
    }
       return str;
  }
    
    int main(){
    //simulation of strrev
    char str[8]="sunbeam";
    //printf("enter string: ");
    //scanf("%s", str);
    char *s=strrev(str);
    printf("reversed string: %s",s);

    return 0;
}
