#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//GLaDOS System, DO NOT REDISTRIBUITE
int main(){
    int time[2];
    char risp;
    printf("Do you want to insert time in minute, seconds or both? [m,s,b]\n");
    scanf(" %c", &risp);
    if(risp=='m' || risp=='M'){
        printf("Insert time in minutes\n");
        scanf("%d", &time[1]);
        time[1]=time[1]*60;
    } else {
        if(risp=='s' || risp=='S'){
            printf("Insert time in seconds\n");
            scanf("%d", &time[1]);
        } else {
            printf("Insert time in minutes\n");
            scanf("%d", &time[1]);
            time[1]=time[1]*60;
            printf("Insert time in seconds\n");
            scanf("%d", &time[2]);
            time[1]=time[1]+time[2];
        }
    }
    printf("Do you want to show remaning time? [Y/n]\n");
    scanf(" %c", &risp);
    if(risp=='Y' || risp=='y'){
        for(time[1];time[1]>0;time[1]=time[1]-1){
            printf("%d\n", time[1]);
            sleep(1);
        }
    } else {
        sleep(time[1]);
    }
    printf("Time out!!\n");
    for(time[1]=3;time[1]>0;time[1]=time[1]-1){
        system("mplayer https://assets.mixkit.co/sfx/preview/mixkit-classic-alarm-995.mp3 >> /dev/null");
    }
    return 0;
}