#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASSWORD "admin123"   
int main()
{
    char str[25];
    char input_pwd[20];
    int i = 0;
    FILE *fp;
    int ch;

    /* Ask for password */
    printf("Enter password: ");
    scanf("%19s", input_pwd);

    /* Check password */
    if (strcmp(input_pwd, PASSWORD) != 0)
    {
        printf("Wrong password! Access denied.\n");
        return 1;
    }

    /* Open file only if password is correct */
    fp = fopen("user.txt", "r");
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
