# include <stdio.h>
# include <string.h>
# include <stdbool.h>


/*check the two student department are same or not

typedef struct student_data{
    int roll_no;
    char name[20];
    char dept[20];
    int j_year;
} std;

void check(std s1, std s2){
    if(strcmp(s1.dept,s2.dept)==0) printf("department are equal");
    else printf("department are not equal");
    return;
}
int main(){
    std s1,s2;
    //input of first student details
    s1.roll_no=1;
    strcpy(s1.name,"ankit");
    strcpy(s1.dept,"cse");
    s1.j_year=2025;
    //input the detail of second student;
    s2.roll_no=2;
    strcpy(s2.name,"aman");
    strcpy(s2.dept,"cse");
    s2.j_year=2025;
    check(s1,s2);
    return 0;
}*/



/*help of pointer

typedef struct student_data{
    int roll_no;
    char name[20];
    char dept[20];
    int j_year;
} std;

int main(){
    std de={1,"ankit","cse",2025};
    printf("%d\n",de.j_year);
    return 0;
}*/






/* construction of structure

typedef struct student{
    int roll_no;
    char name[20];
    float marks;
} std;
int main(){
    std std1;
    printf("enter the roll no of student :");
    scanf("%d",&std1.roll_no);
    printf("enter the name of student :");
    scanf(" %[^\n]",std1.name);
    printf("enter the marks of the student :");
    scanf("%f",&std1.marks);
    printf("The details of first student is\nroll_no :%d\nstudent name :%s\nstudent_marsk :%.2f",
        std1.roll_no,std1.name,std1.marks);
    return 0;
}*/




/* creating a structure of a class where students details are present 

    typedef struct class{
        int rollno;
        char name[20];
        float salary;
    }class;

    int main(){
        int n;
        printf("enter the no. of student are :");
        scanf("%d",&n);
        
        printf("there are total %d student",n);
        printf("\nplease enter the details of those student\n");

        class student[n];

        for(int i=0;i<n;i++){
            printf("enter the rollno :");
            scanf("%d",&student[i].rollno);
            printf("enter the name of student :");
            scanf(" %[^\n]",student[i].name);
            printf("enter the salary of the student :");
            scanf("%f",&student[i].salary);
        }
        printf("\nThe details are given as :\n");
        for(int i=0;i<n;i++){
            printf("rollno :%d  name :%s salary :%.2f\n",student[i].rollno
            ,student[i].name,student[i].salary);
        }
    return 0;
}*/




