#include <iostream>
#include <locale.h>
#include <string>
#include <cctype>
#include <thread>   
#include <chrono>  

int delay = 2;

void titulo()
{
    std::cout << "                *********************************" << std::endl;
    std::cout << "                *                               *" << std::endl;
    std::cout << "                *       Historia Narrada        *" << std::endl;
    std::cout << "                *                               *" << std::endl;
    std::cout << "                *                               *" << std::endl;
    std::cout << "                *      Adaptacion de  los       *" << std::endl;
    std::cout << "                *      Cuentos Cortos de        *" << std::endl;
    std::cout << "                *           Umeboshi            *" << std::endl;
    std::cout << "                *                               *" << std::endl;
    std::cout << "                *********************************" << std::endl;
    std::cout << "                *                               *" << std::endl;
    std::cout << "                *       Presiona Enter para     *" << std::endl;
    std::cout << "                *         continuar...          *" << std::endl;
    std::cout << "                *                               *" << std::endl;
    std::cout << "                *********************************" << std::endl;
    std::cin.get();
}

std::string minus(std::string input)
{
    for (char& c : input)
    {
        c = std::tolower(c);
    }
    return  input;
}

bool naces()
{   
    std::string n1;
    std::cout << "Naces\n";
    std::cout << "Cuautepec\n";
    std::cout << "Como que no le pusieron asi por Cuahutemoc Blanco?\n";
    std::cout << "Chale la hipocresia\n";
    std::cout << "Eres muy unido con tu papa\n";
    std::cout << "Ven juntos jugar al ame y van a los estadios\n";
    std::cout << "Hasta cuando pierden son felices porque pasaron tiempo juntos\n";
    std::cout << "En la final de 2013 tu papa te dijo que si ganaba el ame te iba a regalar una baika en tu cumple\n";
    std::cout << "Cabezazo de Moiseeees\n";
    std::cout << "Te emocionas como el piojo\n";
    std::cout << "Llega tu cumpleaños y ves a tu jefe llegar con una mamalona\n";
    std::cout << "Amarilla como el logo del Ame\n";
    std::cout << "Le pegas un vergo de estampas y la llevas a todos lados\n";
    std::cout << "Olvidaste que vives en EDOMEX\n";
    std::cout << "Te sale un piedroso\n";
    
    std::cout << "Selecciona la opcion escribiendola debajo\n";
    std::cout << "          HUIR    //      PELEAR   \n";
    std::cin >> n1;
    std::string input = minus(n1);
    
    if (input == "pelear")
    {
        return true;
    }
    else if (input == "huir")
    {
        return false;
    }
    else
    {   
        std::this_thread::sleep_for(std::chrono::seconds(delay));
        system("cls");
        std::cerr << "Lo retas a una batalla de rap por tu bicla\n";
        std::cerr << "prrrr prrrr martillazo en el a...\n";
        std::cerr << "Te da un derechazo en la boca del estomago bien dado\n";
        std::cerr << "Tratas de escapar de el, corriendo como pollo sin cabeza\n";
        std::cerr << "De repente tu cuerpo se siemte ligero\n";
        std::cerr << "Como cuando la combi pasa por un tope\n";
        std::cerr << "Tu vista se vuelve borrosa\n";
        std::cerr << "Un camion de 20 toneladas te da un besito de buenas noches\n";
        std::cerr << "Despiertas en una mazmorra, lleno de MIEDO y HAMBRE\n";
        std::cerr << "- Oigame, deje de apuntarme con esa arma\n";
        std::cerr << "No era un arma...\n";
        std::cerr << "prrrr prrrr prrrr desgarro en el...\n";
        std::cerr << "Votas por el PAN\n";
        exit(EXIT_FAILURE);
    }
}

void huida()
{
    std::cout << "Te arrancas a maxima velocidad\n";
    std::cout << "Tus pies te arden de tanto pedalear\n";
    std::cout << "Escuchas un grito agudo a lo lejos, pero estas demasiado ocupado para que te importe\n";
    std::cout << "Pasan 15 a y aun recuerdas ese dia\n";
    std::cout << "Votas por el PRI\n";
}

