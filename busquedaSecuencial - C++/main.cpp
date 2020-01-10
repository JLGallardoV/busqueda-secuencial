#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;
	
	void ingresa_numeros(int arreglo[], int tamano)
{
	for(int i=0;i<tamano;i++)
	{
		cout<<"ingresa el numero "<<i+1<<" : "<<endl;
		cin>>arreglo[i];
	}
}
void numeros_desorden(int arreglo[], int tamano)
{
	cout<<"Los números en desorden son: "<<endl;
	for(int i=0;i<tamano;i++)
	{		
		cout<<"la vez # "<<i+1<<" presionaste: "<<setw(8)<<arreglo[i]<<endl;
	}
}
void insertion_sort_ascendente(int arreglo[], int tamano)
{
	cout<<"ordenando..."<<endl<<endl<<endl;
	int temp;
	for(int i=1;i<tamano;i++) 
	{
		temp=arreglo[i];
		int k=i;
		while((k>0) && (arreglo[k-1]>temp))
		{
			arreglo[k]=arreglo[k-1];
			k--;//sirve para ir arrastrando hasta la posicion 0 para que no entre al ciclo(arrastra los numeros, los ordena)
		}
		arreglo[k]=temp;
	}
}
void insertion_sort_descendente(int arreglo[], int tamano)
{
	cout<<"ordenando..."<<endl<<endl<<endl;
	int temp;
	for(int i=1;i<tamano;i++) 
	{
		temp=arreglo[i];
		int k=i;
		while((k>0) && (arreglo[k-1]<temp))
		{
			arreglo[k]=arreglo[k-1];
			k--;//sirve para ir arrastrando hasta la posicion 0 para que no entre al ciclo(arrastra los numeros, los ordena)
		}
		arreglo[k]=temp;
	}
}
void imprimir(int arreglo[], int tamano)
{
	for(int i=0;i<tamano;i++)
	{
		cout<<arreglo[i]<<", ";
	}
}
int busqueda_secuencial(int arreglo[], int tamano, int valor)
{
	for(int i=0; i<tamano;i++)
	{
		if(arreglo[i]==valor)
		{
			return i;
		}
	}
	return -1;

}
int main() 
{
	setlocale(LC_CTYPE, "spanish");
	int valor;
	int pos;
	int n;
	cout<<"ingresa la longitud de tu arreglo"<<endl;
	cin>>n;
	const int tamano=n;
	int arreglo[tamano];
	//llamada de funciones
	ingresa_numeros(arreglo, tamano);
	system("cls"); //limpia la consola
	numeros_desorden(arreglo, tamano);
	cout<<endl<<endl;
	cout<<"Los número ordenados ascendentemente: "<<endl;
	insertion_sort_ascendente(arreglo, tamano);
	imprimir(arreglo, tamano);
	cout<<endl<<"Los números ordenados descendentemente: "<<endl;
	insertion_sort_descendente(arreglo, tamano);
	imprimir(arreglo, tamano);
	cout<<endl<<endl<<"ingresa el numero a buscar: ";
	cin>>valor;
	pos=busqueda_secuencial(arreglo, tamano, valor);
	if(pos>=0)
	{
		cout<<"El numero # ["<<valor<<"] se encuentra en la posición: "<<pos<<" del arreglo"<<endl;
	}
	
}




