//Molnar Pilar
#include <iostream>
#include <stdlib.h>
#include<random>
using namespace std;
int main(int argc, char *argv[])
{
int opciones;
int opciones_respuesta;
int volver;
int ir;
int opcion;
int diez;
int uno;
int veintiuno;
bool aceptar;
int sumar = 2;
int cantidadFinal = 30;
int veinticuatro;
int cuatro;
int once;
int cuarenta;
int cincuenta;
int tres;
int treinta;
float quince;
int cero;
int dos;
int sesenta;
bool edad=true;
int trece;
int setenta;
int veintidos;
int veintises;
int hablar; 
int Salir;
int cien;
int noventa;
int mil;
int circulo;
int veinte;
int veinticinco;
enum TipoTimbre {Circulo, cuadrado, triangulo};
TipoTimbre Timbre;
Timbre = Circulo;


float ataqueTommy = 0.6f;
float saludTommyMaxima = 250.0f;
float cantidadDanioTommy = 200.0f;
float saludTommyActual = saludTommyMaxima;

float ataqueChorro = 0.3f; 
float saludChorroMaxima = 50.0f;
float cantidadDanioChorro = 40.0f;
float saludChorroActual = saludChorroMaxima;

int CantidadVecinos;
int CantidadChorros;

random_device random;
default_random_engine semilla(random());
uniform_real_distribution<float> ataque(0.0f, 1.0f);
float resultadoAtaque;



cout<<R"( _                                       _                             _        _______                               
| |                                     | |                           | |      |__   __|                              
| |     __ _ ___    __ ___   _____ _ __ | |_ _   _ _ __ __ _ ___    __| | ___     | | ___  _ __ ___  _ __ ___  _   _  
| |    / _` / __|  / _` \ \ / / _ \ '_ \| __| | | | '__/ _` / __|  / _` |/ _ \    | |/ _ \| '_ ` _ \| '_ ` _ \| | | | 
| |___| (_| \__ \ | (_| |\ V /  __/ | | | |_| |_| | | | (_| \__ \ | (_| |  __/    | | (_) | | | | | | | | | | | |_| | 
|______\__,_|___/  \__,_| \_/ \___|_| |_|\__|\__,_|_|  \__,_|___/  \__,_|\___|    |_|\___/|_| |_| |_|_| |_| |_|\__, | 
                                                                                                                __/ | 
                                                                                                               |___/  
                   _    _____                       _                       
                  | |  / ____|                     | |                      
  ___ _ __     ___| | | |     ___  _ __  _   _ _ __| |__   __ _ _ __   ___  
 / _ \ '_ \   / _ \ | | |    / _ \| '_ \| | | | '__| '_ \ / _` | '_ \ / _ \ 
|  __/ | | | |  __/ | | |___| (_) | | | | |_| | |  | |_) | (_| | | | | (_) |
 \___|_| |_|  \___|_|  \_____\___/|_| |_|\__,_|_|  |_.__/ \__,_|_| |_|\___/ 
                                                                            
                                                                            )"<<endl;


cout<<"'El juego que maneja el humor del conubrano bonaerense'"<<endl;
cout<<endl;
cout<<endl;

cout<<"1 - Empezar a jugar"<<endl;
cout<<"2 - Salir"<<endl;
cout<<"Ingrese un numero para comenzar y presione ENTER..."<<endl;
cin>> opciones;
system("clear");

