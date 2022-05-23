# C - Dynamic libraries

## Description of the files inside this folder:

- main.h: Header file with all function prototypes.

0. Create the dynamic library libdynamic.so containing all the functions listed below:
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```
1. Create a script that creates a dynamic library called liball.so from all the .c files that are in the directory.
2. Write a blog post describing the differences between static and dynamic libraries.

Links to the blog post:
- https://www.linkedin.com/feed/update/urn:li:activity:6847309281147150336/
- https://3388.medium.com/how-to-create-and-use-dynamic-libraries-in-c-language-82343236d999


## Languages and Tools:

- OS: Ubuntu 20.04 LTS
- Language: C17 (C standard revision) (__STDC_VERSION__ --> 201710L)
- Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

<p align="left"> <a href="https://www.cprogramming.com/" target="_blank"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="40" height="40"/> </a> </p>


## Author

- Juan Camilo González <a href="https://twitter.com/juankter" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/twitter.svg" alt="juankter" height="30" width="40" /></a>
<a href="https://bit.ly/2MBNR0t" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="https://bit.ly/2mbnr0t" height="30" width="40" /></a>