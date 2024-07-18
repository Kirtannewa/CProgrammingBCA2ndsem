#include <stdio.h>
int main()
{
    int age[5] = {3, 63, 4, 8, 31};
    int i, largest = age[0], smallest = age[0];

    // Print the elements of the array
    for(i = 0; i < 5; i++)
    {
        printf("%d\t", age[i]);
    }

    // Find the largest and smallest elements
    for(i = 0; i < 5; i++)
    {
        if(age[i] > largest)
        {
            largest = age[i];
        }
        if(age[i] < smallest)
        {
            smallest = age[i];
        }
        
    }

    // Print the largest and smallest elements
    printf("\n%d is the largest", largest);
    printf("\n%d is the smallest", smallest);

    return 0;
}

