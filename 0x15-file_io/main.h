#ifndef MAIN_H
#define MAIN_H

/* Header Files */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>

/* Macro Definitions */
#define MAXSIZE 1024

/* Function Prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_exit(int error, char *str, int fd);
int copy_file(char *file_from, char *file_to);

#endif
