#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
using namespace std;

//Hecho por : Daniel Marrugo Mulford 
//Correo: daniel_marrugo23@hotmail.com

//creacion de la clase persona
class Persona{
	
	private:
		string nombre;
		int score;
	
	public:
		Persona(string,int);
		Persona(string);
		void mostrarnombre();
	
	
};

//creacion del metodo constructor de la clase pesona
Persona::Persona(string _nombre, int _score){
	
	nombre = _nombre;
	score = _score;
	
}

//creacion del metodo mostrarnombre de la clase persona
void Persona::mostrarnombre(){
	
	cout<<"\n"<<endl;
	cout<<"buenas jugador de nombre: "<<nombre<<" le deseo mucha suerte"<<endl;
	
}

//creacion de la clase pregunta
class Preguntas {
	
	private:
		//variables que contininen las preguntas que utilizaremos a lo largo del programa, cada vector es una categoria diferente
		string cine[5] = {"¿Cual es la pelicula mas taquillera de la Historia? ", "¿cuantas peliculas conforman la saga cinematografica de Harry Potter?", "¿Que actor interpreto a Aquiles en la pelicula Troya del 2004?", "¿Por que pelicula gano Leonardo DiCaprio su primer Oscar? ", "¿En que pelicula podemos encontrar a un payaso asesino llamado Pennywise?"};
		string deportes[5] = {"¿Cuánto dura un partido de fútbol?", "¿Qué selección de fútbol ha ganado más Mundiales? ", "¿Cuánto dura la prórroga en un partido de fútbol?", "¿Quién ganó el mundial de fútbol de 2010?", "¿Quién es el máximo goleador del FC Barcelona?" };
		string historia[5] ={"¿De qué nacionalidad era Juana de Arco?", " ¿Quién dibujo al famoso Hombre de Vitruvio? ", "¿Qué famoso filósofo fue maestro de Alejandro Magno durante cinco años? ", "¿Quién fue el último zar de Rusia?", "¿Quienes eran los templarios?"};
		string Arte[5] = {"¿En que museo está la Mona Lisa?", "¿En que siglo nació Van Gogh?", "¿En que siglo se inició el Renacimiento?", "¿En que año nació Goya?", "La piedad es una escultura de:"}; 
		string ciencia[5] = {"¿Cómo se llama el componente mínimo que forma a los seres vivos?", "El proceso por el que una célula se divide para formar dos células hijas se llama:", "Los cromosomas están formados por: ", "¿Cómo se llama la teoría que considera que todos los organismos descendemos del mismo ancestro? ", "El proceso mediante el cual se generan moléculas orgánicas a partir de sustancias inorgánicas usando como fuente de energía el sol es:"};
		
	    int num;
	    int ronda;
	    
	public:
		Preguntas(int, int);
		void mostrarpreguntas();
	
};

Preguntas::Preguntas(int _num, int _ronda){
	
	ronda = _ronda;
	num = _num;
	
}

// metodo de la clase preguntas que hara que se muestren las preguntas, esto como una variable llamada num, que en el main se calculo de 
//manera aleatoria, lo que hara es mostrar una pregunta de manera aleatoria utilizando ese numero como la posicion del vector pregunta
void Preguntas::mostrarpreguntas(){
	

if (ronda==0){

	for(int i=0; i<5; i++){
		
		if(num == i){
		cout<<cine[num]<<endl;
		num=0;
		
		}
	
		
	}
}

if (ronda==1){

	for(int i=0; i<5; i++){
		
		if(num == i){
		cout<<deportes[num]<<endl;
		num=0;
		}
	
		
	}
}

if (ronda==2){

	for(int i=0; i<5; i++){
		
		if(num == i){
		cout<<historia[num]<<endl;
		num=0;
		}
	
		
	}
}

if (ronda==3){

	for(int i=0; i<5; i++){
		
		if(num == i){
		cout<<Arte[num]<<endl;
		num=0;
		}
	
		
	}
}

if (ronda==4){

	for(int i=0; i<5; i++){
		
		if(num == i){
		cout<<ciencia[num]<<endl;
		num=0;
		}
	
		
	}
}

if (ronda==5){

	for(int i=0; i<5; i++){
		
		if(num == i){
		cout<<cine[num]<<endl;
		num=0;
		}
	
		
	}
}


}

