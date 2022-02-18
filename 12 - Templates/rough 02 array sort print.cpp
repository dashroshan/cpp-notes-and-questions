#include <iostream>
#include <cstring>

using namespace std;

template <typename tVar>
void swapEle(tVar &x, tVar &y)
{
    tVar temp = x;
    x = y;
    y = temp;
}

template <typename tVar>
void bubbleSort(tVar *arr, int size)
{
    for (int i = 0; i < size; i += 1)
    {
        for (int j = 0; j < size - 1; j += 1)
        {
            if (arr[j] > arr[j + 1])
            {
                swapEle(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename tVar>
void print(tVar *arr, int size)
{
    for (int i = 0; i < size; i += 1)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[5] = {2, 1, 4, 5, 3};
    char *text = "Hello World!";
    bubbleSort(array, 5);
    print(text, strlen(text));
    print(array, 5);
    return 0;
}