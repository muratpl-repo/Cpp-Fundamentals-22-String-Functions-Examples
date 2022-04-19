#include <iostream>
#include <string>

using namespace std;

int main()
{

    //getline (Kullanicidan veriyi satir olarak alir)
    string isim1;
    cout<<"Lutfen ad soyad giriniz"<<endl;
    getline(cin,isim1);
    cout<<isim1<<endl;

    //assign
    string isim2 = "Ahmet";
    string isim3 = ("Ayse");
    string isim4;
    isim4.assign(isim2);
    isim4.assign("Ayse");
    cout<<isim4<<endl;

    //at (n. indisteki harfi getirir.)
    string isim5="Murat";
    cout<<isim5.at(2)<<endl;

    //length (stringin uzunlugunu verir.)
    string isim6="Mehmet";
    cout<<isim6.length()<<endl;

    //substr (stringte 2 indis arasindaki degerleri verir.)
    string isim7="Ceren";
    cout<<isim7.substr(2,4)<<endl;

    //swap(iki stringin yerlerini degistirir.)
    string isim8="Hulya";
    string isim9="Fatma";
    isim8.swap(isim9);
    cout<<isim8<<endl;
    cout<<isim9<<endl;

    //erase (Dizide belli indislerden sonrasini veya iki indis arasini silmeye yarar.)
    string isim10 = "Kaan Academy";
    isim10.erase(4);
    cout<<isim10<<endl;

    string isim11 = "Kaan Academy";
    isim11.erase(4,3); //4. indisten itibaren 3 karakter sil anlamýnda...
    cout<<isim11<<endl;

    //find/rfind (Dizide arama yaparak kelime veya karakterin kacinci indisten basladigini getirir.)
    string isim12 ="Meyvenin kilosu suanda birazcik pahali.";
    cout<<isim12.find("su")<<endl;
    cout<<isim12.rfind("su")<<endl;

    //replace (Dizinin icerisinde verilen aralik kadar kismi degistirir.)
    string isim13 = "Kaan Academy";
    cout<<isim13.replace(0,4,"Fatih");

    return 0;
}
