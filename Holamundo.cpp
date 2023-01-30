#include <iostream>
using namespace std;

int main() {
    while (true)
    {
        char confirmation;
        cout << "Quiere salir? ";
        cin >> confirmation;
        if (confirmation == 'y')
        {
            cout << "Adios";
            break;
        }
        
    }
      
}
