#include <iostream>
#include <string>
#include <fstream>

class Persona{
public:
	std::string Nombre_p;
	std::string Apellido_p;
	Persona(std::string Nombre_p_, std::string Apellido_p_){
		Nombre_p=Nombre_p_;
		Apellido_p=Apellido_p_;
	}
	const std::string get_Nombre_p(){
		return Nombre_p;
	}
	const std::string get_Apellido_p(){
		return Apellido_p;
	}
	void create_file(){
		std::fstream Nombre;
		Nombre.open("Nombre", std::ios::out);
	}
};

class Administrador{ // : public Persona{
public: 
	std::string Usuario;
	std::string correo;
	std::string contrasena;
	Administrador(std::string Usuario_, std::string correo_, std::string contrasena_){
		Usuario=Usuario_;
		correo=correo_;
		contrasena=contrasena_;
	}
	const std::string get_Usuario(){
		return Usuario;
	}
	const std::string get_correo(){
		return correo;
	}
	const std::string get_contrasena(){
		return contrasena;
	}
};
class Empleado { //: public Persona{
public:
	std::string Usuario;
	std::string correo;
	std::string contrasena;
	Empleado(std::string Usuario_, std::string correo_, std::string contrasena_){
		Usuario_=Usuario;
		correo_=correo;
		contrasena_=contrasena;
	}
	const std::string get_Usuario(){
		return Usuario;
	}
	const std::string get_correo(){
		return correo;
	}
	const std::string get_contrasena(){
		return contrasena;
	}
};


class Mascota{
private:
	std::string nombreM;
	int edad;
	std::string especie;
public:
	Mascota(std::string nombre_m="", int edad_m=0, std::string especie_m=""){
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

class Cliente {//:public Persona, Mascota{
public:
	int compras;
	int cant_mascota;
	Mascota *mascota=new Mascota[cant_mascota];
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
	float total;
	Venta(int fecha_, float total_){
		fecha=fecha_;
		total=total_;
	}
	~Venta(){
		fecha=0;
		total=0;
	}
	const int get_fecha(){
		return fecha;
	} 
	const float get_total(){
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
	float precio;
	Detalle_Venta(int cantidad_, float precio_){
		cantidad=cantidad_;
		precio=precio_;
	}
	~Detalle_Venta(){
		cantidad=0;
		precio=0;
	}
	const int get_cantidad(){
		return cantidad;
	}
	const float get_precio(){
		return precio;
	}
	void print(){
		std::cout<<cantidad;
		std::cout<<precio;
	}
};

class Servicio{
public:
	bool vacunas;
	bool baño;
	bool diagnostico;
};

class Interfaz{
public:
	std::string Correo;
	std::string Contraseña;
	const void Menu(){
		std::cout<<"|----------------------------------------------|\n";
		std::cout<<"|              Inicio de sesion                |\n";
		std::cout<<"|----------------------------------------------|\n";
		std::cout<<"| Ingrese correo: ";
		std::cin>>Correo;
		std::cout<<"| Ingrese contraseña: ";
		std::cin>>Contraseña;
		std::cout<<"|----------------------------------------------|\n";
		return;
	}
};
int main() 
{
	Interfaz x;
	x.Menu();
	return 0;
}
