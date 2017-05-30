#include <iostream>
#include <std::vector>
#include <string>
#include <cstdlib>
//namespaces
using namespace std;

//crear clases contenidas
struct Tllanta
{
    string marca;
    string perfiles;
    float radio;
    float espesor;
};
struct Tmotor
{
    string marca;
    string modelo;
    float cilindrada;
    float potencia;
    float rpms;
};
struct Ttimon
{
    string marca;
    float radio;
};
struct Tasiento
{
    string material;
    string color;
};

//clase
class CAuto
{
    Tmotor motor;       //relacion con ocurrencia 1 a 1
    Timon timon;        //relacion con ocurrencia 1 a 1
    vector<TLlantas> listaLLantas;      //relacion con ocurrencia 1 a muchos
    vector<TAsiento> listaAsientos;      //relacion con ocurrencia 1 a muchos
    
public:
    CAuto()
    {
        // crear 4 llantas
        for(int i=0;i<4;i++)
        listaLLantas.push_back({"Dunlop","60",17,10});
        
        //crear 5 asientos
        for(int i=0;i<4;i++)
        listaAsientos.push_back({"Cuero","Negro"});
        
        timon.marca="mono";
        timon.modelo="Deportivo";
        
        //definir el motor
        motor.marca = "Roll Royce";
        motor.modelo ="V8";
        motor.rpms = 6000;
        motor.potencia = 300;
        motor.cilindrada = 4000;
    }
    
    CAuto(int nLlantas, int nAsientos, TTimon timon,TMotor motor)
    {
        // crear 4 llantas
        for(int i=0;i<nLlantas;i++)
        
        listaLLantas.push_back({"Dunlop","60",17,10});
        
        //crear 5 asientos
        for(int i=0;i<4;i++)
        listaAsientos.push_back({"Cuero","Negro"});
        
        //defimos el timon
        this->timon= timon;
        
        //definir el motor
        this->motor = motor
    }
    
};



int main()
{
    CAuto estandar;   //4 ruedas, 5 asiento, timon mono, motor rool royce
    
    TTimon timon:
    timon.marca = "Pegaso";
    timon.modelo = "Deportivo";
    
    TMotor motor;
    motor.marca = "Ferrari";
    motor.modelo ="V8";
    motor.rpms = 6000;
    motor.potencia = 500;
    motor.cilindrada = 6000;
        
        
    CAuto personalizado (4,2,timon,motor);
        
    
    return 0;
}