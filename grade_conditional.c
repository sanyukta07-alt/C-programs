/*WRITE A PROGRAM TO TAKE THE MARKS OF A SUBJECT AS INPUT AND PRINT THE GRADE.
                         
                               MARKS                                 GRADE
                             91 - 100                                O
                             81 - 90                                 E
                             71 - 80                                 A
                             61 - 70                                 B
                             51 - 60                                 C
                             40 - 50                                 D
                            BELOW 40                                FAIL


*/

#include <stdio.h>

void main()
{
int marks;

printf("Enter your marks: ");
scanf("%d", &marks);

(marks >= 91 && marks <= 100)? printf("Grade = O"):(marks >= 81 && marks <= 90)? printf("Grade = E"):(marks >= 71 && marks <= 80)? printf("Grade = A") : (marks>= 61 && marks<= 70)? printf("Grade = B"): (marks >= 51 && marks <= 60)? printf("Grade = C"):(marks>= 40 && marks<= 50)? printf("Grade = D"): printf("Grade = FAIL");
}


