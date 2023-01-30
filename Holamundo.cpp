#include <iostream>
using namespace std;

int main() {
    int edad = 0;
    cout << "Ingresa tu edad: ";
    cin >> edad;
    if (edad >= 18 && edad <= 40)
    {
        cout << "Puedes votar";
    }else{
        cout << "No puedes votar";
    }
    
}
