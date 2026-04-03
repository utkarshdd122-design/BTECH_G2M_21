#include<stdio.h>
int main(){
    int n;
    printf("enter the size of matrix:");
    scanf("%d",&n);
    int matrix[n][n];
    printf("enter the elements of matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int frequency[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            frequency[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int count=1;
            for(int k=i;k<n;k++){
                for(int l=0;l<n;l++){
                    if(matrix[i][j]==matrix[k][l]){
                        if(i==k && j==l){
                            continue;
                        }
                        count++;
                    }
                }
            }
            frequency[i][j]=count;
        }
    }
    printf("frequency of elements in matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",frequency[i][j]);
        }
        printf("\n");
    }
    return 0;
}