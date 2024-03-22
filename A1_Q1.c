#include<stdio.h>


//using struct
struct Date
{
   
    int day;
    
    int month;
    int year;
};
  void initDate(struct Date* ptrDate)
  {
     ptrDate->day=01;
    ptrDate->month=01;
     ptrDate->year=4000;

  }
  void printDateOnConsole(struct Date* ptrDate)
  {
    printf("Date:%d %d %d",ptrDate->day,ptrDate->month,ptrDate->year);

  }
  void acceptDateFromConsole(struct Date* ptrDate)
  {
   printf("enter day:");
   scanf("%d",&ptrDate->day);
   printf("enter month:");
   scanf("%d",&ptrDate->day);
   printf("enter year:");
   scanf("%d",&ptrDate->day);
  }
   
    
   

int main()
{   
    struct Date d1;
    initDate(&d1);
    int choice;
    do
    {
    
    printf("select choice\n");
    printf("1:initialize the date\n");
    printf("2:accept the date\n");
     printf("3:print the date\n");
      printf("4:Exit");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        initDate(&d1);
        printf("initialize the date\n");
        break;

        case 2:
        acceptDateFromConsole(&d1);
        printf("date is accepted\n");
        break;

        case 3:
        printDateOnConsole(&d1);
        printf("print the date\n");

        default :
        printf("wrong choice entered\n");
        break;
        }
        }while(choice !=4);
       return 0;
       }