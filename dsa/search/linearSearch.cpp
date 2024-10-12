/*
 * WAP to implement linear search
 */

#include <iostream>

#define MAX_SIZE 50

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int linearSearch(int arr[], int size, int item)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == item)
        {
            return i + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[MAX_SIZE];
    int num, pos, size;
    int i, item;

    std::cout << "Enter the size of the array: " << std::endl;
    std::cin >> size;

    std::cout << "Enter the elements of the array: " << std::endl;
    for (i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "The elements of the array are: " << std::endl;
    display(arr, size);

    std::cout << "Enter the item to search: " << std::endl;
    std::cin >> item;

    pos = linearSearch(arr, size, item);

    if (pos == -1)
        std::cout << "Item not found" << std::endl;
    else
        std::cout << "Item found at location " << pos << std::endl;

    return 0;
}