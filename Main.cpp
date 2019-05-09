#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

//Declaracion de Variables
int opt = 0;

//Funciones Declaradas Previamente
void Calculadora ();
void Fibonacci ();
void NumerosPrimos ();
void SumaPares ();
void BilletesCambioRef();
void BusquedaBinaria();

//Funcion Principal - Main
int main ()
{
    system("Color 1A");  
    cout << "\n********* SUMARIO APLICACIONES **********\n" << endl<< endl;
    cout << "Selecciona el programa a ejecutar:\n"<< endl;
    cout << " 1. Calculadora \n 2. Fibonacci \n 3. Numeros Primos \n 4. Suma Numeros Pares \n 5. Cambio Billetes \n 6. Busqueda Binaria "<< endl;
    cin >> opt;
    while (opt>6){
        cout << "\n Seleccion no valida. Vuelva a intentarlo.";
    cin >> opt;}

    switch (opt){
        case 1: {Calculadora();}
            break;
        case 2: {Fibonacci();}
            break;
        case 3: {NumerosPrimos();}
            break;
        case 4: {SumaPares();}
            break;
        case 5: {BilletesCambioRef();}
            break;
        case 6: {BusquedaBinaria();}
            break;
    }

    cout << endl << "*********************************** " << endl;
    system("pause");
}


//1.Funcion Calculadora
void Calculadora (){

cout << "********* CALCULADORA ********** \n" << endl;

/* 1.Pedir el primer VALOR y guardar en VARIABLE  */
cout << "Introduce el primer valor a operar: ";
int var1=0;
cin >> var1;

cout << "\nPerfecto, ahora selecciona la operacion aritmetica:\n" << endl << "1.Sumar \n" << "2.Restar \n" << "3.Multiplicar\n" << "4.Dividir\n" << endl;
int var2=0;
cin >> var2;
while (var2>4) {
cout << "Seleccion no valida, vuelva a intentarlo: ";
cin >> var2;}

cout << "\nIntroduce el segundo valor a operar: ";
int var3=0;
cin >> var3;

int var4=0;

switch (var2)
{
case 1: {var4=var1+var3;}
break;
case 2: {var4=var1-var3;}
break;
case 3: {var4=var1*var3;}
break;
case 4: {var4=var1/var3;}
break;
default: cout << "El valor no es valido";

}


if (var4 > 0) {cout << "\nEl resultado de la operacion es: " << var4 << endl << endl;}
};

//2.Fibonacci
void Fibonacci(){
  double var1 = 0, var2 = 1, var3 = 0, limite = 0;

cout << "********* FIBONACCI ********** \n" << endl;

	/* 1.Pedir a usuario valor LIMITE hasta donde calcular fibonacci*/
	cout << "Introduce limite el limite de fibonacci: ";
	cin >> limite;

	cout << var1 << ", " << var2 << ", ";
	while (var3 < limite) {

		var3 = var1 + var2;
		cout << var3 << ", ";

		var1 = var2;
		var2 = var3;
}};

// 3.Suma Numeros Primos (Falta arreglar)
void NumerosPrimos(){
   int r=0;
  for (int i=1,x=0;i<=20;i++)
  if (i%2==0) {
    r=i, x=r;}  
  cout << r << endl;
}; 

//4. Suma Numeros Pares
void SumaPares(){
  cout << "*********APPLICATION TEST********** \n" << endl;
  
  cout << "Introduce un numero del 1 al 10: " << endl;
  int num=0, total=0;  
  cin >> num;
  
  	if (num <= 10) {
		    for (int i = 1; i <= num; i++) {
			      if (i % 2 == 0) {
				  total = total + i;}
							              
										                }
	  cout << total;
      
    }
}

//5. Calcular billetes de cambio con paso por referencia
void BilletesCambioRef(){
  
	int importe = 0;
	cout << "Introduce un importe para la retirada en billetes: " << endl;
	cin >> importe;

	int b_100 = 100, b_50 = 50, b_20 = 20, b_10 = 10, b_5 = 5, b_1=1;
	int aux = 0;
	int t1=0, t2=0, t3=0, t4=0, t5 = 0, t6=0;
	
	if (b_100 < importe) {
		aux += b_100, t1++;
		while (aux < importe){aux += b_100, t1++;}
						 }
	if (aux > importe) {aux = aux - b_100,t1--;}

	if (b_50 < importe) {
		aux += b_50, t2++;
		while (aux < importe) { aux += b_50, t2++; }
	}
	if (aux > importe) { aux = aux - b_50, t2--; }

	if (b_20 < importe) {
		aux += b_20, t3++;
		while (aux < importe) { aux += b_20, t3++; }
	}
	if (aux > importe) { aux = aux - b_20, t3--; }

	if (b_10 < importe) {
		aux += b_10, t4++;
		while (aux < importe) { aux += b_10, t4++; }
	}
	if (aux > importe) { aux = aux - b_10, t4--; }

	if (b_5 < importe) {
		aux += b_5, t5++;
		while (aux < importe) { aux += b_5, t5++; }
	}
	if (aux > importe) { aux = aux - b_5, t5--; }

	if (b_1 < importe) {
		aux += b_1, t6++;
		while (aux < importe) { aux += b_1, t6++; }
	}
	if (aux > importe) { aux = aux - b_1, t6--; }


	cout << "Billetes de 100: " << t1 << endl;
	cout << "Billetes de 50: " << t2 << endl;
	cout << "Billetes de 20: " << t3 << endl;
	cout << "Billetes de 10: " << t4 << endl;
	cout << "Billetes de 5: " << t5 << endl;
	cout << "Billetes de 1: " << t6 << endl;
}

void BusquedaBinaria(){

  int numero [] = {1,2,3,4,5};
int inf, sup, mitad, dato;
bool flag=false;
  
 dato = 4;
  
  //Algoritmo de Busqueda Binaria
  
  inf=0;
  sup=5;
  
  while (inf <= sup){
    mitad = (inf+sup)/2;
    
    if (numero[mitad] == dato){
      flag = false;
      break ;
    }
    
    if (numero[mitad] > dato){
      sup = mitad; 
      mitad = (inf+sup)/2;
    }
    
    if (numero[mitad] < dato){
      inf = mitad;
      mitad = (inf+sup)/2;
    }
  }
  
  if (flag = true){
    cout << "El numero ha sido encontrado en la posicion "<< mitad << endl;
    }
    else {
      cout << "El numero NO fue encontrado.";
    }}