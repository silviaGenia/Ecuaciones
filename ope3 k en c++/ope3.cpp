#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

void leerDatos(double &P, double &T){
    cout.width(20);
    cout<<"Ingrese la Presion en atm? ";
    cin>>P;
    cout.width(20);
    cout<<"Ingrese la Temperatura en K? ";
    cin>>T;
}

double Benzeno(double P, double T) {
    const double A=-6.9827, B=1.3321, C=-2.6286, D=-3.3339;
    double S,b;
     b=(A-B/T+C);
    S=exp(b);
    return S/P;
}
double Acetona(double P, double T){
    const double A=-7.4551, B=1.2020, C=-2.6286, D=-3.3359;
    double S,b;
    b=(A-B/T+C);
    S=exp(b);
    return S/P;
}

double Metanol(double P, double T){
    const double A=-8.54796, B=0.7682, C=-3.10850, D=1.5448;
    double S,b;
    b=(A-B/T+C);
    S=exp(b);
    return S/P;
}

double Etanol(double P, double T){
    const double A=-8.5480, B=0.7682, C=-3.10850, D=1.5448;
    double S,b;
    b=(A-B/T+C);
    S=exp(b);
    return S/P;
}
 double Metano(double P, double T){
    const double A=-6.00435, B=1.18850, C=-0.83408, D=-1.2283;
    double S,b;
    b=(A-B/T+C);
    S=exp(b);
    return S/P;
}

double Etano(double P, double T){
    const double A=-6.34307, B=1.01630, C=-1.19116, D=-2.03539;
    double S,b;
    b=(A-B/T+C);
    S=exp(b);
    return S/P;
}

double Propano(double P, double T){
    const double A=-6.7219, B=1.33236, C=-2.1386, D=-1.3855;
    double S,b;
    b=(A-B/T+C);
    S=exp(b);
    return S/P;
}

double Butano(double P, double T){
    const double A=-6.88709, B=1.1516, C=-1.9987, D=-3.13003;
    double S,b;
    b=(A-B/T+C);
    S=exp(b);
    return S/P;
}

void mostrarResultados(double k, string nom){
    cout.width(21);
    cout.precision(10);
    cout<<"El valor constante de "<<nom<<" es: "<<k<<endl<<endl;
}

int main(){
    double P,T,k;
    int nc, c;
    string v[9] = {
        "1: Benzeno",
        "2: Acetona",
        "3: Metanol",
        "4: Etanol",
        "5: Metano",
        "6: Etano",
        "7: Propano",
        "8: Butano",
        "0: Salir" 
    };
    do {
        cout<<"Introduzca un número para elejir el compuesto: "<<endl;
        for(int i=0;i<9;i++) {
            cout<<v[i]<<endl;
        }
        cout<<"Número?: ";
        cin>>c;
        cout<<endl;
        switch (c) {
            case 0:
                break;
            case 1:
                leerDatos(P,T);
                k=Benzeno(P,T);
                mostrarResultados(k, "Benzeno");
                v[0] = "1: *Benzeno";
                break;
            case 2:
                leerDatos(P,T);
                k=Acetona(P,T);
                mostrarResultados(k, "Acetona");
                v[1] = "1: *Acetona";
                break;
            case 3:
                leerDatos(P,T);
                k=Metanol(P,T);
                mostrarResultados(k, "Metanol");
                v[2] = "1: *Metanol";
                break;
            case 4:
                leerDatos(P,T);
                k=Etanol(P,T);
                mostrarResultados(k, "Etanol");
                v[3] = "1: *Etanol";
                break;
            case 5:
                leerDatos(P,T);
                k=Metano(P,T);
                mostrarResultados(k, "Metano");
                v[4] = "1: *Metano";
                break;
            case 6:
                leerDatos(P,T);
                k=Etano(P,T);
                mostrarResultados(k, "Etano");
                v[5] = "1: *Etano";
                break;
            case 7:
                leerDatos(P,T);
                k=Propano(P,T);
                mostrarResultados(k, "Propano");
                v[6] = "1: *Propano";
                break;
            case 8:
                leerDatos(P,T);
                k=Butano(P,T); 
                mostrarResultados(k, "Butano");
                v[7] = "1: *Butano";
                break;  
            default:
                cout<<"ERROR: Número equivocado"<<endl;
                break;
        }
    } while(c > 0);
    return 0;
}