// clase opciones de respuesta que recibe como herencia los atributos de la clase preguntas
class Opcionesrespuestas : public Preguntas {

	
	private:
		// variables que contienen las opciones de respuestas
		string opcine[5] = {"1) Avenger : EndGame   2) El titatin    3) El rey leon     4) la Rosa de guadalupe ", "1) 8    2) 7     3) 6    4) 10", "1) Tobey Maguire   2)	Arnold Schwarzenegger    3) Jason Statham    4) Brad pitt", "1) Leonardo y el prisionero de ascaban   2) EL renacido   3) Matilda   4) El rey leon" , "1) Macdonals y los 7 enanitos   2) It    3) Furia implacable    4) Busqueda implacable " };
		string opdeportes[5] = {"1) 90 minutos   2) 60 minutos   3) 120 minutos  4) 2 horas", "1) Colombia   2) Alemania  3) Brasil   4) Argentina ", "1)30 minutos cada tiempo    2) 15 minutos cada tiempo  3) 20 minutos cada tiempo  4) 8 minutos cada tiempo ", "1) Argentina    2) Brasil   3) Colombia   4) España", "1) Lionel Messi   2) Radamel Falcao   3) Diego Maradona  4) La piquiña"};
		string ophistoria[5] = {"1) Colombiana    2) Francesa   3) Española   4) Alemana", "1) Miguel Angel   2) Picaso  3) Leonardo Da vinci  4) Rubens", "1) Aristoteles   2) Socrates  3) Platon   4) Bill Gates", "1) Nicolas II    2) Nicolas 	III  3) Francisco I  4) Francisco V", "1) Grupo de motociclistas    2) Partido Centro Democratico  3) Partido politico    4) Orden religiosa y militar"};
		string opartes[5] = {"1) Museo del Prado   2) Louvre  3) Galeria Uffizi  4) British Museum", "1) Siglo XIX   2) Siglo XX  3) Siglo XVII  4) Siglo XVIII ", "1) Siglo XIX   2) Siglo XX  3) Siglo XVII  4) Siglo XV " , "1) 1706    2) 1796  3) 1806  4) 1746", "1) Leonardo Da vinci    2) Miguel Angel  3) Bermini  4) Donatello "};
		string opciencia[5] = {"1) Atomo    2) Tejido  3) Celula  4) Particula", "1) Segregacion   2) Mitosis  3) Meiosis  4) Division plasmatica", "1)  ADN (Acido desoxirribonucleico)  2) Proteinas   3) ARN (Acido Ribonucleico)   4) Atomos", "1) Creacionismo   2) Darwinismo  3) Gradualismo  4) La teoria del todo", "1) La fotosintesis   2)  El catabolismo  3) El anabolismo  4) El catodolismo"};
	    int num2;
	    int ronda;
	public:
		Opcionesrespuestas(int, int);
		void mostraropciones();
	
};

// creacion del metodo constructor (Opcionesrespuestas) de la misma clase
Opcionesrespuestas::Opcionesrespuestas(int _num2, int _ronda) : Preguntas(_num2, _ronda){
	
	ronda = _ronda;
	
	num2 = _num2;
}

// creacion del mostrar opciones de la clase opciones de respuestas
void Opcionesrespuestas::mostraropciones(){


// todos los if conteneran las randas y unos for para evaluar el numero aleatorio que sera la posicion de la pregunta, la posicion de las opciones de respuestas
//  y la posicion de las respuestas como tal
if(ronda == 0){

	cout<<"\n"<<endl;
	
	for(int i=0; i<5; i++){
		
		if(num2 == i){
		cout<<opcine[num2]<<endl;
		num2=0;
		}
	
		
	}
	
}


if(ronda == 1){

	cout<<"\n"<<endl;
	
	for(int i=0; i<5; i++){
		
		if(num2 == i){
		cout<<opdeportes[num2]<<endl;
		num2=0;
		}
	
		
	}
	
}

if(ronda == 2){

	cout<<"\n"<<endl;
	
	for(int i=0; i<5; i++){
		
		if(num2 == i){
		cout<<ophistoria[num2]<<endl;
		num2=0;
		}
	
		
	}
	
}

if(ronda == 3){

	cout<<"\n"<<endl;
	
	for(int i=0; i<5; i++){
		
		if(num2 == i){
		cout<<opartes[num2]<<endl;
		num2=0;
		}
	
		
	}
	
}

if(ronda == 4){

	cout<<"\n"<<endl;
	
	for(int i=0; i<5; i++){
		
		if(num2 == i){
		cout<<opciencia[num2]<<endl;
		num2=0;
		}
	
		
	}
	
}




}





// creacion de la classe Correcta que recibira por herancia la de la clase preguntas, para ser mas especifico recibira el atributo ronda y num
class Correcta : public Preguntas {
	
	private:
		int correctare1[5]={1, 1, 4, 2, 2};
		int correctare2[5]={1, 3, 2, 4, 1};
		int correctare3[5]={2, 3, 1, 1, 4};
		int correctare4[5]={2, 1 ,4 ,4 ,2};
		int correctare5[5]={3 ,2 ,1, 2 ,1};
		int respuesta1;
		int nueva;
		int ronda;
	public:
		Correcta(int, int, int);
		Correcta(int);
		void resultado();
		
	
};

