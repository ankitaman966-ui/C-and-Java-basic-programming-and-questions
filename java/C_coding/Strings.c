# include<stdio.h>
# include<string.h>
#include<ctype.h>
#include<stdbool.h>
 

/* input string and print its output 

int main(){
    char str[40];
    printf("enter the string=");
    gets(str);
    puts(str);
    return 0;
}*/



/* Reversing the String

int main(){
    char str[30];
    printf("enter the string :");
    scanf("%[^\n]s",str);
    //count the length of the string
    int c=0;
    while(str[c]!='\0') c++;
    for(int i=0;i<c/2;i++){
        char t=str[i];
        str[i]=str[c-1-i];
        str[c-1-i]=t;
    }
    printf("the reverse string : ");
    puts(str);
    return 0;
}*/



/*string as pointers

int main(){
    char str[]="Ankit";
    char*ptr=str;
    printf("%s\n",&str[0]);
    return 0;
}*/


/* printing string using pointers help of loop
int main(){
    char str[]="Ankit";
    str[0]='M';
    char*ptr=str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}*/


/* Deep copy of String
int main(){
    char* str="Ankit";
    char* s2;
    s2=str;
    printf("%s\n",str);
    printf("%s\n",s2);

    return 0;
}*/




/*take string input form user and display

int main(){
    char name[50];
    printf("enter your name :");
    fgets(name,sizeof(name),stdin);
    puts(name);
    return 0;
}*/




/* convert the string into upper string

int main(){
    char pass[50];
    printf("converting into upper case");
    printf("\nenter your text :");
    fgets(pass,50,stdin);
    printf("the string is :%s",pass);
    for(int i=0;pass[i] != '\0';i++){
        pass[i]=toupper(pass[i]);
    }
    printf("the string is :%s",pass);
    return 0;
}*/





/*login system password checking

int main(){
    const char pass[]="ankit2007";
    const char upass[20];
    printf("enter the password :");
    scanf(" %s",upass);
    if(strcmp(pass,upass)==0){
        printf("the pasword matched login successfully");
    }
    else printf("wrong password ");
    return 0;
}*/



/*reversing the string


void reverse(char text[]){
    int n=strlen(text);
    for(int i=0;i< n/2 ;i++){
        char ch=text[i];
        text[i]=text[n-1-i];
        text[n-1-i]=ch;
    }
}
int main(){
    char text[50];
    printf("enter the text to reverse :");
    fgets(text,sizeof(text),stdin);
    printf("the old string is: ");
    puts(text);
    reverse(text);
    printf("the new string is :");
    puts(text);
    return 0;
}*/



/* remove the spacing at start and end of string (denote space as -)

int main(){
    char ch[50];
    char tr[50];
    printf("enter the text :");
    fgets(ch,sizeof(ch),stdin);
    
    int start=0;
    int end=strlen(ch)-1;
    while(ch[start]=='-') start++;
    while(ch[end]== '-'|| ch[end]=='\n') end--;
    int i=0;
    while(i<=end-start){
        tr[i]=ch[start+i];
        i++;
    }
    tr[i]='\0';
    puts(tr);
    return 0;
}*/




/* check the palindrome string


int pallindrome(char text[]){
    int n=strlen(text);
    for(int i=0;i<n/2;i++){
        if(text[i]!=text[n-1-i]) return 0;
    }
    return 1;
}
int main(){
    char text[20];
    char rev[20];
    printf("enter the string :");
    scanf("%s",text);
    if(pallindrome(text)) printf("pallindrome string");
    else printf("not pallindrome string");
    return 0;
}*/




/*checking the password with the help of do while loop, re enter the pass until it correct

int main(){
    const char pass[20]="ankit2007";
    char upass[20];
    int c=0;
    do{
        if(c>0) printf("password wrong");
        printf("\nplease enter the correct password :");
        scanf("%s",upass);
        c++;
    }
    while(strcmp(pass,upass)!=0);
    printf("welcome page login successfully");
    
    return 0;
}*/