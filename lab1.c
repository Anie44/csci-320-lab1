/*
 * Implement your solution in this file
 *
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

readString()
{
    int main(int argc, char *argv[])
    {
    FILE *file;

    file = fopen(argv[1], "r");

    size_t total = 0;

    while (!feof(file))
    {
        fgetc(file);
        total++;
    }

    char *string = malloc(total);

    rewind(file);

    size_t index = 0;

    while (!feof(file))
    {
        string[index] = fgetc(file);
        index++;
    }

    string[index - 1] = '\0';

    fclose(file);

    printf("File Contents: \n\n");
    printf("%s\n", string);

    free(string);

    return 0;
}
}

mysteryExplode()
{
    char* substring(char*, int, int);

    char string[100], *p;
    int position = 1, length = 1, t, string_length;

    printf("Enter a string\n");
    gets(string);

    t = string_length = strlen(string);

    printf("substring of \"%s\" are\n", string);

    while (position <= string_length)
    {
        while(length <= t)
        {
            p = substring(string, position, length);
            printf("%\n", p);
            free(p);
            length++
        }
        t--;
        position++
        length = 1
    }
    return 0;
}
