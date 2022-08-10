#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include "rlutil.h"

using namespace rlutil;
/*/// DECLARACIÓN/PROTOTIPO DE FUNCIONES
void cargarVector(int v[], int tam);///asigna valores a cada una de las posiciones del vector

void mostrarVector(int v[], int tam);/// muestra lo que contiene cada una de las posiciones del vector

void ponerCero(int v[], int tam);/// pone en 0 todas las posiciones del vector

int contarNumerosRepetidos(int v[], int tam , int numero);///cuenta la cantidad de veces que se repite un //número en el vector

int maximoVector(int v[], int tam);///devuelve  la posición (primera) que ocupa el máximo en el vector


void cargarAleatorio(int v[], int tam, int limite);///asigna valores aleatorios a cada al vector

int sumarVector(int v[], int tam ); /// suma los valores contenidos en el vector
*/

/// Desarrollo de funciones / Definiciones
void cargarAleatorio(int v[], int tam, int limite){
  int i;
  srand(time(NULL));
  for( i=0; i<tam; i++ ){
        v[i]=(rand()%limite)+1;
  }
}
void mostrarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<v[i]<<"\t"<<endl;
    }
}
int maximoVector(int v[], int tam){
    int i, posMax=0;
    for(i=1;i<tam;i++){
        if(v[i]>v[posMax]) {
                posMax=i;
        }
    }
    return posMax;
}
int contarNumerosRepetidos(int v[], int numero, int tam){
    int i, cant=0;
    for(i=0;i<tam;i++){
        if(v[i]==numero)cant++;
        }
    return cant;
}

int sumarVector(int v[], int tam ){
    int i, suma=0;
    for(i=0;i<tam;i++){
        suma+=v[i];
    }
    return suma;
}
void cargarVector(int v[], int tam){
    int i,x=1,y=5;
    for(i=0;i<tam;i++){
        gotoxy(x,y);
        cout<<"INGRESE TIRADA: "<<endl;
        cin>>v[i];
        y=y+2;
    }
}
void ponerEnCero(int v[], int tam){
       int i;
       for(i=0;i<tam;i++){
        v[i]=0;
       }

}
void UNO(int x,int y){
    ///UNO X=30 Y=5///
    int Dado,i;
    const int y1=y;

        gotoxy(x-1,y);
        for(i=1;i<9;i++)cout<<(char)220;///linea arriba
        gotoxy(x+7,y); ///esquina derecha arriba
        cout<<(char)220;
        for(i=1;i<5;i++){
            y=y+1;           ///vertica izquierda
           gotoxy(x-1,y);
           cout<<(char)219;}

        gotoxy(x,y);   ///linea abajo
        for(i=1;i<8;i++)cout<<(char)220;
        y=y1;
        for(i=1;i<5;i++){    ///vertical derecha
            y=y+1;
           gotoxy(x+7,y);
           cout<<(char)219;}
        y=y1;
        gotoxy(x+3,y+2.5);
        cout<<(char)254;
        gotoxy(1,1);

}

void DOS(int x,int y){
///DOS X=40 Y=5///
int Dado,i;
const int y1=y;
        gotoxy(x-1,y);
        for(i=1;i<9;i++)cout<<(char)220;///linea arriba
        gotoxy(x+7,y); ///esquina derecha arriba
        cout<<(char)220;
        for(i=1;i<5;i++){
            y=y+1;           ///vertica izquierda
           gotoxy(x-1,y);
           cout<<(char)219;}

        gotoxy(x,y);   ///linea abajo
        for(i=1;i<8;i++)cout<<(char)220;
        y=y1;
        for(i=1;i<5;i++){    ///vertical derecha
            y=y+1;
           gotoxy(x+7,y);
           cout<<(char)219;}
        y=y1;
        gotoxy(x+5,y+1);
        cout<<(char)254;
        gotoxy(x+1,y+3);
        cout<<(char)254;
        gotoxy(1,1);

}

void TRES(int x,int y){
///TRES X=50 Y=5///
int Dado,x1=30,i;
const int y1=y;
         gotoxy(x-1,y);
        for(i=1;i<9;i++)cout<<(char)220;///linea arriba
        gotoxy(x+7,y); ///esquina derecha arriba
        cout<<(char)220;
        for(i=1;i<5;i++){
            y=y+1;           ///vertica izquierda
           gotoxy(x-1,y);
           cout<<(char)219;}

        gotoxy(x,y);   ///linea abajo
        for(i=1;i<8;i++)cout<<(char)220;
        y=y1;
        for(i=1;i<5;i++){    ///vertical derecha
            y=y+1;
           gotoxy(x+7,y);
           cout<<(char)219;}
        y=y1;
        gotoxy(x+5,y+1);
        cout<<(char)254;
        gotoxy(x+3,y+2.5);
        cout<<(char)254;
        gotoxy(x+1,y+3);
        cout<<(char)254;
        gotoxy(1,1);

}

