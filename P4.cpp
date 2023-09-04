#include <iostream>
using namespace std;

int main()
{
    int tiempo, hinicial, hfinal, hora, min, hora2, min2,h,m;

    while (true)
    {
        cout << "Ingrese la hora: ";
        cin >> hinicial;
        hora = hinicial / 100;
        min = hinicial % 100;
        if (hora > 23 || min > 59)
        {
            cout << " hora incorrecto.\n La hora debe estar en el rango 00-23 y los minutos en el rango 00-59." << endl;
        }
        else
        {
            break;
        }
    }

    while (true)
    {
        cout << "Ingrese el tiempo transcurrido: ";
        cin >> hfinal;
        hora2 = hfinal / 100;
        min2 = hfinal % 100;
        if (hora2 > 23 || min2 > 59)
        {
            cout << " hora incorrecto.\n La hora debe estar en el rango 00-23 y los minutos en el rango 00-59." << endl;
        }
        else
        {
            break;
        }
    }

    tiempo = ((hora * 60) + min + (hora2 * 60) + min2);
    h =tiempo/60;
    m =tiempo%60;
    cout << "El tiempo es: " << h<<m << " minutos." << endl;

    return 0;
}



