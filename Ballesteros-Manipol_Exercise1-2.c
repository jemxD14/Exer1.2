#include<stdio.h>
#include<stdlib.h>
int main(){
//Gauss Method was used in getting the day of the week. 
int  decennial, weekday, MonthConstant, century, date, month, year, defaultyear, leapedyear;

do{
    printf("Enter date (1-31): ");
    scanf("%d", &date);
}while(date < 1 || date > 31 );

do{
    printf("Enter month (1-12): ");
    scanf("%d", &month);
     if(( date == 31 ) && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)){
        printf("This month does not have a 31st day. Please try again.");
        exit(EXIT_SUCCESS);
    }
    if((date == 30) && (month == 2)){
        printf("This month does not have a 30th day. Please try again.");
        exit(EXIT_SUCCESS);
    }
}while(month < 1 || month > 12);

do{
    printf("Enter year: ");
    scanf("%d", &year);
    if((date == 29 && month == 2) && ((year % 400 != 0 && year % 100 == 0)|| year % 4 != 0)){
        printf("February does not have a 29th day in this year. Please try again.");
        exit(EXIT_SUCCESS);
    }
}while(year < 0);
    
decennial = year % 100;

if(month == 1){
    MonthConstant = 0;
    decennial = decennial-1;
}
if(month == 2){
    MonthConstant = 3;
    decennial = decennial-1;
}
if(month == 3){
    MonthConstant = 2;
}
if(month == 4){
    MonthConstant = 5;
}
if(month == 5){
    MonthConstant = 0;
}
if(month == 6){
    MonthConstant = 3;
}
if(month == 7){
    MonthConstant = 5;
}
if(month == 8){
    MonthConstant = 1;
}
if(month == 9){
    MonthConstant = 4;
}
if(month == 10){
    MonthConstant = 6;
}
if(month == 11){
    MonthConstant = 2;
}
if(month == 12){
    MonthConstant = 4;
}


if(year /100 == 19){
    century = 1;
}

if(year / 100 == 20){
    century = 0;
}

if(year / 100 == 21){
    century = 5;
}

if(year /100 == 22){
    century = 3;
}

//Gauss method computation.
weekday = (decennial + decennial/4 + century + MonthConstant + date) % 7;


//Computing for the day of the year.
//defaultyear stands for (normal) day of the year.

if (month==1){ 
    defaultyear= date;
}

if (month==2){
    defaultyear= 31+date;
}
if (month==3){
    defaultyear= 31+28+date;
}
if (month==4){
    defaultyear= 31+28+31+date;
}
if (month==5){
    defaultyear= 31+28+31+30+date;
}
if (month==6){
    defaultyear= 31+28+31+30+31+date;  
}      
if (month==7){
    defaultyear= 31+28+31+30+31+30+date;
}
if (month==8){
    defaultyear= 31+28+31+30+31+30+31+date;
}
if (month==9){
    defaultyear= 31+28+31+30+31+30+31+31+date;          
}  
if (month==10){
    defaultyear= 31+28+31+30+31+30+31+31+30+date;
}                    
if (month==11){
    defaultyear= 31+28+31+30+31+30+31+31+30+31+date;  
}         
if (month==12){
	defaultyear=31+28+31+30+31+30+31+31+30+31+30+date;     
}

//Computation to know if the year is a leap year or not.
//leapedyear stands for leaped day of the year.

if( month>=3 && (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0) )
	leapedyear
=defaultyear+1;
else 
	leapedyear
=defaultyear;


if (weekday == 0 && leapedyear % 10 == 0){
        printf("Sunday, %dth day of the of the year.", leapedyear
    );
    }
if (weekday == 0 && leapedyear % 10 == 1){
        printf("Sunday, %dst day of the of the year.", leapedyear
    );
    }
if (weekday == 0 && leapedyear % 10 == 2){
        printf("Sunday, %dnd day of the of the year.", leapedyear
    );
    }
if (weekday == 0 && leapedyear % 10 == 3){
        printf("Sunday, %drd day of the of the year.", leapedyear
    );
    }
if (weekday == 0 && leapedyear % 10 == 4){
        printf("Sunday, %dth day of the of the year.", leapedyear
    );
    }
if (weekday == 0 && leapedyear % 10 == 5){
        printf("Sunday, %dth day of the of the year.", leapedyear
    );
    }
if (weekday == 0 && leapedyear % 10 == 6){
        printf("Sunday, %dth day of the of the year.", leapedyear
    );
    }
if (weekday == 0 && leapedyear % 10 == 7){
        printf("Sunday, %dth day of the of the year.", leapedyear
    );
    }
if (weekday == 0 && leapedyear % 10 == 8){
        printf("Sunday, %dth day of the of the year.", leapedyear
    );
    }
if (weekday == 0 && leapedyear % 10 == 9){
        printf("Sunday, %dth day of the of the year.", leapedyear
    );
    }