bool pelea()
{
    std::cout << "El piedroso resulto ser fan del Kino Faiters\n";
    std::cout << "Te pone una madriza digna de Rugal\n";
    std::cout << "Al menos salvaste tu cartera del ame\n";
    std::cout << "XD\n";
    std::cout << "Te quita la bicla\n";
    std::cout << "Andas hasta la verga de tu casa y te tienes que regresar caminando\n";
    std::cout << "Te da un chingo pero un chingo de miedo porque ya es de noche\n";
    std::cout << "Mientras vas caminando todo awitado oyes un grito\n";
    std::cout << "Es una morra\n";
    std::cout << "Acaba de pisar una botella de oso negro rota\n";
    std::cout << "De tu papa aprendiste que a las damas primero\n";
    std::cout << "Sin pensarlo dos veces corres a ayudarla\n";
    std::cout << "El pie le sangra\n";
    std::cout << "La sientas en una banqueta y corres en putiza a una farmacia\n";
    std::cout << "Compras una gasa, algodon y alcohol con los 100 varos que eran pa comprarte unas tostadas de pulpo con doña Ceci\n";
    std::cout << "Sigue alli, al lado lleva un baston chistoso\n";
    std::cout << "Le haces una curacion como dios te da a entender y te das cuenta que no hay nadie como pa pedir ayuda\n";
    std::cout << "Ni taxis nomames si es Edomex\n";
    std::cout << "Ni modo a chingarle\n";
    std::cout << "La morra se ve como de prepa y aun asi te la llevas fungiendo de su muleta personal\n";
    std::cout << "Te va preguntando por las calles y trae los ojos cerrados\n";
    std::cout << "Te cae el 20\n";
    std::cout << "Elinvidente\n";
    std::cout << "Se la pelan caminando\n";
    std::cout << "Mientras te plática\n";
    std::cout << "Se llama Hannya\n";
    std::cout << "Parecenombredepayasita\n";
    std::cout << "Se habia perdido\n";
    std::cout << "Le preguntas si ve el futbol\n";
    std::cout << "XD\n";
    std::cout << "Sorprendentemente si, lo oye\n";
    std::cout << "- Es diferente, yo tengo que imaginarme todo lo que pasa y es como si siempre fuera al estadio, me llego a concentrar mucho\n";
    std::cout << "Lastima que le va a los Pumas\n";
    std::cout << "Ya te suda hasta el ano pero llegan a su casa\n";
    std::cout << "Sus papas te dan las gracias y te invitan a tomar una coca adentro de su casa\n";
    std::cout << "Esos weyes se pudren en lana\n";
    std::cout << "Tienen jardin...en pleno Edomex\n";
    std::cout << "Se ofrecen en llevarte a tu canton\n";
    std::cout << "Ahi te acuerdas que no traes bicloca\n";
    std::cout << "Aceptas, te subes a una SUV nuevecita\n";
    std::cout << "En el camino piensas que decirle a tu papa pero se queda hablando con el de Hannya y cuando se va no te dice nada\n";
    std::cout << "Te dice que hiciste lo correcto, pero probablemente se puso triste, sabes que tu bici fue producto de un chingo de tiempo extra en el jale de tu jefe\n";
    std::cout << "Chale\n";
    std::cout << "Al otro dia nada se habla de ello\n";
    std::cout << "Era dia de pants\n";
    std::cout << "Denle 3 vueltas al patio y ya los dejo jugar futbol\n";
    std::cout << "Te la rifas jugando, hasta le haces un tunel al melvin\n";
    std::cout << "Quieres meter gol de chilena, la elevas y...\n";
    std::cout << "Chingadamadre quien puso esa ventana donde yo iba a tirar\n";
    std::cout << "Te mamas un vidrio\n";
    std::cout << "Y el balon era tuyo\n";
    std::cout << "Tsssss\n";
    std::cout << "Lo recoges a la salida pero la doña de la direccion se cree tu mama y te sermonea media hora\n";
    std::cout << "Te están rugiendo las tripas y te vas en putiza\n";
    std::cout << "Si no fuera por que sus ojos todos nublados parecen azules ni te dabas cuenta\n";
    std::cout << "Hannya venia sola otra vez, estaba sentada en la banqueta del parque al lado de la tortilleria\n";
    std::cout << "Te reconoce de alguna manera, chance te olio\n";
    std::cout << "Te saluda muy contenta y te invita a sentarte con la voz mas dulce del mundo\n";
    std::cout << "Derrepente se te quito el hambre\n";
    std::cout << "Te confiesa que otra vez esta perdida\n";
    std::cout << "Le quieres devolver el favor y la llevas a tu casa pa que tu papa le lleve en su tsuru\n";
    std::cout << "Ayperoprimeroquecomatuamiga\n";
    std::cout << "Ese dia tocaba alambre\n";
    std::cout << "Era curioso ver como comia, tus papas la veian algo sacados de pedo como buscaba sutilmente la comida con las puntas de los dedos y luego hábilmente la ensartaba con el tenedor\n";
    std::cout << "Toda una damita diria tu abuelita enpazdescanse\n";
    std::cout << "Terminan de comer y tu papa la lleva mientras te pones a hacer la tarea\n";
    std::cout << "Ahora que lo piensas ¿Que hacia hasta alli?\n";
    std::cout << "Todavia no andaba muy bien, porque salio sola\n";
    std::cout << "La biografia de Anastacio Bustamante se te hacía distante mientras pensabas en Hannya\n";
    std::cout << "A pesar de que ella es mayor e invidente había algo que te hacía moverte como titere\n";
    std::cout << "Te habías enamorado\n";
    std::cout << "No le pediste su numero\n";
    std::cout << "No tienes su mail\n";
    std::cout << "Solo sabes donde vive y que a veces te la encuentras en lugares al azar\n";
    std::cout << "Ese día no dormiste\n";
    std::cout << "Pasó el tiempo, es el convivio de navidad\n";
    std::cout << "Te quedas pendejeando con tu compa el Woody\n";
    std::cout << "Todos tenemos un compa que le apodamos el Woody\n";
    std::cout << "Salen a jugar maquinitas al local de Don Jeronimo\n";
    std::cout << "Nunca pensaste encontrarla ahi, se veia asustada\n";
    std::cout << "Te entro todita la doble del Kim cuando abandonaste la reta\n";
    std::cout << "- Que haces aqui ?\n";
    std::cout << "Hannya apenas te oyo se sintio tranquila\n";
    std::cout << "Soy muy dada a perderme jeje...\n";
    std::cout << "Se sientan a comer un sinparar a una de las mesas del local\n";
    std::cout << "Le gusta salir sola, es todo lo que te dice sobre porque siempre se pierde\n";
    std::cout << "Solo regresa cuando la encuentras tu, o le da su direccion a algun policía\n";
    std::cout << "En un descuido se arremanga su sueter beige\n";
    std::cout << "Se te hace nudo todo\n";
    std::cout << "Todo el antebrazo, lleno de cicatrices, quemaduras y moretones\n";
    std::cout << "No dices nada\n";
    std::cout << "Le dices que se vayan pero no quiere\n";
    std::cout << "Solo un poquito mas si?\n";
    std::cout << "Se toma muy despacio su Sprite\n";
    std::cout << "Van a su casa caminando, ya está mejor del pie\n";
    std::cout << "Te quedas a cenar pavo con su familia\n";
    std::cout << "Parecia dia de accion de gracias, tu eras el aborigen\n";
    std::cout << "De regreso el papa de Hannya te dice que ella le gusta escaparse porque es indisciplinada\n";
    std::cout << "Tu sabes que mierda esta pasando, pero callas, te faltan huevos\n";
    std::cout << "Hannya sonreia tristemente a tu partida...\n";
    std::cout << "Te revuelves en la cama pensando que hacer, que decir\n";
    std::cout << "Al otro dia le cuentas a tu papa\n";
    std::cout << "No lo reconoces\n";
    std::cout << "Pues claro hijo, yo también le haría algo asi si hiciera esas cosas\n";
    std::cout << "Juras que no dijo eso, pero continuaba\n";
    std::cout << "Esas personas son incompletas hijo, deberias dejar de hablarle\n";
    std::cout << "Se te cae un grande\n";
    std::cout << "Te emputas\n";
    std::cout << "Tal vez por eso huye, porque la maltratan\n";
    std::cout << "Es disciplina hijo\n";
    std::cout << "No, NO, N O\n";
    std::cout << "Discutes con tu papa\n";
    std::cout << "Tocan el tema de tu bici\n";
    std::cout << "En serio se enojo\n";
    std::cout << "Penso que jamas volverias a ver a la cieguita esa\n";
    std::cout << "Cuando la llevo a su casa le dijo que jamas queria que te volviera a hablar\n";
    std::cout << "Tu simplemente te fuiste a tu cama, en silencio\n";
    std::cout << "Selecciona la opcion escribiendola debajo\n";
    std::cout << "       RENDIRSE      //       AYUDARLA       \n";
    std::string n2;
    std::cin >> n2;
    std::string input = minus(n2);

    if (input == "ayudarla")
    {
        return true;
    }
    else if (input == "rendirse")
    {
        return false;
    }
    else
    {
        std::this_thread::sleep_for(std::chrono::seconds(delay));
        system("cls");
        std::cerr << "Al dia siguiete, te diriges a su casa escuchando los versos del poeta Daniel a todo volumen\n";
        std::cerr << "prrrr prrrr martillazo en el a...\n";
        std::cerr << "Ves a una viejita gritandote y agitando su baston\n";
        std::cerr << "Le sacas el dedo por mentarte la madre\n";
        std::cerr << "De repente tu cuerpo se siemte ligero\n";
        std::cerr << "Como cuando la combi pasa por un tope\n";
        std::cerr << "Tu vista se vuelve borrosa\n";
        std::cerr << "Un camion de 20 toneladas te da un besito de buenas noches\n";
        std::cerr << "Despiertas en una mazmorra, lleno de MIEDO y HAMBRE\n";
        std::cerr << "- Oigame, deje de apuntarme con esa arma\n";
        std::cerr << "No era un arma...\n";
        std::cerr << "prrrr prrrr prrrr desgarro en el...\n";
        std::cerr << "Votas por el PAN\n";
        exit(EXIT_FAILURE);
    }

}

