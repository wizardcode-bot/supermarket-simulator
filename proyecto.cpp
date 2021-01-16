/* llevar una base de datos de los clientes y ventas recientes o diarias para así 
hacerse una idea de que productos o mercancía tienen disponible y que productos tienen más demanda.
También necesitan mostrar sus productos virtualmente*/

//lo que escriba en el archivo.txt aparecera en la consola
#include <iostream>
#include <fstream>//entrada y salida en archivos
#include <cstdlib>
#include <windows.h>
#include <locale.h>
#include <fstream>
#include <stdlib.h>
#include<iomanip>

using namespace std;

void menu();
void food_categories();//categorias de comidas
void cereals();//se muestran cereales
void cereal();//se compra
void fruits_vegetables();//se muestran frutas y vegetales
void fruta();//se compra
void dairy_products();//se muestran lacteos
void lacteo();//se compra
void meat();//se muestran carnes
void carne();//se compra
void candy_cake();//se muestran dulces y pasteles
void dulce();//se compra
void oil_tinned();//se muestran aceites y enlatados
void enlatado();//se compra
void cleaning_products();//se muestran productos de limpieza
void limpieza();//se compra
void archivo();//para crear el archivo
void total();//precio total de compras
void registro_clientes();//para mostrar los clientes ingresados
void change_color();
int op1, op2, op3;//para switch de los menus

string nombreArchivo;
int ce,fr,la,ca,du,en,li;//contadores para guardar los productos

int suma_cereales;
int suma_frutas;
int suma_lacteos;
int suma_carnes;
int suma_dulces;
int suma_enlatados;
int suma_limpiezas;

int main(){
	setlocale(LC_CTYPE,  "Spanish");

	do{
	system("cls");
	menu();
	cin>>op1;
	switch(op1){
		case 1: //caso 1 del menu principal
		system("cls");	
		archivo();
		do{
		system("cls");
		cout<<"\n\t\tHola cibernauta!! Bienvendo/a a supermarket simulator, gracias por darnos";
		cout<<"\n\t\t  el gusto te atenderte. Solo por hoy, por compras mayores a $250.000";
		cout<<"\n\t\t   en cualquier tipo de producto te haremos un descuento del 20%";
		cout<<"\n\t\t\t\t\t!!Don't miss out!!\n\n";
		food_categories();
		cin>>op2;
	switch(op2){
		case 1: system("cls");//primer caso de categoria de comida
		cereals();
		cereal();
		break;

		case 2: system("cls");//segundo caso de categoria de comida
		fruits_vegetables();
		fruta();
		break;	

		case 3: system("cls");//tercero caso de categoria de comida
		dairy_products();
		lacteo();
		break;

		case 4: system("cls");//cuarto caso de categoria de comida
		meat();
		carne();
		break;
		case 5: system("cls");//quinto caso de categoria de comida
		candy_cake();
		dulce();
		break;
		case 6: system("cls");//sexto caso de categoria de comida
		oil_tinned();
		enlatado();
		break;
		case 7: system("cls");//septimo caso de categoria de comida
		cleaning_products();
		limpieza();
		break;
	}
}while(op2!=0);
	break;
	case 2: system("cls");//caso 2 del menu principal
	total();
	break;

	case 3: system("cls");//caso 3 del menu principal
	registro_clientes();
	break;

	case 4: system("cls");//case 4 del menu principal
	change_color();
	break;
}
}while(op1!=0);
	
	cout<<"\n";
	system("pause");
	return 0;
}

void menu(){
	cout<<"\n\t\t\t    ________________________";
	cout<<"\n\t\t\t   |                        |";
	cout<<"\n\t\t\t   | SuperMarket Simulator  |";
	cout<<"\n\t\t\t   |________________________|"<<endl;
	cout<<"\n\t\t\t\tMENU PRINCIPAL"<<endl;
	cout<<"\n\t1. Realizar una compra"<<endl;
	cout<<"\n\t2. Precio total de compras"<<endl;
	cout<<"\n\t3. Registro de clientes"<<endl;
	cout<<"\n\t4. Cambiar el color"<<endl;
	cout<<"\n\t0. Salir"<<endl;
	cout<<"\n\n\tElija una opcion -->";
}

