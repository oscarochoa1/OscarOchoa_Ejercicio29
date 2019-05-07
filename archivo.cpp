#include <iostream>
#include <fstream>
#include <cmath>


using namespace std;

int main(){

double deltax=0.01;
    double deltat=0.01;
    double t_max = 6.0;
    double c= 0.5;
    double L= 1.0; 
    ofstream outfile;
    double espacio_viejo[100][100];
    double espacio_nuevo[100][100];
    int i,j;
    double t;
    double deudet=0;
    int iteracion=0;
    
    for (i=0; i<100; i++){
    for(j=0;j<6;j++){
     espacio_viejo[i][j]=1;   
    }
    }
        while(t > t_max){
            iteracion +=1;
    
            for(i=0; i<100; i++){
            for(j=0; j<6; j++){
                
espacio_nuevo[i][j] = espacio_viejo[i][j+1]+(c*c/2*(deltax*deltax/deltat*deltat))*(espacio_viejo[i+1][j]+espacio_viejo[i-1][j]-2*espacio_viejo[i][j]);  
                
            }
            }
                for(i=1;i<99;i++){
      for(j=1;j<5;j++){
	espacio_viejo[i][j] = espacio_nuevo[i][j];
            }      
                     
        }  t = t + deltat;
        }
               
    outfile.open("dacalor.dat");
  for(i=0; i<100; i++){
   for(j=0; j<6; j++){
      outfile << espacio_viejo[i][j] << endl;
    
  }
  }
        
    outfile.close();
    return 0;
}
