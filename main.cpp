#include "Conta.h"


int main() {
    int rg;
    cout<<"coloque o RG, sem pontos e sem o digito verificador"<<endl;
    cin>>rg;
    Conta oi;
    oi.entrada(rg);

    return 0;
}
