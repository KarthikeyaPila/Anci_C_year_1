 write a program that will compute the length of a given character string.

    int
    main()
{
    char char_string[] = "hello there karthikeya";
    int length = sizeof(char_string) / sizeof(char);

    printf("the length of the given character string is: %d characters. \n", length - 1);

    return 0;
}
si