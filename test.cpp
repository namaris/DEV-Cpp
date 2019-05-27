// SHELL SORT ALGORITHM (BUSQUEDA SHELL)

/*1. Leer tamaño vector (input user)
2. Calcular salto  = n/2 (int)
3. Establecer inicio y final(salto) de comparacion 
4. Comparar esas 2 posiciones

#include <iostream>
#include <string>
#include <algorithm>

struct Runner{
        enum Sex{
                Male,
                Female,
                Other
        };
        enum Category{
                Juvenile,
                Sir,
                Veteran
        };
        std::string name;
        std::string club;
        Sex sex;
        Category cat;
        int age;
};

std::string getEnumToString(Runner::Category c) noexcept{
        switch(c){
                case Runner::Category::Juvenile:
                        return "Juvenil";
                case Runner::Category::Sir:
                        return "Señor";
                case Runner::Category::Veteran:
                        return "Veterano";
                default:
                        return "Unknown";
        }
}

Runner::Sex getStringToEnum(const std::string& sex) noexcept{
        auto tmp = sex;
        std::transform(tmp.begin(),tmp.end(),tmp.begin(),::tolower);
        if(tmp == "female"){
                return Runner::Sex::Female;
        }else if(tmp == "male"){
                return Runner::Sex::Male;
        }else if(tmp == "other"){
                return  Runner::Sex::Other;
        }
        return Runner::Sex::Other;
}

int main(){
        Runner r;
        std::cout << "introduce el nombre corredor: " << std::endl;
        std::getline(std::cin,r.name);
        std::cout << "introduce la edad del corredor: " << std::endl;
        std::string age;
        std::getline(std::cin,age);
        r.age = std::stoi(age);
        std::cout << "introduce el sexo del corredor: (female | male | other)" << std::endl;
        std::string tmp{""};
        std::getline(std::cin,tmp);
        r.sex = getStringToEnum(tmp);
        std::cout << "introduce el club del corredor: " << std::endl;
        std::getline(std::cin,r.club);
        if(r.age <= 18){
                r.cat = Runner::Category::Juvenile;
        }else if(r.age <= 40){
                r.cat = Runner::Category::Sir;
        }else if(r.age > 40){
                r.cat = Runner::Category::Veteran;
        }
        std::cout << "El corredor de nombre " << r.name << " de " << r.age << " años, perteneciente al club " <<  r.club <<
" participa en la categoria " << getEnumToString(r.cat) << std::endl;
        return 0;
}*/
# include <iostream>
using namespace std; 

    
// Variable created inside namespace 
namespace first 
{ 
    int val = 500; 
} 
  
// Global variable 
int val = 100; 
  
int main() 
{ 
    // Local variable 
    int val = 200; 
  
    // These variables can be accessed from 
    // outside the namespace using the scope 
    // operator :: 
    cout << first::val << '\n';
      cout << val << '\n';
  
    return 0; 
} 
