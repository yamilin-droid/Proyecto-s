# include <iostream>

int main() {
    // Declaración e inicialización de un arreglo de 5 enteros
    int arr[5] = {10, 20, 30, 40, 50};

    // Acceder a elementos
    std::cout << "Primer elemento: " << arr[0] << '\n'; // 10
    std::cout << "Tercer elemento: " << arr[2] << '\n'; // 30

    // Modificar un elemento
    arr[1] = 25; // ahora arr = {10, 25, 30, 40, 50}

    // Recorrer el arreglo
    std::cout << "Contenido del arreglo: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i];
        if (i < 4) std::cout << ", ";
    }
    std::cout << '\n';

    // Obtener el número de elementos (tamaño) usando sizeof
    int n = sizeof(arr) / sizeof(arr[0]); // 5
    std::cout << "Tamaño del arreglo: " << n << '\n';

    return 0;
}