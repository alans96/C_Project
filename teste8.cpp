// Criar uma classe

#include <iostream>
#include <string>

struct Human{ //Mais comun no C  em C==  class... e depois o public: .... private:...
    Human(){ // Caso seja necessario que a classe inicie com certos valores
        name = "Human";
        age = 0;
        height = 0.10f;
        weight = 0.5f;
    }
    std::string name;

    int age;
    float height;
    float weight;
};

int main(){
    Human me;

    me.name = "Alan";
    me.age = 25;
    me.height = 1.75f;
    me.weight = 76.2f;


    system("pause");
}
