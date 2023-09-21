                          /*Read Marks Of Five Subjects. Calculate Percentage And Print Class Accordingly. Fail below 35, Pass Class
                          Between 36 to 45, Second Class Between 46 to 60, First Class Between 61 to 70, Distinction if More Than 70..*/
#include<stdio.h>   
void main() {
  int marks;
  printf("\n Enter Marks between 0-100 :");
  scanf("%d", & marks);
  if (marks > 100 || marks < 0) {
    printf("\n Your Input is out of Range");
  } else 
      if (marks >= 70) 
      {
    printf("\n You got Distinction");
  } else 
      if (marks >= 60) 
      {
    printf("\n You got First Class");
  } else 
        if (marks >= 40) 
        {
           printf("\n You got Second Class");
  }     else 
  {
           printf("\n You got Fail");
  }
}