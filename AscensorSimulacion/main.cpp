#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "aleatorios.h"

using namespace std;
/* Comentado mientras no halla GUI

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
*/

//Para hacer cosas con consola mientras no hay GUI
int main(){



    double parametroPrimerPiso = 0.0025;
    double parametroDemasPisos = 0.002;

    Aleatorios aleatorios;
    double uniforme = aleatorios.generarEnteroAleatorioUniforme();
    int exponencial = aleatorios.generarEnteroAleatorioExponencial(parametroPrimerPiso);

    cout<< "Uniforme: " << uniforme << " Exponencial: " << exponencial << endl;


    double promedio;
    for (int var = 0; var < 20; ++var) {
        uniforme = aleatorios.generarEnteroAleatorioUniforme();
           exponencial = aleatorios.generarEnteroAleatorioExponencial(parametroPrimerPiso);

           promedio += exponencial;
            cout<< "Uniforme: " << uniforme << " Exponencial: " << exponencial << endl;

    }

    cout<<  "promedio: " << promedio/20 << endl;
    cout<< "________________________________________________" << endl;

    promedio =0;

    for (int var2 = 0; var2 < 20; ++var2) {
        uniforme = aleatorios.generarEnteroAleatorioUniforme();
           exponencial = aleatorios.generarEnteroAleatorioExponencial(parametroDemasPisos);

           promedio +=exponencial ;

            cout<< "Uniforme: " << uniforme << " Exponencial: " << exponencial << endl;

    }
    cout<<  "promedio: " << promedio/20 << endl;

    return 0;

}
