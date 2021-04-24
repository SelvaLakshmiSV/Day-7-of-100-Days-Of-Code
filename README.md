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
- Float value are not allowed as a constant value in case label only integer constants or constant expression are allowed in the case label
 ```
 int main()
{ 
  int a = 2.5;
  switch(a):
  {
     case 2.5:
       printf("I am 2.5");
       break;
     case 56.2:
       printf("I am 56.2");
     default:
       printf("Good bye!");
   }  
   return 0;
}
//Output:Case value are not reduced to an integer constant
```
##✅ ALLOWED
```
int main()
{ 
  int a = 20;
  switch(a):
  {
     case 3+3:
       printf("I am 6");
       break;
     case 4/2*10:
       printf("I am 20");
     default:
       printf("Good bye!");
   }  
   return 0;
}
Output : I am 20
```
### ⚠️ NOT ALLOWED 
Variable expression are not allowed in case lables.
```
int main()
{ 
  int a = 10,b = 7, c =9;
  switch(a):
  {
     case b:
       printf("I am 7");
       break;
     case c:
       printf("I am 9");
     default:
       printf("Good bye!");
   }  
   return 0;
}
//Output: case label does not reduce to an integer constant
```
##✅ ALLOWED
```
#include<stdio.h>
#define a 10;
#define b 20
int main()
{ 
  
  switch(a):
  {
     case a:
       printf("I am 10");
       break;
     case b:
       printf("I am 20");
     default:
       printf("Good bye!");
   }  
   return 0;
   
}
//Output:I am 10
```
###DEFAULT STATEMENT CAN BE PLACED ANY WHERE IN THE SWITCH
```
#include<stdio.h>
#define a 10;
#define b 20
int main()
{ 
  
  switch(b):
  {  
      default:
       printf("Good bye!");
     case a:
       printf("I am 10");
       break;
     case b:
       printf("I am 20");
    
   }  
   return 0;
   
}
//Output : I am 20
```

