 #include <iostream>;
using namespace std;

void personal() {

    string nombre, apellido;
    int fecha, edad;

    cout << "cual es tu nombre:";
    cin >> nombre;

    cout << "cual es tu apellido: ";
    cin >> apellido;

    cout << "cual es tu anno de nacimiento: ";
    cin >> fecha;

    edad = 2024 - fecha;

    cout << "Tu nombre es: " << nombre << "Tu apellido es: " << apellido << "Tu edad es" << edad;
}

void triangulo() {
    float base, altura, area;

    // solicitar el los lados que necesitamos

    cout <<"Ingrese el valor de la altura del trangulo: ";
    cin >> altura;


    cout <<"ingrese el valor de la base del triangulo: ";
    cin >> base;

    area = (base* altura) / 2;

    // mostrar el resultado
    cout<< "El area del triangulo es: " << area <<endl;
};

void mult() {

     int num;

     cout << "De que numero vas a querer mult: ";
     cin >> num;

     cout << " Imprimiremos la tabla de mult del: " << num << endl;

     for( int i = 0 ; i <= 12 ; i ++) {
        cout << num << " x " << i << "=" << num * i << endl;
     }
}

void mese () {
    int mes;
    cout << " De que numero quieres saber el mes: ";
    cin >> mes;
    switch (mes)
    {
        case 1:
            cout << "Enero";
            break;
        case 2:
            cout << "Febrero";
            break;
        case 3:
            cout << "Marzo";
            break;
        case 4:
            cout << "Abril";
            break;
        case 5:
            cout << "Mayo";
            break;
        case 6:
            cout << "Junio";
            break;
        case 7:
            cout << "Julio";
            break;
        case 8:
            cout << "Agosto";
            break;
        case 9:
            cout << "Septiembre";
            break;
        case 10:
            cout << "Octubre";
            break;
        case 11:
            cout << "Noviembre";
            break;
        case 12:
            cout << "Diciembre";
            break;
        default:
            cout << "El numero que introdujo no correspionde a un mes." << endl;
            break;
        }
}

int main(){

    int opcion;

    cout << "Menu de opciones:" << endl;
    cout << "1. Calcular edad de una persona" << endl;
    cout << "2. Calcular el area de un triangulo" << endl;
    cout << "3 Quieres mult  un valor " << endl;
    cout << "4. Saber el mes seguen el numero" << endl;

    cout << "Seleccione una opcion: ";
    cin  >> opcion;

    switch (opcion) {
         case 1:
           personal();
           break;
         case 2:
            triangulo();
            break;
         case 3:
            mult();
            break;
        case 4:
            mese();
            break;
         default:
            cout << "opcion no valida.-"<< endl;
             break;
}
    return 0;

}

