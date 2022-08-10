#ifndef MODO_SIMULADO_H_INCLUDED
#define MODO_SIMULADO_H_INCLUDED
void MODO_SIMULADO(string &Nombre1,string &NPMAX,int &PuntajeTotalJugador1,int &C,int &PMAX,int &D){
      int CR=0;
 int i=-1,j,k,l,RondasSinPuntos=0,RondasConPerdidas=0,s;
 int PtosApost;
 int vDados[5],vDadoMAX[5];
 int Puntaje=0,PuntajeTotal=0;
 int  PuntajeTotalJugador[1];
 int y1=5,x1=35,x2=30,y2=2;
 int m;
 int NJ=0;


 string Nombre[2];

Puntaje=0;

            gotoxy(x1,y1);
            cout<<"Ingrese su nombre"<<endl;
            gotoxy(x1,y1+1);
            cin>>Nombre[0];
            C++;                   ///Esta C la uso para la puntuacion maxima del final
            system("cls");
            Encabezado(Nombre,PuntajeTotal,i,k);      ///Llamo al encabezado

            gotoxy(x1,y1);
            cout<<Nombre[0]<<" Cuantas rondas desea jugar?"<<endl;
            gotoxy(x1,y1+1);
            cin>>CR;
            k=0;                      ///Esta k=0 la uso para decirle al encabezado que me muestre el jugador Nº1
            for(i=0;i<CR;i++){
            m=5;
            ponerEnCero(vDadoMAX,5);
            gotoxy(x1,y1);
            system("pause");
            system("cls");

            Encabezado(Nombre,PuntajeTotal,i,k);


            gotoxy(x1,y1);
            cout<<Nombre[0]<<" Cuantos puntos desea apostar?"<<endl;
            gotoxy(x1,y1+1);
            cin>> PtosApost;
            gotoxy(x1,y1+2);
            system("pause");
            system("cls");
            Encabezado(Nombre,PuntajeTotal,i,k);
            for(j=0;j<=5;j++){           /// For para hacer 5 tiradas
            gotoxy(x1,y1-1);
            cout<<" Presione un boton para tirar los dados"<<endl;
            gotoxy(x1,y1+22);
            system("pause");
            system("cls");
            Encabezado(Nombre,PuntajeTotal,i,k);




            ////////////////////////////////////////////////////////////////////
            gotoxy(40,11);
            cout<<"----DADOS MAS ALTOS----";
            TODOS_LOS_DADOS(vDadoMAX);                        ///MUESTRO LOS DADOS MAXIMOS HASTA EL MOMENTO
            cargarVector(vDados,5-j);                   ///GIRAN LOS DADOS (5-j) es para que cada vez cargue y muestre un dado menos
            vDadoMAX[j]=vDados[maximoVector(vDados,5-j)];  ///ALMACENO LOS DADOS MAXIMOS EN UN VECTOR
            DIBUJO_DADOS(vDados,m);                        ///GRAFICO DE LOS DADOS DISMINUYENDO

            m=m-1;                                    ///m hace lo mismo que j pero en la funcion
            }
   /// MUESTRO LOS DADOS QUE SALIERON



            //////////////////////////////////////////////////////////////







            ////////////////////////////////////////////////////////////////////




            gotoxy(35,19);
            cout<<Nombre[0]<<" La suma de los dados maximos es : "<<sumarVector(vDadoMAX,5)<<endl;
            gotoxy(35,20);
            system("pause");
            system("cls");
            Encabezado(Nombre,PuntajeTotal,i,k);

            if(sumarVector(vDadoMAX,5)>=20 && sumarVector(vDadoMAX,5)<25 ){ ///Si la suma de los dados maximos esta entre 20 y 25
                    gotoxy(35,19);
                    cout<<"TIRADA DE PUNTAJE"<<endl;
                    gotoxy(35,20);
                    cout<<"Presione para tirar los dados"<<endl;
                    gotoxy(35,21);
                    system("Pause");
                    system("cls");

                    for(l=20;l<=24;l++){
                        NJ++;                                     ///Esta variable esta inicializada en 0 y va a sumar 1 cada vuelta, va a ser el numero que vayamos a comparar si hay repetidos
                                                                  ///si la suma de los dados es 20 el contador va a ser 1 entonces mas abajo va a comparar cuantos 1 hay en el vector de tirada de puntaje
                    if(sumarVector(vDadoMAX,5)==l){              ///si la suma de los dados es igual a l(20,21,22,23,24)
                    Encabezado(Nombre,PuntajeTotal,i,k);
                     cargarVector(vDados,5);
                     gotoxy(40,11);
                     cout<<"Dados Maximos: Tirada de Puntaje"<<endl;
                    TODOS_LOS_DADOS(vDados);                  ///GRAFICO DE LOS DADOS
                     gotoxy(35,20);
                     cout<<"Numeros Repetidos "<<contarNumerosRepetidos(vDados,NJ,5)<<endl;
                     Puntaje=(contarNumerosRepetidos(vDados,NJ,5))*PtosApost;       ///si hay 0 repetidos el puntaje es 0
                     if(contarNumerosRepetidos(vDados,NJ,5)==0){
                        gotoxy(35,21);
                        cout<<"No hay numeros repetidos"<<endl;
                        gotoxy(35,22);
                        cout<<"Pierde Puntos"<<endl;
                }
                }
                }
                }
        else{
             if(sumarVector(vDadoMAX,5)>=25){                              ///si la suma de los dados maximos es mayor que 25
                        gotoxy(35,19);
                        cout<<"TIRADA DE PUNTAJE"<<endl;
                        gotoxy(35,20);
                        cout<<"Presione para tirar los dados"<<endl;
                        gotoxy(35,21);
                        system("Pause");
                        system("cls");
                        Encabezado(Nombre,PuntajeTotal,i,k);
                        cargarVector(vDados,5);
                        gotoxy(40,11);
                        cout<<"Dados Maximos: Tirada de Puntaje"<<endl;
                        TODOS_LOS_DADOS(vDados);                                               ///GRAFICO DE LOS DADOS
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
                        gotoxy(35,22);
                        cout<<"Se acabo el juego, su puntaje es menor a 20"<<endl;
                        Puntaje=0;
                        }}

                        if(Puntaje==0){
                            PuntajeTotal=PuntajeTotal-PtosApost;
                            RondasSinPuntos++;
                            if(PtosApost>0){RondasConPerdidas++;}}
                            else{
                                    PuntajeTotal=PuntajeTotal+Puntaje;

                        }
}
Nombre1=Nombre[0];

PuntajeTotalJugador1=PuntajeTotal;
gotoxy(35,23);
system("pause");
system("cls");
gotoxy(1,5);
cout<<"Nombre de jugador "<<Nombre[0]<<endl;
gotoxy(1,6);
cout<<RondasSinPuntos <<" Rondas sin puntos"<<endl;
gotoxy(1,7);
cout<<RondasConPerdidas<<" Rondas con perdidas"<<endl;
gotoxy(1,8);
cout<<PuntajeTotalJugador1<<" Puntaje total acumulado"<<endl;


///PUNTUACION MAXIMA
for(i=0;i<C;i++){
    if(D==0){
        D++;
        PMAX=PuntajeTotalJugador1;
        NPMAX=Nombre1;
    }
    else{if(PMAX<PuntajeTotal){
        PMAX=PuntajeTotalJugador1;
        NPMAX=Nombre1;
    }
}
}







}

#endif // UN_JUGADOR_H_INCLUDED
