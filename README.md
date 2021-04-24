# Day 7 of 100 Days Of Code
### SWITCH STATEMENT
```
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
```
- Suppose days == 1 codition is satisfied and there is no break then subsequent expression will also gets evaluvated until we reach the another break.
# FACTS
- You are not allowed to use dplicate cases
```
#include <stdio.h>
int main()
{
  int number = 1;
  switch(number):
  {
     case 1:
       printf("I am 1");
       break;
     case 1:
       printf("I am 1");
       break;
     case 2:
       printf("I am 2");
     default:
       printf("Good bye!");
   }  
   return 0;
}
//Output:error : duplicate case value and error : previously used here
```
- Only those expressions are allowed in switch which result in an integral constant value.
```
#include <stdio.h>
int main()
{ 
  int a = 5,b = 7,c = 10;
  switch(a+b*c):
  {
     case 1:
       printf("I am 1");
       break;
     case 2:
       printf("I am 2");
     default:
       printf("Good bye!");
   }  
   return 0;
}
//Output: Good bye!
```
### ⚠️ NOT ALLOWED 
```
#include <stdio.h>
int main()
{ 
  int a = 2.5,b = 7.2,c = 1.0;
  switch(a+b*c):
  {
     case 1:
       printf("I am 1");
       break;
     case 2:
       printf("I am 2");
     default:
       printf("Good bye!");
   }  
   return 0;
}
//Output: error : switch quantity not an integer
```
[SelvaLakshmi.pdf](https://github.com/SelvaLakshmiSV/Day-7-of-100-Days-Of-Code/files/6370221/SelvaLakshmi.pdf)