void CUATRO(int x,int y){
///CUATRO X=60 Y=5///
int Dado,i;
const int y1=y;
        gotoxy(x-1,y);
        for(i=1;i<9;i++)cout<<(char)220;///linea arriba
        gotoxy(x+7,y); ///esquina derecha arriba
        cout<<(char)220;
        for(i=1;i<5;i++){
            y=y+1;           ///vertica izquierda
           gotoxy(x-1,y);
           cout<<(char)219;}

        gotoxy(x,y);   ///linea abajo
        for(i=1;i<8;i++)cout<<(char)220;
        y=y1;
        for(i=1;i<5;i++){    ///vertical derecha
            y=y+1;
           gotoxy(x+7,y);
           cout<<(char)219;}
        y=y1;
         gotoxy(x+1,y+1);
        cout<<(char)254;
        gotoxy(x+5,y+1);
        cout<<(char)254;
        gotoxy(x+1,y+3);
        cout<<(char)254;
        gotoxy(x+5,y+3);
        cout<<(char)254;
        gotoxy(1,1);

}

void CINCO(int x,int y){
    int Dado,i;
    const int y1=y;
///CINCO X=70 Y=5///
         gotoxy(x-1,y);
        for(i=1;i<9;i++)cout<<(char)220;///linea arriba
        gotoxy(x+7,y); ///esquina derecha arriba
        cout<<(char)220;
        for(i=1;i<5;i++){
            y=y+1;           ///vertica izquierda
           gotoxy(x-1,y);
           cout<<(char)219;}

        gotoxy(x,y);   ///linea abajo
        for(i=1;i<8;i++)cout<<(char)220;
        y=y1;
        for(i=1;i<5;i++){    ///vertical derecha
            y=y+1;
           gotoxy(x+7,y);
           cout<<(char)219;}
        y=y1;
         gotoxy(x+1,y+1);
        cout<<(char)254;
        gotoxy(x+5,y+1);
        cout<<(char)254;
        gotoxy(x+3,y+2.5);
        cout<<(char)254;
        gotoxy(x+1,y+3);
        cout<<(char)254;
        gotoxy(x+5,y+3);
        cout<<(char)254;
        gotoxy(1,1);

}

void SEIS(int x,int y){
    int Dado,i;
    const int y1=y;
 ///DADO TIPO 6 X=80 Y=5///
       gotoxy(x-1,y);
        for(i=1;i<9;i++)cout<<(char)220;///linea arriba
        gotoxy(x+7,y); ///esquina derecha arriba
        cout<<(char)220;
        for(i=1;i<5;i++){
            y=y+1;           ///vertica izquierda
           gotoxy(x-1,y);
           cout<<(char)219;}

        gotoxy(x,y);   ///linea abajo
        for(i=1;i<8;i++)cout<<(char)220;
        y=y1;
        for(i=1;i<5;i++){    ///vertical derecha
            y=y+1;
           gotoxy(x+7,y);
           cout<<(char)219;}
        y=y1;
         gotoxy(x+1,y+1);
        cout<<(char)254;
        gotoxy(x+5,y+1);
        cout<<(char)254;
        gotoxy(x+1,y+3);
        cout<<(char)254;
        gotoxy(x+5,y+3);
        cout<<(char)254;
        gotoxy(x+1,y+2.5);
        cout<<(char)254;
        gotoxy(x+5,y+2.5);
        cout<<(char)254;

     gotoxy(1,1);
}

void Encabezado (string Nombre[],int &PuntajeTotal,int &i,int &k){
    int s,x2=30,y2=2,A=0;
            gotoxy(28,1);    ///esquina izquierda alta
            cout<<(char)201;
            gotoxy(28,2);    ///linea recta esquina izquierda
            cout<<(char)186;
            gotoxy(28,3);    ///esquina izquierda baja
            cout<<(char)200;
            gotoxy(29,1);   ///linea Ronda arriba
            for(s=1;s<16;s++)cout<<(char)205;
            gotoxy(29,3);   ///linea Ronda abajo
            for(s=1;s<16;s++)cout<<(char)205;
            gotoxy(44,1);  ///intermedio arriba
            cout<<(char)203;
            gotoxy(44,2);  ///linea vertical
            cout<<(char)186;
            gotoxy(44,3);  ///intermedio abajo
            cout<<(char)202;
            gotoxy(45,1);  ///linea nombre arriba
            for(s=1;s<22;s++)cout<<(char)205;
            gotoxy(45,3);  ///linea nombre abajo
            for(s=1;s<22;s++)cout<<(char)205;
            gotoxy(66,1); ///intermedio arriba
            cout<<(char)203;
            gotoxy(66,2); ///linea vertical
            cout<<(char)186;
            gotoxy(66,3);///intermedio abajo
            cout<<(char)202;
            gotoxy(67,1); ///linea puntos arriba
            for(s=1;s<24;s++)cout<<(char)205;
            gotoxy(67,3); ///linea puntos abajo
            for(s=1;s<24;s++)cout<<(char)205;
            gotoxy(89,1);  ///esquina derecha arriba
            cout<<(char)187;
            gotoxy(89,2);  ///linea vertical
            cout<<(char)186;
            gotoxy(89,3);  ///esquina derecha abajo
            cout<<(char)188;

            gotoxy(x2,y2);
            if(i>=0){A=1;}

            if(A==1){
            cout<<"RONDA N°: "<<i+1<<endl;}
            else{cout<<"RONDA N: ---"<<endl;}
            gotoxy(x2+16,y2);
            if(k==0){
            cout<<"JUGADOR: "<<Nombre[0]<<endl;}
            else{
                    if(k==1){cout<<"JUGADOR: "<<Nombre[1]<<endl;}
                    else cout<<"JUGADOR: N/A "<<endl;}
            gotoxy(x2+40,y2);
            cout<<"PUNTOS ACTUALES: "<<PuntajeTotal<<endl;
}


#endif // FUNCIONES_H_INCLUDED
