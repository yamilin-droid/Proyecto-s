# include <iostream>

int main() {
  
    int arr[5] = {10, 20, 30, 40, 50};

    std::cout << "Primer elemento: " << arr[0] << '\n'; 
    std::cout << "Tercer elemento: " << arr[2] << '\n'; 

    arr[1] = 25;

    std::cout << "Contenido del arreglo: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i];
        if (i < 4) std::cout << ", ";
    }
    std::cout << '\n';

    int n = sizeof(arr) / sizeof(arr[0]); 
    std::cout << "Tamaño del arreglo: " << n << '\n';

    return 0;

}
