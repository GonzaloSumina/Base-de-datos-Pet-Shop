#include <iostream>
#include <cstring>


class Persona{
protected:
	std::string Nombre_p;
	std::string Apellido_p;
public:
	Persona(std::string Nombre_p_="",std::string Apellido_p_= ""){
		Nombre_p=Nombre_p_;
		Apellido_p=Apellido_p_;
	}
	void set_Nombre_p(std::string Nombre_p_){
		Nombre_p=Nombre_p_;
		return;
	}
	std::string get_Nombre_p() const{
		return Nombre_p;
	}
	void set_Apellido_p(std::string Apellido_p_){
		Apellido_p=Apellido_p_;
		return;
	}
	std::string get_Apellido_p() const{
		return Apellido_p;
	}
};

class Administrador : public Persona{
private: 
	std::string Usuario;
	std::string correo;
	std::string contrasena;
public:
	Administrador(std::string Nombre_p_="",std::string Apellido_p_= "", std::string Usuario_="",std::string correo_="", std::string contrasena_="") : Persona(Nombre_p_, Apellido_p_){
		Usuario=Usuario_;
		correo=correo_;
		contrasena=contrasena_;
	}
	std::string get_Usuario() const{
		return Usuario;
	}
	void set_Usuario(std::string Usuario_){
		Usuario=Usuario_;
	}
	std::string get_correo(){
		return correo;
	}
	void set_correo(std::string correo_){
		correo=correo_;
	}
	std::string get_contrasena() const{
		return contrasena;
	}
	void set_contrasena(std::string contrasena_){
		contrasena=contrasena_;
	}
};
class Empleado : public Persona{
private: 
	std::string Usuario;
	std::string correo;
	std::string contrasena;
public:
	Empleado(std::string Nombre_p_="",std::string Apellido_p_= "", std::string Usuario_="",std::string correo_="", std::string contrasena_="") : Persona(Nombre_p_, Apellido_p_){
		Usuario=Usuario_;
		correo=correo_;
		contrasena=contrasena_;
	}
	std::string get_Usuario() const{
		return Usuario;
	}
	void set_Usuario(std::string Usuario_){
		Usuario=Usuario_;
	}
	std::string get_correo(){
		return correo;
	}
	void set_correo(std::string correo_){
		correo=correo_;
	}
	std::string get_contrasena() const{
		return contrasena;
	}
	void set_contrasena(std::string contrasena_){
		contrasena=contrasena_;
	}
};
class Fecha{
private:
	int *fecha;
	int dia, mes, año;
public:
	Fecha(){
		fecha=nullptr;
		fecha=new int [3];
	}
	int set_fecha(){
		fecha[0]=dia;
		fecha[1]=mes;
		fecha[2]=año;
		return 0;
	}
};

class Mascota{
private:
	std::string nombreM;
	Fecha F ;
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
  	std::string get_nombreM() const{
  		return nombreM;
  	}
  	void set_nombreM(std::string nombreM_){
  		nombreM= nombreM_;
  	}
  	std::string get_especie() const{
  		return especie;
  	}
  	void set_especie(std::string especie_){
  		especie= especie_;
  	}
  	int get_edad() const{
  		return edad;
  	}
  	void set_edad(int edad_){
  		edad=edad_;
  	}
  	void set_fecha_nacimiento(){
  		F.set_fecha();
  	}
};

class Cliente : public Persona{
public:
	int compras;
	int cant_mascota;
	Mascota *mascota;
	Cliente(std::string Nombre_p_="", std::string Apellido_p_= "", int compras_=0, int cant_mascota_=0) : Persona(Nombre_p_, Apellido_p_){
		compras=compras_;
		cant_mascota=cant_mascota_;
		mascota = nullptr;
		mascota=new Mascota[cant_mascota];
	}
};
//
class Detalle_Venta{	
public:
	int cantidad;
	float precio;
	Detalle_Venta(int cantidad_=0, float precio_=0){
		cantidad=cantidad_;
		precio=precio_;
	}
	~Detalle_Venta(){
		cantidad=0;
		precio=0;
	}
	int get_cantidad(){
		return cantidad;
	}
	float get_precio(){
		return precio;
	}
	void print(){
		std::cout<<cantidad;
		std::cout<<precio;
	}
};

//Registro de productos
class Producto{
protected:
	float precio;
	//int ID;
public:
	Producto(float precio_=0/*, int ID_=0*/){
		precio=precio_;
		//ID=ID_;
	}
  	const float get_precio(){
  		return precio;
  	}
  	const void set_precio(float precio_){
  		precio=precio_;
  	}
  	/*const int get_ID(){
  		return ID;
  	}*/
};

