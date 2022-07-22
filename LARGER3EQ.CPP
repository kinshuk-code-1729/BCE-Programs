#include<stdio.h>

int main(){
    int a,b,c;
    printf("\nEnter 3 numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b){
        if(a>c){
            if(a==b){
                printf("A and B is greater");
            }
            if(a!=b){
                printf("A is greater");
            }
        } else{
            if(a==b){
                if(a==c){
                    printf("A and B and C are equal");
                } else if(a<c){
                    printf("C is greater");
                } else{
                    printf("A and B is greater");
                }


            } else{
                if(a==c){
                    printf("A and C are greater");
                } if(a<c){
                    printf("C is greater");
                } if(a!=c){
                    printf("A is greater");
                }
            }
        }
    }
    else{
        if(b>=c){
            if(b==c){
                printf("B and C is greater");
            } else
                printf("B is greater");
            }
            else{
            printf("C is greater");
        }
    }
    return 0;
    }