void food_categories(){

	cout<<"\n\t\t\t\tCATEGORIAS";
	cout<<"\n\n\t1. Cereales y otros derivados";
	cout<<"\n\t2. Frutas y Verduras";//yo
	cout<<"\n\t3. Lacteos";
	cout<<"\n\t4. Carnes";//morales
	cout<<"\n\t5. Dulces y Postreria";
	cout<<"\n\t6. Aceites y enlatados";//juan
	cout<<"\n\t7. Productos de limpieza";
	cout<<"\n\t0. Salir";
	cout<<"\n\n\tElija una opcion -->";

}

void cereals(){	
	cout<<"\n\t\t\t\t    ________________________";
	cout<<"\n\t\t\t\t   |                        |";
	cout<<"\n\t\t\t\t   | SuperMarket Simulator  |";
	cout<<"\n\t\t\t\t   |________________________|"<<endl<<endl;
	cout<<"\n\t 1. Arroz(lb)--> $2.800                         2. Frijoles(lb)-->$3.200"<<endl;
	cout<<"\n\t 3. Pasta(lb)-->$1.500                          4. Lentejas(lb)-->$2.500"<<endl;
	cout<<"\n\t 5. Garbanzos(lb)-->$2.600                      6. Arvejas(lb)-->$1.800"<<endl;
	cout<<"\n\t 7. Maiz pira(lb)-->$2.300                      8. Maizena(lb)-->$2.200"<<endl;
	cout<<"\n\t 9. Harina de trigo(lb)-->$1.200                10. Chokokrispis(700g)-->$10.000"<<endl;
	cout<<"\n\t 11. Avena(400g)-->$4.200                       12. Pan bimbo(600g)-->$4.900"<<endl;
	cout<<"\n\t 13. Pan centeno(600g)-->$5.400                 14. Galletas integrales(6u)-->$4.000"<<endl;
	cout<<"\n\t 15. Quaker(230g)-->$6.400                      16. Granola tosh(300g)-->$10.600"<<endl;
	cout<<"\n\t 17. Cereal milo(250g)-->$8.400                 18. Barras tosh(5u)-->$9.400"<<endl;
	cout<<"\n\t 19. Cereal viola(1000g)-->$20.000              20. Cereal aritos quaker(200g)-->$6.000"<<endl;
	cout<<"\n";
}

void cereal(){
	ofstream archivo;
	string cereales[20];//vector para guardar productos comprados
	int precios[20];
//	int suma_cereales=0;

	archivo.open(nombreArchivo.c_str(), ios::app);//se abre el archivo para agregar mas texto
	
	cout<<"  Cuantos productos deseas comprar?: "; cin>>ce;
		for(int i=0; i<ce; i++){
			cout<<"\n  Ingresa el nombre del producto #"<<i+1<<": "; cin>>cereales[i];
			cout<<"\n  Ingrese el precio: $"; cin>>precios[i];
			suma_cereales += precios[i];//precio total
		}	

	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	for(int k=0;k<ce;k++){
		archivo<<cereales[k]<<endl;
	}	

	cout<<"\n\n\t ______________________"<<endl;
	cout<<"\n\t   El total es: $"<<suma_cereales;
	cout<<"\n\t ______________________"<<endl;
	cout<<"\n\tThanks for your purchase!! See you then.";
	cout<<"\n\n";	
	archivo.close();//cerrar archivo
	system("pause");
}

void fruits_vegetables(){	
	cout<<"\n\t\t\t\t    ________________________";
	cout<<"\n\t\t\t\t   |                        |";
	cout<<"\n\t\t\t\t   | SuperMarket Simulator  |";
	cout<<"\n\t\t\t\t   |________________________|"<<endl<<endl;
	cout<<"\n\t 1. Cebolla(u)--> $800                        2. Banano(u)--> $400"<<endl;
	cout<<"\n\t 3. zanahoria(1000g)--> $1.800                4. Papaya(u)--> $3.200"<<endl;
	cout<<"\n\t 5. Mandarina(u)--> $600                      6. Tomate(1000g)--> $3.000"<<endl;
	cout<<"\n\t 7. Limon(1000g)--> $3.700                    8. Papa--> $2.800"<<endl;
	cout<<"\n\t 9. Mango--> $3.300                           10. Granadilla(u)--> $700"<<endl;
	cout<<"\n\t 11. Platano(u)--> $750                       12. Fresa(500g)--> $3.500"<<endl;
	cout<<"\n\t 13. Ajo(x3u)--> $1.300                       14. Manzana(800g)--> $7.000"<<endl;
	cout<<"\n\t 15. Peras(800g)--> $7.100                    16. Aguacate(u)--> $800"<<endl;
	cout<<"\n\t 17. Apio(700g)--> $1.000                     18. Lechuga(200g)--> $1.700"<<endl;
	cout<<"\n\t 19. Guanabana(u)--> $8.500                   20. Melon(u)--> $4.400"<<endl;
	cout<<"\n\t 21. Naranja(2kg)--> $4.000                   22. Pepino(u)--> $850"<<endl;
	cout<<"\n\t 23. Pimenton(u)--> $900                      24. Uva(1kg)--> $12.800"<<endl;
	cout<<"\n";
}

