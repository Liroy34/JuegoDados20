#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

#include "Funciones.h"
#include<ctime>
#include "rlutil.h"
#include "Un_Jugador.h"
#include "Dos_Jugadores.h"
#include "Modo_Simulado_1Jugador.h"
#include "Modo_Simulado_2Jugadores.h"
#include "DIBUJO_DADOS.h"

using namespace rlutil;

int main(){
    setBackgroundColor(CYAN);
  setColor(BLACK);
  system("cls");
srand(time(NULL));
 int opc,CR=0;
 int C=0,D=0,i=-1,j,k,RondasSinPuntos=0,RondasConPerdidas=0,s;
 int PMAX;
 string Nombre1;
 string Nombre2;
 string NPMAX;
 int PtosApost;
 int vDados[5],vDadoMAX[5];
 int Puntaje=0,PuntajeTotal=0;
 int  PuntajeTotalJugador1,PuntajeTotalJugador2;
 int y1=5,x1=35;
 int m=30;
 int Jugadores;
 string Nombre[2];



    while(true){
            Encabezado(Nombre,PuntajeTotal,i,k);
            ///
    gotoxy(x1-1,y1);    ///esquina izquierda alta
    cout<<(char)201;
    gotoxy(75,y1);  ///esquina dercha alta
    cout<<(char)187;
    gotoxy(x1,y1++);
    for(s=1;s<41;s++)cout<<(char)205;
    gotoxy(x1-1,y1);  ///linea vertical izquierda
    cout<<(char)186;
    gotoxy(75,y1);  ///linea vertical derecha
    cout<<(char)186;
    gotoxy(x1,y1++);
    cout<<"1. JUEGO NUEVO PARA UN JUGADOR"<<endl;
    gotoxy(x1-1,y1);  ///linea vertical izquierda
    cout<<(char)186;
    gotoxy(75,y1);  ///linea vertical derecha
    cout<<(char)186;
    gotoxy(x1,y1++);
    cout<<"2. JUEGO NUEVO PARA DOS JUGADORES"<<endl;
    gotoxy(x1-1,y1);  ///linea vertical izquierda
    cout<<(char)186;
    gotoxy(75,y1);  ///linea vertical derecha
    cout<<(char)186;
    gotoxy(x1,y1++);
    cout<<"3. MOSTRAR PUNTUACION MAS ALTA"<<endl;
    gotoxy(x1-1,y1);  ///linea vertical izquierda
    cout<<(char)186;
    gotoxy(75,y1);  ///linea vertical derecha
    cout<<(char)186;
    gotoxy(x1,y1++);
    cout<<"4. MODO SIMULADO(CARGA DE DADOS MANUAL)"<<endl;
    gotoxy(x1-1,y1);  ///linea vertical izquierda
    cout<<(char)186;
     gotoxy(75,y1);  ///linea vertical derecha
    cout<<(char)186;
    gotoxy(x1,y1++);
    cout<<"0. FIN DEL PROGRAMA"<<endl;
    gotoxy(x1-1,y1);  ///linea vertical izquierda
    cout<<(char)186;
    gotoxy(75,y1);  ///linea vertical derecha
    cout<<(char)186;
    gotoxy(x1-1,y1);    ///esquina izquierda baja
    cout<<(char)200;
    gotoxy(75,y1);  ///esquina derecha abajo
    cout<<(char)188;
    gotoxy(x1,y1++);
    for(s=1;s<41;s++)cout<<(char)205;
    y1=5;
    PuntajeTotal=0;
    gotoxy(50,y1+7);
    cin>>opc;
    system("cls");
            Encabezado(Nombre,PuntajeTotal,i,k);

    switch(opc){
        ///UN JUGADOR

    case 1:

        Un_Jugador(Nombre1,NPMAX,PuntajeTotalJugador1,C,PMAX,D);

break;
    case 2:


        Dos_Jugadores(Nombre1,Nombre2,NPMAX,PuntajeTotalJugador1,PuntajeTotalJugador2,C,PMAX,D);

break;
    case 3:
        if(D>0){
        cout<<"PUNTUACION MAXIMA :"<<endl;
        cout<<NPMAX<<"\t"<<PMAX<<endl;}
        else{cout<<"No se registraron puntajes"<<endl;}

break;
    case 4: cout<<"MODO SIMULADO"<<endl;
    cout<<"Uno o Dos Jugadores"<<endl;
    cin>>Jugadores;
    if(Jugadores==1){
    MODO_SIMULADO(Nombre1,NPMAX,PuntajeTotalJugador1,C,PMAX,D);}
    else{if(Jugadores==2){Simulado_2Jugadores(Nombre1,Nombre2,NPMAX,PuntajeTotalJugador1,PuntajeTotalJugador2,C,PMAX,D);}

    }
break;

        case 0: cout<<"FIN DEL PROGRAMA"<<endl;
            return 0;
            break;
            }

    system("pause");
    system("cls");
    }

    return 0;
}



