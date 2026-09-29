import java.util.*;
public class arrays_6 {
    public static void main(String []args){
        Scanner sc= new Scanner(System.in);



        /*  to print the items of array

        int [] arr= {1,2,3,4,5,6,7,8,9};
        int i=0;
        while(i<9){
            System.out.print(arr[i]+"  ");
            i+=1;
        }*/



        /* take a empty array and add items in array by input
           from user and display it

        System.out.print("enter the length of the array==");
        int x=sc.nextInt();
        int [] arr= new int[x];
        for(int i=0;i<x;i++){
            System.out.print("enter next element==");
            int a=sc.nextInt();
            arr[i]=a;
        }
        System.out.println();
        System.out.print("the elements of the aaray is = ");
        for(int i=0;i<x;i++){
            System.out.print(2*(arr[i])+" ");
        }*/




        /*  given an arraya print only negative numbers

        int [] arr= {1,-4,3,-3};
        for(int i=0;i<arr.length;i++){
            if(arr[i]<=0) System.out.print(arr[i]);
        }*/




        /* print the sum of element of array by input from user
        
        System.out.print("enter the length of the array==");
        int n=sc.nextInt();
        int [] arr=new int[n];
        System.out.print("enter the element==");
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        System.out.println("sum of element of array== "+sum);*/
        



        /* print max number in the array


        int [] arr= {2,4,6,8};
        int max=arr[0];
        for(int i=0;i<arr.length;i++){
            if(arr[i]>max) max=arr[i];
        }
        System.out.println("the max number is="+max);*/




        /* print the minimum number in the array

        int [] arr= {-3,-67,23,254,-4};
        int min=arr[0];
        for(int i=0;i<arr.length;i++){
            if(arr[i]<min) min=arr[i];
        }
        System.out.println("the minimum no.="+min);*/




        /* max and min in array in single programme

        int n=sc.nextInt();
        int [] arr=new int[n];
        System.out.print("enter the element== ");
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int max=arr[0];
        int min=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max) max=arr[i];
            if(arr[i]<min) min=arr[i];
        }
        System.out.println("max value is= "+ max);
        System.out.println("min value is= "+ min);*/
        
        
        
        
        
        /* checking the number is exist in array or not
        
        int [] arr={1,2,3,4,5,7,8,};
        int a= sc.nextInt();
        int c=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]==a) c=1;  
        }
        if(c==1) System.out.println("number exist");
        else System.out.println("not exist");*/





        /* printing the second largest element in the array 

        int[] arr={1,2,3,4,5,6,6};
        int max=0;
        int smax=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]>max) max=arr[i];
        }
        for(int i=0;i<arr.length;i++){
            if(arr[i]<max && arr[i]>smax) smax=arr[i];
        }
        System.out.println("the second maximum no. is"+smax);*/





        /* reversing an array 

        int [] arr={1,2,3,4,5};
        int n=arr.length;
        int i=0, j=n-1;
        while(i<j){
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
            i++;
            j--;

        }
        for(int element:arr){
            System.out.print(element+" ");
        }*/



        /* to reverse the selected part at the arrray  

        int[] arr={1,2,3,4,5};
        System.out.print("enter the turn point :");
        int d=sc.nextInt();
        int n=arr.length;
        d%=n;
        reverse(arr,0,n-1);
        reverse(arr,n-d,n-1);
        reverse(arr,0,n-d-1);

        for(int element:arr) System.out.print(element+" ");
        
    }
    public static void reverse(int[] arr,int i, int j){
        while(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;d
            i++;
            j--;
        }*/



    
        /* find the missing element in the array 


        int[] arr={};
        long n=arr.length+1;
        long sum=n*(n+1)/2;
        long arrsum=0;
        for(int ele:arr) arrsum+=ele;
        System.out.println((long)(sum-arrsum));*/




        /* to recreate the arr in systmatic way 

        int[] arr={0,0,1,1,0};
        int zero=0,one=0;
        for(int ele:arr){
            if(ele==0) zero++;
            else one++;
        }
        System.out.println(zero+" "+one);
        for(int i=0;i<zero;i++) arr[i]=0;
        for(int i=zero;i<arr.length;i++) arr[i]=1;
        for(int ele:arr) System.out.print(ele+" ");*/

        


        /* Previous question with two pointer method


        int [] arr={1,0,1,0,0,1,0,1,0,0,1};
        int i=0, j=arr.length-1;
        while(i<j){
            if(arr[i]==0) i++;
            else if(arr[j]==1) j--;
            else if(arr[i]==1 && arr[j]==0){
                int t =arr[i];
                arr[i]=arr[j];
                arr[j]=t;
                i++;
                j--;
            }        
        }
        for(int ele:arr) System.out.print(ele+" ");*/




        /* converting array into  wave array 

        int [] arr ={1,2,3,4,5};
        for(int i=0;i<arr.length;i+=2){
            if(i==arr.length-1) break;
            int t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
        }

        for(int ele:arr){
            System.out.print(ele+" ");
        }*/




        /* making arraylist and its functions and reversing 


        ArrayList <Integer> arr = new ArrayList<>(Arrays.asList(1,43,3,4));
        int n=arr.size();
        int i=0;
        int j=n-1;
        while(i<j){
            int t=arr.get(i);
            arr.set(i,arr.get(j));
            arr.set(j,t);
            i++;
            j--;
        }
        for(int ele:arr){
            System.out.print(ele+" ");
        }*/
        


        
        /*  add one in the array 


        int[] arr ={9,9,9};
        ArrayList <Integer> mrr=new ArrayList<>();
        int n=arr.length;
        int c=1;
        for( int i=n-1;i>=0;i--){
            if(arr[i]+c<=9){
                mrr.add(arr[i]+1);
                c=0;
            }
            else{
                mrr.add(0);
                c=1;
            }
        }
        if(c==1) mrr.add(1);
        Collections.reverse(mrr);
        System.out.println(mrr);*/




        /* merging two sorted array in new sorted array


        int[] arr1={1,3,7,14};
        int[] arr2={2,4,5,8};
        int[] arr3= new int[arr1.length+ arr2.length];
        int i=0,j=0,k=0;
        while(i<arr1.length && j<arr2.length ){
            if(arr1[i]<arr2[j]){
                arr3[k]=arr1[i];
                i++;
            }
            else{
                arr3[k]=arr2[j];
                j++;
            }
            k++;
        }
        while(i<arr1.length){
            arr3[k++]=arr1[i++];
        }
        while(j<arr2.length){
            arr3[k++]=arr2[j++];
        }    
        for(int ele:arr3) System.out.print(ele+" ");*/





        /*add same two list and then display it in arraylist

        int[] arr={9,9,9};
        ArrayList<Integer> mrr=new ArrayList<>();
        int n=arr.length;
        int c=0;
        for(int i=n-1;i>=0;i--){
            if(arr[i]+arr[i]+c<=9){
                mrr.add(arr[i]+arr[i]);
                c=0;
            }
            else {
                int add=(arr[i]+arr[i])%10;
                mrr.add(add+c);
                c=1;
            }       
        }
        if(c==1) mrr.add(1);
        Collections.reverse(mrr);
        System.out.print(mrr+" ");*/
        
        


        /*  merging two sorted array by back side 

        int[] arr1={1,3,7,14};
        int[] arr2={2,4,5,8};
        int[] arr3= new int[arr1.length+ arr2.length];
        int i=arr1.length-1, j=arr2.length-1,k=arr3.length-1;
        while(i>=0 && j>=0){
            if(arr1[i]>arr2[j]){
                arr3[k--]=arr1[i--];
            }
            else {
                arr3[k--]=arr2[j--];
            }
        }
        while(i>=0) arr3[k--]=arr1[i--];
        while(j>=0) arr3[k--]=arr2[j--];
        for(int ele:arr3) System.out.print(ele+" ");*/



        // sort 0 , 1 ,2 gfg practice
         

    }    
}