# include<stdio.h>
# include<math.h>
# include<limits.h>
# include<stdbool.h>

/*array input and printing

int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        printf("enter the element %d =",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<4;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}*/



/* to print the product of array 

int main(){
    int arr[5]={1,2,3,4,5};
    int p=1;
    for(int i=0;i<=4;i++){
        p*=arr[i];    
    }
    printf(" product is equal to= %d",p);
    return 0;
}*/



/*to print the maximum value of the array

int main(){
    int arr[4]={1,2,3,4};
    int max=arr[0];
    for(int i=0;i<4;i++){
        if(arr[i]>max){
            max=arr[i];
        } 
    }
    printf("the maximum value=%d",max);
    return 0;
}*/



/* to increase the value of the array by incresing the even
     indices by 10 and odd by multipling 2 
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
        if(i%2==0){
            arr[i]=arr[i]+10;
        }
        else arr[i]=arr[i]*2;    
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/



/*printing the subration of sum of even and odd indices means index

int main(){
    int even=0,odd=0;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
        if(i%2==0){
            even=even+arr[i];
        }
        else odd=odd+arr[i];    
    }
    printf("the subsraction sum of even and odd term is=%d",even-odd);
    return 0;
}*/



/*to check the pair whose sum is equivalent to the given number 

int main(){
    int x=5;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
        for(int j=i+1;j<=4;j++){
            if(arr[i]+arr[j]==x){
                printf("the pair is %d %d\n",arr[i],arr[j]);

            }
        }
    }
    return 0;
}*/



/*printing the second largest element of the array

int main(){
    int arr[4]={4,2,3,4,};
    int max=INT_MIN,smax=INT_MIN;
    for(int i=0;i<4;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i]&& max!=arr[i]){
            smax=arr[i];
        } 
    }
    printf("the max=%d and smax=%d",max,smax);
    return 0;
}*/


/*write a program to copy the element of one array to another  in reverse order

int main(){
    int arr[4]={1,2,3,4,};
    int brr[4];
    for(int i=0;i<4;i++){
        brr[i]=arr[4-1-i];
    }
    for(int i=0;i<4;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}*/



/*swap array without using extra array 


void main(int arr[]){
    int i=0,j=4-1;
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int arr[4]={1,2,3,4};
    reverse(arr);
    for(int i=0;i<4;i++) printf("%d ",arr[i]);
    return 0;

}*/




/*rotate arrray at k position

void reverse(int arr[],int a,int k){
    int i=a,j=k-1;
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
}

int main(){
    int k;
    printf("enter the number=");
    scanf("%d",&k);
    k=k%4;
    int arr[4]={1,2,3,4};
    reverse(arr,0,k);
    reverse(arr,k,4);
    reverse(arr,0,4);
    for(int i=0;i<4;i++) printf("%d ",arr[i]);
    return 0;
}

int main(){
    int arr[5]={1,2,1,3,2};
    for(int i=0;i<5;i++){
        bool f=false;
        for(int j=0;j<5;j++){
            if(i!=j && arr[i]==arr[j]){
                f=true;
            }
        }
        if(f==false){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}*/



/* Reversing the array

int main(){
    int n;
    printf("enter the length=");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements=");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0;i<n/2;i++){
        int t=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=t;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/



/*printing the repeating element

int  main(){
    int arr[7]={1,2,3,3,4,5,6};
    int brr[7]={};
    for(int i=0;i<7;i++){
        if(brr[arr[i]]==0){
            brr[arr[i]]=1;
        }
        else printf("%d",arr[i]);
    }
    return 0;
}*/




/*Check wheather the array is sorted or not

int main(){
    int arr[]={1,5,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool asc=true, desc=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            asc=false;
        }
        if(arr[i]>arr[i+1]) desc=false;
    }
    if(asc||desc) printf("array is sorted");
    else printf("array is not sorted");
    return 0;
}*/





/* deleting the specific element from the array and return it


int change(int arr[],int n, int target){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target) count++;
    }
    if(count==0){
        printf("the entered element is not fount in array");
        return 0;
    }
    int new_size=n-count;
    int brr[new_size];

    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=target){
            brr[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    printf("enter the number to delete :");
    scanf("%d",&target);
    change(arr,n,target);
    return 0;
}*/




/* check the given array is pallindrome number or not 

int main(){
    int arr[]={3,4,3,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i]=arr[n-1-i];
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]!=brr[i]){
            flag=false;
        }
    }

    if(flag==true) printf("pallindrome array");
    else printf("not pallindrome array");
    return 0;

}*/





/* with the help of pointer array the char element into other and display it

void copyarray(char *arr[],char *brr[],int n){
    for(int i=0;i<n;i++){
        *(brr+i)=*(arr+i);
    }
}
int main(){
    int n;
    printf("enter the length of the char array: ");
    scanf("%d",&n);
    char arr[n];
    printf("enter the elements: ");
    for(int i=0;i<n;i++){
        scanf(" %c",&arr[i]);
    }
    char brr[n];
    copyarray(arr,brr,n);
    printf("the old array: ");
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
    printf("the new array is: ");
    for(int i=0;i<n;i++){
        printf("%c ",brr[i]);
    }
    return 0;
}*/



/*merge two sorted array 

void sorted(int srr[],int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && srr[j]<srr[j-1]){
            int t=srr[j];
            srr[j]=srr[j-1];
            srr[j-1]=t;
            j--;
        }
    }
}
int main(){
    int arr[4]={2,5,6,4};
    int a=4;
    int b=3;
    int brr[3]={3,1,7};
    int n=a+b;
    int res[n];
    sorted(arr,a);
    sorted(brr,b);
    int i=0,j=0,k=0;
    while(i<a && j<b){
        if(arr[i]>brr[j]){
            res[k]=brr[j++];
        }
        else{
            res[k]=arr[i++];
        }
        k++;
    }
    while(i<a){
        res[k++]=arr[i++];
    }
    while(j<b){
        res[k++]=brr[j++];
    }
    for(int i=0;i<n;i++){
        printf("%d ",res[i]);
    }
    return 0;
}*/






