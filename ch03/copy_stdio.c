#include <stdio.h>

int main()
{
    FILE *fp, *out;
    int c;
    fp = fopen("file.in", "r");
    out = fopen("file.out", "w");

    while ((c = fgetc(fp)) != EOF) {
        fputc(c, out);
    }
}
