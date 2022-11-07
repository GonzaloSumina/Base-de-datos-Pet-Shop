#include <iostream>
#include <string>
#include <fstream>

class Persona{
private:
	std::string Nombre_p;
	std::string Apellido_p;
public:
	Persona(std::string Nombre_p_, std::string Apellido_p_){
		Nombre_p=Nombre_p_;
		Apellido_p=Apellido_p_;
	}
	const void set_Nombre_p(std::string Nombre_p_){
		Nombre_p=Nombre_p_;
	}
	const std::string get_Nombre_p(){
		return Nombre_p;
	}
	const void set_Apellido_p(std::string Apellido_p_){
		Apellido_p=Apellido_p_;
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
private: 
	std::string Usuario;
	std::string correo;
	std::string contrasena;
public:
	Administrador(std::string Usuario_, std::string correo_, std::string contrasena_){
		Usuario=Usuario_;
		correo=correo_;
		contrasena=contrasena_;
	}
	const std::string get_Usuario(){
		return Usuario;
	}
	const void set_Usuario(std::string Usuario_){
		Usuario=Usuario_;
	}
	const std::string get_correo(){
		return correo;
	}
	const void set_correo(std::string correo_){
		correo=correo_;
	}
	const std::string get_contrasena(){
		return contrasena;
	}
	const void set_contrasena(std::string contrasena_){
		contrasena=contrasena_;
	}
};
class Empleado { //: public Persona{
private:
	std::string Usuario;
	std::string correo;
	std::string contrasena;
public:
	Empleado(std::string Usuario_, std::string correo_, std::string contrasena_){
		Usuario_=Usuario;
		correo_=correo;
		contrasena_=contrasena;
	}
	const std::string get_Usuario(){
		return Usuario;
	}
	const void set_Usuario(std::string Usuario_){
		Usuario=Usuario_;
	}
	const std::string get_correo(){
		return correo;
	}
	const void set_correo(std::string correo_){
		correo=correo_;
	}
	const std::string get_contrasena(){
		return contrasena;
	}
	const void set_contrasena(std::string contrasena_){
		contrasena=contrasena_;
	}
};

class Mascota{
private:
	std::string nombreM;
	int *fecha_nacimiento=new int [3];
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
  	const void set_nombreM(std::string nombreM_){
  		nombreM= nombreM_;
  	}
  	const std::string get_especie(){
  		return especie;
  	}
  	const void set_especie(std::string especie_){
  		especie= especie_;
  	}
  	const int get_edad(){
  		return edad;
  	}
  	const void set_edad(int edad_){
  		edad=edad_;
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
private:
	std::string marca;
	int cantidad;
public:
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
  	const void set_marca(std::string marca_){
  		marca=marca_;
  	}
  	const int get_cantidad(){
  		return cantidad;
  	}
  	const void set_cantidad(int cantidad_){
  		cantidad=cantidad_;
  	}
};

class Accesorios{
private:
	std::string tipo_accesorio;
public:
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
  	const void set_tipo_accesorio(std::string tipo_accesorio_){
  		tipo_accesorio=tipo_accesorio_;
  	}

};


class Producto{
private:
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
  	const void set_precio(float precio_){
  		precio=precio_;
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
private:
	bool vacunas;
	bool baÃ±o;
	bool diagnostico;
	int calendario[7][12];
public:
	Servicio(){
		vacunas=false;
		baÃ±o=false;
		diagnostico=false;
	}

};

class Interfaz{
public:
	const void Menu(){
		std::string Correo;
		std::string ContraseÃ±a;
		int option;
		std::cout<<"|----------------------------------------------|\n";
		std::cout<<"|                    PetShop                   |\n";
		std::cout<<"|----------------------------------------------|\n";
		std::cout<<"| (1) Iniciar sesion                           |\n";
		std::cout<<"| (2) Registrarse                              |\n";
		std::cout<<"| (3) Salir                                    |\n";
		std::cout<<"|----------------------------------------------|\n";
		std::cin>>option;
		switch(option){
			case 1:
				std::cout<<"|----------------------------------------------|\n";
				std::cout<<"|              Inicio de sesion                |\n";
				std::cout<<"|----------------------------------------------|\n";
				std::cout<<"| Ingrese correo o usuario: ";
				std::cin>>Correo;
				std::cout<<"| Ingrese contraseÃ±a: ";
				std::cin>>ContraseÃ±a;
				std::cout<<"|----------------------------------------------|\n";
		        break;
			case 2:
				std::cout<<"|----------------------------------------------|\n";
				std::cout<<"|                  Registrarse                 |\n";
				std::cout<<"|----------------------------------------------|\n";
				std::cout<<"| Ingrese correo: ";
				std::cin>>Correo;
				std::cout<<"| Ingrese contraseÃ±a: ";
				std::cin>>ContraseÃ±a;
				std::cout<<"|----------------------------------------------|\n";
		        break;
			case 3:
				break;
		}
	}
};
int main() 
{
	Interfaz x;
	x.Menu();
	return 0;
}