if(weekday == 1 && leapedyear % 10 == 0){
        printf("Monday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 1 && leapedyear % 10 == 1){
        printf("Monday, %dst day of the of the year.", leapedyear
    );
    }
if(weekday == 1 && leapedyear % 10 == 2){
        printf("Monday, %dnd day of the of the year", leapedyear
    );
    }
if(weekday == 1 && leapedyear % 10 == 3){
        printf("Monday, %drd day of the of the year.", leapedyear
    );
    }
if(weekday == 1 && leapedyear % 10 == 4){
        printf("Monday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 1 && leapedyear % 10 == 5){
        printf("Monday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 1 && leapedyear % 10 == 6){
        printf("Monday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 1 && leapedyear % 10 == 7){
        printf("Monday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 1 && leapedyear % 10 == 8){
        printf("Monday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 1 && leapedyear % 10 == 9){
        printf("Monday, %dth day of the of the year.", leapedyear
    );
    }

if(weekday == 2 && leapedyear % 10 == 0){
        printf("Tuesday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 2 && leapedyear % 10 == 1){
        printf("Tuesday, %dst day of the of the year.", leapedyear
    );
    }
if(weekday == 2 && leapedyear % 10 == 2){
        printf("Tuesday, %dnd day of the of the year.", leapedyear
    );
    }
if(weekday == 2 && leapedyear % 10 == 3){
        printf("Tuesday, %drd day of the of the year.", leapedyear
    );
    }
if(weekday == 2 && leapedyear % 10 == 4){
        printf("Tuesday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 2 && leapedyear % 10 == 5){
        printf("Tuesday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 2 && leapedyear % 10 == 6){
        printf("Tuesday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 2 && leapedyear % 10 == 7){
        printf("Tuesday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 2 && leapedyear % 10 == 8){
        printf("Tuesday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 2 && leapedyear % 10 == 9){
        printf("Tuesday, %dth day of the of the year.", leapedyear
    );
    }

if(weekday == 3 && leapedyear % 10 == 0){
        printf("Wednesday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 3 && leapedyear % 10 == 1){
        printf("Wednesday, %dst day of the of the year.", leapedyear
    );
    }
if(weekday == 3 && leapedyear % 10 == 2){
        printf("Wednesday, %dnd day of the of the year.", leapedyear
    );
    }
if(weekday == 3 && leapedyear % 10 == 3){
        printf("Wednesday, %drd day of the of the year.", leapedyear
    );
    }
if(weekday == 3 && leapedyear % 10 == 4){
        printf("Wednesday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 3 && leapedyear % 10 == 5){
        printf("Wednesday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 3 && leapedyear % 10 == 6){
        printf("Wednesday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 3 && leapedyear % 10 == 7){
        printf("Wednesday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 3 && leapedyear % 10 == 8){
        printf("Wednesday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 3 && leapedyear % 10 == 9){
        printf("Wednesday, %dth day of the of the year.", leapedyear
    );
    }

if(weekday == 4 && leapedyear % 10 == 0){
        printf("Thursday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 4 && leapedyear % 10 == 1){
        printf("Thursday, %dst day of the of the year.", leapedyear
    );
    }
if(weekday == 4 && leapedyear % 10 == 2){
        printf("Thursday, %dnd day of the of the year.", leapedyear
    );
    }
if(weekday == 4 && leapedyear % 10 == 3){
        printf("Thursday, %drd day of the of the year.", leapedyear
    );
    }
if(weekday == 4 && leapedyear % 10 == 4){
        printf("Thursday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 4 && leapedyear % 10 == 5){
        printf("Thursday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 4 && leapedyear % 10 == 6){
        printf("Thursday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 4 && leapedyear % 10 == 7){
        printf("Thursday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 4 && leapedyear % 10 == 8){
        printf("Thursday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 4 && leapedyear % 10 == 9){
        printf("Thursday, %dth day of the of the year.", leapedyear
    );
    }

if(weekday == 5 && leapedyear % 10 == 0){
        printf("Friday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 5 && leapedyear % 10 == 1){
        printf("Friday, %dst day of the of the year.", leapedyear
    );
    }
if(weekday == 5 && leapedyear % 10 == 2){
        printf("Friday, %dnd day of the of the year.", leapedyear
    );
    }
if(weekday == 5 && leapedyear % 10 == 3){
        printf("Friday, %drd day of the of the year.", leapedyear
    );
    }
if(weekday == 5 && leapedyear % 10 == 4){
        printf("Friday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 5 && leapedyear % 10 == 5){
        printf("Friday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 5 && leapedyear % 10 == 6){
        printf("Friday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 5 && leapedyear % 10 == 7){
        printf("Friday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 5 && leapedyear % 10 == 8){
        printf("Friday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 5 && leapedyear % 10 == 9){
        printf("Friday, %dth day of the of the year.", leapedyear
    );
    }

if(weekday == 6 && leapedyear % 10 == 0){
        printf("Saturday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 6 && leapedyear % 10 == 1){
        printf("Saturday, %dst day of the of the year.", leapedyear
    );
    }
if(weekday == 6 && leapedyear % 10 == 2){
        printf("Saturday, %dnd day of the of the year.", leapedyear
    );
    }
if(weekday == 6 && leapedyear % 10 == 3){
        printf("Saturday, %drd day of the of the year.", leapedyear
    );
    }
if(weekday == 6 && leapedyear % 10 == 4){
        printf("Saturday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 6 && leapedyear % 10 == 5){
        printf("Saturday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 6 && leapedyear % 10 == 6){
        printf("Saturday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 6 && leapedyear % 10 == 7){
        printf("Saturday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 6 && leapedyear % 10 == 8){
        printf("Saturday, %dth day of the of the year.", leapedyear
    );
    }
if(weekday == 6 && leapedyear % 10 == 9){
        printf("Saturday, %dth day of the of the year.", leapedyear
    );
    }

    return 0;
}