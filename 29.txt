
/**
@Name:Masudul Haque Rana
@File Name:336_2A.c
@Purpose:calculates the exact age of a person based on their date of birth and the current date.
@Date:18/10/2025
*/
#include <stdio.h>

int main() {
    int month[] ={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int Day,Month,Year;
    int CurrentDay = 14,CurrentMonth = 10,CurrentYear = 2025;
    printf("Enter Your Birthday=");
    scanf("%d", &Day);
    printf("Enter Your BirthMonth=");
    scanf("%d", &Month);
    printf("Enter Your BirthYear=");
    scanf("%d", &Year);
    int AgeYear = CurrentYear - Year;
    int AgeMonth = CurrentMonth - Month;
    int AgeDay = CurrentDay - Day;
if (Year%400==0||Year%4==0 && Year%100!=0){
    month[2]=29;
    }
if(AgeDay<0){
    AgeMonth -= 1;
    AgeDay += month[CurrentMonth-1];    
    }

    
if(AgeMonth<0){
    AgeYear -= 1;
    AgeMonth += 12;
    }

    printf("Your age %d Year,%d Month,%d day\n",AgeYear,AgeMonth,AgeDay);
    return 0;
}

