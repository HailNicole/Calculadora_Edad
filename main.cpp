#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>
#include<locale.h>
#include<wchar.h>
using namespace std;
bool validar_Fecha(int, int , int );
int main(){

    int d,m,a;
    int da, ma, aa;
    int dc, mc, ac;
    int mx;
    int cont=0, sum=0;

    setlocale(LC_ALL, "");

    time_t timeNow = time(0);
    char* dateTimeNow = ctime(&timeNow);
    tm *localTime = localtime(&timeNow);

    do{
    cout<<"Ingrese su fecha de nacimiento[dd/mm/aa]: "<<endl;
    cin>>d>>m>>a;
    }while(validar_Fecha(d, m, a)==false);

    ma=1 + localTime->tm_mon;
    aa=1900 + localTime->tm_year;
    da=localTime->tm_mday;

    switch (m){
        case 1:
            mx=31;

            if((m==ma) and (d<da)){
                mc=0;
                dc=da-d;
                ac=(aa-a);
            }
            else if((m==ma) and (d>da)){
                for(int i=1; i<ma; i++){
                    cont++;
                    mc=cont;
                }
                sum=(mx-d)+da;
                ac=(aa-a)-1;
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            else if((m==ma) and (d==da)){
                mc=0;
                dc=0;
                ac=(aa-a);
            }
            else{
                for(int i=m; i<ma; i++){
                    mc=cont;
                    cont++;
                }
                sum=(mx-d)+da;
                ac=(aa-a);
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            cout<<"Edad actual: "<<aa-a<<" años ,"<<mc<<" meses ,"<<dc<<" dias"<<endl;
            break;
        case 2:

            if (a % 4 == 0 and (a % 400 != 0 or a % 400 == 0)){
                mx=29;
            }
            else{
                mx=28;
            }
            if((m==ma) and (d<da)){
                mc=0;
                dc=da-d;
                ac=(aa-a);
            }
            else if((m==ma) and (d>da)){
                for(int i=1; i<ma; i++){
                    cont++;
                    mc=cont;
                }
                sum=(mx-d)+da;
                ac=(aa-a)-1;
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            else if((m==ma) and (d==da)){
                mc=0;
                dc=0;
                ac=(aa-a);
            }
            else{
                for(int i=m; i<ma; i++){
                    mc=cont;
                    cont++;
                }
                sum=(mx-d)+da;
                ac=(aa-a);
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            cout<<"Edad actual: "<<aa-a<<" años ,"<<mc<<" meses ,"<<dc<<" dias"<<endl;

            break;
        case 3:
            mx=31;
            if((m==ma) and (d<da)){
                mc=0;
                dc=da-d;
                ac=(aa-a);
            }
            else if((m==ma) and (d>da)){
                for(int i=1; i<ma; i++){
                    cont++;
                    mc=cont;
                }
                sum=(mx-d)+da;
                ac=(aa-a)-1;
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            else if((m==ma) and (d==da)){
                mc=0;
                dc=0;
                ac=(aa-a);
            }
            else{
                for(int i=m; i<ma; i++){
                    mc=cont;
                    cont++;
                }
                sum=(mx-d)+da;
                ac=(aa-a);
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            cout<<"Edad actual: "<<aa-a<<" años ,"<<mc<<" meses ,"<<dc<<" dias"<<endl;
            break;
        case 4:
            mx=30;
            if((m==ma) and (d<da)){
                mc=0;
                dc=da-d;
                ac=(aa-a);
            }
            else if((m==ma) and (d>da)){
                for(int i=1; i<ma; i++){
                    cont++;
                    mc=cont;
                }
                sum=(mx-d)+da;
                ac=(aa-a)-1;
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            else if((m==ma) and (d==da)){
                mc=0;
                dc=0;
                ac=(aa-a);
            }
            else{
                for(int i=m; i<ma; i++){
                    mc=cont;
                    cont++;
                }
                sum=(mx-d)+da;
                ac=(aa-a);
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            cout<<"Edad actual: "<<aa-a<<" años ,"<<mc<<" meses ,"<<dc<<" dias"<<endl;
            break;
        case 5:
            mx=31;

            if((m==ma) and (d<da)){
                mc=0;
                dc=da-d;
                ac=(aa-a);
            }
            else if((m==ma) and (d>da)){
                for(int i=1; i<ma; i++){
                    cont++;
                    mc=cont;
                }
                sum=(mx-d)+da;
                ac=(aa-a)-1;
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            else if((m==ma) and (d==da)){
                mc=0;
                dc=0;
                ac=(aa-a);
            }
            else{
                for(int i=m; i<ma; i++){
                    mc=cont;
                    cont++;
                }
                sum=(mx-d)+da;
                ac=(aa-a);
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            cout<<"Edad actual: "<<aa-a<<" años ,"<<mc<<" meses ,"<<dc<<" dias"<<endl;
            break;

        case 6:
            mx=30;

            if((m==ma) and (d<da)){
                mc=0;
                dc=da-d;
                ac=(aa-a);
            }
            else if((m==ma) and (d>da)){
                for(int i=1; i<ma; i++){
                    cont++;
                    mc=cont;
                }
                sum=(mx-d)+da;
                ac=(aa-a)-1;
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            else if((m==ma) and (d==da)){
                mc=0;
                dc=0;
                ac=(aa-a);
            }
            else{
                for(int i=m; i<ma; i++){
                    mc=cont;
                    cont++;
                }
                sum=(mx-d)+da;
                ac=(aa-a);
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            cout<<"Edad actual: "<<aa-a<<" años ,"<<mc<<" meses ,"<<dc<<" dias"<<endl;
            break;
        case 7:
            mx=31;
            if((m==ma) and (d<da)){
                mc=0;
                dc=da-d;
                ac=(aa-a);
            }
            else if((m==ma) and (d>da)){
                for(int i=1; i<ma; i++){
                    cont++;
                    mc=cont;
                }
                sum=(mx-d)+da;
                ac=(aa-a)-1;
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            else if((m==ma) and (d==da)){
                mc=0;
                dc=0;
                ac=(aa-a);
            }
            else{
                for(int i=m; i<ma; i++){
                    mc=cont;
                    cont++;
                }
                sum=(mx-d)+da;
                ac=(aa-a);
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            cout<<"Edad actual: "<<aa-a<<" años ,"<<mc<<" meses ,"<<dc<<" dias"<<endl;
            break;
        case 8:
            mx=31;
            if((m==ma) and (d<da)){
                mc=0;
                dc=da-d;
                ac=(aa-a);
            }
            else if((m==ma) and (d>da)){
                for(int i=1; i<ma; i++){
                    cont++;
                    mc=cont;
                }
                sum=(mx-d)+da;
                ac=(aa-a)-1;
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            else if((m==ma) and (d==da)){
                mc=0;
                dc=0;
                ac=(aa-a);
            }
            else{
                for(int i=m; i<ma; i++){
                    mc=cont;
                    cont++;
                }
                sum=(mx-d)+da;
                ac=(aa-a);
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            cout<<"Edad actual: "<<aa-a<<" años ,"<<mc<<" meses ,"<<dc<<" dias"<<endl;
            break;
        case 9:
            mx=30;

            if((m==ma) and (d<da)){
                mc=0;
                dc=da-d;
                ac=(aa-a);
            }
            else if((m==ma) and (d>da)){
                for(int i=1; i<ma; i++){
                    cont++;
                    mc=cont;
                }
                sum=(mx-d)+da;
                ac=(aa-a)-1;
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            else if((m==ma) and (d==da)){
                mc=0;
                dc=0;
                ac=(aa-a);
            }
            else{
                for(int i=m; i<ma; i++){
                    mc=cont;
                    cont++;
                }
                sum=(mx-d)+da;
                ac=(aa-a);
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            cout<<"Edad actual: "<<aa-a<<" años ,"<<mc<<" meses ,"<<dc<<" dias"<<endl;

            break;
        case 10:
            mx=31;
            if((m==ma) and (d<da)){
                mc=0;
                dc=da-d;
                ac=(aa-a);
            }
            else if((m==ma) and (d>da)){
                for(int i=1; i<ma; i++){
                    cont++;
                    mc=cont;
                }
                sum=(mx-d)+da;
                ac=(aa-a)-1;
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            else if((m==ma) and (d==da)){
                mc=0;
                dc=0;
                ac=(aa-a);
            }
            else{
                for(int i=m; i<ma; i++){
                    mc=cont;
                    cont++;
                }
                sum=(mx-d)+da;
                ac=(aa-a);
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            cout<<"Edad actual: "<<aa-a<<" años ,"<<mc<<" meses ,"<<dc<<" dias"<<endl;
            break;
        case 11:
            mx=30;
            if((m==ma) and (d<da)){
                mc=0;
                dc=da-d;
                ac=(aa-a);
            }
            else if((m==ma) and (d>da)){
                for(int i=1; i<ma; i++){
                    cont++;
                    mc=cont;
                }
                sum=(mx-d)+da;
                ac=(aa-a)-1;
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            else if((m==ma) and (d==da)){
                mc=0;
                dc=0;
                ac=(aa-a);
            }
            else{
                for(int i=m; i<ma; i++){
                    mc=cont;
                    cont++;
                }
                sum=(mx-d)+da;
                ac=(aa-a);
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            cout<<"Edad actual: "<<aa-a<<" años ,"<<mc<<" meses ,"<<dc<<" dias"<<endl;
            break;
        case 12:
            mx=31;

            if((m==ma) and (d<da)){
                mc=0;
                dc=da-d;
                ac=(aa-a);
            }
            else if((m==ma) and (d>da)){
                for(int i=1; i<ma; i++){
                    cont++;
                    mc=cont;
                }
                sum=(mx-d)+da;
                ac=(aa-a)-1;
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            else if((m==ma) and (d==da)){
                mc=0;
                dc=0;
                ac=(aa-a);
            }
            else{
                for(int i=m; i<ma; i++){
                    mc=cont;
                    cont++;
                }
                sum=(mx-d)+da;
                ac=(aa-a);
                if(sum>=30){
                    mc+=1;
                    dc=sum-30;
                }
                else{
                    dc=sum;
                }
            }
            cout<<"Edad actual: "<<ac<<" años ,"<<mc<<" meses ,"<<dc<<" dias"<<endl;
            break;
    }

    return 0;
}

bool validar_Fecha(int dia, int mes, int anio){
    if((dia<1 or dia>31) or ((mes==2 and dia>28)and anio%4!=0) or ((mes==4 or mes==6 or mes==9 or mes==11) and dia>30)){
        cout<<"ERROR! DIA INCORRECTO"<<endl;
        return false;
    }
    else if(mes<1 or mes>12){
        cout<<"ERROR! MES INCORRECTO"<<endl;
        return false;
    }
    else if(anio<1){
        cout<<"ERROR! ANIO INCORRECTO"<<endl;
        return false;
    }
    else{
        return true;
    }
};
