import java.nio.channels.Pipe.SourceChannel;
import java.util.*;
public class pattern_printing_4 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);


        /* 1 square printing of star * * * *
                                     * * * *
                                     * * * *
                                     * * * *
        int n = sc.nextInt();
        for (int i=1;i<=n; i++){
            for(int j=1;j<=n;j++){
                System.out.print("*");
            }
            System.out.println();
        }*/



        /*printing  1 2 3 4 5 
                    1 2 3 4 5  
                    1 2 3 4 5 
                    1 2 3 4 5

        int row =sc.nextInt();
        int col =sc.nextInt();
        for (int i=1;i<=row; i++){
            for (int j=1; j<=col;j++){
                System.out.print(j+" ");
            }
            System.out.println();
        }*/



        /*printing like 1 1 1 1 1 
                        2 2 2 2 2
                        3 3 3 3 3
                        4 4 4 4 4
                        5 5 5 5 5
         
        int row =sc.nextInt();
        int col =sc.nextInt();
        for (int i=1;i<=row; i++){
            for (int j=1; j<=col;j++){
                System.out.print(i+" ");
            }
            System.out.println();
        }*/



        /*printing alphabet A B C D  or A A A A    ONLY CHANGE IN i AND J
                            A B C D     B B B B    code can be written in 
                            A B C D     C C C C    different ways next example
                            A B C D     D D D D    check it

        int n= sc.nextInt();
        int m= sc.nextInt();
        for(int i=65;i<=64+n; i++){
            for (int j=65;j<=64+m;j++){
                System.out.print((char)j+" ");
            }
            System.out.println();
        }*/




        /*printing alphabets a a a a  OR  a b c d   Only change in i and j
                             b b b b      a b c d   code can be written in
                             c c c c      a b c d   different ways 
                             d d d d      a b c d
                             
        int n= sc.nextInt();
        int m= sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                System.out.print((char)(j+96)+" ");
            }
            System.out.println();
        }*/




        /*printing like this a a a a 
                             B B B B
                             C C C C
                             D D D D

        for(int i=1; i<=4;i++){
            for(int j=1; j<=4;j++){
                if(i==1) System.out.print((char)(i+96)+" ");
                else System.out.print((char)(i+64)+" ");
            }
            System.out.println();
        }*/




        /* to print the triangle *       
                                 * *     
                                 * * *   
                                 * * * *     
        
        int n =sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
            System.out.println();
        }*/




        /* pattern like this 1      OR               1
                             12          print i     22
         when print j        123                     333
                             1234                    4444
                             12345                   55555

        int n = sc.nextInt();
        for (int i=1;i<=n;i++){
            for (int j=1;j<=i;j++){
                System.out.print(j);
            }
            System.out.println();
        }*/






        /* pattern like 1           OR  print i    1
                        A B                        B B
           print j      1 2 3                      3 3 3 
                        A B C D                    D D D D  
                        1 2 3 4 5                  5 5 5 5 5    

        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if (i%2!=0) System.out.print(i+" ");
                else System.out.print((char)(64+i)+" ");
            }
            System.out.println();
        }*/



        
        /*  pattern like    ****
                            ***
                            **
                            *

        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n+1-i;j++){
                System.out.print(i);
            }
            System.out.println();
        }*/




        /* pattern like this 12345  OR              11111
                             ABCD       print i     BBBB
                print j      123                    333
                             AB                     DD
                             1                      5

        int n = sc.nextInt();
        for(int i=1;i<=n;i++){
            for (int j=1;j<=n+1-i;j++){
                if(i%2!=0) System.out.print(j);
                else System.out.print((char)(64+j));
            }
            System.out.println();
        }*/




        /* pattern rectangular   * * * * * * *
                                 *           *
                                 *           *
                                 *           *
                                 * * * * * * *
                                 
        int n=sc.nextInt();
        int m=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if (i==1 || i==n || j==1 || j==m){
                    System.out.print("* ");
                }
                else System.out.print("  ");
            }
            System.out.println();
        }*/




        /* patter like this       *     
                                  *
                              * * * * *
                                  *
                                  *
        System.out.print("enter only odd number==");
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if (i==n/2+1 || j==  n/2+1){
                    System.out.print("* ");
                }
                else System.out.print("  ");
            }
            System.out.println();
        }*/



        
        /*print example like       
                                  *       *
                                    *   *
                                      *
                                    *    *
                                  *        *
                                  
        System.out.print("enter odd number only");
        int n = sc.nextInt();
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                if (i==j || i+j==n+1){
                    System.out.print("*");
                }
                else System.out.print(" ");
            }
            System.out.println();
        }*/




        /* pattern like  1
                         2 3
                         4 5 6
                         7 8 9 10

        int n=sc.nextInt();
        int a=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print(a++ +" ");
            }
            System.out.println();
        }*/

    


        /* binary triangl   1
                            01
                            101
                            0101
                            10101
        
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if((i+j)%2==0) System.out.print("1");
                else System.out.print("0");
            }
            System.out.println();
        }*/



        /* pattern like   1
                          1 3
                          1 3 5
                          1 3 5 7
        
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print(2*j-1);
            }
            System.out.println();
        }*/




        /* vertically flipped like this         1 
                                              1 2
                                            1 2 3
                                          1 2 3 4
                                        1 2 3 4 5

        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
               System.out.print("  "); 
            }
            for (int j=1;j<=i;j++){
                System.out.print(j+" ");
            }
            System.out.println();
        }*/

        /* pattern like       A   or        A
                            B B           A B
                          C C C         A B C
                        D D D D       A B C D
        
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
               System.out.print("  "); 
            }
            for (int j=1;j<=i;j++){
                System.out.print((char)(64+j)+" ");
            }
            System.out.println();
        }*/
        
        


        /* pattern like        * * * * 
                             * * * *
                           * * * *
                         * * * *

        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
               System.out.print("  "); 
            }
            for (int j=1;j<=n;j++){
                System.out.print("* ");
            }
            System.out.println();
        }*/ 
        
        
        

        /* patter like this     * * * * 
                                  * * * 
                                    * * 
                                      *

        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i-1;j++){
               System.out.print("  "); 
            }
            for (int j=1;j<=n+1-i;j++){
                System.out.print("* ");
            }
            System.out.println();
        }*/




        /* pattern pyramid            * 
                                    * * *
                                  * * * * *
                                * * * * * * *
                              * * * * * * * * *

        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                System.out.print("  ");
            }
            for (int j=1;j<=2*i-1;j++){
                System.out.print("* ");
            }
            System.out.println();
        }*/





        /* pattern pyramid            * 
           second method            * * *
                                  * * * * *
                                * * * * * * *
                              * * * * * * * * *

        int n=sc.nextInt();
        int a = n-1 , b = 1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=a;j++){
                System.out.print("  ");
            }
            for (int j=1;j<=b;j++){
                System.out.print("* ");
            }
            a-=1;
            b+=2;
            System.out.println();
        }*/




        /*diamond pattern         * 
                                * * *
                              * * * * *
                            * * * * * * *
                              * * * * *
                                * * *
                                  *
         
        int n=sc.nextInt();
        int nst=1,nsp=n-1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=nsp;j++){
                System.out.print("  ");
            }
            for(int j=1;j<=nst;j++){
                System.out.print("* ");
            }
            nst+=2;
            nsp-=1;
            System.out.println();
        }
        
        nst=2*n-3 ; nsp=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=nsp;j++){
                System.out.print("  ");
            }
            for(int j=1;j<=nst;j++){
                System.out.print("* ");
            }
            nst-=2;
            nsp+=1;
            System.out.println();    

        }*/

        

        /* pattern bridge   * * * * * * * * * 
                            * * * *   * * * * 
                            * * *       * * * 
                            * *           * * 
                            *               * 
        
        int n=sc.nextInt();
        for(int i=1;i<=2*n-1;i++){
            System.out.print("* ");
        }
        System.out.println();
        for(int i=1;i<=n-1;i++){
            for(int j=1;j<=n-i;j++){
                System.out.print("* ");
            }
            for(int j=1;j<=2*i-1;j++){
                System.out.print("  ");
            }
            for(int j=1;j<=n-i;j++){
                System.out.print("* ");
            }
            System.out.println();
        }*/
    } 
}
