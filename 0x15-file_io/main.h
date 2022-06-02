#ifndef _MAIN_H
#define _MAIN_H

#define ERROR "Error: Can't read from file %s\n"
#define ERR "Error: Can't write to %s\n"

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* _MAIN_H */
