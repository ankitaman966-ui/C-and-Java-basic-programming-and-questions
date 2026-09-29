# include<stdio.h>
int main(){


    /*print square  * * * * 
                    * * * *
                    * * * *
                    * * * *
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }*/




    /*print patter like  *
                         **
                         ***
                         ****   

    int n;
    printf("enter the length=");
    scanf("%d ",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");    
    }*/

    

    /*printing like this  1              1
                          22    print=j  12
        print=i           333            123
                          4444           1234
                          55555          12345      

    int n;
    printf("enter the length=");
    scanf("%d ",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");    
    }*/



    
    /*printing like this  A              A
                          BB    print=j  AB
        print=i           CCC            ABC
                          DDDD           ABCD
                          EEEEE          ABCDE     

    int n;
    printf("enter the length=");
    scanf("%d ",&n);
    for(int i=65;i<=64+n;i++){
        for(int j=65;j<=i;j++){
            printf("%c",i);
        }
        printf("\n");    
    }*/




    /* printing like this   ****  
                            ***
                            **
                            *          
   
    int n;
    printf("enter the length=");
    scanf("%d ",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("* ");
        }
        printf("\n");    
    } */




    /*print like 1 3 5 7
                 1 3 5 7
                 1 3 5 7
                 1 3 5 7  
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n;j++){
            printf("%d ",a);
            a+=2;
        }
        printf("\n");
    }*/



    /* print the figure 1 
                        1 3 
                        1 3 5 
                        1 3 5 7

    int n;
    printf("enter the length of the triagle=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        int for(int j=1;j<=i;j++){
            printf("%d ",a);
            a+=2;
        }
        printf("\n");
    } */
    
    
    
    /* print like this  1 
                        A B 
                        1 2 3 
                        A B C D 
                        1 2 3 4 5
                        
    int n;
    printf("enter the length of the triagle=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        int b=65;
        for(int j=1;j<=i;j++){
            if(i%2!=0) printf("%d ",j);
            else{
                printf("%c ",b);
                b++;
            }
        }
        printf("\n");
    }*/



    /*patter like this      *     
                            *
                        * * * * *
                            *
                            * 
    int n;
    printf("enter the length in odd number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==n/2+1 || j==n/2+1) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }*/



    /* pattern like this  1
                         121
                        12321
                       1234321

    int n;
    printf("enter the number=");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int j=1;j<=i-1;j++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    } */  
   
    
    
    /*pattern like this    *       
                         * * *     
                       * * * * *   
                     * * * * * * * 
                   * * * * * * * * *
                     * * * * * * *
                       * * * * *
                         * * *
                           *
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    int nsp=n-1,nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int j=1;j<=nst;j++){
            printf("* ");
        }
        nsp--;
        nst+=2;
        printf("\n");
    }
    nsp=1,nst=2*n-3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int j=1;j<=nst;j++){
            printf("* ");
        }
        nsp++;
        nst-=2;
        printf("\n");
    }*/



    /* Bridge pattern      * * * * * * * 
                           * * *   * * * 
                           * *       * * 
                           *           *    

    int n;
    printf("enter the length of bridge=");
    scanf("%d",&n);
    int a=n-1;
    for(int i=1;i<=2*n-1;i++){
        printf("* ");
    }
    printf("\n");
    for(int i=1;i<=a;i++){
        for(int j=1;j<=n-i;j++){
            printf("* ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("  ");
        }
        for(int j=1;j<=n-i;j++){
            printf("* ");
        }
        printf("\n");
    }*/

    /* bridge pattern   1 2 3 4 5 6 7 
                        1 2 3   5 6 7 
                        1 2       6 7 
                        1           7    

    int n;
    printf("enter the length of bridge=");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++){
        printf("%d ",i);
    }
    printf("\n");
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            printf("%d ",j);
        }
        for(int j=1;j<=2*i-1;j++){
            printf("  ");
        }
        for(int j=n+i;j<=2*n-1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }*/


    
    /* patter like this  3 3 3 3 3 
                         3 2 2 2 3 
                         3 2 1 2 3 
                         3 2 2 2 3 
                         3 3 3 3 3  

    int n;
    printf("enter the length=");
    scanf("%d",&n);
    int min=0;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a=i;
            if(i>n) a=2*n-i;
            int b=j;
            if(j>n) b=2*n-j;
            if(a<b) min=a;
            else min=b;
            printf("%d ",n+1-min);
        }
        printf("\n");
    }*/

    
    return 0;
}