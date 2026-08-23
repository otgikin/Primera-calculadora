#include <iostream>

using namespace std;

int main(){


     int opcion=0;
     int x,y;
     
     cout<<"  1:Sum. (+) \n  2:Rest.(-) \n  3:Mult.(*)";
     cout<<"\n  ha de ingresar una opcion:  ";
     cin>>opcion;
     switch(opcion) {
	 
	 	case 1:
	 	  cout<<"ingreso un   numero (x) ";
	 	  cin>>x;
	 	  cout<<"ingresa otro numero (y) ";
	 	  cin>>y;
	 	  cout<<y+x;
	 	  break;
	 	  
	 	case 2:
	 	  cout<<"ingresa un   numero (x) ";   
	 	  cin>>x;
	 	  cout<<"ingresa otro numero (y) ";
	 	  cin>>y;
	 	  cout<<y-x;
		  break;
	 	case 3:	
		 cout<<"ingresa un   numero (x) ";
	 	 cin>>x;
	 	 cout<<"ingresa otro numero (y) ";
	 	 cin>>y;
	 	 cout<<                     y*x;
	 	 break; }
		     							
	return 0;}
		