class Alimentos : public Producto{
private:
	std::string marca;
	int cantidad_;
public:
	Alimentos(float precio_=0/*, int ID_=0*/, std::string marca_="", int cantidad_=0) : Producto(precio_/*, ID_*/){
		marca=marca_;
		cantidad_=this->cantidad_;
	}
  	std::string get_marca() const {
  		return marca;
  	}
  	void set_marca(std::string marca_){
  		marca=marca_;
  	}
  	int get_cantidad() const {
  		return cantidad_;
  	}
  	void set_cantidad(int cantidad_){
  		cantidad_=this->cantidad_;
  	}
};

class Accesorios : public Producto{
private:
	std::string tipo_accesorio;
	int cantidad_;
public:
	Accesorios(float precio_=0/*, int ID_=0*/, std::string tipo_accesorio_="", int cantidad_=0) : Producto(precio_/*, ID_*/){
		tipo_accesorio=tipo_accesorio_;
		this->cantidad_=cantidad_;
	}
	void print(){
    	std::cout<<tipo_accesorio<<std::endl;
    	std::cout<<cantidad_<<std::endl;
  	}
  	std::string get_tipo_accesorio() const {
  		return tipo_accesorio;
  	}
  	void set_tipo_accesorio(std::string tipo_accesorio_){
  		tipo_accesorio=tipo_accesorio_;
  	}
  	int get_cantidad() const {
  		return cantidad_;
  	}
  	void set_cantidad(int cantidad_){
  		this->cantidad_=cantidad_;

  	}

};

//Registro de Ventas
class Venta{
private:
	float total;
	Fecha F;
public:
	Venta(float total_=0){
		total=total_;
	}
	~Venta(){
		total=0;
	}
	float get_total(){
		return total;
	}
	void set_total(float total_){
		total=total_;
	}
	void print(){
		//std::cout<<F.get_fecha;
		std::cout<<total;
	}
};


/*class Servicio_Calendario{
private:
	int calendario[7][12];
};*/

