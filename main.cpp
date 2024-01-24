
#include <iostream>
#include <string>

const int MAX = 5;
int currentSum = 0;

int getSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    } 
    return sum;
}

void printArr(std::string tag, int arr[], int size)
{
    std::cout << "\n" << tag << " [";

    for (int i = 0; i < size; i++)
    {
        std::string space = ", ";
        std::cout << arr[i] << (i == (size-1) ? "" : space);
    }

    std::cout << "]";
}

int main()
{
    int arr[MAX] = {3, 1, 2, 10, 1};
    int output[MAX];

    printArr("Input: ", arr, MAX); 

    for (int i = 0; i < MAX; i++)
    {
        output[i] = getSum(arr, i + 1);
    }

    printArr("Output: ", output, MAX); 

    //time complexity = O(n)
    //space complexity = O(1)

    return 0;
}