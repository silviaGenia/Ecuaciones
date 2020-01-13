#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

void leerDatos(double &P, double &T, double &x1, double &x2, double &y1, double &y2, double &zl, double &zv){
    cout.width(20);
    cout<<"Ingrese la Presion en atm? ";
    cin>>P;
    cout.width(20);
    cout<<"Ingrese la Temperatura en K? ";
    cin>>T;
    cout<<"Ingrese la fraccion x1? ";
    cin>>x1;
    cout<<"Ingrese la fraccion x2? ";
    cin>>x2;
    cout<<"Ingrese la fraccion y1? ";
    cin>>y1;
    cout<<"Ingrese la fraccion y2? ";
    cin>>y2;
    cout<<"Ingrese el valor de zl? ";
    cin>>zl;
     cout<<"Ingrese el valor de zv? ";
    cin>>zv;
}


double Benzeno(double P, double T, double x1, double x2, double y1, double y2,  double zl, double zv) {
    const double A=-6.9827, B=1.3321, C=-2.6286, D=-3.3339, Tc=562.1, Pc=48.3;
     double Tr, Ai, Bi, Al, Av, Bl, Bv, Ol, Ov, lv, ll, ql, qv;
        Tr=T/Tc;
        Ai=pow(0.4278/(Pc*(pow(Tr,2.5))),0.5);
        Bi=(0.0867/Pc*Tr);
        Al=x1*Ai+x2*Ai;
        Av=y1*Ai+y2*Ai;
        Bl=x1*Bi+x2*Bi;
        Bv=y1*Bi+y2*Bi;
        lv=(zv-P);
        ll=(zl-P);
        qv=(1+Bv*P/zv);
        ql=(1+Bv*P/zl);
        Ov=exp((zv-1)*Bi/Bv-log(lv)-(pow(Av,2)/B)*((2*Ai/Av)-Bi/Bv)*log(qv));
        Ol=exp((zl-1)*Bi/Bl-log(ll)-(pow(Al,2)/B)*((2*Ai/Al)-Bi/Bl)*log(ql));
        return Ol/Ov;
 }
double Acetona(double P, double T, double x1, double x2, double y1, double y2,  double zl, double zv){
    const double A=-7.4551, B=1.2020, C=-2.6286, D=-3.3359,Tc=508.1, Pc=46.4;
     double Tr, Ai, Bi, Al, Av, Bl, Bv, Ol, Ov, lv, ll, ql, qv;
        Tr=T/Tc;
        Ai=pow(0.4278/(Pc*(pow(Tr,2.5))),0.5);
        Bi=(0.0867/Pc*Tr);
        Al=x1*Ai+x2*Ai;
        Av=y1*Ai+y2*Ai;
        Bl=x1*Bi+x2*Bi;
        Bv=y1*Bi+y2*Bi;
        lv=(zv-P);
        ll=(zl-P);
        qv=(1+Bv*P/zv);
        ql=(1+Bv*P/zl);
        Ov=exp((zv-1)*Bi/Bv-log(lv)-(pow(Av,2)/B)*((2*Ai/Av)-Bi/Bv)*log(qv));
        Ol=exp((zl-1)*Bi/Bl-log(ll)-(pow(Al,2)/B)*((2*Ai/Al)-Bi/Bl)*log(ql));
    return Ol/Ov;
}

double Metanol(double P, double T, double x1, double x2, double y1, double y2,  double zl, double zv){
    const double A=-8.54796, B=0.7682, C=-3.10850, D=1.5448, Tc=512.6, Pc=79.9;
        double Tr, Ai, Bi, Al, Av, Bl, Bv, Ol, Ov, lv, ll, ql, qv;
        Tr=T/Tc;
        Ai=pow(0.4278/(Pc*(pow(Tr,2.5))),0.5);
        Bi=(0.0867/Pc*Tr);
        Al=x1*Ai+x2*Ai;
        Av=y1*Ai+y2*Ai;
        Bl=x1*Bi+x2*Bi;
        Bv=y1*Bi+y2*Bi;
        lv=(zv-P);
        ll=(zl-P);
        qv=(1+Bv*P/zv);
        ql=(1+Bv*P/zl);
        Ov=exp((zv-1)*Bi/Bv-log(lv)-(pow(Av,2)/B)*((2*Ai/Av)-Bi/Bv)*log(qv));
        Ol=exp((zl-1)*Bi/Bl-log(ll)-(pow(Al,2)/B)*((2*Ai/Al)-Bi/Bl)*log(ql));
    return Ol/Ov;
}

