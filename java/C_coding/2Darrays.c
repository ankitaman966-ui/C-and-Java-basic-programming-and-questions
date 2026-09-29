# include <stdio.h>


/* making an 2D array input form user and display them

int main() {
    int r,c;
    printf("enter the rows=");
    scanf("%d",&r);
    printf("enter the columns=");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter the elements=");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}*/




/* add two matrix using 2d array

int main(){
    int a[2][2]={1,2,3,4};
    int b[2][2]={5,6,7,8};
    int sum[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/




/* sum of element of matrix order m*n 

int main() {
    int r,c;
    printf("enter the rows=");
    scanf("%d",&r);
    printf("enter the columns=");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter the elements=");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
    }
    printf("sum of the matrix is: %d",sum);
    return 0;
}*/


/* print max and min element of the 2d array with their index position 

int main(){
    int arr[2][2]={{1,2},{3,4}};
    int max=arr[0][0];
    int min=arr[0][0];
    int x1=0,x2=0,y1=0,y2=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
                x1=i;
                y1=j;
            }
            else if(arr[i][j]<min){
                min=arr[i][j];
                x2=i;
                y2=j;
            }
        }
    }
    printf("max value=%d at %d,%d\n",max,x1,y1);
    printf("min value=%d at %d,%d\n",min,x2,y2);
    return 0;
}*/




/* print the row no. and sum which has greater sum of element amongst all row 

int main(){
    int arr[3][3]={{1,2,6},{3,4,3},{4,1,3}};
    int max=0,rsum=0;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum>rsum){
            max=i;
            rsum=sum;
        }
    }
    printf("the %d row has greater sum=%d",max,rsum);
    return 0;
}*/




/* print the row no. which has greater no. of 1  

int main(){
    int arr[3][4]={{1,1,1,1},{0,1,1,0},{1,1,0,1}};
    int max=0,maxcount=0;
    for(int i=0;i<3;i++){
        int count=0;
        for(int j=0;j<4;j++){
            if(arr[i][j]==1) count++;
            
        }
        if(count>maxcount){
            max=i;
            maxcount=count;
        }

    }
    printf("the %d row has greater one =%d",max,maxcount);
    return 0;
}*/




/* transpose of a matrix of r*c 

int main() {
    int r,c;
    printf("enter the rows=");
    scanf("%d",&r);
    printf("enter the columns=");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter the elements=");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int brr[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            brr[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}*/




/*transpose of matrix of order only n*n 

int main() {
    int n;
    printf("enter the rows=");
    scanf("%d",&n);
    int arr[n][n];
    printf("enter the elements=");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // transpose by swap
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int t=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=t;
        }
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




/*roate a matrix 90 degree n*n 

int main(){
    int n;
    printf("enter the dimension of matirx=");
    scanf("%d",&n);
    int arr[n][n];
    printf("enter the elements=");
    // taking input form user
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //transpose of the matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int t=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=t;
        }
    }
    printf("\n");
    // after transpose reverse row element
    for(int i=0;i<n;i++){
        int j=0,k=n-1;
        while(j<k){
            int t=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=t;
            j++;k--;
        }
    }
     printf("\n");
    // output show
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


/* multiplication of two matrix

int main(){
    int a[2][2]={1,2,3,4};
    int b[2][2]={5,6,7,8};
    int res[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res[i][j]=0;
            for(int k=0;k<2;k++){
                res[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}*/



