#include <stdio.h>
#include <stdlib.h>
#define CLASSES 3
#define STUDENTS_PER_CLASS 10
#define MIN_PASSING_GRADE 50

int main() {
  int grades[CLASSES][STUDENTS_PER_CLASS];

  for (int class = 0; class < CLASSES; class++) {
    for (int student = 0; student < STUDENTS_PER_CLASS; student++) {
      grades[class][student] = rand() % 101;
    }
  }

  int passed_students = 0;
  int failed_students = 0;
  int highest_grade = 0;
  int lowest_grade = 101;
  float total_grade = 0.0f;

  for (int class = 0; class < CLASSES; class++) {
    for (int student = 0; student < STUDENTS_PER_CLASS; student++) {
      int grade = grades[class][student];

      if (grade >= MIN_PASSING_GRADE) {
        passed_students++;
      } else {
        failed_students++;
      }

      if (grade > highest_grade) {
        highest_grade = grade;
      }
      if (grade < lowest_grade) {
        lowest_grade = grade;
      }

      total_grade += grade;
    }
  }

  float average_grade = total_grade / (CLASSES * STUDENTS_PER_CLASS);

  printf("Number of passed students %d\n", passed_students);
  printf("Number of failed students %d\n", failed_students);
  printf("Highest grade %d\n", highest_grade);
  printf("Lowest grade %d\n", lowest_grade);
  printf("Average grade %.2f\n", average_grade);

  return 0;
}
