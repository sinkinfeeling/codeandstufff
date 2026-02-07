#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASSWORD1 "admin123"
#define PASSWORD2 "admin234"
#define PASSWORD3 "admin345"

int main()
{
    char str[25];
    char input_pwd[20];
    int i = 0;
    FILE *fp = NULL;
    int ch;

    printf("Enter password: ");
    scanf("%19s", input_pwd);

    if (strcmp(input_pwd, PASSWORD1) == 0)
    {
        fp = fopen("user1.txt", "r");
    }
    else if (strcmp(input_pwd, PASSWORD2) == 0)
    {
        fp = fopen("user2.txt", "r");
    }
    else if (strcmp(input_pwd, PASSWORD3) == 0)
    {
        fp = fopen("user3.txt", "r");
    }
    else
    {
        printf("Wrong password! Access denied.\n");
        return 1;
    }

    if (fp == NULL)
    {
        printf("File not opened\n");
        return 1;
    }

    printf("Access granted.\n");
    printf("Your Username is:\n");

    while ((ch = fgetc(fp)) != EOF && i < 24)
    {
        str[i++] = ch;
    }

    str[i] = '\0';
    printf("%s", str);

    fclose(fp);
    return 0;
}
