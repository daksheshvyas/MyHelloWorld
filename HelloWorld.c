#include <stdio.h>
#include <stdlib.h>

int main(){

        int count,i;
        char* msg = "Hellow World";
        
        for(i=0;i<count;i++)
                printf("%d. %s",i+1,msg);

        printf("%s is printed %d times and program ends",msg,count);
        char* ptrTmp = (char*)malloc(64); ;
        return 0;

}
