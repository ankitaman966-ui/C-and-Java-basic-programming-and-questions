#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>


void fill_time(char* buffer,int format){
    time_t raw_time;
    struct tm *current_time;

    time(&raw_time);
    current_time=localtime(&raw_time);
    if(format==1){
        strftime(buffer,50,"%H:%M:%S %p",current_time);
    }
    else{
        strftime(buffer,50,"%I:%M:%S %p",current_time);
    }
}

int time_format(){
    int format;
    printf("\n-------Welcome to Digital clock----------\n");
    printf("\nChoose the time format\n\n");
    printf("\n1--<24>Hour format");
    printf("\n2--<12>Hour format(default)\n");
    printf("\nenter the choice :");
    scanf("%d",&format);
    return format;
}

void fill_date(char* buffer){
    time_t raw_time;
    struct tm *current_time;

    time(&raw_time);
    current_time=localtime(&raw_time);
    strftime(buffer,100,"%A %d %B %Y",current_time);
}

void clear_screen(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}


int main(){
    char time[50];
    char date[100];
    int format=time_format();
    while(1){
        fill_time(time,format);
        fill_date(date);
        clear_screen();
        printf("current time:  %s\n",time);
        printf("current date:  %s\n",date);
        sleep(1);
    }
    return 0;
}