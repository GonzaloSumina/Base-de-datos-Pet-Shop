#include <iostream>
#include <string>

//Inicio de sesion
/*
class Administrador{
public: 
	Producto P_general;
};
class Empleado{
public:

};
*/
class Mascota{
private:
	std::string nombreM;
	int edad;
	std::string especie;
public:
	Mascota(std::string nombre_m, int edad_m, std::string especie_m){
		nombreM = nombre_m;
		edad = edad_m;
		especie = especie_m;
	}
  	void print(){
    	std::cout<<nombreM<<std::endl;
    	std::cout<<edad<<std::endl;
    	std::cout<<especie<<std::endl;
  	}
  	const std::string get_nombreM(){
  		return nombreM;
  	}
  	const std::string get_especie(){
  		return especie;
  	}
  	const int get_edad(){
  		return edad;
  	}
};

class Cliente{
public:
	std::string nombreC;
	std::string apellidoC;
	//Mascota mascota1[];
	Cliente(std::string nombre_c, std::string apellido_c){
		nombreC = nombre_c;
		apellidoC = apellido_c;
	}
	void print(){
    	std::cout<<nombreC<<std::endl;
    	std::cout<<apellidoC<<std::endl;
  	}
  	const std::string get_nombreC(){
  		return nombreM;
  	}
  	const std::string get_apellidoC(){
  		return apellidoC;
  	}
};

//Registro de productos
class Alimentos{
public:
	std::string marca;
	int cantidad;
  	void print(){
    	std::cout<<marca<<std::endl;
    	std::cout<<cantidad<<std::endl;
  	}
};

class Accesorios{
public:
	std::string tipo_accesorio;
	int cantidad;
	void print(){
    	std::cout<<tipo_accesorio<<std::endl;
    	std::cout<<cantidad<<std::endl;
  	}
};


class Producto{
public:
	Alimentos C_Perros;
	Alimentos C_Gatos;
	Alimentos C_Roedores;
	Alimentos C_Aves;
	Alimentos C_Peces;
	float precio;
	int ID;

	void print(){
    	std::cout<<"S/ "<<precio<<std::endl;
    	std::cout<<"ID: "<<ID<<std::endl;
  	}
};
//Registro de Ventas
class Venta{
public:
	int fecha;
	int total;
	void print(){
		std::cout<<fecha;
		std::cout<<total;
	}
};

class Detalle_Venta{	
public:
	int cantidad;
	int precio;
	void print(){
		std::cout<<cantidad;
		std::cout<<precio;
	}
};


int main() 
{
	std::string a;
	Mascota animal1("Bob", 6, "PERRO");
	animal1.print();
	//animal1.nombre = "Bob";
	//animal1.edad = 3;

	Producto Ricocan; 
	Ricocan.C_Perros.cantidad = 35;
	Ricocan.C_Perros.print();
	Ricocan.precio = 8.5;
	Ricocan.ID = 34123457;
  	Ricocan.print();
  	//animal1.print();
  	Cliente cliente1("Juan", "Palomera");
	
	Mascota animal2("Olaf", 4, "Gato");
	a=animal2.get_nombreM();
	std::cout<<a;
	return 0;
}
