 develop a program to implement the binary search algorithm. this technique compares the search
key value with the value of the element that is midway in a sorted list.

int main()
{
    int arr[] = {23, 12, 412, 42, 1, 4, 2, 3, 5, 7, 19, 13, 999, 69, 100};
    int input_num;

    int length = sizeof(arr) / sizeof(int);

    // 1. make a sorter.
    for (int j = 0; j < length; j++)
    {
        for (int i = 0; i < length - j - 1; i++)
        {
            if (arr[i] >= arr[i + 1])
            {
                int c = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = c;
            }
            else
            {
                continue;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    // make the user input a valid input.
    printf("\nenter a valid number whihc is in the array. \n");
    scanf("%d", &input_num);

    int low = 0, high = length - 1;

    int middle = low + (high - low) / 2;

    while (low <= high)
    {

        if (arr[middle] > input_num)
        {
            high = middle - 1;
        }
        else if (arr[middle] < input_num)
        {
            low = middle + 1;
        }
        else if (arr[middle] == input_num)
        {
            printf("found the number! it is: %d\nit is at position: %d from the left.", arr[middle], middle);

            break;
        }
        middle = low + (high - low) / 2;
    }
    if (low > high)
    {
        printf("number not found in the list. \n");
    }

    return 0;
}
