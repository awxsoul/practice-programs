#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char x[20];
    char y,z;
    int i,j,count;
    printf("Enter the string : ");
    scanf("%s",&x);
    printf("Enter the char to check : ");
    scanf("%s",&y);
    count=0;
    for(i=0; i<=strlen(x); i++){
        z=x[i];
        if(z==y && count==0){
            for(j=0; j<=(i+1); i++){
                printf("%s",x[j]);
                printf(" First occurance\n");
                count=count+1;}}
        else {continue;}
    }
    if(count==0){
        printf("There is no occurance of %s",y);
    }
    else{
        count=0;
        for(i=0; i<=strlen(x); i++){
            z=x[-(i+1)];
            if(z=y && count==0){
                for(j=0; j<=(i+1); i++){
                    printf("%s",x[j]);
                    printf(" Last occurance\n");
                    count=count+1;}}
            else {continue;}
        }
    }
    return 0;
}