// creacion del metodo constructor correcta
Correcta::Correcta(int _num, int _correcta, int _ronda) : Preguntas (_num, ronda){
	
	respuesta1 = _correcta;
	nueva = _num;
	ronda = _ronda;
	
}


// creacion del metodo "correcta" donde evaluaremos las respuestas digitadas por el usuario con el vector respuesta
void Correcta::resultado() {

int opcion;
int premio;

//creacion de un if que recibe como parametro las rondas las cuales son 5, cada if 
// contara con un ciclo for en donde se compararan la respuesta ingresada en el main con el vector respuestas
// si este es verdadero, signiiica que la respuesta es correcta, lo que hara que se le asigne un premio al participante
if(ronda==0){

premio = 0;
for(int i=0; i<5; i++){
	
	
	if (respuesta1 == correctare1[nueva] ){
		premio=10000;
		system("cls");
		cout<<"la respuesta es correcta "<<endl;
		//acumulado = 10.000;
		cout<<"lleva un acumulado de 10.000 "<<endl;
		
		cout<<"felicidades ha pasado a la siguiente ronda" <<endl; 
		cout<<"ahora se le asignara una pregunta aleatoria de la categoria de (Deportes) "<<endl;
		cout<<"si la contesta correctamente tendra un acumulado de 50.000 "<<endl;
	
		break;
		
	}
	
	else{
		
		cout<<"la respuesta es incorrecta "<<endl;
		
		cout<<"ha perdido todo lo que llevaba acumulado ("<<premio<<")gracias por participar"<<endl;
		
		
		exit(0);
	}
	
}
}

if (ronda == 1){
	premio = 50000;
	for(int i=0; i<5; i++){
	
	if (respuesta1 == correctare2[nueva] ){
		50000;
		system("cls");
		cout<<"la respuesta es correcta "<<endl;
		//acumulado = 10.000;
		cout<<"lleva un acumulado de 50.000 "<<endl;
		
		cout<<"felicidades ha pasado a la siguiente ronda (3)"<<endl;
		cout<<"ahora se le asignara una pregunta aleatoria de la categoria de (Historia) "<<endl;
		cout<<"si la contesta correctamente tendra un acumulado de 100.000 "<<endl;
		cout<<"Marca 1. para continuar y 2. Para retirarte con el premio "<<endl;
		
		
		
		cin>>opcion;
		
		if(opcion == 2){
			
			cout<<"ud se retira con un premio de: "<<premio<<endl;
			exit(0);
		}
		
		break;
		
	}
	
	else{
		
		cout<<"la respuesta es incorrecta "<<endl;
		
		cout<<"ha perdido todo lo que llevaba acumulado ("<<premio<<")gracias por participar"<<endl;
		
		exit(0);
	}
	
}

}

if (ronda == 2){
	premio=100000;
	for(int i=0; i<5; i++){
	
	if (respuesta1 == correctare3[nueva] ){
		premio=100000;
		system("cls");
		cout<<"la respuesta es correcta "<<endl;
		//acumulado = 10.000;
		cout<<"lleva un acumulado de 100.000 "<<endl;
		
		cout<<"felicidades ha pasado a la siguiente ronda (4)"<<endl;
		cout<<" ahora se le asignara una pregunta aleatoria de la categoria de (Artes) "<<endl;
		cout<<"si la contesta correctamente tendra un acumulado de 150.000 "<<endl;
		cout<<"Marca 1. para continuar y 2. Para retirarte con el premio "<<endl;
		cin>>opcion;
		
		if(opcion == 2){
			
			cout<<"ud se retira con un premio de: "<<premio<<endl;
			exit(0);
		}
		
		break;
	}
	
	else{
		
		cout<<"la respuesta es incorrecta "<<endl;
		
		cout<<"ha perdido todo lo que llevaba acumulado ("<<premio<<")gracias por participar"<<endl;
		
		exit(0);
	}
	
}

}

if (ronda == 3){
	premio=150000;
	for(int i=0; i<5; i++){
	
	if (respuesta1 == correctare4[nueva] ){
		premio = 150000;
		system("cls");
		cout<<"la respuesta es correcta "<<endl;
		//acumulado = 10.000;
		cout<<"lleva un acumulado de 150.000 "<<endl;
		
		cout<<"felicidades ha pasado a la siguiente ronda (5)"<<endl;
		cout<<"ahora se le asignara una pregunta aleatoria de la categoria de (ciencia) "<<endl;
		cout<<"si la contesta correctamente tendra un acumulado de 300.000 "<<endl;
		cout<<"Marca 1. para continuar y 2. Para retirarte con el premio "<<endl;
		cin>>opcion;
		
		if(opcion == 2){
			
			cout<<"ud se retira con un premio de: "<<premio<<endl;
			exit(0);
		}
		
		break;
		
	}
	
	else{
		
		cout<<"la respuesta es incorrecta "<<endl;
		
		cout<<"ha perdido todo lo que llevaba acumulado ("<<premio<<")gracias por participar"<<endl;
		
		exit(0);
	}
	
}

}

if (ronda == 4){
	
	premio=300000;
	for(int i=0; i<5; i++){
	
	if (respuesta1 == correctare5[nueva] ){
		premio = 300000;
		system("cls");
		cout<<"la respuesta es correcta "<<endl;
		cout<<"Es usted un Genio, se ha ganado en total "<<premio<<endl;
		
		
	}
	
	else{
		
		cout<<"la respuesta es incorrecta "<<endl;
		
		cout<<"ha perdido todo lo que llevaba acumulado ("<<premio<<")gracias por participar"<<endl;
		
		exit(0);
	   }
	
    }
}
	
}


		
	







