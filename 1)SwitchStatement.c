#include<stdio.h>
int main()
{
  int days;
  printf("Enter the number : ");
  scanf("%d",&number);
  switch(number)
  {
    case 1:
      printf("I am Sunday");
      break;
    case 2:
      printf("I am Monday");
      break;
    case 3:
      printf("I am Tuesday");
      break;
    case 4:
      printf("I am Wednesday");
      break;
    case 5:
      printf("I am Thursday");
      break;
    case 6:
      printf("I am Friday");
      break;
     case 7:
      printf("I am Saturday");
      break;
     default: 
      printf("I am default case."); 
  }
  return 0;
}