switch (opciones)
{
system("clear");
case 1:
cout<<"La mamá de Tommy, le pide que le lleve a su abuela una olla ya que desea hacer un guiso para todo el barrio..."<<endl;
cout<<"Tommy toma la essen y se encamina hacia la casa de la abuela en una travesia de transportes públicos y calles desoladas por el conurbano..."<<endl;
cout<<"Para jugar, el jugador debe elegir opciones por medio de cuentas matemáticas simples."<<endl;
cout<<"A lo largo del juego habrá anotaciones que ayudarán al buen desarrollo del juego, sin más que aclarar, disfrute."<<endl;
cout<<">>Anotación: Debes recordar que el timbre de Olga es un circulo..."<<endl;
cout<<endl;
cout<<endl;
cout<<"¿Desea acompañar a Tommy? ¿2+8?"<<endl;
cin>>diez;
break;
case 2:
cout<<"Desea salir? Salir"<<endl;
cin>>Salir;
exit (0);
break;
default:
cout<<"Error: no reconozco ese numero, por favor ingrese otro."<<endl;
break;
}
if (diez == 10)
{
system("clear");
cout<<"Tommy salió de su casa con la olla en la mochila y un poco de plata"<<endl;
cout<<"¿Desea ir en  colectivo o  caminar?"<<endl;
cout<<"Colectivo = 8+8"<<endl;
cout<<"Caminar = 7-6"<<endl;
cin>>uno;
}
else if(diez != 10)
{
	cout<<"Respuesta incorrecta. Vuelve a intentarlo."<<endl;
	cin>>diez;
}

if(uno== 1)
{
	system("clear");
  cout<<"Tommy decidió que caminar hace bien y no hay paisaje más lindo que el bello conurbano. Además el 24 es un colectivo que tarda mucho en venir."<<endl;
  cout<<"Aceptar= 4+7"<<endl;
  cin>> once;
}
else if (uno!=1)
{
system("clear");
 cout<<"Se dirige a la parada del 24, el transporte público siempre fue una maravilla"<<endl;
 cout<<"."<<endl;
 cout<<".."<<endl;
 cout<<"..."<<endl;
 cout<<"..."<<endl;
 cout<<".."<<endl;
 cout<<"."<<endl;
 cout<<"Tommy ha estado esperando el 24 durantes treinta minutos, cuando llegó el colectivo, Tommy no tenía saldo en la sube..."<<endl;
 cout<<"Nadie le pago el boleto a Tommy y se tuvo que bajar. Tommy decidió al final ir caminando."<<endl;
 cout<<"Pasa una moto sospechosa..."<<endl;
 cout<<"Continuar = 4+7"<<endl;
cin>>once;
}
if(once == 11)
{
system("clear");
cout<<"En el medio de la caminata Tommy encontró un lugar donde cargar su sube,"<<endl;
cout<<"Tommy, pone plata para un solo viaje, no se puede equivocar de colectivo..."<<endl;
cout<<"Continuar = 2+2"<<endl;
cin>>cuatro;
}
else if (once != 11)
{
cout<<"Te has equivocado."<<endl;
}
if(cuatro==4)
{
cout<<"Tommy olvidó qué colectivo lo llevaba..."<<endl;
cout<<"En la parada más cercana le aparecieron los colectivos que habia:"<<endl;
for ( int x=10; x <= cantidadFinal; x = x + sumar)
{
	cout<<x<<endl;
}
cout<<"Elige el colectivo que Tommy debe tomar:"<<endl;
cin>> veinticuatro;
}
else if(cuatro != 4)
{
	cout<<"Numero incorrecto, vuelve a intentarlo."<<endl;
cin>>cuatro;
}

if (veinticuatro == 24)
{
system("clear");
cout<<"¡Bien!, era el 24. Tommy se sube para seguir con la aventura."<<endl;
cout<<"Tommy se pone a contar cuánto dinero le queda."<<endl;
cout<<"En eso, sube un señor vendiendo mantecol a canasta. El hombre ve a Tommy contando la plata y se acerca."<<endl;
cout<<"Tommy puede darle toda su plata o mentirle y darle menos."<<endl;
cout<<"Tommy tiene 200 pesos, escribir la cantidad que le quiere dar..."<<endl;
cout<<endl;
cout<<">>Anotación: solo puede ser múltiplo de 50."<<endl;
cin>>cincuenta;
}

