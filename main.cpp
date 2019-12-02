#include <iostream>
#include <string>
/*
https://www.youtube.com/watch?v=1b-y4yUmDfw
https://stackoverflow.com/questions/17724887/c-converting-roman-numerals-to-decimals
*/

using namespace std;

int convert_roman_digit(char d){
    switch (d){
        case 'M': return 1000;
        case 'D': return 500;
        case 'C': return 100;
        case 'L': return 50;
        case 'X': return 10;
        case 'V': return 5;
        case 'I': return 1;
        default: throw std::invalid_argument("Invalid digit");
    }
}

int roman_to_int(const std::string& roman){
    int result = 0, last_added = 0;

    for (auto it = roman.rbegin(); it != roman.rend(); ++it){
        const int value = convert_roman_digit(*it);
        if (value >= last_added){
            result += value;
            last_added = value;
        }
        else{
            result -= value;
        }
    }
    return result;
}

void İntRoma(){
    string roma;
    int integer;
    int j;
    
    cout << "Sayı giriniz:";
    cin >> integer;
    
    if((integer >= 4000) || (integer <= 0)){
        cout << endl << "Geçersiz Sayı!" << endl;
    }
    else{
        if(integer >= 1000){
            j = (integer / 1000);
            
            for(int i = 0;i < j;i++){
                roma += 'M';
            }
            integer %= 1000;
        }
        if(integer >= 100){
            j = (integer / 100);
            if (j == 9) {
                roma += "CM";
            }
            else if(j >= 5){
                roma += 'D';
                
                for(int i = 0;i < j - 5;i++){
                    
                }
            }
            else if(j == 4){
                roma += "CD";
            }
            else if(j >= 1){
                for(int i = 0;i < j;i++){
                    roma += 'C';
                }
            }
            integer %= 100;
        }
        if(integer >= 10){
            j = (integer / 10);
            
            if(j == 9){
                roma += "XC";
            }
            else if(j >= 5){
                roma += 'L';
                
                for(int i = 0;i < j - 5;i++){
                    roma +='X';
                }
            }
            else if(j == 4){
                roma += "XL";
            }
            else if(j >= 1){
                for(int i= 0; i < j;i++){
                    roma += 'X';
                }
            }
            integer %= 10;
        }
        if(integer >= 1 ){
            j = integer;
            if(j == 9){
                roma += "IX";
            }
            else if(j >= 5){
                roma += "V";
                
                for(int i = 0;i < j - 5;i++){
                    roma += 'I';
                }
            }
            else if(j == 4){
                roma += "IV";
            }
            else if(j >= 1){
                for (int i = 0; i < j; i++) {
                    roma += 'I';
                }
            }
        }
        cout << "Roma rakamı: " << roma << endl;
    }

}
int main(){
    int sayii;
   
    cout << "10'luktan roma rakamına çevirmek için 0, tersi için 1 giriniz:";
    cin >> sayii;
    
    if (sayii == 0) {
        İntRoma();
    }
    else if(sayii == 1){
        int roman_to_int(const std::string& roman);
    }
    else{
        cout << "Hatalı giriş!";
    }
    
    return 0;
}
