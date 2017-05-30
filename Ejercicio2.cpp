// Librerias 
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
// Namespaces
using namespace std;
// Crear clases contenidas
struct TPunto
{
    int x;
    int y;
};

    // Creamos la clase contenedor
class CMapa
{
    string ciudad;
    vector<TPunto> listaPuntos; // Relacion de 1 a muchos
    
    public:
    // Declaracion de constructores
    CMapa ()
    {
        ciudad = "Lima";
    }
    CMapa (string ciudad)
    {
        this->ciudad = ciudad;
    }
    
    // Metodos de Procesamientos
    void agregarPunto(int x, int y)
    {
        listaPuntos.push_back({x,y});
    }
    void listarPuntos()
    {
        for (auto punto: listaPuntos)
        cout << "Punto x = (" << punto.x << ", " << punto.y << ")" << endl;
    }
};

void eliminarPuntosPorX(int x)
{
    for (int i= listaPuntos.size()- 1: i>=0; i--)
    {
        if (listaPuntos[i].x = x)
        listaPuntos.erase(listaPuntos.begin()+i);
    }
}

// Metodo menu
int menu()
{
    int opcion = 0;
    do
    {
        system ("clear");
        cout << "MENU" << endl;
        cout << string(4, '~') << endl << endl;
        cout << "1. Ingresar Puntos" << endl;
        cout << "2. Listar Puntos" << endl;
        cout << "3. Eliminar por Posicion X" << endl;
        cout << "0. Para salir" << endl << endl;
        cout << "Opcion :";
        cin >> opcion;
    }
    
    while (opcion < 0 || opcion > 2);
    return opcion;
}




// Programa Principal
int main ()
{
    CMapa mapa; // Mapa de Lima
    int opcion = 0;
    do
        {
        opcion = menu(); // Opcion del menu
        int x, y;
        // Creamos un switch de opciones
        switch(opcion)
        {
        case 1:     //para insertar puntos
        system("clear");
        cout << "Ingrese el valor de X"; cin >> x;
        cout << "Ingrese el valor de Y"; cin >> y;
        mapa.agregarPunto(x, y);
        break;
        
        case 2:     //listar puntos
        system("clear");
        mapa.listarPuntos();
        cin.ignore(numeric_limits<streamsize)
        cin.get();
        break;
        
        case 3:
             system("clear");
             cout<<"Ingrese el X del punto a borrar : "; cin x;
             mapa.eliminarPuntosPorX(x);
             break;
        }
    }
while (opcion != 0);
return 0;
}