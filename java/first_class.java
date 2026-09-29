import java.util.*;
public class first_class {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);

        // student result checking

        /*System.out.print("enter the marks of sub1==");
        int sub1 = sc.nextInt();
        System.out.print("enter the marks of sub2==");
        int sub2 = sc.nextInt();
        System.out.print("enter the marks of sub3==");
        int sub3 = sc.nextInt();
        if (sub1 >= 33 && sub2 >= 33 && sub3>33){
            System.out.println("he pass each subject criteria of 33%");
            double percentage = (sub1 + sub2 + sub3)*100/300;
            if (percentage >= 40){
                System.out.println("percentage of the student is =" + percentage );
                System.out.println("student pass the exam" );
            }
            else{
                System.out.println("percentage of the student is= " + percentage);
                System.out.println("he not able to pass the exam");
            }
        }        
        else{
            System.out.println("he not pass each subject criteria of 33%");
        }*/



        // income tax department

        
        /*System.out.print("income tax data here number show the lakh rupee \n enter your income==");
        float income = sc.nextFloat();
        float tax = 0;
        if (income<=2.5f){
            System.out.println("no tax charge on this income range ");
        }
        else if (income>2.5f && income<=5f){
            tax = tax + 0.05f*(5f-income);
            System.out.println("taxes charge on this income and it is equal to="+(tax*100000));
        }
        else if (income>5f && income<=10f){
            tax = tax + 0.05f*(5f-2.5f);
            tax = tax + 0.20f*(income-5f);
            System.out.println("the charge on this income and it is equal to="+(tax*100000));
        }
        else{
            tax = tax + 0.05f*(5f-2.5f);
            tax = tax + 0.20f*(income-5f);
            tax = tax + 0.30f*(income-10f);
            System.out.println("the tax charge on this income is equal to="+(tax*100000));
        }*/



        //Calendar 

        /*int day = sc.nextInt();
        switch(day){
            case 1 -> System.out.print("monday");
            case 2 -> System.out.print("tuesday");
            case 3 -> System.out.print("wednesday");
            case 4 -> System.out.print("thursday");
            case 5 -> System.out.print("friday");
            case 6 -> System.out.print("saturday");
            case 7 -> System.out.print("sunday");
        }*/



        // leap year checking

        /*System.out.print("enter the year==");
        int year = sc.nextInt();
        if (year==1900){
            System.out.println("it is not a year");
        }
        else{
            if ((year%=4)==0){
                System.out.println("it is leap year");
            }
            else{
                System.out.println("it is not a leap year");
            }
        }*/




        // checking for links
        
        /*System.out.print("enter the link==");
        String str = sc.nextLine();
        if (str.endsWith(".com")){
            System.out.println("it is a commercial website");
        }
        else if (str.endsWith(".org")){
            System.out.println("it is a organization website");
        }
        else if (str.endsWith(".in")){
            System.out.println("it is a indian  website");
        }
        else{
            System.out.println("this is not belong to commercial website \n organization website \n indian website");
        }*/



        // to calculate the loss and profit

        /*int cost = sc.nextInt();
        int sell = sc.nextInt();
        int x = sell-cost;
        if(x==0) System.out.println("no profit no loss");
        else if (x>0){
            double profit= x*100/cost;
            System.out.println("made a profit="+x+"\n profit percent is="+ profit+"%");
        
        }
        else{
            double loss= (cost-sell)*100/cost;
            System.out.println("made a loss="+(cost-sell)+"\n the loss percent is="+ loss+"%");
        }*/

        

        //id triangle or not

        /*System.out.println("enter the all sides of triangle==");
        int s1= sc.nextInt();
        int s2= sc.nextInt();
        int s3= sc.nextInt();
        if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2) System.out.println("true triangle");
        else System.out.println("triangle is not possible");*/

        
        
    }
    
}
