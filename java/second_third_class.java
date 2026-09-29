import java.util.*;
public class second_third_class{
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);

        // perimeter and area of rectangle or which is greater

        /*double l = sc.nextDouble();
        double b = sc.nextDouble();
        double p = 2*(l+b);
        double a = l*b;
        if (a>p) System.out.println("area is greater than perimeter");
        else System.out.println("area is not greater than perimeter");*/



        // checking the quadrant of coordinate given by user

        /*System.out.print("enter the first cordinate==");
        int x= sc.nextInt();
        System.out.print("enter the second cordinate==");
        int y= sc.nextInt();
        if (x==0 && y==0) System.out.println("orgin");
        else if (x!=0 && y==0) System.out.println("on the x axis");
        else if (x==0 && y!=0) System.out.println("on the y axis");
        else if (x>0 && y>0) System.out.println("first quadrant");
        else if (x<0 && y>0) System.out.println("second quadrant");
        else if (x<0 && y<0) System.out.println("third quadrant");
        else System.out.println("fourth quadrant");*/



        // out of three number checking the least number

        /*System.out.println("enter the three no.");
        int a= sc.nextInt();
        int b= sc.nextInt();
        int c= sc.nextInt();
        if (a<b && a<c) System.out.println("a is least");
        else if (b<a && b<c ) System.out.println("b is least");
        else System.out.println("c is least");*/



        // use of ternary to print odd or even numbers and put a value

        /*int n= sc.nextInt();
        System.out.println((n%2==0) ? "even" : "odd");
        int p = (n%2==0) ? 100 : 200;
        System.out.println(p);*/



        // Print the number which is divisible by 3 but not an even number
        
        /*int n = sc.nextInt();
        for (int i=1;i<=100; i++){
            if (i%2!=0 && i%3==0) System.out.println(i);
        }*/



        // make a arthmetic progression AP

        /*int n = sc.nextInt();
        int a = sc.nextInt();
        int d = sc.nextInt();
        for(int i=a; i>0;i=i+d){
            System.out.println(i);
        }*/


        // make a Gp

        /*int a=1 , r=2;
        for(int i=1; i<=5; i++){
            System.out.println(a);
            a*=r;*/


        // to print number like(first and last) 1 6 2 5 3 4-------
        
        /*int n=sc.nextInt();
        for(int i=1;i<=3;i++){
            System.out.println(i);
            System.out.println(n-(i-1));
        }*/



        // print ascii value from alphabet to integer value
        
        /*for (int i=97;i<=122; i++){
            System.out.print((char)i+ " ");
        }*/
        /*char z = sc.next().charAt(0);
        int n = (int) z;
        System.out.println(n);*/



        // check wheather prime or composite

        /*int n= sc.nextInt();
        int x=0;
        for (int i=2; i<Math.sqrt(n); i++){
            if (n%i==0){
                 System.out.println("composite numbers");
                 x=1;
                 break;
            }
        }
        if (x==0) System.out.println("prime no.");*/


        
        // to print the factor of the given number

        /*int n = sc.nextInt();
        for (int i=1; i<=Math.sqrt(n); i++){
            if(n%i==0){
                System.out.print(i+" and ");
                if (i!=n/i) System.out.println(n/i);
            }
            
        }*/



        // to count the digit of a number

        /*int n=sc.nextInt();
        int count=0;
        while(n!=0){
            count= count+ 1;
            n/=10;
        }
        System.out.println(count);*/



        // to calculate the factorial of a number

        /*System.out.print("enter the number==");
        int n= sc.nextInt();
        int fact=1;
        while(n!=0){
            fact*=n;
            n-=1;

        }
        System.out.println(fact);*/



        // to calculate  a to the power b

        /*System.out.println();
        System.out.print("enter the number=");
        int a=sc.nextInt();
        int n=a;
        System.out.print("enter the power=");
        int b=sc.nextInt();
        while(b-1!=0){
            a=a*n;
            b-=1;
        }
        System.out.println(a);*/

    }     
}