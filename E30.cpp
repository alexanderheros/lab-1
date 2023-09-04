#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int numeroAdivinar = rand() % 101;
    int intentos = 0;
    int numeroUsuario;

    cout << "Bienvenido al juego de adivinar el número!" << endl;

    while (true) {
        cout << "Ingresa un número entre 0 y 100: ";
        cin >> numeroUsuario;

        intentos+=1;

        if (numeroUsuario < numeroAdivinar) {
            cout << "El número es mayor." << endl;
        } else if (numeroUsuario > numeroAdivinar) {
            cout << "El número es menor." << endl;
        } else {
            cout << "¡Felicidades! Adivinaste el número en " << intentos << " intentos." << endl;
            break;
        }
    }

    return 0;
}