
//Name:Masudul Haque Rana
//purpose:calculates the exact age of a person based on their date of birth and the current date.
//Date:18/10/2025



#include <stdio.h>

int main() {
    int day,month,year;
    int cday = 14,cmonth = 10,cyear = 2025;
    printf("enter your birthday=");
    scanf("%d", &day);
    printf("enter your birth month=");
    scanf("%d", &month);
    printf("enter your birth year=");
    scanf("%d", &year);
    int ageyear = cyear - year;
    int agemonth = cmonth - month;
    int ageday = cday - day;
    
if(ageday<0){
    agemonth -= 1;
    ageday += 30;    
    }
    
if(agemonth<0){
    ageyear -= 1;
    agemonth += 12;
    }
    printf("your age %d year,%d month,%d day\n",ageyear,agemonth,ageday);
    return 0;
}

