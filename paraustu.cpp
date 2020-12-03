#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int yuzluk,elli,yirmi,on,bes,bir,ellikurus,yirmibes,onkurus,beskurus; // Para birimlerini tanimladik.

void Ode(double x) { 						//Para üstünü hesaplayan tanimli fonksiyon.

                yuzluk = (int)(x / 100);    
                x = fmod(x,100.0);

                elli = (int)(x / 50);
                x = fmod(x,50.0);

                yirmi = (int)(x / 20);
                x = fmod(x,20.0);

                on = (int)(x / 10);
                x = fmod(x,10.0);

                bes = (int)(x / 5);
                x = fmod(x,5.0);

                bir = (int)(x / 1);
                x =fmod(x,1);

                ellikurus = (int)(x / .5);
                x = fmod(x,0.5);

                yirmibes = (int)(x / .25);
                x =fmod(x,0.25);

                onkurus = (int)(x / .10);
                x = fmod(x,0.10);

                beskurus = (int)(x / .05);
                x = fmod(x,0.05);
            }
            
int main() {
	

			double tutar = 1.15;
			double odenen = 0;

          
            bas:
            Sleep(1000);	
            system("CLS");
            
            cout << "Harcanacak tutar : " << endl;
            cin >> tutar;
            
            if (tutar > 1000) {
                cout << "Butceniz musait degil." << endl;
                goto bas;
                
            }
            
            
            cout << "Alisveris tutari (lira) : " << tutar << endl;
			
            
            cin >> odenen;
            double paraustu = odenen - tutar;
            

            
			if(odenen < tutar) {
            	cout << "eksik odeme." << endl;
            	goto bas;
			}
            
        

            cout << "Odenen tutar (lira) : " << odenen << endl;

            cout << "PARA USTU (lira) : " << paraustu << endl;
            


            Ode(paraustu);



            cout << "100 lira : " << yuzluk << "adet." << endl;
            cout << "50 lira : " << elli << "adet." << endl;
            cout << "20 lira : " << yirmi << "adet." << endl;
            cout << "10 lira : " << on << "adet." << endl;
            cout << "5 lira : " << bes << "adet." << endl;
            cout << "1 lira : " << bir << "adet." << endl;
            cout << "50 kurus : " << ellikurus << "adet." << endl;
            cout << "25 kurus : " << yirmibes << "adet." << endl;
            cout << "10 kurus : " << onkurus << "adet." << endl;
          	cout << "5 kurus : " << beskurus << "adet." << endl;
            
			int e;
			cin >> e;
			
		}
		
		
