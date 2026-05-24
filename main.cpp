#include <iostream>

// Робимо анонс функції
void bubbleSort(int arr[], int n);

int main() {
  
    std::setlocale(LC_ALL, "UKRAINIAN");

    int n;
    std::cout << "Введіть розмір масиву: ";
    std::cin >> n;

    // Створюємо динамічний масив
    int* arr = new int[n];

    std::cout << "Введіть " << n << " елементів масиву:\n";
    for (int i = 0; i < n; i++) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];
    }

    std::cout << "\nПочатковий масив: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

   
  // викликаємо функцію
    bubbleSort(arr, n);

    std::cout << "\nВідсортований масив: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    // Очищаємо пам'ять
    delete[] arr;
    return 0;
}