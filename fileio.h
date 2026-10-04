#ifndef FILEIO_H
#define FILEIO_H

#include "student.h"

void saveToFile(const char *filename, const Student *students, int count);
int loadFromFile(const char *filename, Student *students);

#endif