int main(){
	//creacion de variables que pasaremos como parametros a los metodos de las clases que creamos
	string name;
	int answer;
	int iniciar;
	int score1 = 0, ronda1=0, contador=0, opcion2;
	
	//	creacion de variable para generar un numero aleatorio de 1 a 5, para pasarlo como posicion a los vectores preguntas y generar la pregunta aleatoria
	// dicha variable tambien se pasa a los vectores de opciones de respuestas y respuestas
	int num;
    srand(time(NULL)); 
    num = rand() % 5;
	
	setlocale(LC_CTYPE, "spanish");
	
	
	
	cout<<"por favor a continuacion ingrese su nombre: "<<endl; cin>>name;
	
	//creacion de un objeto llamado p1 de la clase persona
	Persona p1(name, score1);
	
	//invocamos el metodo de mostrarnombre de la clase persona
	p1.mostrarnombre();

	
		
		
		cout<<"Bienvenido al juego de Preguntas y Respuestas "<<endl;
		cout<<"Porfavor seleccione una opcion 1-3"<<endl;
		cout<<"1. Iniciar el juego "<<endl;
		cout<<"2. Salir "<<endl;
		cout<<"ingrese opcion: "<<endl;
		cin>>opcion2;
		
	//creacion de switch case para controlar el menu del juego
	switch (opcion2){
		
		case 1:
		system("cls");
		cout<<"\n usted ha decido iniciar el juego"<<endl;	
		cout<<"\n"<<endl;
		cout<<"las reglas del juego son las siguientes: "<<endl;
		cout<<"1. el juego cuenta con 5 rondas y cada ronda esta compuesta por 1 preguntas de una categoria: "<<endl;
		cout<<"2. si contesta mal una pregunta, perdera todo lo que lleva acumulado en premios hasta ese momento"<<endl;
		cout<<"3. puede retirarse antes de la pregunta y llevarse lo que lleva acumulado en premios"<<endl;
	
            
		
		
		cout<<"\n"<<endl<<endl;
		cout<<"Las 5 categorias van por niveles siendo 1. la mas facil y 5. la mas dificil "<<endl;
		cout<<"\n"<<endl;
		cout<<"las categorias son: "<<endl;
		cout<<"1. Cine "<<endl;
		cout<<"2. Deportes "<<endl;
		cout<<"3. Historia "<<endl;
		cout<<"4. Arte"<<endl;
		cout<<"5. ciencia"<<endl;
		
		
		cout<<"\n"<<endl;
		cout<<"se comenzara con la categoria de nivel 1 (ronda 1) (cine)"<<endl;
		cout<<"\n\n\n ¡Comencemos! "<<endl;
		
		//contador para que se repitan las preguntas, opciones de respuesats 5 veces;
		while (contador < 5){
		
		//creacion del obejto p5 de la clase pregutnas
		Preguntas p5 (num, ronda1);	
		
		//creacion del objeto p6 de la clase opcionesderespuestas
	    Opcionesrespuestas p6(num, ronda1);
		
		cout<<"\n PREGUNTA "<<endl;
		cout<<"\n"<<endl;
		p5.mostrarpreguntas();
		p6.mostraropciones();
		
		cout<<"\n"<<endl;
		cout<<"por favor escriba el numero de la respuesta que crea correcta (1, 2 , 3, 4)"<<endl;
		cin>>answer;
		
		Correcta p7(num, answer, ronda1);
		
		p7.resultado();
		
		ronda1++;
		contador++;
		
		
	} break;
		
		
		
		case 2:
			cout<<"usted ha elegido la opcion salir del juego "<<endl;
			exit(0);
		
	}   
	
	
system("pause");
return 0;	

	
    }
	
	
	

