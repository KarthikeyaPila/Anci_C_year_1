 given are two one dimenstional arrays A and B, which are stored in ascending order. write a program to
merge them into a single sorted array C that contains every item from arrays A adn B in ascending order.

void merge_arrays(int A[], int lengthA, int B[], int lengthB, int C[])
{
    int i = 0, j = 0, k = 0;

    // Merge arrays A and B into C
    while (i < lengthA && j < lengthB)
    {
        if (A[i] < B[j])
        {
            C[k++] = A[i++];
        }
        else
        {
            C[k++] = B[j++];
        }
    }

    // Copy any remaining elements of A
    while (i < lengthA)
    {
        C[k++] = A[i++];
    }

    // Copy any remaining elements of B
    while (j < lengthB)
    {
        C[k++] = B[j++];
    }
}

int main()
{
    int A[] = {1, 3, 5, 7, 9, 10, 23, 50, 1000, 3402, 430349}; // Example sorted array A
    int B[] = {2, 4, 6, 8, 10};                                // Example sorted array B

    int lengthA = sizeof(A) / sizeof(A[0]);
    int lengthB = sizeof(B) / sizeof(B[0]);
    int lengthC = lengthA + lengthB;
    int C[lengthC];

    // Merge arrays A and B into C
    merge_arrays(A, lengthA, B, lengthB, C);

    // Print the merged and sorted array C
    printf("Merged and sorted array C: ");
    for (int i = 0; i < lengthC; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
