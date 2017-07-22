#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*运行结果：
 *$./xx -i -lr -f 124.c 123 2
 *
 *option: i
 *option: l
 *option: r
 *filename: 124.c
 *argument: 123
 *argument: 2
 */

int main(int argc, char* argv[])
{
    int opt;
    extern char* optarg;
    extern int optind, opterr, optopt;
    while ((opt = getopt(argc, argv, ":if:lr")) != -1) {
        switch (opt) {
        case 'i':
        case 'l':
            printf("filename: %s\n", optarg);

            break;
        case 'r':
            printf("option: %c\n", opt);
            break;
        case 'f':
            printf("filename: %s\n", optarg);
            break;
        case ':':
            printf("option needs a value\n");
            break;
        case '?':
            printf("unknown option: %c\n", optopt);
            break;
        }
    }
    for (; optind < argc; optind++)
        printf("argument: %s\n", argv[optind]);
    exit(0);
}
