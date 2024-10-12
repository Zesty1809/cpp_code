// WAP in C/C++ to create an One Dimensional Array.
// (a) Insert elements of that array.
// (b) Display elements of that array.

#include <iostream>

#define MAX_SIZE 50

// Display the elements of an array
void printArray(int arr[], int size)
{
    std::cout << "The elements of the array are: " << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void insertElement(int *arr, int &size, int num, int pos)
{
    if (pos < 0 || pos > size)
    {
        std::cout << "Error: Invalid position" << std::endl;
        return;
    }

    if (size >= MAX_SIZE)
    {
        std::cout << "Error: Overflow condition. Cannot insert more elements." << std::endl;
        return;
    }

    // Shift elements to the right
    for (int i = size; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = num;
    size++;
}

int main()
{
    int arr[MAX_SIZE]; 
    int size, i;
    int num, pos;

    std::cout << "Enter size of array: " << std::endl;
    std::cin >> size;

    if ((size > MAX_SIZE) || (size < 1))
    {
        std::cout << "Overflow condition." << std::endl;
        return 1;
    }
    else
    {
        std::cout << "Enter the elements of array: " << std::endl;
        for (i = 0; i < size; i++)
        {
            std::cin >> arr[i];
        }
    }

    std::cout << "Array before insertion: ";
    printArray(arr, size);

    std::cout << "Enter the element that you want to insert: " << std::endl;
    std::cin >> num;
    std::cout << "Enter position: " << std::endl;
    std::cin >> pos;

    insertElement(arr, size, num, pos);

    std::cout << "Array after insertion: ";
    printArray(arr, size);

    return 0;
}