void rendirse()
{
    std::cout << "Pasan los dias\n";
    std::cout << "Los dias se vuelven semanas\n";
    std::cout << "Las semanas, meses \n";
    std::cout << "Y los meses, sexenios del que " << '"' << "Ahora si es bueno" << '"' << std::endl;
    std::cout << "De vez en cuando, escuchas noticias de desaparecidas\n";
    std::cout << "Un escalofrio recorre tu espalda cada vez que sale una alerta AMBER\n";
    std::cout << "Todo te recuerda a ella\n";
    std::cout << "Vives recordandola toda tu vida\n";
    std::cout << "Preguntandote que fue de esa cieguita\n";
    std::cout << "Mueres pacificamente de diabetes, cortesia de Coca Cola\n";
    std::cout << "Destapa la felicidad\n";
    std::cout << "Votas por el PRD\n";
}

bool ayudarla()
{
    std::cout << "Al otro dia ya no volviste de la escuela\n";
    std::cout << "Corrias por el local de Jeronimo, en el parque, en las plazas, nada\n";
    std::cout << "Diste con su casa\n";
    std::cout << "La escena era horrenda\n";
    std::cout << "Su padre la tenia agarrada de los pelos\n";
    std::cout << "La golpeaba en el estomago, donde no se veian heridas\n";
    std::cout << "Esto va para que aprendas a no responder hija de la chingada\n";
    std::cout << "No sabes en que momento agarraste ese tabique y comenzaste a correr\n";
    std::cout << "Se lo estrellas en la cabeza al don, le gritas a Hannya que tome tu mano\n";
    std::cout << "Titubea, parece estar herida\n";
    std::cout << "La cargas en tu espalda mientras corres\n";
    std::cout << "A donde ir en un mundo donde todos te ven?\n";
    std::cout << "Los brazos te quemaban mientras oian gritos por las calles buscandote\n";
    std::cout << "La vista se te hacía dobla mientras sentias el peso de Hannya caer sobre ti, desmayandose\n";
    std::cout << "Una reja entreabierta de un local en obra negra parecía el paraiso\n";
    std::cout << "Te colaste dentro en putiza\n";
    std::cout << "Sentías que ibas a vomitar el higado mientras bajabas a Hannya al piso\n";
    std::cout << "Le haces una almohada con tu camisa y abres tu cartera de las aguilas\n";
    std::cout << "50 pesos\n";
    std::cout << "Te da impotencia no saber que hacer\n";
    std::cout << "En eso Hannya despierta\n";
    std::cout << "- Tranquila, no pasa nada. Ni siquiera tu crees eso\n";
    std::cout << "- Nos van a encontrar. Dice muy callada\n";
    std::cout << "- No lo haran, pronto te llevare a un lugar donde no nos encuentra nadie, ni dios.\n";
    std::cout << "- Cómo sabes que hay un lugar así?\n";
    std::cout << "- No lo se, pero lo encontrare\n";
    std::cout << "- Nunca debiste conocerme,lo siento\n";
    std::cout << "- Si debi, lo siento por no hacer esto antes\n";
    std::cout << "- No es tu culpa\n";
    std::cout << "- Si lo es, no debia permitir que te pasara eso porque yo...yo te quiero mucho\n";
    std::cout << "Se siente muy raro tu corazon, cansancio y nervios, Hannya se queda en silencio\n";
    std::cout << "- Yo...yo tambien siento que me gustas\n";
    std::cout << "A oscuras, sin ni un ojo que vea, traslúcidas las siluetas, la besaste, es ese verdadero amor que no se ve con los ojos\n";
    std::cout << "La ves dormir tranquilamente\n";
    std::cout << "Necesitas sacarla de aqui\n";
    std::cout << "No puedes fallarle\n";
    std::cout << "Sabes como conseguir dinero rapido, pero no estas seguro de poder hacerlo\n";
    std::cout << "Selecciona la opcion escribiendola debajo\n";
    std::cout << "       NAVAJA      //       SIGILO       \n";
    std::string n3;
    std::cin >> n3;
    std::string input = minus(n3);
    if (input == "navaja")
    {
        return true;
    }
    else if (input == "sigilo")
    {
        return false;
    }
    else
    {
        std::this_thread::sleep_for(std::chrono::seconds(delay));
        system("cls");
        std::cerr << "Al dia siguiete, decides huir solo\n";
        std::cerr << "Tratas de sacar su imagen de tu cabeza\n";
        std::cerr << "No tienes la fuerza para hacerl\n";
        std::cerr << "La musica tal vez ayude\n";
        std::cerr << "Pones los versos del poeta Daniel a todo volumen\n";
        std::cerr << "prrrr prrrr martillazo en el a...\n";
        std::cerr << "Ves a una viejita gritandote y agitando su baston\n";
        std::cerr << "Evitas sacarle el dedo, no estas de animo para ello\n";
        std::cerr << "De repente tu cuerpo se siemte ligero\n";
        std::cerr << "Como cuando la combi pasa por un tope\n";
        std::cerr << "Tu vista se vuelve borrosa\n";
        std::cerr << "Un camion de 20 toneladas te da un besito de buenas noches\n";
        std::cerr << "Despiertas en una mazmorra, lleno de MIEDO y HAMBRE\n";
        std::cerr << "- Oigame, deje de apuntarme con esa arma\n";
        std::cerr << "No era un arma...\n";
        std::cerr << "prrrr prrrr prrrr desgarro en el...\n";
        std::cerr << "Votas por el PAN\n";
        exit(EXIT_FAILURE);
    }

}

