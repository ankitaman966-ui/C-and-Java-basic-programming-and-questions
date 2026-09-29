#include<stdio.h>
#include<string.h>

/* creating the file and write content into the file
    and printing the file content 

int main(){
    FILE*ptr=fopen("ankit.txt","w");
    char p[]="Ankit is very talented";
    fputs(p,ptr);
    fclose(ptr);
    FILE *read=fopen("ankit.txt","r");
    char str[100];
    while(fgets(str,100,read)!=NULL){
        printf("%s",str);
    }
    fclose(ptr);
    return 0;
}*/




int main(){
    FILE *ptr=fopen("ankit.txt","w");
    if(ptr==NULL){
        printf("file not opened please  :");
        return 0;
    }
    char ch[]="ankit is overconfident";
    fputs(ch,ptr);
    fclose(ptr);
    ptr=fopen("ankit.txt","r");
    if(ptr==NULL){
        printf("file not opened please  :");
        return 0;
    }
    char text[50];
    fgets(text,50,ptr);
    printf(" %s",text);
    fclose(ptr);
    return 0;
}