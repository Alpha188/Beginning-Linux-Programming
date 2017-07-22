
write
    #include <unistd.h>
    size_t write(int fildes, const void *buf, size_t nbytes);

read
    #include <unistd.h>
    size_t read(int fildes, void *buf, size_t nbytes);

open
    
    /*To create a new file descriptor, you need to use the open system call.*/
    #include <fcntl.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    int open(const char *path, int oflags);
    int open(const char *path, int oflags, mode_t mode);

close
    #include <unistd.h>
    int close(int fildes);

fstat, stat, and lstat
    /*
     *The fstat system call returns status information about the file associated with an open file descriptor.
     *The information is written to a structure, buf, the address of which is passed as a parameter.
     */
    #include <unistd.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    int fstat(int fildes, struct stat *buf);
    int stat(const char *path, struct stat *buf);
    int lstat(const char *path, struct stat *buf);

fopen
    #include <stdio.h>
    FILE *fopen(const char *filename, const char *mode);

fread
    #include <stdio.h>
    size_t fread(void *ptr, size_t size, size_t nitems, FILE *stream);

fwrite
    #include <stdio.h>
    size_t fwrite (const void *ptr, size_t size, size_t nitems, FILE *stream);

fcolse
    #include <stdio.h>
    int fclose(FILE *stream);

fgetc, getc, and getchar
    #include <stdio.h>
    int fgetc(FILE *stream);
    int getc(FILE *stream);
    int getchar();

fputc, putc, and putchar
    #include <stdio.h>
    int fputc(int c, FILE *stream);
    int putc(int c, FILE *stream);
    int putchar(int c);

fgets and gets
    #include <stdio.h>
    char *fgets(char *s, int n, FILE *stream);
    char *gets(char *s);

Stream Errors
    #include <stdio.h>
    int ferror(FILE *stream);
    int feof(FILE *stream);
    void clearerr(FILE *stream);

chmod
    #include <sys/stat.h>
    int chmod(const char *path, mode_t mode);

chown
    #include <sys/types.h>
    #include <unistd.h>
    int chown(const char *path, uid_t owner, gid_t group);

mkdir and rmdir
    #include <sys/types.h>
    #include <sys/stat.h>
    int mkdir(const char *path, mode_t mode);

    #include <unistd.h>
    int rmdir(const char *path);

chdir and getcwd
    #include <unistd.h>
    int chdir(const char *path);
    char *getcwd(char *buf, size_t size);

opendir
/*
 *The opendir function opens a directory and establishes a directory stream. If successful, it returns a
 *pointer to a DIR structure to be used for reading directory entries.
 */
    #include <sys/types.h>
    #include <dirent.h>
    DIR *opendir(const char *name);

readdir
    #include <sys/types.h>
    #include <dirent.h>
    struct dirent *readdir(DIR *dirp);

lseek
    #include <unistd.h>
    off_t lseek(int fildes, off_t offset, int whence);

