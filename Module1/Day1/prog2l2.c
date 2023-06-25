#include <stdio.h>

char getGrade(int score) {
  char grade;
  switch (score / 10) {
    case 10:
    case 9:
      grade = 'A';
      break;
    case 8:
      grade = 'B';
      break;
    case 7:
      grade = 'C';
      break;
    case 6:
      grade = 'D';
      break;
    case 5:
    case 4:
    case 3:
      grade = 'E';
      break;
    default:
      grade = 'F';
  }
  return grade;
}

int main() {
  int studentScore = 85;
  char studentGrade = getGrade(studentScore);
  printf("The student's score is %d and their grade is %c.\n", studentScore, studentGrade);
  return 0;
}