else if (veinticuatro != 24)
{
	cout<<"Te equivocaste, Tommy ve pasar una moto muy sospechosa por segunda vez."<<endl;
	cout<<"Pista 4*10"<<endl;
	cin>>cuarenta;
}
if( cincuenta== 50 || cincuenta ==100)
{
cout<<"Has decidido ser un poco rata, el señor pone mala cara pero responde 'Que dios te bendiga'."<<endl;
cout<<"Tommy no pierde todo su dinero."<<endl;
cout<<"Seguir= 5*8"<<endl;
cin>>cuarenta;
}
else if(cincuenta==150 || cincuenta==200)
{
cout<<"Le has dado mucha plata, probablemente la mama de Tommy se enoje."<<endl;
cout<<"Pese a eso, el hombre se pone feliz y dice 'Que dios te bendiga'. "<<endl;
cout<<"Tommy siente que ha hecho una buena acción, ¡Sigue así!"<<endl;
cout<<"Seguir= 5*8"<<endl;
cin>>cuarenta;
}
if(cuarenta=40)
{
system("clear");
cout<<"Tommy esta a unas cuadras de lo de su abuela Olga"<<endl;
cout<<"Lamentablemente por todos los inconvenientes ha oscurecido, y Olga vive en un barrio peligroso"<<endl;
cout<<"Para continuar (5+5)-7"<<endl;
cin>>tres;
}
else if (cuarenta!=40)
{
cout<<"Te has confundido, vuelve a intentarlo."<<endl;
cin>>cuarenta;

}
if(tres==3)
{
system("clear");
cout<<"Tommy comienza a caminar a casa de su abuela por una calle desolada..."<<endl;
cout<<"Tommy ve que le están robando a alguieb asi que decide desviarse unas cuadras..."<<endl;
cout<<"Retoma el camino a casa de su abuela y ve las calles cada vez más turbias..."<<endl;
cout<<"Continuar=(7*2)+16"<<endl;
cin>>treinta;
}
if(treinta==30)
{
system("clear");
cout<<"Tommy escucha una moto a lo lejos, puede continuar caminando a paso hombre como si no tuviese miedo..."<<endl;
cout<<"O acelerar un poco el paso para que no le pase nada a la olla essen, pero eso levantaría sospechas..."<<endl;
cout<<"¿Qué debería hacer?"<<endl;
cout<<"Continuar caminando= 10+5"<<endl;
cout<<"Poner tercera e ir corriendo = 15-1"<<endl;
cin>>quince;
}

else if(treinta!=30)
{
cout<<"Te has equivocado. Vuelve a intentarlo"<<endl;
cin>>treinta;
}

if(quince==15)
{
	system("clear");
cout<<"Tommy continúa caminando con tranquilidad mientras le reza a todos los santos..."<<endl;
cout<<"La moto esta cada vez mas cerca..."<<endl;
cout<<"Continuar (87664-2432)*0+2 "<<endl;
cin>>dos;
}
else if(quince!=15)
{
cout<<"Tommy empieza a acelerar al paso, hasta empezar a correr."<<endl;
cout<<"Debido al nerviosismo y la oscuridad, se tropezó haciendo mucho ruido"<<endl;
cout<<"La moto se escuchaba cada vez más cerca..."<<endl;
cout<<"Continuar (1000-980)-20+2"<<endl;
cin>>dos;
}

if(dos==2)
{
system("clear");
cout<<"Tommy no solo escucha su corazón latiendo en sus oidos sino que siente la gota gorda en su frente..."<<endl;
cout<<"La moto se acerca poco a poco donde esta él..."<<endl;
cout<<"..."<<endl;
cout<<"Continuar 120/2"<<endl;
cin>>sesenta;
}
 if(sesenta==60)
{
system("clear");
cout<<"Al estar a su lado, Tommy todavía no se anima a levantar la vista"<<endl;
cout<<"Derrepente, escucha su nombre y en la moto estaba Carlitos, un vecino de toda la vida."<<endl;
cout<<"Tommy vuelve a respirar con tranquilidad, aunque se le mancharon un poco los calzones por el susto."<<endl;
cout<<"Carlitos: Hola pibe, hace mucho no te veo por acá, ¿Qué haces por acá?"<<endl;
cout<<"Tommy: Vengo a traer la essen a mi abuela para que haga una olla popular"<<endl;
cout<<"¡Qué grande!, ¿Cuántos años tenés?"<<endl;
cout<<"Continuar= (3*3)+4"<<endl;
cin>>trece;
}
if(trece==13)
{
system("clear");
cout<<"Carlitos: Mirá vo che, ya tenes trece, ya sos todo un pibe. "<<endl;
cout<<"Carlitos: ¿Estás yendo de tu abuela? "<<endl;
cout<<"Tommy: Si, te lo acabo de decir"<<endl;
cout<<"Carlitos: Te iba a llevar pero por atrevido mandale un saludo a la vieja nomás."<<endl;
cout<<endl;
cout<<"*Carlitos sigue su camino con la moto*"<<endl;
cout<<"Continuar = 50+20"<<endl;
cin>>setenta;
}
else 
{
cout<<"Te has equivocado, vuelve a intentarlo"<<endl;
edad=false;
}
if(setenta==70)
{
system("clear");
cout<<"Luego del susto, Tommy ve que le quedan todavía un par de cuadras..."<<endl;
cout<<"Continua su aventura aunque ya estima que queda poco"<<endl;
cout<<"Tommy escucha a lo lejos motos y duda que esta vez sea Carlitos. "<<endl;
cout<<"Los motochorros lo han encontrado, los vecinos se percatan de la situación y salen a ayudarlo!"<<endl;
cout<<endl;
}