void fruta(){
	ofstream archivo;
	string frutas[24];//vector para guardar frutas y verduras
	int precios[24];
//	int suma_frutas=0;

	archivo.open(nombreArchivo.c_str(), ios::app);//se abre el archivo para agregar mas texto

	cout<<"  Cuantos productos deseas comprar?: "; cin>>fr;
		for(int i=0; i<fr; i++){
			cout<<"\n  Ingresa el nombre del producto #"<<i+1<<": ";cin>>frutas[i];
			cout<<"\n  Ingrese el precio: $"; cin>>precios[i];
			suma_frutas += precios[i];
		}

		if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	for(int k=0;k<fr;k++){
		archivo<<frutas[k]<<endl;
	}	

	cout<<"\n\n\t ______________________"<<endl;
	cout<<"\n\t   El total es: $"<<suma_frutas;
	cout<<"\n\t ______________________"<<endl;
	cout<<"\n\tThanks for your purchase!! See you then.";
	cout<<"\n\n";	
	archivo.close();//cerrar archivo
	system("pause");
}

void dairy_products(){	
	cout<<"\n\t\t\t\t    ________________________";
	cout<<"\n\t\t\t\t   |                        |";
	cout<<"\n\t\t\t\t   | SuperMarket Simulator  |";
	cout<<"\n\t\t\t\t   |________________________|"<<endl<<endl;
	cout<<"\n\t 1. Lecha Entera(sixpack)--> $10.600              2. Queso tajado fresco(450g)--> $20.000"<<endl;
	cout<<"\n\t 3. Lecha en polvo(1000g)--> $10.600              4. Lecha deslactosada(sixpack)--> $18.500"<<endl;
	cout<<"\n\t 5. Bon yurt(x4u)--> $9.700                       6. Queso crema(400g)--> $4.800"<<endl;
	cout<<"\n\t 7. Jamon de pavo(230g)--> $12.000                8. Cuajada colanta(500g)--> $6.300"<<endl;
	cout<<"\n\t 9. Kumis Alpina(1000g)--> $5.600                 10. Yogurt Alpina(1.750)--> $12.000"<<endl;
	cout<<"\n\t 11. Huevos(x18u)--> $13.200                      12. Arepa de queso(x4u)--> $13.000"<<endl;
	cout<<"\n\t 13. Jamon de pollo(230g)--> $9.700               14. Yogo yogo(x8u)--> $6.200"<<endl;
	cout<<"\n\t 15. Yogurt griego(500g)--> $19.500               16. Yogures defensis yox(x8u)--> $13.000"<<endl;
	cout<<"\n\t 17. Leche condensada(420g)--> $8.400             18. Yogur semidescremado(x6u)--> $4.700"<<endl;
	cout<<"\n\t 19. Avena finesse(x4u)--> $10.800                20. Morcilla(500g)--> $6.800"<<endl;
	cout<<"\n";
}

void lacteo(){
	string lacteos[20];//vector para guardar lacteos
	ofstream archivo;
	int precios[20];
//	int suma_lacteos=0;

	archivo.open(nombreArchivo.c_str(), ios::app);//se abre el archivo para agregar mas texto

	cout<<"  Cuantos productos deseas comprar?: "; cin>>la;
		for(int i=0; i<la; i++){
			cout<<"\n  Ingresa el nombre del producto #"<<i+1<<": ";	cin>>lacteos[i];
			cout<<"\n  Ingresa el precio: $"; cin>>precios[i];
			suma_lacteos += precios[i];
		}

		if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	for(int k=0;k<la;k++){
		archivo<<lacteos[k]<<endl;
	}	

	cout<<"\n\n\t ______________________"<<endl;
	cout<<"\n\t   El total es: $"<<suma_lacteos;
	cout<<"\n\t ______________________"<<endl;
	cout<<"\n\tThanks for your purchase!! See you then.";
	cout<<"\n\n";	
	archivo.close();//cerrar archivo
	system("pause");
}

