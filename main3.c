#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *passwords[] = { "admin123", "admin234", "admin345" };
    char *files[]     = { "user1.txt", "user2.txt", "user3.txt" };
    int count = 3;

    char input_pwd[20];
    char buffer[25];
    FILE *fp = NULL;
    int ch, i = 0;

    printf("Enter password: ");
    scanf("%19s", input_pwd);

    for (int k = 0; k < count; k++)
    {
        if (strcmp(input_pwd, passwords[k]) == 0)
        {
            fp = fopen(files[k], "r");
            break;
        }
    }

    if (fp == NULL)
    {
        printf("Wrong password or file not found.\n");
        return 1;
    }

    printf("Access granted.\n");

    while ((ch = fgetc(fp)) != EOF && i < 24)
    {
        buffer[i++] = ch;
    }

    buffer[i] = '\0';
    printf("%s", buffer);

    fclose(fp);
    return 0;
}