char turno = 'T';
cout<<"Elige la cantidad de vecinos y chorros que hay!"<<endl;
cout<<"<<Anotacion: Si ingresa menos cantidad de chorros es mas probable que gane!>>"<<endl;
cout << "Ingrese la cantidad de vecinos: "<<endl;
cin >> CantidadVecinos;

cout << "Ingrese la cantidad de chorros: "<<endl;
cin >> CantidadChorros;



cout << "\nComienza la pelea!\n"<<endl;
cout<<"Luego de piñas, golpes y puteadas..."<<endl;


while ((CantidadVecinos > 0) && (CantidadChorros > 0))
{
    resultadoAtaque = ataque(semilla);

if (turno == 'T')
	{
if (resultadoAtaque <= ataqueTommy)
      {
  
        saludChorroActual = saludChorroActual - cantidadDanioTommy;

    
        if (saludChorroActual <= 0)
        {

           CantidadChorros--;

    
          saludChorroActual = saludChorroMaxima;
        }
      }
      turno = 'C'; 
    }
else if (turno == 'C')
    {
      if (resultadoAtaque <= ataqueChorro)
      {
        saludTommyActual -= cantidadDanioChorro;

 
        if (saludTommyActual <= 0)
        {
        CantidadVecinos--;

          saludTommyActual = saludTommyMaxima;
        }
      }
      turno = 'T'; 
    }
  }


  cout << "\nLa pelea terminó...\n"<<endl;
  cout<<"..."<<endl;
  cout<<"Gracias a dios no hubo muchos heridos!"<<endl;

  if ( CantidadVecinos > 0)
  {
    cout << "\nLos vecinos ganaron!!!\n"<< endl;
    cout << "Los " << CantidadVecinos << " vecinos, quedaron satisfechos con sacar a los chorros de una vez por todas!" << endl;
	cout<<"Tommy vuelve a respirar mas tranquilo, le dio mucho miedo la situacion."<<endl;
  cout<<"Asqueado por la cantidad de residuos en sus pantalones, camina cuajo a lo de su abuela"<<endl;
	cout<<"Continuar = 11*2"<<endl;
	cin>>veintidos;
  }
  else
  {
    cout << "\nLos chorros ganaron…\n"
         << endl;
    cout << "Quedaron " << CantidadChorros << " de pie" << endl;
	cout<<"Continuar = 20+6"<<endl;
	cin>>veintises;

  }

  if(veintidos==22)
  {
system("clear");
cout<<"Luego de esta travesia, finalmente Tommy está frente a casa de su abuela Olga y debe tocar el timbre"<<endl;
cout<<"¿Cuál es el timbre?, hay un circulo (1) y un cuadrado (2)."<<endl;
cin>>veinticinco;
  }
  
switch (Timbre)
{
case Circulo:
  cout<<"Lo has recordado!, era un circulo"<<endl;
  cout<<"Para continuar = 40/2"<<endl;
  cin>>veinte;
  break;
case cuadrado:
cout<<"Te has equivocado"<<endl;
break;
default:
  break;
}