class Interfaz : public Persona{
private:
	Alimentos *Al;
	Accesorios *Ac;
	Administrador *Ad;
	Empleado *Em;
	Cliente *Cl;
public:
	int cont_Al;
	int cont_Ac;
	int cont_Ad;
	int cont_Em;
	int cont1, cont2;
	bool Tipo_Ad;
  	bool loop_;
	int option, option2, option3;
	std::string producto_x;
	std::string producto_y;
	int cant_prod;
	Interfaz(std::string Nombre_p_="",std::string Apellido_p_= "") : Persona(Nombre_p_, Apellido_p_){
		cont_Ad=3;
		cont_Ac=0;
		cont_Al=0;
		cont1=0;
		cont2=0;
		Al=nullptr;
		Ac=nullptr;
		Em=nullptr;
		Ad=nullptr;
		Cl=nullptr;
		Al=new Alimentos [cont_Al];
		Ac=new Accesorios [cont_Ac];
		Ad=new Administrador [cont_Ad];
		Em=new Empleado[8];
		Cl=new Cliente[10];
	}
	const void Menu(){
		std::string Correo;
		std::string Contraseña;
		bool loop_=true;
		while(loop_){
			std::cout<<"|----------------------------------------------|\n";
			std::cout<<"|                    PetShop                   |\n";
			std::cout<<"|----------------------------------------------|\n";
			std::cout<<"| (1) Iniciar sesion                           |\n";
			std::cout<<"| (2) Salir                                    |\n";
			std::cout<<"|----------------------------------------------|\n";
			std::cin>>option;
			switch(option){
				case 1:
					std::cout<<"|----------------------------------------------|\n";
					std::cout<<"|              Inicio de sesion                |\n";
					std::cout<<"|----------------------------------------------|\n";
					std::cout<<"| Ingrese correo o usuario: ";
					std::cin>>Correo;
					std::cout<<"| Ingrese contraseña: ";
					std::cin>>Contraseña;
					std::cout<<"|----------------------------------------------|\n";
					for (int i=0; i<cont_Ad; ++i){
						if(Ad[i].get_correo()==Correo && Ad[i].get_contrasena()==Contraseña){
							Tipo_Ad=true;
							loop_=false;
							break;
						}
						else if(Em[i].get_correo()==Correo && Em[i].get_contrasena()==Contraseña){
							Tipo_Ad=false;
							loop_=false;
							break;
						}
						else{
							std::cout<<"El correo o la contraseña esta mal. \n";
							break;
						}
					}
			        break;
				case 2:
					return;
				default:
					break;
			}
		}
	}
	const void Menu_Administrador(){
		std::string Correo;
		std::string Contraseña;
		std::string Name;
		std::string LastName;
		bool B=true;
		while(B){
			std::cout<<" =============================================\n";
			std::cout<<"    Bienvenido  "<<Ad[0].get_Usuario()<<" |\n";
			std::cout<<" =============================================\n";
			std::cout<<" ¿Que desea revisar?                          \n";
			std::cout<<" (1) Registro de productos                    \n";
			std::cout<<" (2) Registro de clientes                     \n";
			std::cout<<" (3) Registro de ventas                       \n";
			std::cout<<" (4) Registrar nuevos empleados               \n";
			std::cout<<" (5) Salir                                    \n";
			std::cout<<" =============================================\n";
			std::cin>>option;
			bool T=true;
			switch(option){
				case 1:
					while(T){
						std::cout<<" ==============================================\n";
						std::cout<<"             Registro de Productos            \n";
						std::cout<<" ==============================================\n";
						std::cout<<" (1) Visualizar productos almacenados         \n";
						std::cout<<" (2) Registrar nuevos productos               \n";
						std::cout<<" (3) Regresar                                 \n";
						std::cout<<" ==============================================\n";
						std::cin>>option2;
						if (option2==3){
							T=false;
							break;
						}
						std::cout<<" =============================================\n";
						std::cout<<"              Tipo de producto                \n";
						std::cout<<" =============================================\n";
						std::cout<<" (1) Accesorios                               \n";
						std::cout<<" (2) Alimentos                                \n";
						std::cout<<" =============================================\n";
						std::cin>>option3;
						if(option2==1){
							if(option3==1){
								for (int i=0; i<cont_Ac; ++i){
									std::cout<<"===============================================\n";
									std::cout<<" "<<i+1<<" | \t\t"<<Ac[i].get_tipo_accesorio()<<"\t"<<Ac[i].get_cantidad()<<"\t\n";
								}
							}
							else if(option3==2){
								for (int i=0; i<cont_Al; ++i){
									std::cout<<"===============================================\n";
									std::cout<<" "<<i+1<<" | \t\t"<<Al[i].get_marca()<<"\t"<<Ac[i].get_cantidad()<<"\t\t\n";
								}
							}
						}
						else if (option2==2){
							if(option3==1){
								std::cout<<"Ingrese la cantidad de productos: ";
								std::cin>>cont_Ac;
								for (int i=0; i<cont_Ac; ++i){
									std::cout<<cont_Ac;
									std::cout<<"Ingrese el/los producto(s): ";
									std::cin>>producto_x;
									std::cout<<"Ingrese la cantidad: ";
									std::cin>>cant_prod;
									Ac[i].set_tipo_accesorio(producto_x);
									Ac[i].set_cantidad(cant_prod);								
								}
							}
							else if(option3==2){
								std::cout<<"Ingrese la cantidad de productos: ";
								std::cin>>cont_Al;
								for (int i=0; i<cont_Al; ++i){
									std::cout<<cont_Al;
									std::cout<<"Ingrese el/los producto(s): ";
									std::cin>>producto_y;
									Al[i].set_marca(producto_y);
								}
							}
						}
					}
			        break;
				case 2:
					while(T){
						std::string nom_cl;
						std::string ap_cl;
						std::string nom_masc;
						std::string esp_masc;
						int edad_masc;
						int cant_masc;
						int cont_cl=1;

						std::cout<<" ===============================================\n";
						std::cout<<"              Registro de clientes            \n";
						std::cout<<" ===============================================\n";
						std::cout<<" (1) Editar informacion                       \n";
						std::cout<<" (2) Consultar informacion                    \n";
						std::cout<<" (3) Regresar                                 \n";
						std::cout<<" ===============================================\n";
						std::cin>>option2;
						if (option2==3){
							T=false;
							break;
						}
						if (option2==1){
							std::cout<<"Ingrese los datos de cliente.\n";
							std::cout<<"Nombre: ";
							std::cin>>nom_cl;
							std::cout<<"Apellido: ";
							std::cin>>ap_cl;
							std::cout<<"Cantidad de mascotas: ";
							std::cin>>cant_masc;
							std::cout<<"Especie de la mascota: ";
							std::cin>>esp_masc;
							std::cout<<"Nombre de la mascota: ";
							std::cin>>nom_masc;
							std::cout<<"Edad: ";
							std::cin>>edad_masc;
							Cl[0].set_Nombre_p(nom_cl);
							Cl[0].set_Apellido_p(ap_cl);
							Cl[0].cant_mascota=cant_masc;
							Cl[0].mascota[0].set_nombreM(nom_masc);
							Cl[0].mascota[0].set_especie(esp_masc);
							Cl[0].mascota[0].set_edad(edad_masc);
						}
						else if (option2==2){
							std::cout<<" ===========================================\n";
							std::cout<<"\tCliente "<<Cl[0].get_Nombre_p()<<"\t\n";
							std::cout<<" Nombre: "<<Cl[0].get_Nombre_p()<<std::endl;
							std::cout<<" Apellido: "<<Cl[0].get_Apellido_p()<<std::endl;
							std::cout<<" Cantidad de mascotas: "<<Cl[0].cant_mascota<<std::endl;
							std::cout<<" Especie de la mascota: "<<Cl[0].mascota[0].get_especie()<<std::endl;
							std::cout<<" Nombre de la mascota: "<<Cl[0].mascota[0].get_nombreM()<<std::endl;
							std::cout<<" Edad: "<<Cl[0].mascota[0].get_edad()<<std::endl;
							std::cout<<" ===========================================\n";
						}
					}
			        break;
				case 3:
					std::cout<<" ==============================================\n";
					std::cout<<"              Registro de ventas              \n";
					std::cout<<" ==============================================\n";
					std::cout<<" (1) Visualizar historial                     \n";
					std::cout<<" (2) Registrar una nueva compra               \n";
					std::cout<<" (3) Regresar                                 \n";
					std::cout<<" ==============================================\n";
					std::cin>>option2;
					break;
				case 4:
					std::cout<<" ===============================================\n";
					std::cout<<"                  Registrarse                 \n";
					std::cout<<" ===============================================\n";
					std::cout<<" Ingrese correo: ";
					std::cin>>Correo;
					std::cout<<" Ingrese contraseña: ";
					std::cin>>Contraseña;
					std::cout<<" Ingrese Nombre: ";
					std::cin>>Name;
					std::cout<<" Ingrese Apellido: ";
					std::cin>>LastName;
					std::cout<<" ===============================================\n";
        			Em[cont2].set_Usuario(Name);
					Em[cont2].set_Nombre_p(Name);
					Em[cont2].set_Apellido_p(LastName);
					Em[cont2].set_correo(Correo);
					Em[cont2].set_contrasena(Contraseña);
					++cont2;
					break;
				case 5:
					B=false;
					break;
				}
			}
		}

