#include <stdlib.h>
#include <unistd.h>
int main()
{
    /*
     *0:standard input
     *1:standard output
     *2:standard error
     *size_t write(int fildes, const void *buf, size_t nbytes);
     */

    if ((write(1,"Here is some data\n",18))!= 18)  /*18bytes*/
        write(2, "A write error has occurred on file descriptor 1\n",46);
    exit(0);
}
