#include <stdio.h>
#include <string.h>

// Structure definition
struct temp {
    char place[50];
    float cel;
    int date;
};

// Swap two struct elements
void swap(struct temp *x, struct temp *y) {
    struct temp temp = *x;
    *x = *y;
    *y = temp;
}

// Bubble sort function to sort structs by temperature (ascending order)
void bubble(struct temp t[], int n)
      {
    for (int i = 0; i < n - 1; i++) 
           {
        for (int j = 0; j < n - i - 1; j++) 
          {
            if (t[j].cel > t[j + 1].cel) 
          {
                swap(&t[j], &t[j + 1]);
            }
        }
    }
}

// Function to print the array of structs
void printRecords(struct temp t[], int n) 
{
    printf("\nTemperature Records (sorted in ascending order):\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Place: %-15s | Temperature: %6.2f | Date: %d\n",
               t[i].place, t[i].cel, t[i].date);
    }
}

int main() {
    int n=4;
    struct temp t[n];

    // Input data
    for (int i = 0; i < n; i++)
    {
        printf("\nRecord %d\n", i + 1);

        printf("Enter the place where the Temperature is recorded : ");
        scanf("%s", t[i].place);

        printf("Enter temperature (Celsius): ");
        scanf("%f", &t[i].cel);

        printf("Enter date (as integer): ");
        scanf("%d", &t[i].date);
    }

    
    bubble(t, n);

    
    printRecords(t, n);

    return 0;
}


