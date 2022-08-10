#ifndef DOS_JUGADORES_H_INCLUDED
#define DOS_JUGADORES_H_INCLUDED


void Dos_Jugadores(string &Nombre1,string &Nombre2,string &NPMAX,int &PuntajeTotalJugador1,int &PuntajeTotalJugador2,int &C,int &PMAX,int &D){
    int CR=0;
 int i=-1,j,k,l,RondasSinPuntos=0,RondasConPerdidas=0,s;
 int PtosApost;
 int vDados[5],vDadoMAX[5];
 int Puntaje=0,PuntajeTotal=0;
 int  PuntajeTotalJugador[1];
 int y1=5,x1=35,x2=30,y2=2;
 int m;
 int NJ=0;
 int U=0;
string Nombre[2];


for(l=0;l<2;l++){
            gotoxy(x1,y1+2*l);

            cout<<"Ingrese el nombre del jugador "<<l+1<<endl;
            C++;
            U=U+1;
            gotoxy(x1,y1+U);
            U=U+1;
            cin>> Nombre[l];

            }
            system("cls");
            Encabezado(Nombre,PuntajeTotal,i,k);

            gotoxy(x1,y1);
            cout<<"¿Cuantas rondas desean jugar?"<<endl;
            gotoxy(x1,y1+1);
            cin>>CR;
            for(k=0;k<=1;k++){
                    PuntajeTotal=0;
                    Puntaje=0;
            gotoxy(x1,y1+2);
            system("pause");
            system("cls");

            for(i=0;i<CR;i++){
            Encabezado(Nombre,PuntajeTotal,i,k);
            ponerEnCero(vDadoMAX,5);
            gotoxy(x2,y1);
            cout<<"Juega el jugador "<<Nombre[k]<<endl;
            m=5;
            gotoxy(x2,y1+1);
            cout<<Nombre[k]<<" ¿Cuantos puntos desea apostar?"<<endl;
            gotoxy(x2,y1+6);
            cin>> PtosApost;
            for(j=0;j<=5;j++){
                gotoxy(x2,y1-1);
            cout<<Nombre[k]<<" Presione un boton para tirar los dados"<<endl;
            gotoxy(x2,17);
            system("Pause");
            system("cls");
            Encabezado(Nombre,PuntajeTotal,i,k);

            ///////////////////////////////////////////////////////////////////

            gotoxy(40,11);
            cout<<"----DADOS MAS ALTOS----";
            TODOS_LOS_DADOS(vDadoMAX);                        ///MUESTRO LOS DADOS MAXIMOS HASTA EL MOMENTO
            cargarAleatorio(vDados,5-j,6);                  ///GIRAN LOS DADOS
            vDadoMAX[j]=vDados[maximoVector(vDados,5-j)]; ///ALMACENO LOS DADOS MAXIMOS EN UN VECTOR
            DIBUJO_DADOS(vDados,m);                  ///GRAFICO DE LOS DADOS DISMINUYENDO
            m=m-1;}
           ///MUESTRO LOS DADOS QUE SALIERON



            //////////////////////





            ////////////////////////////////////



            gotoxy(35,19);
            cout<<Nombre[k]<<" Su puntaje es de: "<<sumarVector(vDadoMAX,5)<<endl;
            gotoxy(35,20);
            system("pause");
            system("cls");
            Encabezado(Nombre,PuntajeTotal,i,k);

            if(sumarVector(vDadoMAX,5)>=20 && sumarVector(vDadoMAX,5)<25 ){
                    gotoxy(35,19);
                    cout<<"TIRADA DE PUNTAJE"<<endl;
                    gotoxy(35,20);
                    cout<<"Presione para tirar los dados"<<endl;
                    gotoxy(35,21);
                    system("pause");
                    system("cls");
                    Encabezado(Nombre,PuntajeTotal,i,k);


                    for(j=20;j<=25;j++){
                        NJ++;
                    if(sumarVector(vDadoMAX,5)==j){
                     cargarAleatorio(vDados,5,6);
                     gotoxy(40,11);
                     cout<<"Dados Maximos: Tirada de Puntaje"<<endl;
                    TODOS_LOS_DADOS(vDados);                  ///GRAFICO DE LOS DADOS
                    gotoxy(35,19);
                     cout<<"Numeros Repetidos "<<contarNumerosRepetidos(vDados,NJ,5)<<endl;
                     Puntaje=(contarNumerosRepetidos(vDados,NJ,5))*PtosApost;
                     if(contarNumerosRepetidos(vDados,NJ,5)==0){
                            gotoxy(1,6);
                        gotoxy(35,20);
                        cout<<"No hay numeros repetidos"<<endl;
                        gotoxy(35,21);
                        cout<<"Pierde Puntos"<<endl;
                }
                }
                }
                }
        else{
             if(sumarVector(vDadoMAX,5)>=25){
                        gotoxy(35,19);
                        cout<<"TIRADA DE PUNTAJE"<<endl;
                        gotoxy(35,20);
                        cout<<"Presione para tirar los dados"<<endl;
                        gotoxy(35,21);
                        system("pause");
                        system("cls");
                        Encabezado(Nombre,PuntajeTotal,i,k);

                        cargarAleatorio(vDados,5,6);
                        gotoxy(40,11);
                        cout<<"Dados Maximos de la Tirada de Puntaje"<<endl;
                        TODOS_LOS_DADOS(vDados);                  ///GRAFICO DE LOS DADOS

                        gotoxy(35,19);
                        cout<<"Numeros repetidos "<<contarNumerosRepetidos(vDados,6,5)<<endl;  ///ME FIJO CUANTAS VECES SE REPITE EL NUMERO 6
                        Puntaje=(contarNumerosRepetidos(vDados,6,5))*PtosApost;
                        if(contarNumerosRepetidos(vDados,6,5)==0){
                            gotoxy(35,20);
                            cout<<"No hay numeros repetidos"<<endl;
                            gotoxy(35,21);
                            cout<<"Pierde Puntos"<<endl;         }
                                          }
                    else{
                        i=CR;
                        gotoxy(x1,y1);
                        gotoxy(35,22);
                        cout<<"Se acabo el juego, su puntaje es menor a 20"<<endl;
                        Puntaje=0;
                        }
            }
            gotoxy(30,10);
                gotoxy(35,23);
                system("pause");
                system("cls");
                Encabezado(Nombre,PuntajeTotal,i,k);



///SUMO O RESTO EL PUNTAJE DEPENDIENDO DE SI GANA O PIERDE
                        if(Puntaje==0){
                            PuntajeTotal=PuntajeTotal-PtosApost;}
                            else{
                                    PuntajeTotal=PuntajeTotal+Puntaje;
                        }
                               if(k==0){
                                Nombre1=Nombre[k];
                                PuntajeTotalJugador1=PuntajeTotal;
                            }
                            else{
                                Nombre2=Nombre[k];
                                PuntajeTotalJugador2=PuntajeTotal;
                            }
                            }
                        }



/// EL GANADOR ES:
if(PuntajeTotalJugador1>PuntajeTotalJugador2){
gotoxy(x2,y1);
cout<<"El ganador es "<<Nombre1<<" Con "<<PuntajeTotalJugador1<<" Puntos"<<endl;
PuntajeTotal=PuntajeTotalJugador1;}
else{ if(PuntajeTotalJugador2>PuntajeTotalJugador1){
gotoxy(x2,y1);
cout<<"El ganador es "<<Nombre2<<" Con "<<PuntajeTotalJugador2<<" Puntos"<<endl;
PuntajeTotal=PuntajeTotalJugador2;}

else{gotoxy(x2,y1);
        cout<<"EMPATE"<<endl;}}
gotoxy(x2,y1+1);
system("Pause");
system("cls");

///PUNTUACION MAXIMA
for(i=0;i<C;i++){
    if(D==0){
        D++;
        PMAX=PuntajeTotal;
        NPMAX=Nombre[i];
    }
    else{if(PMAX<PuntajeTotal){
        PMAX=PuntajeTotal;
        NPMAX=Nombre[i];
    }
}
}

}
#endif // DOS_JUGADORES_H_INCLUDED