void navaja()
{
    std::cout << "Al otro dia compras una navaja\n";
    std::cout << "La dejas dormida y sales a asaltar jurando que es solo para esa vez\n";
    std::cout << "Juntas 1000 varos, te sabe a mierda el red cola que compraste para quitarte la sed despues de correr de un policía\n";
    std::cout << "Pero por fin podias pagar algun boleto de un camion que los llevara lejos\n";
    std::cout << "Tu tio Alucin, el siempre fue tu mejor amigo, el entenderia\n";
    std::cout << "Salen en putiza, gastas lo necesario para que lleguen bien\n";
    std::cout << "De repente te sientes los bolsillos, te acaban de bolsear\n";
    std::cout << "Solo te alcanza para un boleto\n";
    std::cout << "Haces dos llamadas, el camión pasa a tu lado\n";
    std::cout << "En cuanto tiempo Hannya se dara cuenta que no eres tu quien va a su lado?\n";
    std::cout << "Esperas que el Tio Alucin la reciba y te espere con ella en la terminal\n";
    std::cout << "Y, a tu madre, que acepte tu disculpa\n";
    std::cout << "Te subes de colado en un camion destartalado lleno de gallinas que va para Guanajuato, solo tenias que saltar cuando vieras el letrero de la estacion de Zapopan\n";
    std::cout << "Nadie te dijo que tan alto estaba el escalon\n";
    std::cout << "Tampoco supiste que te pego al suelo\n";
    std::cout << "Sientes como todos los huesos de tus piernas se hacen polvito de chupa barrita al bajarte a 100 km por hora de un camión de redilas\n";
    std::cout << "Antes de desmayarte ves a tu tio Alucin correr hacia ti, mas atras habia una jovencita\n";
    std::cout << "Quisiste creer que era Hannya\n";
    std::cout << "Todo se pone negro...\n";
    std::cout << "Si esto es el adios, te dices, das las gracias, tal vez tu no llegaste, pero mientras ella viva y pueda vivir eres feliz\n";
    std::cout << "Aprendiste que el amor que vale puedes hallarlo en un sinparar mientras anochece\n";
    std::cout << "En el silencio lleno de caca de rata donde un beso se transforma en un compromiso\n";
    std::cout << "En saltar al vacio sin saber que habra despues...\n";
    std::cout << "Una voz de angeles te elevan al cielo mientras todo se pone blanco\n";
    std::cout << "Es un idioma que no entiendes\n";
    std::cout << "Entonces ves unos ojitos cerrados inclinados hacia ti\n";
    std::cout << "Tu tio Alucin enfrente\n";
    std::cout << "Le dice a Hannya que despertaste\n";
    std::cout << "Una sonrisa te basto, pero al momento de abrazarte se dijeron mas cosas que diez mil palabras o 1 millon de imagenes\n";
    std::cout << "Lo habian logrado\n";
    std::cout << "Pasa el tiempo\n";
    std::cout << "Es complicado ponerse un frac en silla de ruedas\n";
    std::cout << "El doctor dice que es sorprendente como aun podia conservar las piernas despues de haberlas casi hechas astillas\n";
    std::cout << "Y en un futuro cercano esperas volver a caminar\n";
    std::cout << "Los preparativos te tienen agitado, y a pesar de que ninguno de sus padres esta, al tomarse de las manos llenan la sala, donde van a culminar esto\n";
    std::cout << "Ese amor que no se ve con nuestros ojos ni se mide con la distancia\n";
    std::cout << "Votas por el PRI\n";
    std::cout << "\n";
    std::cout << "FIN\n";
}

