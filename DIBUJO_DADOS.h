#ifndef DIBUJO_DADOS_H_INCLUDED
#define DIBUJO_DADOS_H_INCLUDED

DIBUJO_DADOS(int Dados[],int &m){
int k;
int x2=25;
int y1=5;
for(k=0;k<m;k++){
                x2=x2+10;
                switch(Dados[k]){
            case 1: UNO(x2,y1);

                break;
            case 2: DOS(x2,y1);

                break;
            case 3: TRES(x2,y1);

                break;
            case 4: CUATRO(x2,y1);

                break;
            case 5: CINCO(x2,y1);

                break;
            case 6: SEIS(x2,y1);

                break;
                       }
                                    }}
TODOS_LOS_DADOS(int Dados[]){
int k;
int x2=25;
int y1=12;
for(k=0;k<5;k++){

                x2=x2+10;
                switch(Dados[k]){
            case 1: UNO(x2,y1);

                break;
            case 2: DOS(x2,y1);

                break;
            case 3: TRES(x2,y1);

                break;
            case 4: CUATRO(x2,y1);

                break;
            case 5: CINCO(x2,y1);

                break;
            case 6: SEIS(x2,y1);

                break;



                }
            }
}
#endif // DIBUJO_DADOS_H_INCLUDED
