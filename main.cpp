#include <iostream>

//  Функція сортування 
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//головна функція main
int main() {
    std::setlocale(LC_ALL, "UKRAINIAN");

    int n;
    std::cout << "Введіть розмір масиву: ";
    std::cin >> n;

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

    // Викликаємо сортування
    bubbleSort(arr, n);

    std::cout << "Відсортований масив: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    delete[] arr;
    return 0;
}