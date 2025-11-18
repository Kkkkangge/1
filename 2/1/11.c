#include<stdio.h>
#include<string.h>
int main(){  
char a[81];
    gets(a);
    int n= strlen(a);int flag=0;
    // printf("%s%d",a,n);
    int i,j;
    for( i=0,j=n-1;i<j;i++,j--){
        if(a[i]!=a[j]){
            break;
        }
    }
    if(i>=j){printf("%s是回文",a);    
    }
    else{
        printf("%s不是回文",a);
    }
   
  
    return 0;}