void meat(){	
	cout<<"\n\t\t\t\t    ________________________";
	cout<<"\n\t\t\t\t   |                        |";
	cout<<"\n\t\t\t\t   | SuperMarket Simulator  |";
	cout<<"\n\t\t\t\t   |________________________|"<<endl<<endl;
	cout<<"\n\t 1. Carne de res--> $4.000                      2. Carne de cerdo--> $3.500"<<endl;
	cout<<"\n\t 3. Pollo(kl)--> $5.000                         4. Carne molida--> $5.000"<<endl;
	cout<<"\n\t 5. Hueso--> $2.000                             6. Barra de salchichon--> $4.000"<<endl;
	cout<<"\n\t 7. Salchicha--> $1.500                         8. Mortadela--> $2.500"<<endl;
	cout<<"\n\t 9. Albondigon--> $3.000                        10. Salchicha Ranchera--> $4.000"<<endl;
	cout<<"\n\t 11. Cubeta de huevos--> $8.000                 12. Costilla--> $12.000"<<endl;
	cout<<"\n\t 13. Menudencias--> $1.500                      14. Mojarra--> $9.000"<<endl;
	cout<<"\n\t 15. Pescado seco--> $20.000                    16. Bagre--> $19.000"<<endl;
	cout<<"\n\t 17. Bocachico--> $9.600                        18. Cachama--> $9.400"<<endl;
	cout<<"\n\t 19. Camarones--> $28.000                       20. Filete--> $34.000"<<endl;
	cout<<"\n\t 21. Lomo--> $38.000                            22. Nicuro--> $10.000"<<endl;
	cout<<"\n";
}

void carne(){
	string carnes[22];//vector para guardar carnes
	int precios[22];
	ofstream archivo;
//	int suma_carnes=0;

	archivo.open(nombreArchivo.c_str(), ios::app);//se abre el archivo para agregar mas texto

	cout<<"  Cuantos productos deseas comprar?: "; cin>>ca;
		for(int i=0; i<ca; i++){
			cout<<"\n  Ingresa el nombre del producto #"<<i+1<<": "; cin>>carnes[i];
			cout<<"\n  Ingresa el precio: $"; cin>>precios[i];
			suma_carnes += precios[i];
		}

		if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	for(int k=0;k<ca;k++){
		archivo<<carnes[k]<<endl;
	}	

	cout<<"\n\n\t ______________________"<<endl;
	cout<<"\n\t   El total es: $"<<suma_carnes;
	cout<<"\n\t ______________________"<<endl;
	cout<<"\n\tThanks for your purchase!! See you then.";
	cout<<"\n\n";	
	archivo.close();//cerrar archivo
	system("pause");
}

void candy_cake(){	
	cout<<"\n\t\t\t\t    ________________________";
	cout<<"\n\t\t\t\t   |                        |";
	cout<<"\n\t\t\t\t   | SuperMarket Simulator  |";
	cout<<"\n\t\t\t\t   |________________________|"<<endl<<endl;
	cout<<"\n\t 1. Bonbonbum(pack)--> $5.600                      2. Chocobreak(pack)--> $5.600"<<endl;
	cout<<"\n\t 3. Quipitos(pack)--> $2.700                       4. Barrilete(pack)--> $2.600"<<endl;
	cout<<"\n\t 5. Menta chao(pack)--> $2.500                     6. Trident(pack)--> $3.200"<<endl;
	cout<<"\n\t 7. Bianchi(pack)--> $3.200                        8. Caramelo de cafe(pack)--> $1.500"<<endl;
	cout<<"\n\t 9. Papas margarita(dozen)--> $10.000              10. Ducales(pack)--> $4.500"<<endl;
	cout<<"\n\t 11. Saltin Noel(pack)--> $4.000                   12. Galletas festival(six)--> $5.600"<<endl;
	cout<<"\n\t 13. Marshmellos(pack)--> $2.600                   14. Chocorramo(six)--> $8.000"<<endl;
	cout<<"\n\t 15. Bubbaloo(pack)--> $5.600                      16. Sparkies(pack)--> $5.600"<<endl;
	cout<<"\n\t 17. Nucita waffer(four)--> $2.000                 18. Splot(pack)--> $3.900"<<endl;
	cout<<"\n\t 19. Club social(pack)--> $3.500                   20. Nucita(26u)--> $11.600"<<endl;
	cout<<"\n\t 21. Choclitos(six)--> $4.050                      22. Papas de limon(six)--> $6.800"<<endl;
	cout<<"\n\t 23. Cheetos(six)--> $5.800                        24. Detodito(six)--> $10.000"<<endl;
	cout<<"\n\t 25. Chocolatinas jet(dozen)--> $6.600             26. Gansito(six)--> $4.500"<<endl;
	cout<<"\n";
}