if(veinte==20)
{
  system("clear");
cout<<"Pese a todo lo que sucedió, Tommy esta satisfecho con esta aventura y la felicidad de su abuela es la suya"<<endl;
cout<<"¿Desea conversar con Olga o terminar?"<<endl;
cout<<"Conversar con abuela= 20*5"<<endl;
cin>> cien;
}


if(veintises==26)
{
cout<<"Has perdido :("<<endl;
}

if(cien==100)
{
  system("clear");
cout<<"Olga: Hola mi amor, gracias por la olla. ¿Te costó llegar?"<<endl;
cout<<"Tommy opciones:"<<endl;
cout<<"1) No, abuela"<<endl;
cout<<"2) Costó un poco"<<endl;
cin>>opciones_respuesta;
}

system("clear");
switch (opciones_respuesta)
{
case 1:
system("clear");
cout<<"Tommy: No, abuela, de hecho me crucé a Carlitos. Te manda un beso"<<endl;
cout<<"Olga: Ay hijo qué suerte, me alegro mucho. Hace mucho no veo a Carlitos jaja"<<endl;
cout<<"Olga: Qué olor que hay, ¿no?"<<endl;
cout<<"Continuar = 42/2"<<endl;
cin>>veintiuno;
break;
case 2: 
cout<<"Tommy: Si abuela, me pasó de todo, gracias a Dios llegué"<<endl;
cout<<"Olga: Ay hijo, mientras preparo la cene anda contandome"<<endl;
cout<<"Tommy: Carlitos te manda un saludo, me lo crucé hace un rato por acá"<<endl;
cout<<"Olga: Cuando lo vea lo saludo"<<endl;
cout<<"Olga: Qué olor que hay, ¿no?"<<endl;
cout<<"Continuar = 42/2"<<endl;
cin>>veintiuno;

default:
  break;
}



