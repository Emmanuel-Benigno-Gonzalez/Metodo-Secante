#include <iostream>
#include<stdlib.h>
#include <string>
#include<math.h>
#include <cmath>
#include <iomanip>
using namespace std;
class Funcion_Paracaedista{
    private:
        float Gravedad;
        float Velocidad;
        float Coeficiente_arrastre;
        float Masa_aprox;
        float Tiempo;
    public:
        Funcion_Paracaedista(float,float,float,float,float);
        void set_Gravedad(float x);
        float get_Gravedad();
        void set_Velocidad(float x);
        float get_Velocidad();
        void set_Coeficiente_arrastre(float x);
        float get_Coeficiente_arrastre();
        void set_Masa_aprox(float x);
        float get_Masa_aprox();
        void set_Tiempo(float x);
        float get_Tiempo();
        float Evaluar_Funcion();
};
Funcion_Paracaedista::Funcion_Paracaedista(float g,float v,float ca,float masa,float t){
    Gravedad=g;
    Velocidad=v;
    Coeficiente_arrastre=ca;
    Masa_aprox=masa;
    Tiempo=t;
}
void Funcion_Paracaedista::set_Gravedad(float x){
    Gravedad=x;
}
float Funcion_Paracaedista::get_Gravedad(){
    return Gravedad;
}
void Funcion_Paracaedista::set_Velocidad(float x){
    Velocidad=x;
}
float Funcion_Paracaedista::get_Velocidad(){
    return Velocidad;
}
void Funcion_Paracaedista::set_Coeficiente_arrastre(float x){
    Coeficiente_arrastre=x;
}
float Funcion_Paracaedista::get_Coeficiente_arrastre(){
    return Coeficiente_arrastre;
}
void Funcion_Paracaedista::set_Masa_aprox(float x){
    Masa_aprox=x;
}
float Funcion_Paracaedista::get_Masa_aprox(){
    return Masa_aprox;
}
void Funcion_Paracaedista::set_Tiempo(float x){
    Tiempo=x;
}
float Funcion_Paracaedista::get_Tiempo(){
    return Tiempo;
}
float Funcion_Paracaedista::Evaluar_Funcion(){
    float Funcion_Evaluada;
    Funcion_Evaluada=(((Gravedad*Masa_aprox)/(Coeficiente_arrastre))*(1-exp(-
    (Coeficiente_arrastre/Masa_aprox)*Tiempo))-Velocidad);
    return Funcion_Evaluada;
}
class CL_Vista{
    private:
        string mensaje_programa;
        string respuesta_usuario;
    public:
        void set_mensaje_programa(string x);
        string get_mensaje_programa();
        void set_respuesta_usuario(string x);
        string get_respuesta_usuario();
        void enviar_mensaje();
        void recibir_respuesta();
};
void CL_Vista::set_mensaje_programa(string x){
    mensaje_programa=x;
}
string CL_Vista::get_mensaje_programa(){
    return mensaje_programa;
}
void CL_Vista::set_respuesta_usuario(string x){
    respuesta_usuario=x;
}
string CL_Vista::get_respuesta_usuario(){
    return respuesta_usuario;
}
void CL_Vista::enviar_mensaje(){
    cout<<mensaje_programa<<endl;
}
void CL_Vista::recibir_respuesta(){
    cin>>respuesta_usuario;
}
class Metodo_Secante{
    private:
        int Iteracion;
        float X0;
        float X1;
        float FX0;
        float FX1;
        float Error_R_P;
    public:
        Metodo_Secante(int,float,float,float,float);
        void set_Iteracion(int x);
        int get_Iteracion();
        void set_X0(float x);
        float get_X0();
        void set_X1(float x);
        float get_X1();
        void set_fX0(float x);
        float get_fX0();
        void set_fX1(float x);
        float get_fX1();
        void set_Error_R_P(float x);
        float get_Error_R_P();
        float calcular_raiz();
        void calcular_Error_R_P();
};
Metodo_Secante::Metodo_Secante(int ite,float x0,float x1,float fx0,float fx1){
    Iteracion=ite;
    X0=x0;
    X1=x1;
    FX0=fx0;
    FX1=fx1;
}
void Metodo_Secante::set_Iteracion(int x){
    Iteracion=x;
}
int Metodo_Secante::get_Iteracion(){
    return Iteracion;
}
void Metodo_Secante::set_X0(float x){
    X0=x;
}
float Metodo_Secante::get_X0(){
    return X0;
}
void Metodo_Secante::set_X1(float x){
    X1=x;
}
float Metodo_Secante::get_X1(){
    return X1;
}
void Metodo_Secante::set_fX0(float x){
    FX0=x;
}
float Metodo_Secante::get_fX0(){
    return FX0;
}
void Metodo_Secante::set_fX1(float x){
    FX1=x;
}
float Metodo_Secante::get_fX1(){
    return FX1;
}
void Metodo_Secante::set_Error_R_P(float x){
    Error_R_P=x;
}
float Metodo_Secante::get_Error_R_P(){
    return Error_R_P;
}
    float Metodo_Secante::calcular_raiz(){
    float Raiz_calculada;
    Raiz_calculada=(X1-(FX1*(X0-X1))/(FX0-FX1));
    return Raiz_calculada;
}
void Metodo_Secante::calcular_Error_R_P(){
    Error_R_P=abs(((X1-X0)/(X1))*100);
}
int main()
{
    string mensaje1;
    string mensaje2;
    string mensaje3;
    string mensaje4;
    string mensaje5;
    string mensaje6;
    string mensaje7;
    string mensaje8;
    string mensaje9;
    string respuesta;
    float v;
    float t;
    float c_a;
    float a;
    float b;
    float g=9.81;
    int ite;
    float x0;
    float x1;
    float fx0;
    float fx1;
    mensaje1="Método de la Secante";
    mensaje2="Aproximar la Masa de un Paracaedista";
    mensaje3="Ingrese la Velocidad";
    mensaje4="Ingrese Tiempo";
    mensaje5="Ingrese el Coeficiente de arrastre";
    mensaje6="Ingrese el rango a: ";
    mensaje7="Ingrese el Rango b: ";
    mensaje8="Ingrese el numero de Iteraciones: ";
    mensaje9="******Tabla Iteraciones*******";
    CL_Vista objeto_miVista=CL_Vista();
    objeto_miVista.set_mensaje_programa(mensaje1);
    objeto_miVista.enviar_mensaje();
    objeto_miVista.set_mensaje_programa(mensaje2);
    objeto_miVista.enviar_mensaje();
    objeto_miVista.set_mensaje_programa(mensaje3);
    objeto_miVista.enviar_mensaje();
    objeto_miVista.recibir_respuesta();
    respuesta=objeto_miVista.get_respuesta_usuario();
    v=std::stof(respuesta);
    objeto_miVista.set_mensaje_programa(mensaje4);
    objeto_miVista.enviar_mensaje();
    objeto_miVista.recibir_respuesta();
    respuesta=objeto_miVista.get_respuesta_usuario();
    t=std::stof(respuesta);
    objeto_miVista.set_mensaje_programa(mensaje5);
    objeto_miVista.enviar_mensaje();
    objeto_miVista.recibir_respuesta();
    respuesta=objeto_miVista.get_respuesta_usuario();
    c_a=std::stof(respuesta);
    objeto_miVista.set_mensaje_programa(mensaje6);
    objeto_miVista.enviar_mensaje();
    objeto_miVista.recibir_respuesta();
    respuesta=objeto_miVista.get_respuesta_usuario();
    a=std::stof(respuesta);
    objeto_miVista.set_mensaje_programa(mensaje7);
    objeto_miVista.enviar_mensaje();
    objeto_miVista.recibir_respuesta();
    respuesta=objeto_miVista.get_respuesta_usuario();
    b=std::stof(respuesta);
    objeto_miVista.set_mensaje_programa(mensaje8);
    objeto_miVista.enviar_mensaje();
    objeto_miVista.recibir_respuesta();
    respuesta=objeto_miVista.get_respuesta_usuario();
    ite=std::stoi(respuesta);
    int Iteraciones[ite];
    float Raices[ite];
    float Funciones[ite];
    float Errores[ite];
    for(int i=0;i<ite;i++){
        Iteraciones[i]=0;
        Raices[i]=0;
        Funciones[i]=0;
        Errores[i]=0;
    }
    for(int i=0;i<=ite+1;i++)
    {
        if(i<2){
            if(i==0){
                Funcion_Paracaedista objeto_miFuncion=Funcion_Paracaedista(g,v,c_a,a,t);
                Funciones[i]=objeto_miFuncion.Evaluar_Funcion();
                Raices[i]=a;
                Iteraciones[i]=i-1;
                Errores[i]=0;
            }else{
                Funcion_Paracaedista objeto_miFuncion=Funcion_Paracaedista(g,v,c_a,b,t);
                Funciones[i]=objeto_miFuncion.Evaluar_Funcion();
                Raices[i]=b;
                Iteraciones[i]=i-1;
                x0=Raices[i-1];
                x1=Raices[i];
                fx0=Funciones[i-1];
                fx1=Funciones[i];
                Metodo_Secante objeto_miSecante=Metodo_Secante(ite,x0,x1,fx0,fx1);
                objeto_miSecante.calcular_Error_R_P();
                Errores[i]=objeto_miSecante.get_Error_R_P();
            }
        }else{
            Metodo_Secante objeto_miSecante=Metodo_Secante(ite,x0,x1,fx0,fx1);
            Raices[i]=objeto_miSecante.calcular_raiz();
            x0=Raices[i-1];
            x1=Raices[i];
            Funcion_Paracaedista objeto_miFuncion=Funcion_Paracaedista(g,v,c_a,x1,t);
            Funciones[i]=objeto_miFuncion.Evaluar_Funcion();
            fx0=Funciones[i-1];
            fx1=Funciones[i];
            objeto_miSecante.set_X0(x0);
            objeto_miSecante.set_X1(x1);
            objeto_miSecante.calcular_Error_R_P();
            Errores[i]=objeto_miSecante.get_Error_R_P();
            Iteraciones[i]=i-1;
        }
    }
        objeto_miVista.set_mensaje_programa(mensaje9);
        objeto_miVista.enviar_mensaje();
    for(int i=0; i<ite; i++)
    {
        cout<<"Iteracion: "<<Iteraciones[i]<<"\t Raiz xi: "<<fixed<<setprecision(4)<<Raices[i]<<"\t Funcion fxi:"<<fixed<<setprecision(9)<<Funciones[i]<<"\t Error Relativo Porcentual: "<<Errores[i]<<"%" <<endl;
    }
    return 0;
}