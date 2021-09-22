/*
======== Curso de Ciencia de la Computación I - CCOMP2 - 1 ==========
Integrantes:
------------
1) Mauricio David Apaza Iruri
2) William Alexis Barrios Concha
3) Oscar Mauricio Quispe Mallma

Título:
-------
Creación de un Tik Tak Toe en base a lenguaje C++ (Persona v.s. Máquina)

Profesor:
--------- 
DSc. Manuel Eduardo Loayza Fernandez

            Departamento de Ciencia de la Computación
                 Universidad Católica San Pablo
                       Semestre 2021 - II
                         Arequipa - Perú
*/
#include <cstdlib>
#include <iostream>
using namespace std;


int main() {
	/*Variables Generales*/
	char x;
	int jugador;
	int inicio;
	int play = 0;
	int p;
	int cancel;
	int especial = 0;
	int cerrar = 1;
	
	/*Variables del Tablero*/
	char a = ' ';
	char b = ' ';
	char c = ' ';
	char d = ' ';
	char e = ' ';
	char f = ' ';
	char g = ' ';
	char h = ' ';
	char j = ' ';
	
	/*Menu de elección de Símbolo y ¿Quién juega primero? */
	cout << "==========" << "Tres en Raya" << "==========" << endl;
	cout << "Ingresar Simbolo del jugador: ";
	cin >> x;
	
	jugador =1+ rand() %3;
	
    /*Selección de Inicio de Partida*/
	if (jugador == 1){
		inicio = 1;
	}
	else if (jugador == 2){
		inicio = 0;
	}
	
	/*Inicio de la partida por parte del Jugador*/
	if (inicio == 1){
		for (int i = 1; i < 6 ; i++){
			/*Seccion Jugador*/
			if (play == 0){
				cout << "Elegir Posicion: ";
				cin >> p;
				if (p == 1 && a == ' '){
					a = x;
					cancel = 1;
				}
				else if (p == 2 && b == ' '){
					b = x;
					cancel = 1;
				}
				else if (p == 3 && c == ' '){
					c = x;
					cancel = 1;
				}
				else if (p == 4 && d == ' '){
					d = x;
					cancel = 1;
				}
				else if (p == 5 && e == ' '){
					e = x;
					cancel = 1;
				}
				else if (p == 6 && f == ' '){
					f = x;
					cancel = 1;
				}
				else if (p == 7 && g == ' '){
					g = x;
					cancel = 1;
				}
				else if (p == 8 && h == ' '){
					h = x;
					cancel = 1;
				}
				else if (p == 9 && j == ' '){
					j = x;
					cancel = 1;
				}
				else{
					cout << "Ese Posicion ya esta utilizada" << endl;
					i--;
					cancel = 0;
				}
				/*Paso del turno a la Maquina*/
				if (cancel == 1){
					play = 1;
				}
				
				/*Tablero*/
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			
			/*Seccion Maquina*/
			if (play == 1){
				cout << endl;
				cout << "TURNO DE LA MAQUINA" << endl;
				cout << endl;
				
				/*ABC*/
				
				/*Rellenar Espacios 'abc'*/
				if (a == x && b == x && c == ' ' ){
					c = 'O';
				}
				else if (a == x && c == x && b == ' ' ){
					b = 'O';
				}
				else if (b == x && c == x && a == ' '){
					a = 'O';
				}
				
				else if (a == x && b == x && c == ' ' && ((d != 'O' && e != 'O' && f != ' ') && (f != 'O' && e != 'O' && d != ' ') && (d != 'O' && f != 'O' && e != ' ') && (g != 'O' && h != 'O' && j != ' ') && (j != 'O' && h != 'O' && g != ' ') && (g != 'O' && j != 'O' && h != ' '))){
					c = 'O';
				}
				else if (a == x && c == x && b == ' ' && ((d != 'O' && e != 'O' && f != ' ') && (f != 'O' && e != 'O' && d != ' ') && (d != 'O' && f != 'O' && e != ' ') && (g != 'O' && h != 'O' && j != ' ') && (j != 'O' && h != 'O' && g != ' ') && (g != 'O' && j != 'O' && h != ' '))){
					b = 'O';
				}
				else if (b == x && c == x && a == ' ' && ((d != 'O' && e != 'O' && f != ' ') && (f != 'O' && e != 'O' && d != ' ') && (d != 'O' && f != 'O' && e != ' ') && (g != 'O' && h != 'O' && j != ' ') && (j != 'O' && h != 'O' && g != ' ') && (g != 'O' && j != 'O' && h != ' '))){
					a = 'O';
				}
				
				/*DEF*/
				
				/*Rellenar Espacios 'def'*/
				if (d == x && e == x && f == ' ' ){
					f = 'O';
					
				}
				else if (d == x && f == x && e == ' ' ){
					e = 'O';
					
				}
				else if (e == x && f == x && d == ' ' ){
					d = 'O';
					
				}
				if (d == x && e == x && f == ' ' && ((a != 'O' && b != 'O' && c != ' ') && (a != 'O' && c != 'O' && b != ' ') && (b != 'O' && c != 'O' && a != ' ') && (g != 'O' && h != 'O' && j != ' ') && (j != 'O' && h != 'O' && g != ' ') && (g != 'O' && j != 'O' && h != ' '))){
					f = 'O';
					
				}
				else if (d == x && f == x && e == ' ' && ((a != 'O' && b != 'O' && c != ' ') && (a != 'O' && c != 'O' && b != ' ') && (b != 'O' && c != 'O' && a != ' ') && (g != 'O' && h != 'O' && j != ' ') && (j != 'O' && h != 'O' && g != ' ') && (g != 'O' && j != 'O' && h != ' '))){
					e = 'O';
					
				}
				else if (e == x && f == x && d == ' ' && ((a != 'O' && b != 'O' && c != ' ') && (a != 'O' && c != 'O' && b != ' ') && (b != 'O' && c != 'O' && a != ' ') && (g != 'O' && h != 'O' && j != ' ') && (j != 'O' && h != 'O' && g != ' ') && (g != 'O' && j != 'O' && h != ' '))){
					d = 'O';
					
				}
				
				/*GHJ*/
				
				/*Rellenar Espacios 'ghj'*/
				if (g == x && h == x && j == ' ' ){
					j = 'O';
					
				}
				else if (g == x && j == x && h == ' ' ){
					h = 'O';
					
				}
				else if (h == x && j == x && g == ' ' ){
					g = 'O';
					
				}
				if (g == x && h == x && j == ' ' && ((a != 'O' && b != 'O' && c != ' ') && (a != 'O' && c != 'O' && b != ' ') && (b != 'O' && c != 'O' && a != ' ') && (d != 'O' && e != 'O' && f != ' ') && (d != 'O' && f != 'O' && e != ' ') && (e != 'O' && f != 'O' && d != ' '))){
					j = 'O';
					
				}
				else if (g == x && j == x && h == ' ' && ((a != 'O' && b != 'O' && c != ' ') && (a != 'O' && c != 'O' && b != ' ') && (b != 'O' && c != 'O' && a != ' ') && (d != 'O' && e != 'O' && f != ' ') && (d != 'O' && f != 'O' && e != ' ') && (e != 'O' && f != 'O' && d != ' '))){
					h = 'O';
					
				}
				else if (h == x && j == x && g == ' ' && ((a != 'O' && b != 'O' && c != ' ') && (a != 'O' && c != 'O' && b != ' ') && (b != 'O' && c != 'O' && a != ' ') && (d != 'O' && e != 'O' && f != ' ') && (d != 'O' && f != 'O' && e != ' ') && (e != 'O' && f != 'O' && d != ' '))){
					g = 'O';
					
				}
				
				/*ADG*/
				
				/*Rellenar Espacios 'adg'*/
				if (a == x && d == x && g == ' ' ){
					g = 'O';
					
				}
				else if (a == x && g == x && d == ' ' ){
					d = 'O';
					
				}
				else if (d == x && g == x && a == ' ' ){
					a = 'O';
					
				}
				
				if (a == x && d == x && g == ' ' && ((b != 'O' && e != 'O' && h != ' ') && (b != 'O' && h != 'O' && e != ' ') && (e != 'O' && h != 'O' && b != ' ') && (c != 'O' && f != 'O' && j != ' ') && (c != 'O' && j != 'O' && f != ' ') && (f != 'O' && j != 'O' && c != ' '))){
					g = 'O';
					
				}
				else if (a == x && g == x && d == ' ' && ((b != 'O' && e != 'O' && h != ' ') && (b != 'O' && h != 'O' && e != ' ') && (e != 'O' && h != 'O' && b != ' ') && (c != 'O' && f != 'O' && j != ' ') && (c != 'O' && j != 'O' && f != ' ') && (f != 'O' && j != 'O' && c != ' '))){
					d = 'O';
					
				}
				else if (d == x && g == x && a == ' ' && ((b != 'O' && e != 'O' && h != ' ') && (b != 'O' && h != 'O' && e != ' ') && (e != 'O' && h != 'O' && b != ' ') && (c != 'O' && f != 'O' && j != ' ') && (c != 'O' && j != 'O' && f != ' ') && (f != 'O' && j != 'O' && c != ' '))){
					a = 'O';
					
				}
				
				/*BEH*/
				
				/*Rellenar Espacios 'beh'*/
				if (b == x && e == x && h == ' '){
					h = 'O';
					
				}
				else if (b == x && h == x && e == ' ' ){
					e = 'O';
					
				}
				else if (e == x && h == x && b == ' ' ){
					b = 'O';
					
				}
				
				if (b == x && e == x && h == ' ' && ((a != 'O' && d != 'O' && g != ' ') && (a != 'O' && g != 'O' && d != ' ') && (d != 'O' && g != 'O' && a != ' ') && (c != 'O' && f != 'O' && j != ' ') && (c != 'O' && j != 'O' && f != ' ') && (f != 'O' && j != 'O' && c != ' '))){
					h = 'O';
					
				}
				else if (b == x && h == x && e == ' ' && ((a != 'O' && d != 'O' && g != ' ') && (a != 'O' && g != 'O' && d != ' ') && (d != 'O' && g != 'O' && a != ' ') && (c != 'O' && f != 'O' && j != ' ') && (c != 'O' && j != 'O' && f != ' ') && (f != 'O' && j != 'O' && c != ' '))){
					e = 'O';
					
				}
				else if (e == x && h == x && b == ' ' && ((a != 'O' && d != 'O' && g != ' ') && (a != 'O' && g != 'O' && d != ' ') && (d != 'O' && g != 'O' && a != ' ') && (c != 'O' && f != 'O' && j != ' ') && (c != 'O' && j != 'O' && f != ' ') && (f != 'O' && j != 'O' && c != ' '))){
					b = 'O';
					
				}
				
				/*CFJ*/
				
				/*Rellenar Espacios 'cfj'*/
				if (c == x && f == x && j == ' ' ){
					j = 'O';
					
				}
				else if (c == x && j == x && f == ' ' ){
					f = 'O';
					
				}
				else if (f == x && j == x && c == ' ' ){
					c = 'O';
					
				}
				
				if (c == x && f == x && j == ' ' && ((a != 'O' && d != 'O' && g != ' ') && (a != 'O' && g != 'O' && d != ' ') && (d != 'O' && g != 'O' && a != ' ') && (b != 'O' && e != 'O' && h != ' ') && (b != 'O' && h != 'O' && e != ' ') && (e != 'O' && h != 'O' && b != ' '))){
					j = 'O';
					
				}
				else if (c == x && j == x && f == ' ' && ((a != 'O' && d != 'O' && g != ' ') && (a != 'O' && g != 'O' && d != ' ') && (d != 'O' && g != 'O' && a != ' ') && (b != 'O' && e != 'O' && h != ' ') && (b != 'O' && h != 'O' && e != ' ') && (e != 'O' && h != 'O' && b != ' '))){
					f = 'O';
					
				}
				else if (f == x && j == x && c == ' ' && ((a != 'O' && d != 'O' && g != ' ') && (a != 'O' && g != 'O' && d != ' ') && (d != 'O' && g != 'O' && a != ' ') && (b != 'O' && e != 'O' && h != ' ') && (b != 'O' && h != 'O' && e != ' ') && (e != 'O' && h != 'O' && b != ' '))){
					c = 'O';
					
				}
				
				/*Rellenar Espacios 'aej'*/
				if (a == x && e == x && j == ' '){
					j = 'O';
					
				}
				else if (a == x && j == x && e == ' '){
					e = 'O';
					
				}
				else if (e == x && j == x && a == ' '){
					a = 'O';
					
				}
				
				/*Rellenar Espacios 'ceg'*/
				if (c == x && e == x && g == ' '){
					g = 'O';
					
				}
				else if (c == x && g == x && e == ' '){
					e = 'O';
					
				}
				else if (e == x && g == x && c == ' '){
					c = 'O';
					
				}
				
				/*Caso Triangulo*/
				if (e == 'O' && b == 'O' && a == x && c == x && h == x && d == ' '){
					d = 'O';
				}
				else if (e == 'O' && b == 'O' && a == x && c == x && h == x && f == ' '){
					f = 'O';
				}
				
				if (e == 'O' && f == 'O' && c == x && d == x && j == x && b == ' '){
					b = 'O';
				}
				else if (e == 'O' && f == 'O' && c == x && d == x && j == x && h == ' '){
					h = 'O';
				}
				
				if (e == 'O' && h == 'O' && b == x && g == x && j == x && f == ' '){
					f = 'O';
				}
				else if (e == 'O' && h == 'O' && b == x && g == x && j == x && d == ' '){
					d = 'O';
				}
				
				if (e == 'O' && d == 'O' && a == x && f == x && g == x && h == ' '){
					h = 'O';
				}
				else if (e == 'O' && d == 'O' && a == x && f == x && g == x && b == ' '){
					b = 'O';
				}
				
				/*Caso No al centro*/
				
				if (e == x && c == 'O' && g == x && j == ' '){
					j = 'O';
				}
				
				if (e == x){
					c = 'O';
				}
				
				/*Caso Al Centro*/
				
				if (e == 'O' && (j == x || g == x) && b == ' '){
					b = 'O';
				}
				
				if (e == ' '){
					e = 'O';
				}
				/*Tablero*/
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
				
				play = 0;
				
				
				/* Ubicación de X */
				if (a == x && b == x && c == x){
					cout << "Eres el ganador";
					break;
				}
				else if (d == x && e == x && f == x){
					cout << "Eres el ganador";
					break;
				}
				else if (g == x && h == x && j == x){
					cout << "Eres el ganador";
					break;
				}
				else if (a == x && d == x && g == x){
					cout << "Eres el ganador";
					break;
				}
				else if (b == x && e == x && h == x){
					cout << "Eres el ganador";
					break;
				}
				else if (c == x && f == x && j == x){
					cout << "Eres el ganador";
					break;
				}
				else if (a == x && e == x && j == x){
					cout << "Eres el ganador";
					break;
				}
				else if (c == x && e == x && g == x){
					cout << "Eres el ganador";
					break;
				}
				
				/* Ubicación de Y */
				else if (a == 'O' && b == 'O' && c == 'O'){
					cout << "La Maquina" << " es el ganador";
					break;
				}
				else if (d == 'O' && e == 'O' && f == 'O'){
					cout << "La Maquina" << " es el ganador";
					break;
				}
				else if (g == 'O' && h == 'O' && j == 'O'){
					cout << "La Maquina" << " es el ganador";
					break;
				}
				else if (a == 'O' && d == 'O' && g == 'O'){
					cout << "La Maquina" << " es el ganador";
					break;
				}
				else if (b == 'O' && e == 'O' && h == 'O'){
					cout << "La Maquina" << " es el ganador";
					break;
				}
				else if (c == 'O' && f == 'O' && j == 'O'){
					cout << "La Maquina" << " es el ganador";
					break;
				}
				else if (a == 'O' && e == 'O' && j == 'O'){
					cout << "La Maquina" << " es el ganador";
					break;
				}
				else if (c == 'O' && e == 'O' && g == 'O'){
					cout << "La Maquina" << " es el ganador";
					break;
				}
				else if ( a != ' ' && b != ' '  && c != ' ' && d != ' ' && e != ' ' && f != ' ' && g != ' ' && h != ' ' && j != ' '){
					cout << "EMPATE";
				}
			}
		}
		
	}
	
	
	/*Inicio de la partida por parte de la Maquina*/
	if (inicio == 0){
		for (int i = 1; i < 6 ; i++){
			/*Seccion Jugador*/
			if (play == 1){
				cout << "Elegir Posicion: ";
				cin >> p;
				if (p == 1 && a == ' '){
					a = x;
					cancel = 1;
				}
				else if (p == 2 && b == ' '){
					b = x;
					cancel = 1;
				}
				else if (p == 3 && c == ' '){
					c = x;
					cancel = 1;
				}
				else if (p == 4 && d == ' '){
					d = x;
					cancel = 1;
				}
				else if (p == 5 && e == ' '){
					e = x;
					cancel = 1;
				}
				else if (p == 6 && f == ' '){
					f = x;
					cancel = 1;
				}
				else if (p == 7 && g == ' '){
					g = x;
					cancel = 1;
				}
				else if (p == 8 && h == ' '){
					h = x;
					cancel = 1;
				}
				else if (p == 9 && j == ' '){
					j = x;
					cancel = 1;
				}
				else{
					cout << "Ese Posicion ya esta utilizada" << endl;
					i--;
					cancel = 0;
				}
				/*Paso del turno a la Maquina*/
				if (cancel == 1){
					play = 0;
				}
				
				/*Tablero*/
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			
			/*Seccion Maquina*/
			if (play == 0){
				cout << endl;
				cout << "TURNO DE LA MAQUINA" << endl;
				cout << endl;
				
				/*ABC*/
				
				/*Rellenar Espacios 'abc'*/
				
				if (a == x && b == x && c == ' ' && ((d != 'O' && e != 'O' && f != ' ') && (f != 'O' && e != 'O' && d != ' ') && (d != 'O' && f != 'O' && e != ' ') && (g != 'O' && h != 'O' && j != ' ') && (j != 'O' && h != 'O' && g != ' ') && (g != 'O' && j != 'O' && h != ' '))){
					c = 'O';
					cerrar = 0;
				}
				else if (a == x && c == x && b == ' ' && ((d != 'O' && e != 'O' && f != ' ') && (f != 'O' && e != 'O' && d != ' ') && (d != 'O' && f != 'O' && e != ' ') && (g != 'O' && h != 'O' && j != ' ') && (j != 'O' && h != 'O' && g != ' ') && (g != 'O' && j != 'O' && h != ' '))){
					b = 'O';
					cerrar = 0;
				}
				else if (b == x && c == x && a == ' ' && ((d != 'O' && e != 'O' && f != ' ') && (f != 'O' && e != 'O' && d != ' ') && (d != 'O' && f != 'O' && e != ' ') && (g != 'O' && h != 'O' && j != ' ') && (j != 'O' && h != 'O' && g != ' ') && (g != 'O' && j != 'O' && h != ' '))){
					a = 'O';
					cerrar = 0;
				}
				else{
					if (a == x && b == x && c == ' ' && (d == 'O' && e == 'O' && f == ' ')){
						f = 'O';
						cerrar = 0;
					}
					else if (a == x && b == x && c == ' ' && (f == 'O' && e == 'O' && d == ' ')){
						d = 'O';
						cerrar = 0;
					}
					else if (a == x && b == x && c == ' ' && (d == 'O' && f == 'O' && e == ' ')){
						e = 'O';
						cerrar = 0;
					}
					else if (a == x && b == x && c == ' ' && (g == 'O' && h == 'O' && j == ' ')){
						j = 'O';
						cerrar = 0;
					}
					else if (a == x && b == x && c == ' ' && (j == 'O' && h == 'O' && g == ' ')){
						g = 'O';
						cerrar = 0;
					}
					else if (a == x && b == x && c == ' ' && (g == 'O' && j == 'O' && h == ' ')){
						h = 'O';
						cerrar = 0;
					}
					
					if (a == x && c == x && b == ' ' && (d == 'O' && e == 'O' && f == ' ')){
						f = 'O';
						cerrar = 0;
					}
					else if (a == x && c == x && b == ' ' && (f == 'O' && e == 'O' && d == ' ')){
						d = 'O';
						cerrar = 0;
					}
					else if (a == x && c == x && b == ' ' && (d == 'O' && f == 'O' && e == ' ')){
						e = 'O';
						cerrar = 0;
					}
					else if (a == x && c == x && b == ' ' && (g == 'O' && h == 'O' && j == ' ')){
						j = 'O';
						cerrar = 0;
					}
					else if (a == x && c == x && b == ' ' && (j == 'O' && h == 'O' && g == ' ')){
						g = 'O';
						cerrar = 0;
					}
					else if (a == x && c == x && b == ' ' && (g == 'O' && j == 'O' && h == ' ')){
						h = 'O';
						cerrar = 0;
					}
					
					if (b == x && c == x && a == ' ' && (d == 'O' && e == 'O' && f == ' ')){
						f = 'O';
						cerrar = 0;
					}
					else if (b == x && c == x && a == ' ' && (f == 'O' && e == 'O' && d == ' ')){
						d = 'O';
						cerrar = 0;
					}
					else if (b == x && c == x && a == ' ' && (d == 'O' && f == 'O' && e == ' ')){
						e = 'O';
						cerrar = 0;
					}
					else if (b == x && c == x && a == ' ' && (g == 'O' && h == 'O' && j == ' ')){
						j = 'O';
						cerrar = 0;
					}
					else if (b == x && c == x && a == ' ' && (j == 'O' && h == 'O' && g == ' ')){
						g = 'O';
						cerrar = 0;
					}
					else if (b == x && c == x && a == ' ' && (g == 'O' && j == 'O' && h == ' ')){
						h = 'O';
						cerrar = 0;
					}
					
				}
				
				if (cerrar == 1 && a == x && b == x && c == ' ' ){
					c = 'O';
				}
				else if (cerrar == 1 && a == x && c == x && b == ' ' ){
					b = 'O';
				}
				else if (cerrar == 1 && b == x && c == x && a == ' '){
					a = 'O';
				}
				
				/*DEF*/
				
				/*Rellenar Espacios 'def'*/
				
				if (d == x && e == x && f == ' ' && ((a != 'O' && b != 'O' && c != ' ') && (a != 'O' && c != 'O' && b != ' ') && (b != 'O' && c != 'O' && a != ' ') && (g != 'O' && h != 'O' && j != ' ') && (j != 'O' && h != 'O' && g != ' ') && (g != 'O' && j != 'O' && h != ' '))){
					f = 'O';
					cerrar = 0;
				}
				else if (d == x && f == x && e == ' ' && ((a != 'O' && b != 'O' && c != ' ') && (a != 'O' && c != 'O' && b != ' ') && (b != 'O' && c != 'O' && a != ' ') && (g != 'O' && h != 'O' && j != ' ') && (j != 'O' && h != 'O' && g != ' ') && (g != 'O' && j != 'O' && h != ' '))){
					e = 'O';
					cerrar = 0;
				}
				else if (e == x && f == x && d == ' ' && ((a != 'O' && b != 'O' && c != ' ') && (a != 'O' && c != 'O' && b != ' ') && (b != 'O' && c != 'O' && a != ' ') && (g != 'O' && h != 'O' && j != ' ') && (j != 'O' && h != 'O' && g != ' ') && (g != 'O' && j != 'O' && h != ' '))){
					d = 'O';
					cerrar = 0;
				}
				else{
					if (d == x && e == x && f == ' ' && (a == 'O' && b == 'O' && c == ' ')){
						c = 'O';
						cerrar = 0;
					}
					else if (d == x && e == x && f == ' ' && (a == 'O' && c == 'O' && b == ' ')){
						b = 'O';
						cerrar = 0;
					}
					else if (d == x && e == x && f == ' ' && (b == 'O' && c == 'O' && a == ' ')){
						a = 'O';
						cerrar = 0;
					}
					else if (d == x && e == x && f == ' ' && (g == 'O' && h == 'O' && j == ' ')){
						j = 'O';
						cerrar = 0;
					}
					else if (d == x && e == x && f == ' ' && (j == 'O' && h == 'O' && g == ' ')){
						g = 'O';
						cerrar = 0;
					}
					else if (d == x && e == x && f == ' ' && (g == 'O' && j == 'O' && h == ' ')){
						h = 'O';
						cerrar = 0;
					}
					
					if (d == x && f == x && e == ' ' && (a == 'O' && b == 'O' && c == ' ')){
						c = 'O';
						cerrar = 0;
					}
					else if (d == x && f == x && e == ' ' && (a == 'O' && c == 'O' && b == ' ')){
						b = 'O';
						cerrar = 0;
					}
					else if (d == x && f == x && e == ' ' && (b == 'O' && c == 'O' && a == ' ')){
						a = 'O';
						cerrar = 0;
					}
					else if (d == x && f == x && e == ' ' && (g == 'O' && h == 'O' && j == ' ')){
						j = 'O';
						cerrar = 0;
					}
					else if (d == x && f == x && e == ' ' && (j == 'O' && h == 'O' && g == ' ')){
						g = 'O';
						cerrar = 0;
					}
					else if (d == x && f == x && e == ' ' && (g == 'O' && j == 'O' && h == ' ')){
						h = 'O';
						cerrar = 0;
					}
					
					if (e == x && f == x && d == ' ' && (a == 'O' && b == 'O' && c == ' ')){
						c = 'O';
						cerrar = 0;
					}
					else if (e == x && f == x && d == ' ' && (a == 'O' && c == 'O' && b == ' ')){
						b = 'O';
						cerrar = 0;
					}
					else if (e == x && f == x && d == ' ' && (b == 'O' && c == 'O' && a == ' ')){
						a = 'O';
						cerrar = 0;
					}
					else if (e == x && f == x && d == ' ' && (g == 'O' && h == 'O' && j == ' ')){
						j = 'O';
						cerrar = 0;
					}
					else if (e == x && f == x && d == ' ' && (j == 'O' && h == 'O' && g == ' ')){
						g = 'O';
						cerrar = 0;
					}
					else if (e == x && f == x && d == ' ' && (g == 'O' && j == 'O' && h == ' ')){
						h = 'O';
						cerrar = 0;
					}
					
				}
				
				if (cerrar == 1 && d == x && e == x && f == ' ' ){
					f = 'O';					
				}
				else if (cerrar == 1 && d == x && f == x && e == ' ' ){
					e = 'O';					
				}
				else if (cerrar == 1 && e == x && f == x && d == ' ' ){
					d = 'O';					
				}
				
				/*GHJ*/
				
				/*Rellenar Espacios 'ghj'*/
				
				if (g == x && h == x && j == ' ' && ((a != 'O' && b != 'O' && c != ' ') && (a != 'O' && c != 'O' && b != ' ') && (b != 'O' && c != 'O' && a != ' ') && (d != 'O' && e != 'O' && f != ' ') && (d != 'O' && f != 'O' && e != ' ') && (e != 'O' && f != 'O' && d != ' '))){
					j = 'O';
					cerrar = 0;
				}
				else if (g == x && j == x && h == ' ' && ((a != 'O' && b != 'O' && c != ' ') && (a != 'O' && c != 'O' && b != ' ') && (b != 'O' && c != 'O' && a != ' ') && (d != 'O' && e != 'O' && f != ' ') && (d != 'O' && f != 'O' && e != ' ') && (e != 'O' && f != 'O' && d != ' '))){
					h = 'O';
					cerrar = 0;
				}
				else if (h == x && j == x && g == ' ' && ((a != 'O' && b != 'O' && c != ' ') && (a != 'O' && c != 'O' && b != ' ') && (b != 'O' && c != 'O' && a != ' ') && (d != 'O' && e != 'O' && f != ' ') && (d != 'O' && f != 'O' && e != ' ') && (e != 'O' && f != 'O' && d != ' '))){
					g = 'O';
					cerrar = 0;
				}
				else{
					if (g == x && h == x && j == ' ' && (a == 'O' && b == 'O' && c == ' ')){
						c = 'O';
						cerrar = 0;
					}
					else if (g == x && h == x && j == ' ' && (a == 'O' && c == 'O' && b == ' ')){
						b = 'O';
						cerrar = 0;
					}
					else if (g == x && h == x && j == ' ' && (b == 'O' && c == 'O' && a == ' ')){
						a = 'O';
						cerrar = 0;
					}
					else if (g == x && h == x && j == ' ' && (d == 'O' && e == 'O' && f == ' ')){
						f = 'O';
						cerrar = 0;
					}
					else if (g == x && h == x && j == ' ' && (f == 'O' && e == 'O' && d == ' ')){
						d = 'O';
						cerrar = 0;
					}
					else if (g == x && h == x && j == ' ' && (d == 'O' && f == 'O' && e == ' ')){
						e = 'O';
						cerrar = 0;
					}
					
					if (g == x && j == x && h == ' ' && (a == 'O' && b == 'O' && c == ' ')){
						c = 'O';
						cerrar = 0;
					}
					else if (g == x && j == x && h == ' ' && (a == 'O' && c == 'O' && b == ' ')){
						b = 'O';
						cerrar = 0;
					}
					else if (g == x && j == x && h == ' ' && (b == 'O' && c == 'O' && a == ' ')){
						a = 'O';
						cerrar = 0;
					}
					else if (g == x && j == x && h == ' ' && (d == 'O' && e == 'O' && f == ' ')){
						f = 'O';
						cerrar = 0;
					}
					else if (g == x && j == x && h == ' ' && (f == 'O' && e == 'O' && d == ' ')){
						d = 'O';
						cerrar = 0;
					}
					else if (g == x && j == x && h == ' ' && (d == 'O' && f == 'O' && e == ' ')){
						e = 'O';
						cerrar = 0;
					}
					
					if (h == x && j == x && g == ' ' && (a == 'O' && b == 'O' && c == ' ')){
						c = 'O';
						cerrar = 0;
					}
					else if (h == x && j == x && g == ' ' && (a == 'O' && c == 'O' && b == ' ')){
						b = 'O';
						cerrar = 0;
					}
					else if (h == x && j == x && g == ' ' && (b == 'O' && c == 'O' && a == ' ')){
						a = 'O';
						cerrar = 0;
					}
					else if (h == x && j == x && g == ' ' && (d == 'O' && e == 'O' && f == ' ')){
						f = 'O';
						cerrar = 0;
					}
					else if (h == x && j == x && g == ' ' && (f == 'O' && e == 'O' && d == ' ')){
						d = 'O';
						cerrar = 0;
					}
					else if (h == x && j == x && g == ' ' && (d == 'O' && f == 'O' && e == ' ')){
						e = 'O';
						cerrar = 0;
					}
					
				}
				
				if (cerrar == 1 && g == x && h == x && j == ' ' ){
					j = 'O';
				}
				else if (cerrar == 1 && g == x && j == x && h == ' ' ){
					h = 'O';
				}
				else if (cerrar == 1 && h == x && j == x && g == ' ' ){
					g = 'O';
				}
				
				/*ADG*/
				
				/*Rellenar Espacios 'adg'*/
				
				if (a == x && d == x && g == ' ' && ((b != 'O' && e != 'O' && h != ' ') && (b != 'O' && h != 'O' && e != ' ') && (e != 'O' && h != 'O' && b != ' ') && (c != 'O' && f != 'O' && j != ' ') && (c != 'O' && j != 'O' && f != ' ') && (f != 'O' && j != 'O' && c != ' '))){
					g = 'O';
					cerrar = 0;
				}
				else if (a == x && g == x && d == ' ' && ((b != 'O' && e != 'O' && h != ' ') && (b != 'O' && h != 'O' && e != ' ') && (e != 'O' && h != 'O' && b != ' ') && (c != 'O' && f != 'O' && j != ' ') && (c != 'O' && j != 'O' && f != ' ') && (f != 'O' && j != 'O' && c != ' '))){
					d = 'O';
					cerrar = 0;
				}
				else if (d == x && g == x && a == ' ' && ((b != 'O' && e != 'O' && h != ' ') && (b != 'O' && h != 'O' && e != ' ') && (e != 'O' && h != 'O' && b != ' ') && (c != 'O' && f != 'O' && j != ' ') && (c != 'O' && j != 'O' && f != ' ') && (f != 'O' && j != 'O' && c != ' '))){
					a = 'O';
					cerrar = 0;
				}
				else{
					if (a == x && d == x && g == ' ' && (b == 'O' && e == 'O' && h == ' ')){
						h = 'O';
						cerrar = 0;
					}
					else if (a == x && d == x && g == ' ' && (b == 'O' && h == 'O' && e == ' ')){
						e = 'O';
						cerrar = 0;
					}
					else if (a == x && d == x && g == ' ' && (e == 'O' && h == 'O' && b == ' ')){
						b = 'O';
						cerrar = 0;
					}
					else if (a == x && d == x && g == ' ' && (c == 'O' && f == 'O' && j == ' ')){
						j = 'O';
						cerrar = 0;
					}
					else if (a == x && d == x && g == ' ' && (c == 'O' && j == 'O' && f == ' ')){
						f = 'O';
						cerrar = 0;
					}
					else if (a == x && d == x && g == ' ' && (f == 'O' && j == 'O' && c == ' ')){
						c = 'O';
						cerrar = 0;
					}
					
					if (a == x && g == x && d == ' ' && (b == 'O' && e == 'O' && h == ' ')){
						h = 'O';
						cerrar = 0;
					}
					else if (a == x && g == x && d == ' ' && (b == 'O' && h == 'O' && e == ' ')){
						e = 'O';
						cerrar = 0;
					}
					else if (a == x && g == x && d == ' ' && (e == 'O' && h == 'O' && b == ' ')){
						b = 'O';
						cerrar = 0;
					}
					else if (a == x && g == x && d == ' ' && (c == 'O' && f == 'O' && j == ' ')){
						j = 'O';
						cerrar = 0;
					}
					else if (a == x && g == x && d == ' ' && (c == 'O' && j == 'O' && f == ' ')){
						f = 'O';
						cerrar = 0;
					}
					else if (a == x && g == x && d == ' ' && (f == 'O' && j == 'O' && c == ' ')){
						c = 'O';
						cerrar = 0;
					}
					
					if (d == x && g == x && a == ' ' && (b == 'O' && e == 'O' && h == ' ')){
						h = 'O';
						cerrar = 0;
					}
					else if (d == x && g == x && a == ' ' && (b == 'O' && h == 'O' && e == ' ')){
						e = 'O';
						cerrar = 0;
					}
					else if (d == x && g == x && a == ' ' && (e == 'O' && h == 'O' && b == ' ')){
						b = 'O';
						cerrar = 0;
					}
					else if (d == x && g == x && a == ' ' && (c == 'O' && f == 'O' && j == ' ')){
						j = 'O';
						cerrar = 0;
					}
					else if (d == x && g == x && a == ' ' && (c == 'O' && j == 'O' && f == ' ')){
						f = 'O';
						cerrar = 0;
					}
					else if (d == x && g == x && a == ' ' && (f == 'O' && j == 'O' && c == ' ')){
						c = 'O';
						cerrar = 0;
					}
					
				}
				
				if(cerrar == 1 && a == x && d == x && g == ' '){
					g = 'O';
				}
				else if (cerrar == 1 && a == x && g == x && d == ' '){
					d = 'O';
				}
				else if (cerrar == 1 && d == x && g == x && a == ' '){
					a = 'O';
				}
				
				/*BEH*/
				
				/*Rellenar Espacios 'beh'*/
				
				if (b == x && e == x && h == ' ' && ((a != 'O' && d != 'O' && g != ' ') && (a != 'O' && g != 'O' && d != ' ') && (d != 'O' && g != 'O' && a != ' ') && (c != 'O' && f != 'O' && j != ' ') && (c != 'O' && j != 'O' && f != ' ') && (f != 'O' && j != 'O' && c != ' '))){
					h = 'O';
					cerrar = 0;
				}
				else if (b == x && h == x && e == ' ' && ((a != 'O' && d != 'O' && g != ' ') && (a != 'O' && g != 'O' && d != ' ') && (d != 'O' && g != 'O' && a != ' ') && (c != 'O' && f != 'O' && j != ' ') && (c != 'O' && j != 'O' && f != ' ') && (f != 'O' && j != 'O' && c != ' '))){
					e = 'O';
					cerrar = 0;
				}
				else if (e == x && h == x && b == ' ' && ((a != 'O' && d != 'O' && g != ' ') && (a != 'O' && g != 'O' && d != ' ') && (d != 'O' && g != 'O' && a != ' ') && (c != 'O' && f != 'O' && j != ' ') && (c != 'O' && j != 'O' && f != ' ') && (f != 'O' && j != 'O' && c != ' '))){
					b = 'O';
					cerrar = 0;
				}
				else{
					if (b == x && e == x && h == ' ' && (a == 'O' && d == 'O' && g == ' ')){
						g = 'O';
						cerrar = 0;
					}
					else if (b == x && e == x && h == ' ' && (a == 'O' && g == 'O' && d == ' ')){
						d = 'O';
						cerrar = 0;
					}
					else if (b == x && e == x && h == ' ' && (d == 'O' && g == 'O' && a == ' ')){
						a = 'O';
						cerrar = 0;
					}
					else if (b == x && e == x && h == ' ' && (c == 'O' && f == 'O' && j == ' ')){
						j = 'O';
						cerrar = 0;
					}
					else if (b == x && e == x && h == ' ' && (c == 'O' && j == 'O' && f == ' ')){
						f = 'O';
						cerrar = 0;
					}
					else if (b == x && e == x && h == ' ' && (f == 'O' && j == 'O' && c == ' ')){
						c = 'O';
						cerrar = 0;
					}
					
					if (b == x && h == x && e == ' ' && (a == 'O' && d == 'O' && g == ' ')){
						g = 'O';
						cerrar = 0;
					}
					else if (b == x && h == x && e == ' ' && (a == 'O' && g == 'O' && d == ' ')){
						d = 'O';
						cerrar = 0;
					}
					else if (b == x && h == x && e == ' ' && (d == 'O' && g == 'O' && a == ' ')){
						a = 'O';
						cerrar = 0;
					}
					else if (b == x && h == x && e == ' ' && (c == 'O' && f == 'O' && j == ' ')){
						j = 'O';
						cerrar = 0;
					}
					else if (b == x && h == x && e == ' ' && (c == 'O' && j == 'O' && f == ' ')){
						f = 'O';
						cerrar = 0;
					}
					else if (b == x && h == x && e == ' ' && (f == 'O' && j == 'O' && c == ' ')){
						c = 'O';
						cerrar = 0;
					}
					
					if (e == x && h == x && b == ' ' && (a == 'O' && d == 'O' && g == ' ')){
						g = 'O';
						cerrar = 0;
					}
					else if (e == x && h == x && b == ' ' && (a == 'O' && g == 'O' && d == ' ')){
						d = 'O';
						cerrar = 0;
					}
					else if (e == x && h == x && b == ' ' && (d == 'O' && g == 'O' && a == ' ')){
						a = 'O';
						cerrar = 0;
					}
					else if (e == x && h == x && b == ' ' && (c == 'O' && f == 'O' && j == ' ')){
						j = 'O';
						cerrar = 0;
					}
					else if (e == x && h == x && b == ' ' && (c == 'O' && j == 'O' && f == ' ')){
						f = 'O';
						cerrar = 0;
					}
					else if (e == x && h == x && b == ' ' && (f == 'O' && j == 'O' && c == ' ')){
						c = 'O';
						cerrar = 0;
					}
				}
				
				if (cerrar == 1 && b == x && e == x && h == ' '){
					h = 'O';
				}
				else if (cerrar == 1 && b == x && h == x && e == ' ' ){
					e = 'O';
				}
				else if (cerrar == 1 && e == x && h == x && b == ' ' ){
					b = 'O';
				}
				
				/*CFJ*/
				
				/*Rellenar Espacios 'cfj'*/
				
				if (c == x && f == x && j == ' ' && ((a != 'O' && d != 'O' && g != ' ') && (a != 'O' && g != 'O' && d != ' ') && (d != 'O' && g != 'O' && a != ' ') && (b != 'O' && e != 'O' && h != ' ') && (b != 'O' && h != 'O' && e != ' ') && (e != 'O' && h != 'O' && b != ' '))){
					j = 'O';
					cerrar = 0;
				}
				else if (c == x && j == x && f == ' ' && ((a != 'O' && d != 'O' && g != ' ') && (a != 'O' && g != 'O' && d != ' ') && (d != 'O' && g != 'O' && a != ' ') && (b != 'O' && e != 'O' && h != ' ') && (b != 'O' && h != 'O' && e != ' ') && (e != 'O' && h != 'O' && b != ' '))){
					f = 'O';
					cerrar = 0;
				}
				else if (f == x && j == x && c == ' ' && ((a != 'O' && d != 'O' && g != ' ') && (a != 'O' && g != 'O' && d != ' ') && (d != 'O' && g != 'O' && a != ' ') && (b != 'O' && e != 'O' && h != ' ') && (b != 'O' && h != 'O' && e != ' ') && (e != 'O' && h != 'O' && b != ' '))){
					c = 'O';
					cerrar = 0;
				}
				else{
					if (c == x && f == x && j == ' ' && (a == 'O' && d == 'O' && g == ' ')){
						g = 'O';
						cerrar = 0;
					}
					else if (c == x && f == x && j == ' ' && (a == 'O' && g == 'O' && d == ' ')){
						d = 'O';
						cerrar = 0;
					}
					else if (c == x && f == x && j == ' ' && (d == 'O' && g == 'O' && a == ' ')){
						a = 'O';
						cerrar = 0;
					}
					else if (c == x && f == x && j == ' ' && (b == 'O' && e == 'O' && h == ' ')){
						h = 'O';
						cerrar = 0;
					}
					else if (c == x && f == x && j == ' ' && (b == 'O' && h == 'O' && e == ' ')){
						e = 'O';
						cerrar = 0;
					}
					else if (c == x && f == x && j == ' ' && (e == 'O' && h == 'O' && b == ' ')){
						b = 'O';
						cerrar = 0;
					}
					
					if (c == x && j == x && f == ' ' && (a == 'O' && d == 'O' && g == ' ')){
						g = 'O';
						cerrar = 0;
					}
					else if (c == x && j == x && f == ' ' && (a == 'O' && g == 'O' && d == ' ')){
						d = 'O';
						cerrar = 0;
					}
					else if (c == x && j == x && f == ' ' && (d == 'O' && g == 'O' && a == ' ')){
						a = 'O';
						cerrar = 0;
					}
					else if (c == x && j == x && f == ' ' && (b == 'O' && e == 'O' && h == ' ')){
						h = 'O';
						cerrar = 0;
					}
					else if (c == x && j == x && f == ' ' && (b == 'O' && h == 'O' && e == ' ')){
						e = 'O';
						cerrar = 0;
					}
					else if (c == x && j == x && f == ' ' && (e == 'O' && h == 'O' && b == ' ')){
						b = 'O';
						cerrar = 0;
					}
					
					if (f == x && j == x && c == ' ' && (a == 'O' && g == 'O' && d == ' ')){
						d = 'O';
						cerrar = 0;
					}
					else if (f == x && j == x && c == ' ' && (d == 'O' && g == 'O' && a == ' ')){
						a = 'O';
						cerrar = 0;
					}
					else if (f == x && j == x && c == ' ' && (a == 'O' && d == 'O' && g == ' ')){
						g = 'O';
						cerrar = 0;
					}
					else if (f == x && j == x && c == ' ' && (b == 'O' && e == 'O' && h == ' ')){
						h = 'O';
						cerrar = 0;
					}
					else if (f == x && j == x && c == ' ' && (b == 'O' && h == 'O' && e == ' ')){
						e = 'O';
						cerrar = 0;
					}
					else if (f == x && j == x && c == ' ' && (e == 'O' && h == 'O' && b == ' ')){
						b = 'O';
						cerrar = 0;
					}
				}
				
				if (cerrar == 1 && c == x && f == x && j == ' ' ){
					j = 'O';
				}
				else if (cerrar == 1 && c == x && j == x && f == ' ' ){
					f = 'O';
				}
				else if (cerrar == 1 && f == x && j == x && c == ' ' ){
					c = 'O';
				}
				
				/*Rellenar Espacios 'aej'*/
				if (a == x && e == x && j == ' '){
					j = 'O';
					
				}
				else if (a == x && j == x && e == ' '){
					e = 'O';
					
				}
				else if (e == x && j == x && a == ' '){
					a = 'O';
					
				}
				
				/*Rellenar Espacios 'ceg'*/
				if (c == x && e == x && g == ' '){
					g = 'O';
					
				}
				else if (c == x && g == x && e == ' '){
					e = 'O';
					
				}
				else if (e == x && g == x && c == ' '){
					c = 'O';
					
				}
				
				/*Caso Triangulo*/
				if (e == 'O' && b == 'O' && a == x && c == x && h == x){
					d = 'O';
				}
				else if (e == 'O' && f == 'O' && c == x && d == x && j == x){
					b = 'O';
				}
				else if (e == 'O' && h == 'O' && b == x && g == x && j == x){
					f = 'O';
				}
				else if (e == 'O' && d == 'O' && a == x && f == x && g == x){
					h = 'O';
				}
				
				/*Caso Al Centro*/
				
				if (e == 'O' && b == x && a == 'O' && f == ' ' && h == ' ' && d == ' '){
					d = 'O';
				}
				else if (e == 'O' && d == x && g == 'O' && f == ' ' && b == ' ' && h == ' '){
					h = 'O';
				}
				else if (e == 'O' && h == x && j == 'O' && b == ' ' && d == ' ' && f == ' '){
					f = 'O';
				}
				else if (e == 'O' && f == x && c == 'O' && d == ' ' && h == ' ' && b == ' '){
					b = 'O';
				}
				
				if (e == 'O' && a == x && j == ' ' && c == ' ' && g == ' '){
					j = 'O';
				}
				else if (e == 'O' && c == x && g == ' ' && j == ' ' && a == ' '){
					g = 'O';
				}
				else if (e == 'O' && g == x && c == ' ' && j == ' ' && a == ' '){
					c = 'O';
				}
				else if (e == 'O' && j == x && a == ' ' && c == ' ' && g == ' '){
					a = 'O';
				}
				else if (e == 'O' && b == x && d == ' ' && f == ' ' && h == ' ' && a == ' '){
					a = 'O';
				}
				else if (e == 'O' && d == x && h == ' ' && f == ' ' && b == ' ' && g == ' '){
					g = 'O';
				}
				else if (e == 'O' && h == x && f == ' ' && b == ' ' && d == ' ' && j == ' '){
					j = 'O';
				}
				else if (e == 'O' && f == x && b == ' ' && d == ' ' && h == ' ' && c == ' '){
					c = 'O';
				}
				
				if (e == ' '){
					e = 'O';
				}
				/*Tablero*/
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
				
				play = 1;
				cerrar = 1;
				
				/* Ubicación de X */
				if (a == x && b == x && c == x){
					cout << "Eres el ganador";
					break;
				}
				else if (d == x && e == x && f == x){
					cout << "Eres el ganador";
					break;
				}
				else if (g == x && h == x && j == x){
					cout << "Eres el ganador";
					break;
				}
				else if (a == x && d == x && g == x){
					cout << "Eres el ganador";
					break;
				}
				else if (b == x && e == x && h == x){
					cout << "Eres el ganador";
					break;
				}
				else if (c == x && f == x && j == x){
					cout << "Eres el ganador";
					break;
				}
				else if (a == x && e == x && j == x){
					cout << "Eres el ganador";
					break;
				}
				else if (c == x && e == x && g == x){
					cout << "Eres el ganador";
					break;
				}
				
				/* Ubicación de Y */
				else if (a == 'O' && b == 'O' && c == 'O'){
					cout << "La Maquina" << " es el ganador";
					break;
				}
				else if (d == 'O' && e == 'O' && f == 'O'){
					cout << "La Maquina" << " es el ganador";
					break;
				}
				else if (g == 'O' && h == 'O' && j == 'O'){
					cout << "La Maquina" << " es el ganador";
					break;
				}
				else if (a == 'O' && d == 'O' && g == 'O'){
					cout << "La Maquina" << " es el ganador";
					break;
				}
				else if (b == 'O' && e == 'O' && h == 'O'){
					cout << "La Maquina" << " es el ganador";
					break;
				}
				else if (c == 'O' && f == 'O' && j == 'O'){
					cout << "La Maquina" << " es el ganador";
					break;
				}
				else if (a == 'O' && e == 'O' && j == 'O'){
					cout << "La Maquina" << " es el ganador";
					break;
				}
				else if (c == 'O' && e == 'O' && g == 'O'){
					cout << "La Maquina" << " es el ganador";
					break;
				}
				else if ( a != ' ' && b != ' '  && c != ' ' && d != ' ' && e != ' ' && f != ' ' && g != ' ' && h != ' ' && j != ' '){
					cout << "EMPATE";
				}
			}
		}
		
	}
	
	return 0;
}