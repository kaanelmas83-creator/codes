#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    int sesli_harf_sayisi=0;
    int cumle_sayisi=0;
    int harf_sayisi=0;
    int kelime_sayisi=0;
    string cümle;
    bool inWord = false;
    cout<<"Lütfen metini giriniz."<<endl;
    getline(cin, cümle);
    for(int a=0;a<cümle.length();a++){
        char harf=cümle[a];

        harf_sayisi++;

        if(!isspace(harf)&& !inWord){
            kelime_sayisi++;
            inWord=true;
        }
        if(isspace(harf)){
            inWord=false;
        }
        if(harf == '.' || harf == '!'|| harf =='?'){
            cumle_sayisi++;

        }
        if(harf == 'a'|| harf== 'e'|| harf == 'i'|| harf=='o'|| harf=='u'){
            sesli_harf_sayisi++;

         }
        }
    cout<<"İşte bilgiler: "<<endl;
    cout<<"- Sesli harf sayısı= "<< sesli_harf_sayisi<<endl;
    cout<<"- Cümle sayısı= "<< cumle_sayisi<<endl;
    cout<<"- Harf sayısı= "<< harf_sayisi<<endl;
    cout<<"- Kelime sayısı= "<< kelime_sayisi<<endl;

    return 0;

}
