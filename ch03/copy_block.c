
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/*
 * $man open   [for help]
 *int open(const char *path, int oflags);
 *int open(const char *path, int oflags, mode_t mode);
 *oflags:
 *{
 *    O_RDONLY Open for read-only
 *    O_WRONLY Open for write-only
 *    O_RDWR Open for reading and writing
 *}
 *
 *{
 * O_APPEND: Place written data at the end of the file.
 * O_TRUNC: Set the length of the file to zero, discarding existing contents.
 * O_CREAT: Creates the file, if necessary, with permissions given in mode.
 * O_EXCL: This protects against two programs creating the file at
 *the same time. If the file already exists, open will fail.
 
 * }
 */

int main()
{
    char block[1024]; 
    int in, out; 
    int nread;

    in = open("file.in", O_RDONLY); 
    out = open("file.out", O_WRONLY|O_APPEND, S_IRUSR|S_IWUSR|S_IXUSR|S_IRGRP);
    while((nread = read(in,block,sizeof(block))) > 0)
        write(out,block,nread);

    exit(0);
}
