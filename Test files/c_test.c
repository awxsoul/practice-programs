
#include <math.h>
#include <stdio.h>

void area_c(){
    float r,a;
    scanf("%f",&r);
    a=3.14*r*r;
    printf("%.2f m sq",a);
}
void main(){
    area_c();

 ---------------------

// Elab question lvl01 ch15

int main(){
    int n=15;
    int set;
    set=n%8;
    printf("%d",set);
    if(set==0 || set==8){
        printf("%dSL",n);
    }
    else if(set==7){
        printf("%dSU",n);
    }
    else if(set==6){
        printf("%dUB",n);
    }
    else if(set==5){
        printf("%dMB",n);
    }
    else if(set==4){
        printf("%dLB",n);
    }
    else if(set==3){
        printf("%dUB",n);
    }
    else if(set==2){
        printf("%dMB",n);
    }
    else if(set==1){
        printf("%dLB",n);
    }
    return 0;
}

---------------------------

int main(){
    int x;
    printf("Enter the number :");
    scanf("%d",x);
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
        printf("November");
    }
    else if(x==12){
        printf("December");
    }
    else {
        printf("Invalid Month");
    }
    return 0;
}


 // Question 02

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


int main(){
    float a=1.0,b=2.0,*fptr1,*fptr2;
    fptr1=&a;
    fptr2=&b;
    printf("Result for '==' is ",fptr1==fptr2);
    printf("Result for '!=' is ",fptr1!=fptr2);
    printf("Result for '<=' is ",fptr1<=fptr2);
    printf("Result for '>=' is ",fptr1>=fptr2);
    printf("Result for '>' is ",fptr1>fptr2);
    printf("Result for '<' is ",fptr1<fptr2);
    return 0;
}

// all the relational operators using poinyers