void dulce(){
	string dulces[26];//vector para guardar dulces
	ofstream archivo;
	int precios[26];
	//int suma_dulces=0;

	archivo.open(nombreArchivo.c_str(), ios::app);//se abre el archivo para agregar mas texto
	
	cout<<"  Cuantos productos deseas comprar?: "; cin>>du;
		for(int i=0; i<du; i++){
			cout<<"\n  Ingresa el nombre del producto #"<<i+1<<": ";	cin>>dulces[i];
			cout<<"\n  Ingresa el precio: $"; cin>>precios[i];
			suma_dulces += precios[i];
		}

		if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	for(int k=0;k<du;k++){
		archivo<<dulces[k]<<endl;
	}	

	cout<<"\n\n\t ______________________"<<endl;
	cout<<"\n\t   El total es: $"<<suma_dulces;
	cout<<"\n\t ______________________"<<endl;
	cout<<"\n\tThanks for your purchase!! See you then.";
	cout<<"\n\n";	
	archivo.close();
	system("pause");
}

void oil_tinned(){
	cout<<"\n\t\t\t\t    ________________________";
	cout<<"\n\t\t\t\t   |                        |";
	cout<<"\n\t\t\t\t   | SuperMarket Simulator  |";
	cout<<"\n\t\t\t\t   |________________________|"<<endl<<endl;
	cout<<"\n\t 1. Lata de atun(160g)--> $6.000                      2. Lata de sardinas(450g)--> $4.000"<<endl;
	cout<<"\n\t 3. Lata de durazno(410g)--> $5.000                   4. Lata de maiz tierno(300g)--> $4.500"<<endl;
	cout<<"\n\t 5. Lata de salchica viena(150g)--> $3.100            6. Lata de garbanzos(600g)--> $4.300"<<endl;
	cout<<"\n\t 7. Aceite de girasol(1lt)--> $13.000                 8. Aceite de oliva(1lt)--> $19.000"<<endl;
	cout<<"\n\t 9. Aceite de palma(1lt)--> $7.600                    10. Aceite de coco(300ml)--> $25.000"<<endl;
	cout<<"\n\t 11. Aceite de ajonjoli(200ml)--> $12.000             12. Aceite de vegetal(3lt)--> $14.500"<<endl;
	cout<<"\n\t 13. Lychees en almibar(565g)--> $12.000              14. Pollo zenu(160g)--> $9.000"<<endl;
	cout<<"\n\t 15. Pepinillos(1700ml)--> $20.000                    16. Cebollitas rojas(150g)--> $4.400"<<endl;
	cout<<"\n\t 17. Chucrut kuhne(850g)--> $12.000                   18. Mantequilla pasco(210g)--> $42.200"<<endl;
	cout<<"\n\t 19. Aceituna de anchoa(300g)--> $12.000              20. Pure de manzana(720g)--> $17.000"<<endl;
	cout<<"\n";
}

