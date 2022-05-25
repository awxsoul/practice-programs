#include <math.h>
#include <stdio.h>

int main(){
    int n,d;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n!=0){
        d=n%10;
        if(d==0){
            printf("Not a Good Number");
            return 0;
            }
            n/=10;
        }
        printf("Is a Good number");
        return 0;
    }