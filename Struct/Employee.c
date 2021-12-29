#include <stdio.h>
struct emp 
{   
    int eid;
    char nm[20];
    char dept[10];
    char desig[10];
    float basic,da,hra,tax,gross,net;
};

void get_data(struct emp *);
void calculate(struct emp *);
void payslip(struct emp);

int main(){
    struct emp e;

    get_data(&e);
    calculate(&e);

    printf("----------Payslip---------- \n");
    payslip(e);

    return 0;
}

void get_data(struct emp *e){
    printf("Enter Employee id , name , department , designation , basic : \n");
    scanf("%d%[^\n]%s%s%f",&e->eid,e->nm,e->dept,e->desig,&e->basic);

    printf("\n");
}

void calculate(struct emp *e){
    e->da = e->basic*1.1;
    e->hra = e->basic*0.4;
    e->tax = e->basic*0.12;
    e->gross = e->basic + e->da + e->hra;
    e->net = e->gross - e->tax;
}

void payslip(struct emp e){
    printf("Employee name -> %s \nEmployee ID - %d \nDepartment - %s\nDesignation - %s \nBasic - %f \t DA - %f \t HRA - %f \t Tax - %f \t \nGross - %f \nNet - %f \n",e.nm,e.eid,e.dept,e.desig,e.basic,e.da,e.hra,e.tax,e.gross,e.net);
}

