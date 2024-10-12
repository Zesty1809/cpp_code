// WAP in C/C++ to create a 2-D array.
// (a) Insert elements in the array.
// (b) Display elements of the array.

#include <iostream>

#define MAX_ROWS 50
#define MAX_COLUMNS 50

void printArray(int arr[MAX_ROWS][MAX_COLUMNS], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int arr[MAX_ROWS][MAX_COLUMNS];
    int rows, columns;

    std::cout << "Enter the number or rows: ";
    std::cin >> rows;

    if (rows < 1 || rows > MAX_ROWS)
    {
        std::cout << "Error: Invalid number of rows. Must be between 1 and " << MAX_ROWS << "." << std::endl;
        return 1;
    }

    std::cout << "Enter the number of columns: ";
    std::cin >> columns;

    if (columns < 1 || columns > MAX_COLUMNS)
    {
        std::cout << "Error: Invalid number of columns. Must be between 1 and " << MAX_COLUMNS << "." << std::endl;
        return 1;
    }

    std::cout << "Enter the elements of the array: " << std::endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    std::cout << "The elements of the array are: " << std::endl;
    printArray(arr, rows, columns);

    return 0;
}