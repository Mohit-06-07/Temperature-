Activity 4 
Research 
A database is an organized collection of data, typically stored in a digital format, that is structured and managed to enable efficient storage of information.This information is extremely valuable and can be leveraged in various ways. As the saying goes, information is power. That is why database management and analysis have become indispensable. The vast amount of information generated daily requires the implementation of efficient strategies to collect, store, and process this data. Working with data management systems is a complex and delicate task. Therefore, it is  necessary to create a system which organises the data effectively
Temperature and weather predictions are crucial for public safety, agriculture, and economic planning by providing early warnings for natural disasters like storms and heatwaves, enabling informed decisions for farming, and helping businesses and utilities manage energy demands. Accurate forecasts save lives and property, optimize agricultural practices to prevent crop loss, and ensure efficient operation of transportation and energy systems. 



Analyse
The goal of the project is designing a Temperature Recording System used  to measure, record, and monitor temperature over time — automatically and accurately. It can be built using sensors, microcontrollers, data storage, and communication modules.firstly data can be collected from grounds.It would then be recorded and stored in the system.Using this data operations like sorting and displaying can be done. This is especially important in environments where temperature changes can cause significant damage for example in cold storage units, where perishable food must stay within a fixed range to remain safe and pharmaceutical labs, where vaccines or medicines can lose their effectiveness if temperatures fluctuate.
Also Temperature recording systems can be programmed to issue alerts when readings go beyond a preset threshold.This feature serves as an early warning mechanism, helping prevent equipment failure or product spoilage.The importance of a temperature recording system lies in its ability to continuously, accurately, and automatically monitor temperature, store valuable data, and provide early alerts — all of which are crucial for safety, efficiency, and decision-making in modern industries.

Ideate 
This project is a simple software-based simulation of a temperature recording system.The data will be entered in an array and database format.It can then be used for performing further operations 
 It is intended to:
Record the temperature for each day of a month (30 days).


Store the readings in an array.


Sort and display temperature data such as:
Date 
Temperature 
Place
This kind of program can simulate how temperature data might be recorded and analyzed in a realtime system.
Algorithm 
Step 1-Start
Step 2-Ask for the user to enter temperature data.
Step 3-computing data
Step 4-display the results 
Step 5-End

Build
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

Testing
Case 1
Record 1
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 25.3
Enter date (as integer): 1

Record 2
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 23.3
Enter date (as integer): 2

Record 3
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 24.2
Enter date (as integer): 3

Record 4
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 25.3
Enter date (as integer): 4

Record 5
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 26.6
Enter date (as integer): 5

Record 6
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 24.9
Enter date (as integer): 6

Record 7
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 27.2
Enter date (as integer): 7

Record 8
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 28.4
Enter date (as integer): 8

Record 9
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 21.9
Enter date (as integer): 9

Record 10
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 25.1
Enter date (as integer): 10

Temperature Records (sorted in ascending order):
Place: Pune            | Temperature:  21.90 | Date: 9
Place: Pune            | Temperature:  23.30 | Date: 2
Place: Pune            | Temperature:  24.20 | Date: 3
Place: Pune            | Temperature:  24.90 | Date: 6
Place: Pune            | Temperature:  25.10 | Date: 10
Place: Pune            | Temperature:  25.30 | Date: 1
Place: Pune            | Temperature:  25.30 | Date: 4
Place: Pune            | Temperature:  26.60 | Date: 5
Place: Pune            | Temperature:  27.20 | Date: 7
Place: Pune            | Temperature:  28.40 | Date: 8

Case 2
Record 1
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 27.4
Enter date (as integer): 1

Record 2
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 22.5
Enter date (as integer): 2

Record 3
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 25.3
Enter date (as integer): 3

Record 4
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 24.2
Enter date (as integer): 4

Record 5
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 23.7
Enter date (as integer): 5

Record 6
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 26.3
Enter date (as integer): 6

Record 7
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 24.8
Enter date (as integer): 7

Record 8
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 28.6
Enter date (as integer): 8

Record 9
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 22.9
Enter date (as integer): 9

Record 10
Enter the place where the Temperature is recorded : Pune
Enter temperature (Celsius): 21.6
Enter date (as integer): 10

Temperature Records (sorted in ascending order):
Place: Pune            | Temperature:  21.6   | Date: 10
Place: Pune            | Temperature:  22.5   | Date: 2
Place: Pune            | Temperature:  22.9 	| Date: 9
Place: Pune            | Temperature:  23.7   | Date: 5
Place: Pune            | Temperature:  24.2   | Date: 4
Place: Pune            | Temperature:  24.8   | Date: 7
Place: Pune            | Temperature:  25.3   | Date: 3
Place: Pune            | Temperature:  26.3   | Date: 6
Place: Pune            | Temperature:   27.4  | Date: 1
Place: Pune            | Temperature:  28.6   | Date: 8




 





 

