#include <iostream>
#include <string>

class Body
{
public:
    std::string part;
    std::string numberof;
    Body* next;
};

void print(Body* n)
{
    while (n != NULL)
    {
        std::cout << "Esta parte se llama " << n->part << " y tenemos " << n->numberof << " de ella" << std::endl;
        n = n->next;
    }
}


int main()
{
   
    Body* one = NULL;
    Body* two = NULL;
    Body* three = NULL;
    Body* four = NULL;
    Body* five = NULL;
    Body* six = NULL;

    one = new Body();
    two = new Body();
    three = new Body();
    four = new Body();
    five = new Body();
    six = new Body();

    std::cout << "Ingresa la primer parte del cuerpo\n";
    std::cin >> one->part;
    std::cout << "Cuantas tienes?\n";
    std::cin >> one->numberof;
    one->next = two;
    std::cout << "Ingresa la segunda parte del cuerpo\n";
    std::cin >> two->part;
    std::cout << "Cuantas tienes?\n";
    std::cin >> two->numberof;
    two->next = three;
    std::cout << "Ingresa la tercer parte del cuerpo\n";
    std::cin >> three->part;
    std::cout << "Cuantas tienes?\n";
    std::cin >> three->numberof;
    three->next = four;
    std::cout << "Ingresa la cuarta parte del cuerpo\n";
    std::cin >> four->part;
    std::cout << "Cuantas tienes?\n";
    std::cin >> four->numberof;
    four->next = five;
    std::cout << "Ingresa la quinta parte del cuerpo\n";
    std::cin >> five->part;
    std::cout << "Cuantas tienes?\n";
    std::cin >> five->numberof;
    five->next = six;
    std::cout << "Ingresa la sexta parte del cuerpo\n";
    std::cin >> six->part;
    std::cout << "Cuantas tienes?\n";
    std::cin >> six->numberof;   
    six->next = NULL;
    
    print(one);

}


