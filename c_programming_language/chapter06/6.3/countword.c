#include <stdio.h>
#include <ctype.h>

#define MAXWORD 100
#define NKEYS (sizeof keytab / sizeof(keytab[0]))

int getword(char *, int);

int binsearch(char *, struct key *, int);

struct key {
    char *word;
    int count;
} keytab[] = {
        "auto", 0,
        "break", 0,
        "case", 0,
        "char", 0,
        "const", 0,
        "continue", 0,
        "default", 0,
        "unsigned", 0,
        "void", 0,
        "volatile", 0,
        "while", 0
};

/* count C keywords */
main() {
    int n;
    char word[MAXWORD];
    while (getword(word, MAXWORD) != EOF)
        if (isalpha(word[0]))
            if ((n = binsearch(word, keytab, NKEYS)) >= 0)
                keytab[n].count++;
    for (n = 0; n < NKEYS; n++)
        if (keytab[n].count > 0)
            printf("%4d %s\n",
                   keytab[n].count, keytab[n].word);
    return 0;
}