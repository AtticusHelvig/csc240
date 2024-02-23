#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    printf("Phonetic Translator - A. Helvig, Fall 2024\n\n");

    char *phonetics[] = {"Alpha", "Bravo", "Charlie", "Delta", "Echo",
                         "Foxtrot", "Golf", "Hotel", "India", "Juliet",
                         "Kilo", "Lima", "Mike", "November", "Oscar", "Papa",
                         "Quebec", "Romeo", "Sierra", "Tango", "Uniform",
                         "Victor", "Whiskey", "X-ray", "Yankee", "Zulu"};

    FILE *file = NULL;
    if (argc >= 2)
    {
        file = fopen(argv[1], "r");
    }

    if (file == NULL)
    {
        printf("The filename is not given or the file cannot be opened.\n");
        return 1;
    }

    const int ASCII_OFFSET = 97;
    char c;
    char *phonetic;

    while (!feof(file))
    {
        c = tolower(fgetc(file));

        if (isalpha(c))
        {
            phonetic = phonetics[c - ASCII_OFFSET];
            printf(" %s", phonetic);
        }
        else
        {
            if (c == ' ' || c == '\t')
            {
                c = '\n';
            }
            printf(" %c", c);
        }
    }

    return 0;
}