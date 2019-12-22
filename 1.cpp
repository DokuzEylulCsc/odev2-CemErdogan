#include <iostream>

using namespace std;

int main(void){
    int i = 0;
    int j = 0;
    int sayi;
    int numara[10];
    
    cout << "Öğrenci numaranızı giriniz: ";
    
    for(i = 1; i <= 11; i++){
        cin >> sayi;
        numara[i-1] = sayi;
        
        for(j = 0; j <= 10; j++){
            if(numara[i] < numara[j]){
                numara[j] = numara[i];
                cout << numara[j];
            }
            
        }
        
    }

    return 0;
}