double Etanol(double P, double T, double x1, double x2, double y1, double y2,  double zl, double zv){
    const double A=-8.5480, B=0.7682, C=-3.10850, D=1.5448, Tc=516.2, Pc=63;
      double Tr, Ai, Bi, Al, Av, Bl, Bv, Ol, Ov, lv, ll, ql, qv;
        Tr=T/Tc;
        Ai=pow(0.4278/(Pc*(pow(Tr,2.5))),0.5);
        Bi=(0.0867/Pc*Tr);
        Al=x1*Ai+x2*Ai;
        Av=y1*Ai+y2*Ai;
        Bl=x1*Bi+x2*Bi;
        Bv=y1*Bi+y2*Bi;
        lv=(zv-P);
        ll=(zl-P);
        qv=(1+Bv*P/zv);
        ql=(1+Bv*P/zl);
        Ov=exp((zv-1)*Bi/Bv-log(lv)-(pow(Av,2)/B)*((2*Ai/Av)-Bi/Bv)*log(qv));
        Ol=exp((zl-1)*Bi/Bl-log(ll)-(pow(Al,2)/B)*((2*Ai/Al)-Bi/Bl)*log(ql));
    return Ol/Ov;
}
 double Metano(double P, double T, double x1, double x2, double y1, double y2,  double zl, double zv){
    const double A=-6.00435, B=1.18850, C=-0.83408, D=-1.2283, Tc=190.6, Pc=45.4;
      double Tr, Ai, Bi, Al, Av, Bl, Bv, Ol, Ov, lv, ll, ql, qv;
        Tr=T/Tc;
        Ai=pow(0.4278/(Pc*(pow(Tr,2.5))),0.5);
        Bi=(0.0867/Pc*Tr);
        Al=x1*Ai+x2*Ai;
        Av=y1*Ai+y2*Ai;
        Bl=x1*Bi+x2*Bi;
        Bv=y1*Bi+y2*Bi;
        lv=(zv-P);
        ll=(zl-P);
        qv=(1+Bv*P/zv);
        ql=(1+Bv*P/zl);
        Ov=exp((zv-1)*Bi/Bv-log(lv)-(pow(Av,2)/B)*((2*Ai/Av)-Bi/Bv)*log(qv));
        Ol=exp((zl-1)*Bi/Bl-log(ll)-(pow(Al,2)/B)*((2*Ai/Al)-Bi/Bl)*log(ql));
    return Ol/Ov;
}

double Etano(double P, double T, double x1, double x2, double y1, double y2,  double zl, double zv){
    const double A=-6.34307, B=1.01630, C=-1.19116, D=-2.03539,Tc=305.4, Pc=48.2;
     double Tr, Ai, Bi, Al, Av, Bl, Bv, Ol, Ov, lv, ll, ql, qv;
        Tr=T/Tc;
        Ai=pow(0.4278/(Pc*(pow(Tr,2.5))),0.5);
        Bi=(0.0867/Pc*Tr);
        Al=x1*Ai+x2*Ai;
        Av=y1*Ai+y2*Ai;
        Bl=x1*Bi+x2*Bi;
        Bv=y1*Bi+y2*Bi;
        lv=(zv-P);
        ll=(zl-P);
        qv=(1+Bv*P/zv);
        ql=(1+Bv*P/zl);
        Ov=exp((zv-1)*Bi/Bv-log(lv)-(pow(Av,2)/B)*((2*Ai/Av)-Bi/Bv)*log(qv));
        Ol=exp((zl-1)*Bi/Bl-log(ll)-(pow(Al,2)/B)*((2*Ai/Al)-Bi/Bl)*log(ql));
}

