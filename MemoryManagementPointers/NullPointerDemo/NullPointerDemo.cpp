#include <iostream>

using namespace std;

int* findFirstNegativePointer(int numbers[], int length) {
    for (int i = 0; i < length; i++) {
        if (numbers[i] < 0)
            return &numbers[i];
    }
    return nullptr; // same as return NULL;
}

int main()
{
    int nums[] = { 1, 2, 3, 4, 5, 0 };
    int len = sizeof(nums) / sizeof(nums[0]);

    int* negativePtr = findFirstNegativePointer(nums, len);
    if (negativePtr != nullptr)
        cout << *negativePtr << endl;
    else
        cout << "no negative numbers" << endl;

    return 0;
}
