#include <iostream>
#include <fstream>

// 13. Hafta slaytlar I - Gaddis (10. Bölüm)Kaynak

using namespace std;

int main(void){
    int i = 0;
    int j = 0;
    int sayi;
    int sayiiki;
    int numara[10];
    int numaraiki[10];
    ofstream dosya;
    
    cout << "Öğrenci numaranızı giriniz: ";
    
    for(i = 1; i <= 11; i++){
        cin >> sayi;
        numara[i-1] = sayi;
        numaraiki[i-1] = sayi;
        
        for(j = 0; j <= 10; j++){
            if(numara[i] < numara[j]){
                numara[j] = numara[i];
            }
            
        }
        
    }
    
    cout << "Sıralamak istediğinizi 1 veya 2 şeklinde giriniz: ";
    cin >> sayiiki;
       
        if(sayiiki == 1){
            dosya.open("info.txt");
        }
        else if(sayiiki == 2){
            dosya.open(" info_SIRALI.txt");
        }
    return 0;
}