void sigilo()
{
    std::cout << "Nada mas despertar, tomas a Hannya de la mano\n";
    std::cout << "Sales caminando con ella\n";
    std::cout << "Estas alerta, mirando a todos lados\n";
    std::cout << "Llegas al Abastos\n";
    std::cout << "Se suben a la caja de un camion\n";
    std::cout << "- Escondete aqui. Le indicas mientras la cubres con un costal manchado\n";
    std::cout << "Jusro cuando ibas a esconderte a su lado, un cargador del mercado te ve\n";
    std::cout << "- Ratero!. El cargador grita mientras te apunta\n";
    std::cout << "Varios cargadores se acercan a ayudarlo\n";
    std::cout << "Uno incluso trae un bidon de gasolina\n";
    std::cout << "Tomas una decision rapida\n";
    std::cout << "Le das un fuerte abrazo, puede que sea el ultimo\n";
    std::cout << "Decides ganar tiempo para Hannya\n";
    std::cout << "Ella sostiene tu pantalon, sin dejarte ir\n";
    std::cout << "- Por favor, no te vayas. Ella insiste\n";
    std::cout << "Por un momento te alegras de que ella sea ciega\n";
    std::cout << "Porque asi no puede verte llorar en este momento\n";
    std::cout << "- Vuelvo en un momento. Le mientes mientras te esfuerzas por no dejar salir un sollozo\n";
    std::cout << "Te bajas de la camioneta, listo a darlo todo\n";
    std::cout << "Te empiezas a dar en la madre con los dones\n";
    std::cout << "Puedes con ellos, tal vez puedas volver a subirte\n";
    std::cout << "Pero ellos no paran de llegar\n";
    std::cout << "La realidad te golpea como un balde de agua fria\n";
    std::cout << "Por fin entiendes el final de Halo Reach\n";
    std::cout << "Mientras te dejan caer el contenido del bidon, sonries\n";
    std::cout << "Ves el camion partir\n";
    std::cout << "Haz ganado, cumpliste tu objetivo\n";
    std::cout << "Lo ultimo que pasa por tu cabeza es el recuerdo de ella a tu espalda\n";
    std::cout << "Valio la pena...\n";
    std::cout << "Votas por el PRI\n";
    std::cout << "\n";
    std::cout << "FIN\n";
}