		const void Menu_Empleado(){
		std::cout<<" ===============================================\n";
		std::cout<<"     Bienvenido  "<<Em[0].get_Usuario()<<" |\n";
		std::cout<<" ===============================================\n";
		std::cout<<" ¿Que desea revisar?                          \n";
		std::cout<<" (1) Registrar una nueva compra               \n";
		std::cout<<" (2) Consultar información de un cliente      \n";
		std::cout<<" (3) Salir                                    \n";
		std::cout<<" ===============================================\n";
		std::cin>>option;
		bool W1=true;
		switch(option){
			case 1:
				while (W1){
					std::string nombre_cl_Ingresado;
					std::string apellido_cl_Ingresado;
					int cantidad_productos;

					std::cout<<"Ingrese el nombre del cliente: ";
					std::cin>>nombre_cl_Ingresado;
					std::cout<<"Ingrese el apellido del cliente: ";
					std::cin>>apellido_cl_Ingresado;
					for (int i=0; i<10; ++i){
						if(nombre_cl_Ingresado==Cl[i].get_Nombre_p() && apellido_cl_Ingresado==Cl[i].get_Apellido_p()){
							std::cout<<"Ingrese la cantidad de productos a vender: ";
							std::cin>>cantidad_productos;
							std::cout<<"Ingrese los productos a vender: ";
							for(int j=0; j<cantidad_productos; ++j){
								std::string producto_cl_Ingresado;
								std::string tipo_de_producto;
								std::cout<<"Tipo de producto: (Alimento // Accesorio)";
								std::cin>>tipo_de_producto;
								if(tipo_de_producto=="Alimentos"){
									std::cout<<"Nombre del producto: ";
									std::cin>>producto_cl_Ingresado;
									for(int k=0; k<cont_Al; ++k){
										if(producto_cl_Ingresado==Al[k].get_marca()){

										}
										else{
											std::cout<<"Este producto no se encuentra en el almacen";
										}
									}
								}
								else if (tipo_de_producto=="Accesorio"){
									std::cout<<"Nombre del producto: ";
									std::cin>>producto_cl_Ingresado;
									for(int k=0; k<cont_Al; ++k){
										if(producto_cl_Ingresado==Al[k].get_marca()){

										}
										else{
											std::cout<<"Este producto no se encuentra en el almacen";
										}
									}
								}
								else {
									std::cout<<"ERROR";
								}
							}
						}
						else{
							std::cout<<"Los datos ingresados no coinciden con ningun cliente registrado";
							W1=false;
						}
					}
				}
		        break;
			case 2:
		        break;
			case 3:
				break;
			default:
				break;
			}
		}

};
int main() 
{
	Interfaz x;
	x.Menu();
	if(x.Tipo_Ad==true){
		x.Menu_Administrador();
	}
	else{
		x.Menu_Empleado();
	}
	return 0;
}
