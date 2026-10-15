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

int main()
{
    const int size = 5;
    int arr[size];
    srand(time(NULL));
    int a = 5;
    int* car = new int;

    delete car;
    car = nullptr;

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
    
}
