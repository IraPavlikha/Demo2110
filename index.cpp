#include <iostream>
using namespace std;

char* deleteChar(char* arr1, int index) 
{
    char* arr2 = new char[100];
    int j = 0;
    for (int i = 0; arr1[i]!='\0'; i++)
    {
        if (i != index) 
        {
            arr2[j++] = arr1[i];
        }
    }
    arr2[j] = '\0';
    delete[] arr1;
    return arr2;
}

int main() {
    int index; 
    char* arr = new char[100];
    cout << "введіть рядок:";
    cin >> arr; 
    cout << "введіть індекс для видалення:";
    cin >> index;
    if (!(index >= 0))
    {
        cout << "Невірний індекс" << endl;
    }
    else {
        char* result = deleteChar(arr, index);
        cout << result << endl;
        delete[] result;
    }
    return 0;
}
