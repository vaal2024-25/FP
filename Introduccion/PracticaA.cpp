#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
    //Localización de las 
    locale loc("");
    cout.imbue(loc);
    //1. Entero (int)
    int numeroEntero = 42;
    cout << "Entero: " << numeroEntero << endl;
    cout << "Rango INT : " << numeric_limits<int>::min() << " a " << numeric_limits<int>::max() << endl;

    //Declaracion de un numero corto
    short int numeroCorto = 30000;
    //Imprimir el valor d eun numero corto
    cout << "Entero Corto" << numeroCorto << endl;
    cout << "Rango short int : " << numeric_limits<short int>::min() << " a " << numeric_limits<short int>::max()<< endl;

    //Declaración de un numero largo
    long long numeroLargo = 9000000000000000000;
    //Imprimir el valor de un numeor largo
    cout << "Entero Largo" << numeroLargo << endl;
    cout << "Rango long long : " << numeric_limits<long long>::min() << " a " << numeric_limits<long long>::max() << endl;

    //Declaración de un numero entero sin signo 
    unsigned int numerosinsigno = 4000000000;
    // Imp
    cout << "Entero sin signo" << numerosinsigno << endl;
    cout << "Rango unsigned INT : " << numeric_limits<unsigned int>::min() << " a " << numeric_limits<unsigned int>::max() << endl;

    // Declaración de un numero entero corto sin signo
    unsigned short int numeroCortosinsigno = 65987;
    //imp
    cout << "Entero corto sin signo" << numeroCortosinsigno << endl;
    cout << "Rango unsigned short INT : " << numeric_limits<unsigned short int>::min() << " a " << numeric_limits<unsigned short int>::max() << endl;

    //Declaracion de un numero entero largo sin signo
    unsigned long long numeroLargosinsigno = 300000000000UL;
    //Imprimir el valor de numero entero largo sin signo
    cout << "Entero largo sin signo: " << numeroLargosinsigno << endl;
    cout << "Rango unsigned long long INT : " << numeric_limits<unsigned long long int>::min() << " a " << numeric_limits<unsigned long long int>::max() << endl;

    //Declaración de un número entero con signo explícito 
    signed int numeroConSigno = -65;
    //Imprimir
    cout << "Entero con signo: " << numeroConSigno << endl;
    cout << "Rango signed INT : " << numeric_limits<signed int>::min() << " a " << numeric_limits<signed int>::max() << endl;

    //Declaración de un número entero corto con signo explícito
    signed short int numeroCortoConSigno = -3015;
    //imprimir
    cout << "Entero corto con signo: " << numeroCortoConSigno << endl;
    cout << "Rango signed short INT : " << numeric_limits<signed short int>::min() << " a " << numeric_limits<signed short int>::max() << endl;

    //Declaración de un número largo con signo explícito
    signed long long int numeroLargoConSigno = -1597538642L;
    //imprimir
    cout << "Entero largo con signo: " << numeroLargoConSigno << endl;
    cout << "Rango signed long long INT : " << numeric_limits<signed long long int>::min() << " a " << numeric_limits<signed long long int>::max() << endl;

    //Declaracion de un numero entero largo largo
    long long int numeroLargoLargo = 1234567891234567LL;
    //imprimir
    cout << "Entero Largo Largo: " << numeroLargoLargo << endl;
    cout << "Rango long long INT : " << numeric_limits<long long int>::min() << " a " << numeric_limits<long long int>::max() << endl;


    // Declaración y asignación en dos pasos 
    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;
    cout << endl; //salto de linea
    cout << "Tu edad es: " << edad << endl;
    // cin no lleva endl, no lleva otras variables y esta en cada variable 


    //numeros con punto decimal
    float pi = 3.1415926535897932;
    double PI = 3.1415926535897932;
    cout << fixed;
    cout << setprecision(16);
    cout << "flotante pi: " << pi << endl;
    cout << "double PI: " << PI << endl;

    float kilos;
    cout << "Dame tu peso: ";
    cin >> kilos;
    cout << "Tu peso es: " << kilos << endl;

    const int velocidadLuz = 300000;
    const float gravedad = 9.81;

    string nombre = "Valeria";
    string apellidoPaterno = "Ojeda";
    cout << "Nombre Completo: " << nombre << " " << apellidoPaterno << endl; 

    // Preguntar por estatura
    float estatura;
    cout << "Dame tu estatura : ";
    cin >> estatura;
    cout << endl;
    cout << "Tu estatura es : "
        << estatura << endl;



    return 0;
}
