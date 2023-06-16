#include <stdio.h> 
  
 typedef struct { 
     int rollNo; 
     char name[100]; 
     float physics; 
     float math; 
     float chemistry; 
 } Student; 
  
 void printSummary(Student student) { 
     float total = student.physics + student.math + student.chemistry; 
     float percentage = (total / 300.0) * 100.0; 
  
     printf("Roll No: %d\n", student.rollNo); 
     printf("Name: %s\n", student.name); 
     printf("Marks (Physics, Math, Chemistry): %.2f, %.2f, %.2f\n", student.physics, student.math, student.chemistry); 
     printf("Total Marks: %.2f\n", total); 
     printf("Percentage: %.2f%%\n", percentage); 
 } 
  
 int main() { 
     Student student; 
  
     printf("Enter Roll No: "); 
     scanf("%d", &student.rollNo); 
  
     printf("Enter Name: "); 
     scanf(" %[^\n]s", student.name); 
  
     printf("Enter Marks (Physics, Math, Chemistry): "); 
     scanf("%f %f %f", &student.physics, &student.math, &student.chemistry); 
  
     printf("\n--- Student Summary ---\n"); 
     printSummary(student); 
  
     return 0; 
 }