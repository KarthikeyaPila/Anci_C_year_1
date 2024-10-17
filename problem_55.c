 write a program to create a directory of students with roll numbers.
int main()
{
    int i = 0;
    char student_names[10][100] = {
        "karthikeya",
        "josh",
        "sam",
        "joy",
        "phanni",
        "random dude",
        "thala",
        "steve",
        "robbin",
        "ussop"};

    char student_roll_numbers[10][3] = {
        "1",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
        "10"};

    char student_roll_number[3];
    printf("What roll number do you want the name for? \n");
    scanf("%s", student_roll_number);

    int index;

    while (strcmp(student_roll_numbers[i] , student_roll_number))
    {
        i++;
    }

    printf("the student's name is: %s", student_names[i]);

    return 0;
}
