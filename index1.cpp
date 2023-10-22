#include <iostream>
using namespace std;
char* deleteChar(char* arr1, char symbol) 
{
    char* arr2 = new char[100];
    int j = 0;
    for (int i = 0; arr1[i]!='\0'; i++)
    {
        if (arr1[i] != symbol) 
        {
            arr2[j++] = arr1[i];
        }
    }
    arr2[j] = '\0';
    delete[] arr1;
    return arr2;
}
int main() {
    char* arr = new char[100];
    char symbol;
    cout << "введіть рядок:";
    cin >> arr; 
    cout << "введіть символ для видалення:";
    cin.ignore();
    symbol = cin.get();
    arr = deleteChar(arr, symbol);
    cout << arr << endl;
    delete[] arr;
    return 0;
}
