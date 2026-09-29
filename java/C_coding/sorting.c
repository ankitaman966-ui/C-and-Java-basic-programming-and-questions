
# include<stdio.h>
# include<string.h>
#include<stdbool.h>

/*bubble sort in asccending order 

int main(){
    int arr[5]={2,1,5,3,4};
    int n=5;
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                flag=false;
            }
        }
        if(flag==true) break;
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/



/*bubble sort in descending order

int main(){
    int arr[5]={2,1,5,3,4};
    int n=5;
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                flag=false;
            }
        }
        if(flag==true) break;
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/



/*selection sort ascending order

int main(){
    int arr[]={2,4,1,5,3};
    int n=5;
    for(int i=0;i<n-1;i++){
        // finding the minimum value of the element 
        int min=arr[i],min_index=-1;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<min){
                min=arr[j];
                min_index=j;
            }
        }
        //swap numbers element 1 with min_index value
        int t=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=t;
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/




/*insertion sort means sorting from back till its position found

int main(){
    int arr[]={5,4,2,3,1};
    int n=5;
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            int t=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=t;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/




/* question to {5,2,0,4,1,0,6,0,3} sending all zero at last 

int main(){
    int arr[9]={5,2,0,4,1,0,6,0,3};
    int n=9;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/




/*question to {5,2,0,4,1,0,6,0,3} and the k th largest element

int main(){
    int arr[]={5,2,0,4,1,6,0,3};
    int n=8;
    int k;
    printf("enter the kth element to find kth largest element:");
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        int min=arr[i],minindex=i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<min){
                min=arr[j];
                minindex=j;
            }
        }
        int t=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=t;
    }
    printf("\n");
    printf("%d ",arr[k-1]);

    return 0;
}*/ 


/* given an array having number from 0-9 as element form  two number
   from the array such that first is minimum no and second mimum number
   then find the number of both numbers */

int main(){
    int n=5;
    int arr[5]={5,6,0,3,2};
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            int t=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=t;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int first=0,second=0;
    for(int i=0;i<n;i++){
        first=first*10+arr[i];
    }
    for(int i=n-1;i<=1;i--){
        if(arr[i]!=arr[i-1]){
            int t=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=t;
            break;
        }
    }
    for(int i=0;i<n;i++){
        second=second*10+arr[i];
    }
    printf("the first number is %d\n",first);
    printf("the second number is %d\n",second);
    printf("the sum of first min and second min is:%d",first+second);
    return 0;
}
