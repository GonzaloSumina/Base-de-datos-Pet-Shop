#include <iostream>
#include <string>

//Inicio de sesion
class Persona{
public:
	std::string Nombre_p;
	std::string Apellido_p;
	Persona(std::string Nombre_p, std::string Apellido_p){
		this->Nombre_p=Nombre_p;
		this->Apellido_p=Apellido_p;
	}
	const std::string get_Nombre_p(){
		return Nombre_p;
	}
	const std::string get_Apellido_p(){
		return Apellido_p;
	}
};

class Administrador : public Persona{
public: 
	std::string Usuario;
	std::string correo;
	std::string contrasena;
};
class Empleado : public Persona{
public:
	std::string Usuario;
	std::string correo;
	std::string contrasena;
};

class Cliente:public Persona{
public:
	int compras;
};

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

//Registro de productos
class Alimentos{
public:
	std::string marca;
	int cantidad;
	Alimentos(std::string marca_, int cantidad_){
		marca=marca_;
		cantidad=cantidad_;
	}
  	void print(){
    	std::cout<<marca<<std::endl;
    	std::cout<<cantidad<<std::endl;
  	}
  	const std::string get_marca(){
  		return marca;
  	}
  	const int get_cantidad(){
  		return cantidad;
  	}
};

class Accesorios{
public:
	std::string tipo_accesorio;
	int cantidad;
	Accesorios(std::string tipo_accesorio_, int cantidad_){
		tipo_accesorio=tipo_accesorio_;
		cantidad=cantidad_;
	}
	void print(){
    	std::cout<<tipo_accesorio<<std::endl;
    	std::cout<<cantidad<<std::endl;
  	}
  	const std::string get_tipo_accesorio(){
  		return tipo_accesorio;
  	}
  	const int get_cantidad(){
  		return cantidad;
  	}

};


class Producto{
public:
	/*Alimentos C_Perros;
	Alimentos C_Gatos;
	Alimentos C_Roedores;
	Alimentos C_Aves;
	Alimentos C_Peces;*/
	float precio;
	int ID;
	Producto(float precio_, int ID_){
		precio=precio_;
		ID=ID_;
	}
	void print(){
    	std::cout<<"S/ "<<precio<<std::endl;
    	std::cout<<"ID: "<<ID<<std::endl;
  	}
  	const float get_precio(){
  		return precio;
  	}
  	const int get_ID(){
  		return ID;
  	}
};
//Registro de Ventas
class Venta{
public:
	int fecha;
	int total;
	Venta(int fecha_, int total_){
		fecha=fecha_;
		total=total_;
	}
	const int get_fecha(){
		return fecha;
	} 
	const int get_total(){
		return total;
	}
	void print(){
		std::cout<<fecha;
		std::cout<<total;
	}
};

class Detalle_Venta{	
public:
	int cantidad;
	int precio;
	Detalle_Venta(int cantidad_, int precio_){
		cantidad=cantidad_;
		precio=precio_;
	}
	const int get_cantidad(){
		return cantidad;
	}
	const int get_precio(){
		return precio;
	}
	void print(){
		std::cout<<cantidad;
		std::cout<<precio;
	}
};


int main() 
{
	
	return 0;
}
