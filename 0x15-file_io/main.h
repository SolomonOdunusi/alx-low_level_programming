#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/stat.h>
#include <stdint.h>
#include <sys/types.h>
#include <elf.h>

#define BUFFER_SIZE 1024
#define BUF_SIZE 64
#define FILE_PERM (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP)


ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_err_exit(const char *err_mes, const char *file_name, int exit_code);
void print_magic(unsigned char *buf);
void print_class(unsigned char *buf);
void print_data(unsigned char *buf);
void print_version(unsigned char *buf);
void print_osabi(unsigned char *buf);
void print_abiversion(unsigned char *buf);
void print_type(unsigned char *buf);
void print_entry(unsigned char *buf);

#endif /** __MAIN_H__ */
