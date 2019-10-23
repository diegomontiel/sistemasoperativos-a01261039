#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int num = 0;
  int prime = 0;
  int first = 1;

  while(1){
    if(first){

        scanf("%d\n",&num);
        prime = num;
        fprintf(stderr,"primo %d\n", num);
        first=0;

    }else{

        if(num == -1){
            break;
        }

        scanf("%d\n",&num);
        if(num%prime!=0){
            printf("%d\n",num);
        }

    }
  }
}