double Propano(double P, double T, double x1, double x2, double y1, double y2,  double zl, double zv){
    const double A=-6.7219, B=1.33236, C=-2.1386, D=-1.3855,Tc=369.8, Pc=41.9;
   double Tr, Ai, Bi, Al, Av, Bl, Bv, Ol, Ov, lv, ll, ql, qv;
        Tr=T/Tc;
        Ai=pow(0.4278/(Pc*(pow(Tr,2.5))),0.5);
        Bi=(0.0867/Pc*Tr);
        Al=x1*Ai+x2*Ai;
        Av=y1*Ai+y2*Ai;
        Bl=x1*Bi+x2*Bi;
        Bv=y1*Bi+y2*Bi;
        lv=(zv-P);
        ll=(zl-P);
        qv=(1+Bv*P/zv);
        ql=(1+Bv*P/zl);
        Ov=exp((zv-1)*Bi/Bv-log(lv)-(pow(Av,2)/B)*((2*Ai/Av)-Bi/Bv)*log(qv));
        Ol=exp((zl-1)*Bi/Bl-log(ll)-(pow(Al,2)/B)*((2*Ai/Al)-Bi/Bl)*log(ql));
    return Ol/Ov;
}

double Butano(double P, double T, double x1, double x2, double y1, double y2,  double zl, double zv){
    const double A=-6.88709, B=1.1516, C=-1.9987, D=-3.13003, Tc=425.4, Pc=37.5;
 double Tr, Ai, Bi, Al, Av, Bl, Bv, Ol, Ov, lv, ll, ql, qv;
        Tr=T/Tc;
        Ai=pow(0.4278/(Pc*(pow(Tr,2.5))),0.5);
        Bi=(0.0867/Pc*Tr);
        Al=x1*Ai+x2*Ai;
        Av=y1*Ai+y2*Ai;
        Bl=x1*Bi+x2*Bi;
        Bv=y1*Bi+y2*Bi;
        lv=(zv-P);
        ll=(zl-P);
        qv=(1+Bv*P/zv);
        ql=(1+Bv*P/zl);
        Ov=exp((zv-1)*Bi/Bv-log(lv)-(pow(Av,2)/B)*((2*Ai/Av)-Bi/Bv)*log(qv));
        Ol=exp((zl-1)*Bi/Bl-log(ll)-(pow(Al,2)/B)*((2*Ai/Al)-Bi/Bl)*log(ql));
    return Ol/Ov;
}
 
void mostrarResultados(double k, string nom){
    cout.width(21);
    cout.precision(10);
    cout<<"El valor constante de "<<nom<<" es: "<<k<<endl<<endl;
}

int main(){
    double P,T,k,x1,x2,y1,y2,zl,zv;
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
                leerDatos(P,T,x1,x2,y1,y2,zl,zv);
                k=Benzeno(P,T,x1,x2,y1,y2,zl,zv);
                mostrarResultados(k, "Benzeno");
                v[0] = "1: *Benzeno";
                break;
            case 2:
                leerDatos(P,T,x1,x2,y1,y2,zl,zv);
                k=Acetona(P,T,x1,x2,y1,y2,zl,zv);
                mostrarResultados(k, "Acetona");
                v[1] = "1: *Acetona";
                break;
            case 3:
                leerDatos(P,T,x1,x2,y1,y2,zl,zv);
                k=Metanol(P,T,x1,x2,y1,y2,zl,zv);
                mostrarResultados(k, "Metanol");
                v[2] = "1: *Metanol";
                break;
            case 4:
                leerDatos(P,T,x1,x2,y1,y2,zl,zv);
                k=Etanol(P,T,x1,x2,y1,y2,zl,zv);
                mostrarResultados(k, "Etanol");
                v[3] = "1: *Etanol";
                break;
            case 5:
                leerDatos(P,T,x1,x2,y1,y2,zl,zv);
                k=Metano(P,T,x1,x2,y1,y2,zl,zv);
                mostrarResultados(k, "Metano");
                v[4] = "1: *Metano";
                break;
            case 6:
                leerDatos(P,T,x1,x2,y1,y2,zl,zv);
                k=Etano(P,T,x1,x2,y1,y2,zl,zv);
                mostrarResultados(k, "Etano");
                v[5] = "1: *Etano";
                break;
            case 7:
                leerDatos(P,T,x1,x2,y1,y2,zl,zv);
                k=Propano(P,T,x1,x2,y1,y2,zl,zv);
                mostrarResultados(k, "Propano");
                v[6] = "1: *Propano";
                break;
            case 8:
                leerDatos(P,T,x1,x2,y1,y2,zl,zv);
                k=Butano(P,T,x1,x2,y1,y2,zl,zv); 
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

