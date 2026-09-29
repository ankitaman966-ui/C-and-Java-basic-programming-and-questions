#include<stdio.h>

/* print multiplication of two matix

int main(){
    int m,n,p,q;
    //first matrix
    printf("enter the no. rows of first matrix=");
    scanf("%d",&m);
    printf("enter the no.columns of first matrix=");
    scanf("%d",&n);
    int arr[m][n];
    printf("enter the elements=");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    //second matrix
    printf("enter the no. rows of second matrix=");
    scanf("%d",&p);
    printf("enter the no.columns of second matrix=");
    scanf("%d",&q);
    int brr[p][q];
    printf("enter the elements=");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    //check condtion
    if(n!=p){
        printf("cannot be multipliesd");
        return 0;
    }
    int result[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            result[i][j]=0;
            for(int k=0;k<n;k++){
                result[i][j] += arr[i][k]*brr[k][j];
            }
        }
    }
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}*/



/*wave print karo matrix or 2d array 

int main() {
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        if(i%2==0){
            for(int j=0;j<3;j++){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int j=3-1;j>=0;j--){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}*/



/* wave print down to up

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int j=0;j<3;j++){
        if(j%2==0){
            for(int i=3-1;i>=0;i--){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int i=0;i<3;i++){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}*/



/* wave print up to dowm 

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int j=0;j<3;j++){
        if(j%2==0){
            for(int i=3-1;i>=0;i--){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int i=0;i<3;i++){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}*/



/* to print the element of the matrix in spiral order 

int main(){
    int m,n;
    //first matrix
    printf("enter the no. rows of first matrix=");
    scanf("%d",&m);
    printf("enter the no.columns of first matrix=");
    scanf("%d",&n);
    int arr[m][n];
    printf("enter the elements=\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int count=0;
    int total=m*n;

    while(count<total){
        for(int j=minc;j<=maxc && count<total;j++){
            printf("%d ",arr[minr][j]);
            count++;
        }
        minr++;
        for(int i=minr;i<=maxr&& count<total;i++){
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        for(int j=maxc;j>=minc && count<total;j--){
            printf("%d ",arr[maxr][j]);
            count++;
        }
        maxr--;
        for(int i=maxr;i>=minr && count<total;i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}*/


/*print spiral matrix 1 to n square where n is sqaure matrix 

int main(){
    int n;
    printf("enter the order of matrix=");
    scanf("%d",&n);
    int arr[n][n];
    printf("enter the elements=\n");
    int minr=0;
    int maxr=n-1;
    int minc=0;
    int maxc=n-1;
    int count=0;
    int total=n*n;

    while(count<total){
        for(int j=minc;j<=maxc && count<total;j++){
            scanf("%d",&arr[minr][j]);
            count++;
        }
        minr++;
        for(int i=minr;i<=maxr&& count<total;i++){
            scanf("%d",&arr[i][maxc]);
            count++;
        }
        maxc--;
        for(int j=maxc;j>=minc && count<total;j--){
            scanf("%d",&arr[maxr][j]);
            count++;
        }
        maxr--;
        for(int i=maxr;i>=minr && count<total;i--){
            scanf("%d",&arr[i][minc]);
            count++;
        }
        minc++;
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


