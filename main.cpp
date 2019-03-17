#include <iostream>

using namespace std;

int main ()
{
    int n, k;
    cout << "Numero de participantes: ";
    cin >> n;
    if(n<1 || n>100){
        while(n<1 || n>100){
            cout << "Quantidade invalida" << endl;
            cout << "Numero de paticipantes: ";
            cin >> n;
        }
    }
    cout << "Intervalo: ";
    cin >> k;
    int x[n], ni=n, morreu, troca=0;
    for(int i=0;i<n;i++){
        x[i]=i+1;
    }
    while(ni>1){
        morreu=troca+k;
        if(morreu>n || x[morreu-1]==0){
            while(morreu>n || x[morreu-1]==0){
                if(morreu>n){
                    morreu=morreu-n;
                }
                if(x[morreu-1]==0){
                    morreu=morreu+k;
                }
            }
        }
        troca=morreu+k;
        if(troca>n || x[troca-1]==0){
            while(troca>n || x[troca-1]==0){
                if(troca>n){
                    troca=troca-n;
                }
                if(x[troca-1]==0){
                    troca=troca+k;
                }
            }
        }
        for(int i=0;i<n;i++){
            if((i+1)==morreu){
                x[i]=x[troca-1];
                x[troca-1]=0;
            }
        }
        for(int i=0;i<n;i++){
        cout << x[i] << endl;

        }
    cout << morreu << " morre" << endl;
    cout << troca << " troca" << endl;
    cout << endl;
        ni--;
    }

    return 0;
}
