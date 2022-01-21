
#include <iostream>
using namespace std;

int main()
{
    int entrada = 0;
    int contador = 0;
    cout << "entrada: ";
    cin >> entrada;
    cout << "salida: " << endl;
    for (int i = 2; i <= entrada; i++) {
        if (i % 2 == 0) {
            for (int j = 2; j <= entrada / 2; j++)
            {
                contador = 0;
                for (int k = 2; k <= entrada / 2; k++)
                {
                    if (j % k == 0) {
                        contador++;
                    }
                    if (contador == 1) {
                        if (j + k == i) {
                            cout << j << "+" << k << "=" << i << endl;
                        }
                    }
                }
            }
        }
    }
}

