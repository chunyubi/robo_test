#ifndef STUDENT_H
#define STUDENT_H

#define MAX_STUDENT 80
typedef struct
{
    char name[50];
    int id;
    float score;
} Student;

void addStudent(Student *students, int *count);
void printAll(const Student *students, int count);
void findStudentById(const Student *students, int count, int id);
float averageScore(const Student *studnets, int count);

#endif