#include<stdio.h>
int main(){
    int i,j,rows,cols;
    printf("enter number of rows and columns:");
    scanf("%d%d",&rows,&cols);
    int matrix[rows][cols];
    int rowSum[rows],colSum[cols];
    //input matrix
    printf("enter elements of matrix:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    //intialize sums
    for(i=0;i<rows;i++){
        rowSum[i]=0;
    }
    for(j=0;j<cols;j++){
        colSum[j]=0;
    }
    // calculate row and column sums
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            rowSum[i]+=matrix[i][j];
            colSum[j]+=matrix[i][j];
        } 
    }
    //display row sums
    printf("/nsum of rows:\n");
    for(i=0;i<rows;i++){
        printf("row %d: %d\n",i+1,rowSum[i]);
    }
    //display column sums
    printf("/nsum of columns:\n");
    for(j=0;j<cols;j++){
        printf("column %d: %d\n",j+1,colSum[j]);
    }
    return 0;
}