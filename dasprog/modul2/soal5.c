#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char vocals[] = "aiueo";
    char strings[100];

    int count[256] = {0};

    do
    {
        fgets(strings, sizeof(strings), stdin);

        if (strlen(strings) > 100)
        {
            printf("Melebihi batas maksimal 100\n");
        }
        
    } while (strlen(strings) > 100);

    for (int i = 0; i < strlen(strings); i++)
    {
        char c = tolower((unsigned char)strings[i]);

        if (strchr(vocals, c) != NULL)
        {
            count[(unsigned char)c]++;
        }
    }

    for (int i = 0; i < strlen(vocals); i++)
    {
        char vocal = vocals[i];
        char upper = toupper((unsigned char)vocal);

        printf("%c/%c : %d\n", upper, vocal, count[vocal]);
    }

    return 0;

}