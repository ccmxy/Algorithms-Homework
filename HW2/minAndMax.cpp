#include <iostream>
#include <limits>

void min_and_max(int array[], int begin, int end, int &min, int & max)
{
    if (begin == end)
    {
        min = max = array[begin];
    }
    else //if subarray is 2+ elements

    {
        //mid is halfway between 2nd and 3rd sent in arguments
        int mid = (begin + end) / 2;

        //Set leftMin, leftMax, rightMin, and rightMax to 0.
        int leftMin, rightMin, leftMax, rightMax = 0;

        //Make recursive calls
        min_and_max(array, begin, mid, leftMin, leftMax);
        min_and_max(array, mid + 1, end, rightMin, rightMax);

        if (leftMin < rightMin)
            min = leftMin;
        else
            min = rightMin;

        if (leftMax > rightMax)
            max = leftMax;
        else
            max = rightMax;
    }
}

int main()
{
    const int size = 10;
    int arr[size] = { 99, 3334, -18, 1732, 6999, 26, -315, 783, 14, -6 };

    int min;
    int max;
    min_and_max(arr, 0, size - 1, min, max);

    std::cout << "Minimum is: " << min << '\n' << "Maximum is: " << max << "\n\n";

    return 0;
}
