//Angel Emanuel Mendoza Reyes//Grupo 1 O //22110083// Programacion Estructurada // 18/03/2022


#include <iostream> // se incluye una la librería 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std; // se usa para evitar escribir varias veces std:: antes  de cion o cout
int main(int argc, char** argv) { // llamada a la función principal, aquí es donde inicia el programa
	
	int valor; // declaración de una varaible entera
	do// Aqui se inicia el ciclo Do-While
{
		cout << "Ingrese un valor "<< endl;/*Se muestra un texto para que el usuario ingrese un valor, el endl es para hacer
		                                     un salto de linea*/
		
		cin >> valor;/* Aqui almacenamos el valor ingresado dentro de la variable valor*/
		
		if (valor<5)// Aqui el If tiene la condicion de ejecutar la siguiente linea si el valor ingresado es menor a 5.
		{
			cout << "El "<<valor <<" es menor a 5" << endl;	/*Se muestra un texto que muestra el valor ingresado y a su vez
			                                                 que diga que es menor a 5, el endl se encarga de hacer un salto de linea */
		}
		else/* Aqui en caso de no cumplirse la primera condicion ejecutara el siguiente codigo que se encuentre dentro de las llaves*/
		{
			cout << "El "<< valor << "es mayor o igual a 5" << endl;/* se muestra un texto que, muestra el valor ingresado y a su vez que diga 
			                                                        que es mayor a 5, el endl se encarga se hacer un salto de linea.*/
			                                                          
		}
	}while ( valor!= 0 );/* Aqui el resto de la sentencia Do-While el cual indica cuando se dejara de ejecutar
	                     el Do,en este caso mientras que la variable valor sea diferente de 0.*/
	
	cout << "Cambio de ciclo do-while a ciclo for"<< endl;/* Se muestra un texto que indica el cambio del ciclo Do-While 
	                                                        al ciclo For,el endl se encarga de hacer un salto de linea.*/
	
	for (valor =1;valor<=10;valor ++)/* Aqui inicia el ciclo For en donde establece el valor iniciar de la variable
	                                   valor y el limite que tendra para dejarse de ejecutar y ademas el valor que se le 
									   va sumar a la variable cada que este ciclo se ejecute*/ 
	                                 
	{
		if (valor<5)/* Aqui el If tiene la condicion de ejecutar la siguiente linea si el valor ingresado es menor a 5.*/
		{
			cout << "El "<< valor << " es menor a 5" << endl;/* Se muestra un texto que muestra el valor ingresado 
			                                                   y a su vez que diga que es menor a 5,el endl se encarga de hacer
			                                                 un salto de linea.*/
		}
		else/*Aqui en caso de no cumplirse la primera condicion ejecutara el siguiente codigo que se encuentra
		     dentro de las llaves.*/
		{
			cout << "El "<< valor << " es mayor o igual a 5" << endl;/* Se muestra un texto que muestra el valor ingresado 
			                                                           y a su vez que diga que es mayor a 5, el endl se encarga de hacer
			                                                        un salto de linea.*/
			
			
		}
	}
	return 0;// Aqui se acaba el programa y regresa a 0 a la funcion principal del programa.
}