void enlatado(){
	string enlatados[20];//vector para guardar enlatados
	ofstream archivo;
	int precios[20];
	//int suma_enlatados;

	archivo.open(nombreArchivo.c_str(), ios::app);//se abre el archivo para agregar mas texto

	cout<<"  Cuantos productos deseas comprar?: "; cin>>en;
		for(int i=0; i<en; i++){
			cout<<"\n  Ingresa el nombre del producto #"<<i+1<<": "; cin>>enlatados[i];
			cout<<"\n  Ingresa el precio: $"; cin>>precios[i];
			suma_enlatados += precios[i];
		}

		if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	for(int k=0;k<en;k++){
		archivo<<enlatados[k]<<endl;
	}	
		
	cout<<"\n\n\t ______________________"<<endl;
	cout<<"\n\t   El total es: $"<<suma_enlatados;
	cout<<"\n\t ______________________"<<endl;
	cout<<"\n\tThanks for your purchase!! See you then.";
	cout<<"\n\n";	
	archivo.close();
	system("pause");
}

void cleaning_products(){
	cout<<"\n\t\t\t\t    ________________________";
	cout<<"\n\t\t\t\t   |                        |";
	cout<<"\n\t\t\t\t   | SuperMarket Simulator  |";
	cout<<"\n\t\t\t\t   |________________________|"<<endl<<endl;
	cout<<"\n\t 1. Crema dental--> $2.000                       2. Cepillo de dientes--> $4.000"<<endl;
	cout<<"\n\t 3. Desodorante--> $7.000                        4. Enjuague bucal--> $15.000"<<endl;
	cout<<"\n\t 5. Suavizante--> $6.000                         6. Soflam--> $7.000"<<endl;
	cout<<"\n\t 7. Fabuloso--> $8.000                           8. Clorox--> $3.500"<<endl;
	cout<<"\n\t 9. Trapero--> $8.000                            10. Papel familia(48u)--> $37.000"<<endl;
	cout<<"\n\t 11. Caja de tapabocas(50u)--> $10.000           12. Esponja de brillo(12u)--> $1.700"<<endl;
	cout<<"\n\t 13. Gel ego(15u)--> $10.700                     14. Shampoo Head&Shoulders(12u)--> $6.800"<<endl;
	cout<<"\n\t 15. Balance clinical(18u)--> $11.700            16. Bolsa de basura(10u)--> $1.200"<<endl;
	cout<<"\n\t 17. Bolsa industrial(6u)--> $1.600              18. Pegante Maxiboxx(60u)--> $4.400"<<endl;
	cout<<"\n\t 19. Jabon protex(12u)--> $12.000                20. Colgate(12u)--> $22.000"<<endl;
	cout<<"\n";
}

void limpieza(){
	string limpiezas[20];//vector para guardar productos de limpieza
	ofstream archivo;
	int precios[20];
	//int suma_limpiezas=0;

	archivo.open(nombreArchivo.c_str(), ios::app);//se abre el archivo para agregar mas texto

	cout<<"   Cuantos productos deseas comprar?: "; cin>>li;
		for(int i=0; i<li; i++){
			cout<<"\n   Ingresa el nombre del producto #"<<i+1<<": ";	cin>>limpiezas[i];
			cout<<"\n   Ingresa el precio: $"; cin>>precios[i];
			suma_limpiezas += precios[i];
		}

		if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	for(int k=0;k<li;k++){
		archivo<<limpiezas[k]<<endl;
	}	

	cout<<"\n\n\t ______________________"<<endl;
	cout<<"\n\t   El total es: $"<<suma_limpiezas;
	cout<<"\n\t ______________________"<<endl;	
	cout<<"\n\tThanks for your purchase!! See you then.";
	cout<<"\n\n";	
	archivo.close();
	system("pause");
}

void archivo(){
	ofstream archivo;
	string datos[5];
	string empty[1];//glitch solving
	//string nombreArchivo;

	cout<<"\n\t\t\t    ________________________";
	cout<<"\n\t\t\t   |                        |";
	cout<<"\n\t\t\t   | SuperMarket Simulator  |";
	cout<<"\n\t\t\t   |________________________|"<<endl;
	getline(cin,empty[0]);

	cout<<"\n\tDigite el nombre del archivo: ";
	getline(cin,nombreArchivo);

	archivo.open(nombreArchivo.c_str(),ios::out);

	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
		}

	cout<<"\n\tDigite su nombre completo: ";
	getline(cin, datos[0]);

	cout<<"\n\tDigite su numero de celular: ";
	getline(cin, datos[1]);
	
	cout<<"\n\tDigite numero de identidad: ";
	getline(cin, datos[2]);

	cout<<"\n\tLugar de residencia: ";
	getline(cin, datos[3]);

	cout<<"\n\tFecha: ";
	getline(cin, datos[4]);
		
	for(int i=0;i<5;i++){
		archivo<<datos[i]<<endl;
	}
	cout<<"\n\n";
	archivo.close();//cerrar el archivo
	system("pause");
}

