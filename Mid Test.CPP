#include <iostream.h>
#include <conio.h>

void main()
{
float Nt1,Nt2,Nt3,Nmid,NF,Ttl_Nt,NA; //nilai kehadiran, nilai tugas 1-3, nilai kuis,nilai final, nilai akhir
char Nm[28],huruf ;
int nim;

//input
cout<<"Menghitung Nilai Mahasiswa"<<endl;
cout<<"---------------------------"<<endl;
cout<<" 1. Masukkan Nama Mahasiswa =  ";cin>>Nm;
cout<<" 2. Masukkan Nim Mahasiswa  =  ";cin>>nim;
cout<<" 3. Masukkan Nilai Tugas Pertama =  ";cin>>Nt1;
cout<<" 4. Masukkan Nilai Tugas Kedua =  ";cin>>Nt2;
cout<<" 5. Masukkan Nilai Tugas Ketiga =  ";cin>>Nt3;
cout<<" 6. Masukkan Nilai Mid=  ";cin>>Nmid;
cout<<" 7. Masukkan Nilai Final =  ";cin>>NF;
 clrscr ();
//Proses
Ttl_Nt = (Nt1+Nt2+Nt3)/3 ;
NA = (0.2 * Ttl_Nt) +  (0.4 *Nmid) + (0.4 * NF);

if ((NA >=80) && (NA<=100))
huruf = 'A';

else if ((NA >= 70) && (NA <= 79))
huruf = 'B';

else if ((NA >= 60)&& (NA<=69))
huruf = 'C';

else if ((NA>=50) && (NA<= 59))
huruf = 'D';

else if (NA < 50)
huruf = 'E';

//Output
cout<<"Menghitung Nilai Mahasiswa\n";
cout<<"-------------------------------\n";
cout<<"Nama Mahasiswa Adalah  "<<Nm<<endl;
cout<<"Nim Mahasiswa Adalah   "<<nim<<endl;
cout<<"Nilai Akhir Mahasiswa Adalah  "<<NA<<endl;
cout<<"Nilai Huruf Mahasiswa Adalah "<<huruf<<endl;
getch();
}