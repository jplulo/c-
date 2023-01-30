#include <iostream>
using namespace std;

int main() {
    int limite = 0;
    cout << "Introduce el limite: ";
    cin >> limite;
    for (int i = 1; i <= limite; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        
    }
    
}