void total(){
	ofstream archivo;
	int precio_total;
	int total;

	archivo.open(nombreArchivo.c_str(), ios::app);

	precio_total = suma_cereales + suma_frutas + suma_lacteos + suma_carnes + suma_dulces + suma_enlatados + suma_limpiezas;

	cout<<"\n\t\t\t    ________________________";
	cout<<"\n\t\t\t   |                        |";
	cout<<"\n\t\t\t   | SuperMarket Simulator  |";
	cout<<"\n\t\t\t   |________________________|"<<endl;
	cout<<"\n\tHola, Muchas gracias por tu compra!"<<endl;
	cout<<"\n\tEl total de tu compra fue de: $"<<precio_total<<endl;

	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}

	if(precio_total>250000)
	{
		cout<<"\n\n\tFelicidades, has ganado el descuento del 20%!!";
		total=precio_total - (precio_total*0.20);
	}
	else
	{
		cout<<"\n\n\tLo sentimos, no has alcanzado el valor indicado para el descuento";
		total=precio_total;
	}
	
	archivo<<"$"<<total<<endl;
	cout<<"\n\n\tAhora el total de tu compra es de: $"<<total<<endl;
	cout<<"\n\n";
	archivo.close();
	system("pause");
}

void registro_clientes(){
	ifstream archivo;
	string texto;
	string nombreArchivos;
	string empty[1];//glitch solving

	cout<<"\n\t\t\t    ________________________";
	cout<<"\n\t\t\t   |                        |";
	cout<<"\n\t\t\t   | SuperMarket Simulator  |";
	cout<<"\n\t\t\t   |________________________|"<<endl;
	getline(cin,empty[0]);

	cout<<"\n\tIngrese el nombre de la factura a abrir: ";
	getline(cin,nombreArchivos); 

	archivo.open(nombreArchivos.c_str(),ios::in);//se abre el archivo en modo lectura

	if(archivo.is_open()){//si se abre 
		string linea;
		while(getline(archivo,linea))//mientras este abierto el archivo
	{ 	
		cout<<" "<<linea<<endl;
    }
    archivo.close();
}
	else //si no se abre	
	{
		cout<<"\tlo siento no se encuentra el archivo...";
	}
	archivo.close();
	cout<<"\n\n";
	system("pause");
}