/*
bool comparar(std::string input)
{
    input = minus(input);

    if (input == "si")
    {
        return true;
    }
    else if (input == "no")
    {
        return false;
    }
    else
    {
        std::cerr << "Por favor Ingrese un dato valido\n";
        exit(EXIT_FAILURE);
    }
}
 */

int main()
{
    titulo();
    std::this_thread::sleep_for(std::chrono::seconds(delay));
    system("cls");
    bool nacvar = naces();
    std::this_thread::sleep_for(std::chrono::seconds(delay));
    system("cls");
    if (nacvar == true)
    {     
        bool pelvar = pelea();
        std::this_thread::sleep_for(std::chrono::seconds(delay));
        system("cls");
        if (pelvar == true)
        {
            bool ayuvar = ayudarla();
            std::this_thread::sleep_for(std::chrono::seconds(delay));
            system("cls");
            if (ayuvar == true)
            {
                std::this_thread::sleep_for(std::chrono::seconds(delay));
                system("cls");
                navaja();
                return 0;
            }else
            {
                std::this_thread::sleep_for(std::chrono::seconds(delay));
                system("cls");
                sigilo();
                return 0;
            }
        }else
        {
            std::this_thread::sleep_for(std::chrono::seconds(delay));
            system("cls");
            rendirse();
            return 0;
        }
    }else
    {
        std::this_thread::sleep_for(std::chrono::seconds(delay));
        system("cls");
        huida();
        return 0;
    }
}

