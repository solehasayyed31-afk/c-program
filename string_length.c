int main()
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    gets(str);  // or use scanf("%s", str);
    while(str[i] != '\0')   // loop until null character
    {
        i++;
    }
    printf("Length of the string is: %d", i);
    return 0;
}