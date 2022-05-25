#include <stdio.h>
#include <math.h>

int main(){
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    if(x==1){
        printf("January");
    }
    else if(x==2){
        printf("Feburary");
    }
    else if(x==3){
        printf("March");
    }
    else if(x==4){
        printf("April");
    }
    else if(x==5){
        printf("May");
    }
    else if(x==6){
        printf("June");
    }
    else if(x==7){
        printf("July");
    }
    else if(x==8){
        printf("August");
    }
    else if(x==9){
        printf("September");
    }
    else if(x==10){
        printf("October");
    }
    else if(x==11){
        printf("Novemeber");
    }
    else if(x==12){
        printf("December");
    }
    else {
        printf("Invalid Month");
    }
    return 0;
}