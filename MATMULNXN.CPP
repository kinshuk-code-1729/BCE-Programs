//WAP to find multiplication of two matrices.
#include<stdio.h>
int main(){
    int a[10][10]={0},b[10][10]={0},m[10][10],r,c,i,j,k,l,t;
    printf("For matrix multiplication the number of columns of first matrix must be equal to the rows of second matrix\nEnter the number of rows and columns of first matrix (must be less than 10) : ");
    scanf("%d%d",&r,&c);
    printf("Enter the elements for first array : ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    printf("\nEnter only the number of columns of second matrix (must be less than 10) : ");
    scanf("%d",&t);
    for(k=0;k<c;k++){
        for(l=0;l<t;l++)
        scanf("%d",&b[k][l]);
    }

for(i=0;i<r;i++){
        printf("\n");
        for(j=0;j<c;j++)
        printf("%d ",a[i][j]);
}
printf("\n");
for(i=0;i<c;i++){
        printf("\n");
        for(j=0;j<t;j++)
        printf("%d ",b[i][j]);
}
    for(i=0;i<r;i++){
        for(j=0;j<t;j++){
            m[i][j]=0;
            for(k=0;k<c;k++){
            m[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\nMatrix is : \n");
    for(i=0;i<r;i++){
        printf("\n");
        for(j=0;j<t;j++)
        printf("%d ",m[i][j]);
    }
    return 0;
}
