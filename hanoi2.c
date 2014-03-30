/*	Sistemas programables
	Alumno: Santos Gonzalez Miguel Angel
	7-8 am
	Movimientos de discos
*/
#include <iostream>
using namespace std;

void hanoi(int num,char A,char C,char B){
	if(num==1){
			cout<<"Mover el bloque "<<num<<" desde "<<A<<" hasta  "<<C<<endl;
			
	}
	else{
		hanoi(num-1,A,B,C);
		cout<<"Mover el bloque "<<num<<" desde "<<A<<" hasta  "<<C<<endl;
		hanoi(num-1,B,C,A);
	}
}

main(){
		int n;
		char A,B,C;

		cout<<"Las torres son A B C\n";
		cout<<"Numero de discos: ";
		cin>>n;
		hanoi(n,'A','C','B');
		
}