if(veintiuno==21)
{
system("clear");
cout<<"Al otro día, Olga preparó la olla popular y todos comieron guiso!"<<endl;
cout<<"Tommy se tuvo que comprar unos jeans nuevos"<<endl;
cout<<"La moraleja: No seas como Tommy"<<endl;
cout<<"continuar= 40+50"<<endl;
cin>>noventa;
}
if(noventa==90)
{
cout<<"¡Felicitaciones, has finalizado esta aventura!"<<endl;
cout<<endl;
cout<<endl;
cout<<R"(MMMMMMMMMMMMMWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMWWWWWWWWWWNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMWWWWWMMMMMMMWNNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMWWWMMWNKOxdd0WMWNXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWMMMMMMMMWWWWWWWMMMMMMMM
MMWWWMMXkl:;;::o0WMMNXNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWNNWWMMMMMMMMMMMMMMMMMMMMWWWWMMMMWNNNWMMWWWWWWMWWWNNWMMMMMM
MMWWMMXo;cok0KXNWMMWXKNWMMMMMMMWWMMMMMMMMMMMMMMMMMMWWWWMMWNWMMMWNNWWMMMMMMMMMMMMMMMMWWWMMMNK0XWMWNNNWWWMMWNXNMMWNNWMMMMM
MWWWMWkcdXWMMMMMMMNKKNWMMMMWWWWWWWNWWMMMMMMMMMMMMMWWWMMWKdlok0NMMWNNWMMMMMMMMMMMMMMWWWMMNOdc:l0WMMWWMMMWKxlcdKWMWNXNWMMM
MWWWMWxl0MMMMMMMMWX0XWMMMWWWWMMMMWWNNNWWWWWWWWWWWWWWMMNk:,,,,:xNMMNXNWMMMMMMMMMMMMMWWWMMXd:;;;lKWMMMMMMMXkc;;lONMWNXNWMM
MWWWMW0llONWMMMMMMWNNNNWWWWMMWXXNWMMWWWWMMMMMMWWWWWMMMWXx:,:cdKWMWXKNWMMMMMMMMMMMMMWWNWMMNklokXWMMMMMMMMMWKd:;ckWMWXXWMM
MMWNWMWOc;cdkOKKXNWMMWWWWMMWXOxxk0XWMMMWKkddk0NWMMMMMMMMWKOKNWMWNKKXWMMMMMMMMMMMMMMMWWNNWMWNWMMMMMMMMMMMMMMNx:;dXMMXKNWM
MMWNNWMWKd:,,,;;:cox0NMMMMMW0xoodkKWMMMXo,''',cx0WMMMMMMMMMMMMMN0KNWMMMMMMMMMMMMMMMMMMWNNMMMMWWNNWWWMMMMMMMM0lckNMWXKNWM
MMMWNNWMMWXOxolcc:,,:xNMMMMMWXkx0NMMMWXK0Oko:,,,;oKWMMMMMMMMMMMWXXNWWMMMMMMMMMMMMMMMMMWWWMMNOdoooodxkOKNWWWNkokNMWNKXWMM
MMMMWNNWMMMMMWX0xl:;;oKMMMMMMMWWMMMWKxcckNMWXxc,,,:kNMMMMMMMMMMMMWWWNNWWMMMMMMMMMMWWWWWWWMW0l::cc::;;;:loodxkKWMWXKXWWMM
MMMMWWWWMMWKOdl:;;::lONMMMMMMMMMMMMXo;;;lKMMMWKo;;,;xNMMMMMMMMMMWNWMWNXNWMMMMMMWWWWWWWWMMMWKo::lkOxoc::::okXWMWNKKXWMMMM
MMMWWWMWXko:;;;;;cdOXWMMMMMMMMMMMMMKo:cdKWMMMMMXd:;,:kWMMMMMMWKkolkXMMWXNWMMMWWWMMWNNNWWMMMW0l::cxKNK000XNMMWXKKXNWMMMMM
MMWWWMMKo;,;:ldkOXWMMMMMMMMMMMMMMMMNK0KNMMMMMMMMXo;;,cKMMMMWW0l;,;;dXMMWXXWWWWMMW0dlccldkKWMWKo:::lONWMMMWNXKKXWWMMMMMMM
MMWWWMWk;,cxO0KKK0Okxxddddk0NMMMMMMMMMMMMMMMMMMMWO:;;;xWMMMMMWOc;:okXMMMWNNWWMMWk:;:c:;;;cdOXWXxc:;:dXMMWK0XNWMMMMMMMMMM
MMWWWMW0c,;:cccc:;,,,,,,,,,;l0WMMMMMWNXXXNWMMMMMMKl;;,oNMMMMMMWKOKWMMMMMMMMMMMMKl,;dX0xl:;;:lx0KOo:;:xNMWXKNWMMMMMMMMMMM
MMWWWWMWKkdlllllloodxxkkOkc,,oNMMMW0o::::coxkKNWWXo;;,lXMMMMMMMMMMMMMMMMMMMMMMMKc,;dNMWN0ko:::cokOd:;dNMWXKNWMMMMMMMMMMM
MMMWNNWWMMWWNNNNWWWMMMMMXd:,;xNMMW0c''',,,,,;:ldOOo;;,lXMMMMMMMMMMMMMMMMMMMMMMMXo;;oXMMMMWN0koc::cc:l0WMNKXWMMMMMMMMMMMM
MMMMMWNNNNNNNNNWMMMMMMW0l;,;oXMMMXx:'''',,,,;;;;:c:;;;oXMMMMMMMMMMMMMMMMMMMMMMMWx:;lKMMMMMMMWNKkxdxOXWMWKKNWMMMMMMMMMMMM
MMMMMMMWWNNXXXXXWMMMMXx:;;:xXMMMNxcc,''',,,,,;;:::;;;;l0WMMMMMMMMMMMMMMMMMMMMMMWOc;cOWMMWNXXNWMMWWWMWWXKKNWMMMMMMMMMMMMM
MMMMMMMMMMMMMMWNWMMWKo:;:o0WMMMWk;,cc,'',,,,;;:cc:;;;;:ox0XWMMMMMMMMMMMMMMMMMMMMKl:cOWMWX0KXXNNNNNNXXKXNWMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMWWMMW0l::ckXWMMMM0c'';lc,',,,,:ccc:;;;;;:looxO0XWMMMMMMMMMMMMMMMMMN0OKNMMNKKNWWWWNNNNNNWWMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMWWWMMNkod0WMMMMMXl',,:ldc;,,,,;:::;;;;;;cloooddxOKNWMMMMMMMMMMMMMMMMMMMWNKKNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMWNWWMWNNWMMMMMNx,',:d0Oxl;,,,,,;;;;;;;;clloodddxxk0NWMMMMMMMMMMMMMMMMMN0KNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMWNNWMMMMMMMMWO;',:d0NX0ko:,,,,;;;;;;;:clloodddxxxxk0XWMMMMMMMMMMMMMMMWXXNWWWWWWWWWWWWWWWWWWMMMMMMMMMMMMM
MMMMMMMMMMMMMWWWWWNNMMMMMMMMKc',;o0NNNNKOxl;,,;;;;;;;:cllloddddxxkkkk0XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNNWWMMMMMMMMMM
MMMMMMMMMMWWWWWWWWWWMMMMMMMXo',;lOXNNNNNKOxo:;;;;;;;;:cclloodddxxkkkkkO0NWMMMMMMMMMWNNXK0OOkkxxxxxxxxkOKNMMNXNWMMMMMMMMM
MMMMMMMMWWWMMMMMMMMMMMMMMMWx,';ckXNNNNNNXOxxxl:;;;;;;:cclloooddxxxkkkkOOOKNMWNX0Okdolc::;;;;;;;;;;;;;;;cOWMWXXWMMMMMMMMM
MMMMMMMMWWMMNOk0XNMMMMMMMWO:',cxKNNNNNNXK0Okxxxl::;;;:cclloooddxxxkkkkkkkddxol::;;;;;;;;;;;;;;;;:::cloxOXWMMNXNWWMMMMMMM
MMMMMMMWWMMNx:;;:dXMMMMMMKc',:dKNNNNNNXKK00Okxxkxo:;::ccllloooddxxxxdolc:;;;;;;:cllodxxkkkkOOOO00KKXNWMMMMMMMWWNNNWMMMMM
MMMMMMWWWMWKo:;;:kWMMMMMNo,,:d0NNNNNXKK000000OkxkOxlc:ccclloooddolc::;;;;:clook0XNWWMMMMMMMMMMMMMMMMMMMMMMMMWWMMWNNNWMMM
MMMMMMWWWMMWNKkxONMMMMMWk,';oOXNNNNXK0000000OOOkxxkOkolcclllccc:;;;::cloxkOO000XWMMMMMMMMMMMMMMMMMMMMMMMMMWKOOKWMWNXNWMM
MMMMMMMWNNNNWWMWWMMMMMM0:';lOXNNNNXK000000OOOOOOOkxxkOkxoc:;;;;::codxkkOOOO0000OKWMMMMMMMMMMMMMMMMMMMMMMMXkolld0WMMNXNWM
MMMMMMMMWWNNXNNNNWMMMMXl',ckXNK0KXK0000OOOOOOOOOkkkkxdxkkxoccclodxxxkkkOOOO00000OKWMMMMMMMMWWWMMMMMMMMMMMN0dldOXWMWXKNWM
MMMMMMMMMMMMWWNNXNWMMNd,,cx0Odc:lkO0OOOOOOOOOkkkkkkkkxxddxkkkkxddxxxkkkkOOO0000K0OXMMMMMWNKOO0NWMMMMMMMMMMWXKNWMWNKKXWMM
MMMMMMMMMMMMMMMMWNWMWk;,:d00l;,,,:dOOOOOOOkkkkkkkkkxxxxxxdoddxxkkkxxxkkkOOOO0000KO0NMMMMNOxxddkXMMMMMMMMMMMMWWNXKKXWWMMM
MMMMMMMMMMMMMMMWWWMM0:';o0NN0o;;ldkOOOOkkkkkkkkkxxxxxxxxxddddooodxxkkkkkkOOO0000K0OXMMMMMNOdxOKWMMMMMMMMWXKXXXXXNWMMMMMM
MMMMMMMMMMMMMMMWWMMXl,;lOXNNXOxxOOOOkkkkkkkkkxxxxxxxxxdddddddddoooloddxxkkOOO000K0ONMMMMMMWXNWMMMMMMMMMMN0KXNWWMMMMMMMMM
MMMMMMMMMMMMMMWWMMNx,,lkXNNK0OOOOkkkkkkkkkxxxxxxxxxddddddddddoooooollccllodxkO0000XWMMMMMMMMMMMMMMMMMMMMWKXWMMMMMMMMMMMM
MMMMMMMMMMMMMWWWMWO:,ckXNXK0OOkkkkkkkkxxxxxxxxxxdddddddddoooooooollcc::;,,,cdOXNWWMMMMMMMMMMMMWXOO00XWMMNKXWMMMMMMMMMMMM
MMMMMMMMMMMMMWWMMKc,:xKNXKOkkkkkkkkkxxxxxxxxxdddddddddooooollllcc:;;,,;cok0XWMMMMMMMMMMMMMMMMMNkolloOWMWXKNWMMMMMMMMMMMM
MMMMMMMMMMMMWWMMNo,:dKNX0Okkkkkkxxxxxxxxxxddddddddooooollcc:::;,,;:lxOKNMMMMMMMWNXWMMMMMMMMMMMXkdolo0WMWKKNMMMMMMMMMMMMM
MMMMMMMMMMMWWMMWk;;o0XK0kkkkkxxxxxxxxxxddddddddooolllcc:;;,,;:ldk0NWMMWWWMMMMWKxlcxKWMMMMWWWMMWWNXKKNMMMNXNWWMMMMMMMMMMM
MMMMMMMMMMWWWMM0:,lOXKOkkkxxxxxxxxxxddddddoooollcc::;,,;coxOKXWMMWWNXXKKXNMMMKo;,,,l0WMMNKKKXNWWMMMMMMMMMMWNNWMMMMMMMMMM
MMMMMMMMMMWWMMXl,ckK0Okxxxxxxxxxxddddddoolllcc:;;,;:ldkKNWMMWWNXXXKXXNWWNNWWMWKd:;o0NMWNKKNNNNXNMMMMWX0OXWMWXXWMMMMMMMMM
MMMMMMMMMWWMMNx;cx00kxxxxxxxxddddddoollcc::;,,;cox0XWMMWNNXXKKKXNNWWMMMMMWNNWWMWKKWMWNKKXWWMMMWWMMWKxl::o0WMWNXWMMMMMMMM
MMMMMMMMWWWMWO::d0Oxxxxxxxdddddoollcc:;;,;:ldOKNWMWWNXXKKXXNNWWMMMMMMMMMMMMWNNWWWMWNXKXNWMMMMMWWWMWXd:;;:xXMMWXNWMMMMMMM
MMMMMMMMWWMMKc;okkxxxxxddddolllc::;,,;cok0XWMWWNNXKKKXNNWWMMMMMMMMMMMMMMMMMMWWNNNXXXXNWMMMMMMMMWNWMMXxdk0NWMWXKNWMMMMMMM
MMMMMMMWWMMNo;cdxdddddooolcc:;,,;:lxOKNMMWWNXXKKXXNWWMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWMMMMMMMMMMMMWNWMMWWMMWNXKXNWMMMMMMMM
MMMMMMWWWMWk;;lllooollc::;,,:cdk0NWMWWNXXXKXXNWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNNNNNNXKKXNWMMMMMMMMMM
MMMMMMWWMMXl';;;;:::;,,;coxOXWMMWWNXXKKXNNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNNXXNNWMMMMMMMMMMMMM
MMMMMMWWMMXl..'''',:ldkKNWMMWNXXXKKXNWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMWNWMWXxlclox0XWMMWWNXXKXXNNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMWNNWMMMWMMMWWNXXKKXXNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMWNNNNNNNXXXKKXNNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMWWNNNNNNWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM)"<<endl;

cout<<"Salir"<<endl;
if(Salir==Salir)
{
exit (0);

}
}

return 0;


}






