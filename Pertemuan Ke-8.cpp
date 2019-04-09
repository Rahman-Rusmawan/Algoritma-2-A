#include <iostream>

using namespace::std;

struct input
    {
         double UTS,UAS,TUGAS,ABSEN,Total_Nilai;
    };
    input nilai ;

double NILAI (string text)
{
    double Nilai;
    cout<<"Nilai "<<text<<" = ";
    cin>>Nilai ;
    return Nilai;
}

void Grade (double Total_Nilai)
{
    if(nilai.Total_Nilai>80)
        cout<<"Nilai A";
     else if(nilai.Total_Nilai>60)
        cout<<"Nilai B";
     else if(nilai.Total_Nilai>40)
        cout<<"Nilai C";
     else if(nilai.Total_Nilai>20)
        cout<<"Nilai D";
     else
        cout<<"Nilai E";
}




main()
{

    nilai.UTS = NILAI("UTS");
    nilai.UAS = NILAI("UAS");
    nilai.TUGAS = NILAI("Tugas");
    nilai.ABSEN = NILAI("Absen");

    nilai.Total_Nilai=(nilai.UTS*0.2)+(nilai.UAS*0.3)+(nilai.TUGAS*0.35)+(nilai.ABSEN*0.15);
    cout<<"Total Nilai = "<<nilai.Total_Nilai;
    cout<<endl;
    Grade (nilai.Total_Nilai);


}
