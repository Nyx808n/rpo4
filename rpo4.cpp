#include <iostream>

void MySwap(int* num1, int* num2) {
    std::cout << *num1 << " " << *num2 << "\n";
    int num3 = *num1;
    *num1 = *num2;
    *num2 = num3;
    std::cout << *num1 << " " << *num2;
}
void MySwap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

void FillArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = rand() % 15;
        std::cout << *(arr + i) << " ";
    }
    
} 

void PushArray(int *&arr, int size) {
    int* temp = new int[size];
    for (int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }
    delete[] arr;
    size ++;
    arr = new int[size];
    for (int i = 0; i < size - 1; i++) {
        arr[i] = temp[i];
    }
    delete[] temp;
    arr[size - 1] = 100;
}
void PushArray2(int*& arr, int& size) {
    size++;
    int* temp = new int[size];
    for (int i = 0; i < size - 1; i++) {
        temp[i] = arr[i];
    }
    temp[size - 1] = 100;
    std::swap(arr, temp);
    delete[] temp;
}

void InitArr(int*& arr, int size) {
    if (arr != nullptr) {
        delete[] arr;
    }
    arr = new int[size];  
}
void DeleteArr(int*& arr) {
    if (arr == nullptr) {
        return;
    }
    delete[] arr;
    arr = nullptr;
    
}

int main()
{
    srand(time(NULL));

    /*int* arr = nullptr;
    int* arr = new int[5];

    arr[0] = 10;

    delete[] arr;
    arr = nullptr;
    int row = 3, col = 4;

    int** name = new int* [row];
    for (int i = 0; i < row; i++) {
        name[i] = new int[col];
    }
    for (int i = 0; i < row; i++) {
        delete[] name[i];
    }
    delete[] name;

    int side = 2, row = 4, col1 = 4, col2 = 3;

    int*** arr = new int**[side];
    for (int i = 0; i < side; i++) {
        arr[i] = new int* [row];
    }
    for (int i = 0; i < row; i++) {
        arr[0][i] = new int [col1];
    }
    arr[1][0] = new int[2];
    for (int i = 1; i < side; i++) {
        arr[1][i] = new int [col2];
    }

    for (int i = 1; i < side; i++) {
        delete arr[1][i];
    }
    for (int i = 0; i < row; i++) {
        delete arr[0][i];
    }
    for (int i = 0; i < side; i++) {
        delete arr[i];
    }
    delete[] arr;*/

    /*int size = 5;
    int* arr = new int[size] {5, 3, 8, 1, 9};

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    PushArray(arr,size);
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    delete[]arr;*/

    int size = 5;
    int* ptr = nullptr;

}
    /*std::cout << arr << "\n";
    std::cout << *arr << "\n";
    std::cout << arr + 1 << "\n";
    std::cout << *(arr + 1) << "\n";*/

    /*int a = 5;
    int* ptr = &a;

    std::cout << &a << "\n";
    std::cout << ptr << "\n";
    std::cout << *ptr << "\n";
    std::cout << &ptr << "\n";*/
    

