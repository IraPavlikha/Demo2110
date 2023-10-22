#include <iostream>
using namespace std;
char* replace(char* arr1, char symbol, int index) 
{
    char* arr2 = new char[strlen(arr1) + 1];
    int j = 0;
    for (int i = 0; arr1[i] != '\0'; i++)
    {
        if (i == index) 
        {
            arr2[j++] = symbol;
        }
        arr2[j++] = arr1[i];
    }
    arr2[j] = '\0';
    delete[] arr1;
    return arr2;
}
int main() {
    char* arr = new char[100], symbol;
    int index;
    cout << "введіть рядок:";
    cin >> arr; 
    cout << "введіть символ для вставки:";
    cin >> symbol; 
    cout << "введіть позицію для вставки:";
    cin >> index; 
    arr = replace(arr, symbol, index);
    cout << arr << endl;
    delete[] arr;
    return 0;
}