#include<stdio.h>
#include<string.h>
enum weekdays{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
int main(){
    enum weekdays day;
    int dayval;
    printf("Enter the day(0 for Sunday,1 For Monday and so on upto 6 for Saturday)");
    scanf("%d",&dayval);
    day=dayval;
    printf("%d\n",day);
    switch(day){
        case Sunday:
            printf("Its a lazy day\n");
            break;
        case Monday:
            printf("The start of workweek\n");
            break;
        case Tuesday:
            printf("Its like we are in a groove\n");
            break;
        case Wednesday:
            printf("Midweek vibes\n");
            break;
        case Thursday:
            printf("Almost there close to weekend\n");
            break;
        case Friday:
            printf("TGIF, Weekend is here\n");
            break;
        case Saturday:
            printf("This is a saturday chill dude\n");
            break;
        default:
            printf("Invalid day\n");
    }
}