void change_color(){
	char opc,color,ai=161;
	int chos,dec;
	system("CLS");
				cout<<"\n  Presiona 1 para elegir fondo oscuro o cualquier otra tecla para fondos brillantes\n";
				fflush(stdin);
				cin>>chos;
				if(chos==1){
					while(chos!=0){
					fflush(stdin);
					system("CLS");
					cout<<"Presiona 0 para salir\n\n\t\t\tNegro\n\nColor 1\tColor 2\tColor 3\tColor 4\tColor 5\tColor 6\tColor 7\n\n\t\t\tAzul\n\nColor 8\tColor 9\tColor 10\tColor 11\tColor 12\tColor 13\n\n\t\t\tVerde\n\nColor 14\tColor 15\tColor 16\n\n\t\t\tAguaMarina\n\nColor 17\tColor 18\n\n\t\t\tRojo\n\nColor 19\tColor 20\tColor 21\tColor 22\n\n\t\t\tMorado\n\nColor 23\tColor 24\tColor 25\tColor 26\tColor 27\t\n\n\t\t\tAmarillo\n\nColor 28\tColor 29\tColor 30\n\n\t\t\tBlanco\n\nColor 31\tColor 32\n\n\t\t\tColor 33 (Vuelve al Original)\n";
					cin>>chos;
					switch(chos){
						case 1:
							system("COLOR 09");
							break;
						case 2:
							system("COLOR 0A");
							break;
						case 3:
							system("COLOR 0B");
							break;
						case 4:
							system("COLOR 0C");
							break;
						case 5:
							system("COLOR 0D");
							break;
						case 6:
							system("COLOR 0E");
							break;
						case 7:
							system("COLOR 0F");
							break;
						case 8:
							system("COLOR 18");
							break;
						case 9:
							system("COLOR 1A");
							break;
						case 10:
							system("COLOR 1C");
							break;
						case 11:
							system("COLOR 1D");
							break;
						case 12:
							system("COLOR 1E");
							break;
						case 13:
							system("COLOR 1f");
							break;
						case 14:
							system("COLOR 2B");
							break;
						case 15:
							system("COLOR 2E");
							break;
						case 16:
							system("COLOR 2F");
							break;
						case 17:
							system("COLOR 3E");
							break;
						case 18:
							system("COLOR 3F");
							break;
						case 19:
							system("COLOR 48");
							break;
						case 20:
							system("COLOR 4A");
							break;
						case 21:
							system("COLOR 4E");
							break;
						case 22:
							system("COLOR 4F");
							break;
						case 23:
							system("COLOR 58");
							break;
						case 24:
							system("COLOR 5A");
							break;
						case 25:
							system("COLOR 5B");
							break;
						case 26:
							system("COLOR 5E");
							break;
						case 27:
							system("COLOR 5F");
							break;
						case 28:
							system("COLOR 69");
							break;
						case 29:
							system("COLOR 6E");
							break;
						case 30:
							system("COLOR 6F");
							break;
						case 31:
							system("COLOR 79");
							break;
						case 32:
							system("COLOR 7C");
							break;
							cout<<"Opcion Invalida\n";
							break;
						case 33:
							system("COLOR 07");
							break;
							cout<<"Opcion Invalida\n";
							break;
						case 0:
							chos=0;
							break;
						}
					}
					}else{
						while(chos!=0){
						system("CLS");
						cout<<"Presiona 0 para salir\n\n\t\t\tGris\n\nColor 1\tColor 2\tColor 3\n\n\t\t\tAzul\n\nColor 4\n\n\t\t\tVerde\n\nColor 5\tColor 6\tColor 7\tColor 8\n\n\t\t\tAguaMarina\n\nColor 9\tColor 10\tColor 11\tColor 12\n\n\t\t\tRojo\n\nColor 13\tColor 14\tColor 15\n\n\t\t\tMorado\n\nColor 16\tColor 17\tColor 18\n\n\t\t\tAmarillo\n\nColor 19\tColor 20\tColor 21\tColor 22\n\n\t\t\tBlanco\n\nColor 23\tColor 24\tColor 25\tColor 26\tColor 27\tColor 28\tColor 29\tColor 30\n\n\t\t\tColor 31 (Vuelve al Original)\n";
					cin>>chos;
					switch(chos){
						case 1:
							system("COLOR 80");
							break;
						case 2:
							system("COLOR 81");
							break;
						case 3:
							system("COLOR 84");
							break;
						case 4:
							system("COLOR 97");
							break;
						case 5:
							system("COLOR A0");
							break;
						case 6:
							system("COLOR A1");
							break;
						case 7:
							system("COLOR A4");
							break;
						case 8:
							system("COLOR A5");
							break;
						case 9:
							system("COLOR B0");
							break;
						case 10:
							system("COLOR B1");
							break;
						case 11:
							system("COLOR B4");
							break;
						case 12:
							system("COLOR B5");
							break;
						case 13:
							system("COLOR C0");
							break;
						case 14:
							system("COLOR C1");
							break;
						case 15:
							system("COLOR C7");
							break;
						case 16:
							system("COLOR D0");
							break;
						case 17:
							system("COLOR D1");
							break;
						case 18:
							system("COLOR D4");
							break;
						case 19:
							system("COLOR E0");
							break;
						case 20:
							system("COLOR E1");
							break;
						case 21:
							system("COLOR E4");
							break;
						case 22:
							system("COLOR E5");
							break;
						case 23:
							system("COLOR F0");
							break;
						case 24:
							system("COLOR F1");
							break;
						case 25:
							system("COLOR F2");
							break;
						case 26:
							system("COLOR F3");
							break;
						case 27:
							system("COLOR F4");
							break;
						case 28:
							system("COLOR F5");
							break;
						case 29:
							system("COLOR F6");
							break;
						case 30:
							system("COLOR F8");
							break;
							cout<<"Opcion Invalida\n";
							break;
						case 31:
							system("COLOR 07");
							break;
							cout<<"Opcion Invalida\n";
							break;
						case 0:
							chos=0;
							break;
					}
					}
				}
}
//that was all 