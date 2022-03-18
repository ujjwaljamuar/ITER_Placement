#include <iostream>
using namespace std;

struct emp{
    int empNo;
    char name[30],dept[30],desg[30];
    float basic, hra, da, tax,pf,gross,net;

    void getData(){
        cout << "Enter EmpNo. \nName \nDept \nDesignation \nBasic  : \n";
        cin >> empNo >> name >> dept >> desg >> basic;
    }

    void calc(){
        hra = basic *0.5;
        da = basic *1.2;
        pf = basic * 0.1;
        tax = basic * 0.12;
        gross = basic + hra+ da;
        net = gross - tax - pf;
    }

    void paySlip(){
        cout << "---------------------------------------------------------------- \n\n";
        cout << "Name - " << name << "\nDept - " << dept <<"\nDesignation - " << desg;
        cout << "\nHRA - " << hra <<"\nDA - "<< da << "\nPF - " << pf << "\nTax - " << tax << "\nGross - " << gross <<"\nNet - " << net << "\n";
    }
};

int main(){
    emp e;
    e.getData();
    e.calc();
    e.paySlip();

    return 0;
}