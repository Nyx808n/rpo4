#include <iostream>
#include <string>
#include <limits>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
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
    /*std::string name = "text";
   std::string* ptr = nullptr;
   ptr = new std::string[10];
   delete[] ptr;

   std::string arr[5]{ "apple", "garlic", "pineapple", "orange", "pear" };
   auto it = std::find(arr->begin(), arr->end(), "apple");
   name.size();
   name.erase(2);

   std::string one;
   int num = 0;

   std::getline(std::cin, one);
   std::cout << one << "\n";

   std::cin >> num;
   std::cout << num << "\n";
   //std::cin.ignore(20000, '\n');
   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

   std::getline(std::cin, one);
   std::cout << one << "\n";*/

    std::string login;
    std::string password;


    while (true) {
        std::cout << "\tРегистрация\n";
        std::cout << "Введите логин длиной от 5 до 15 символов: ";
        std::getline(std::cin, login);
        std::cout << "Введите пароль длиной от 5 до 15 символов: ";
        std::getline(std::cin, password);

        if ((login.size() < 5 || login.size() > 15) || (password.size() < 5 || password.size() > 15)) {
            std::cout << "Неверный ввод логина или пароля, попробуйте еще раз\n";
        }
        else {
            std::cout << "Успешная регистрация!";
            break;
        }
    }

    std::string login2;
    std::string password2;

    while (true) {
        std::cout << "\n\tАвторизация\n";
        std::cout << "Введите логин длиной от 5 до 15 символов: ";
        std::getline(std::cin, login2);
        std::cout << "Введите пароль длиной от 5 до 15 символов: ";
        std::getline(std::cin, password2);

        if (login2 == login && password2 == password) {
            std::cout << "Вы успешно авторизированы! Добро пожаловать";
            break;
        }
        else {
            std::cout << "Ошибка в логине или пароле, попробуйте еще раз\n";
        }
    }

}

/*void MySwap(int* num1, int* num2) {
    std::cout << *num1 << " " << *num2 << "\n";
    int num3 = *num1;
    *num1 = *num2;
    *num2 = num3;
    std::cout << *num1 << " " << *num2;
}
void MySwap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

void FillArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = rand() % 15;
        std::cout << *(arr + i) << " ";
    }

}

void PushArray(int*& arr, int size) {
    int* temp = new int[size];
    for (int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }
    delete[] arr;
    size++;
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

}*/
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
    

