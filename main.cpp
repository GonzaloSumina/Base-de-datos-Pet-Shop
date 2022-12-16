#pragma once
#include <iostream>
#include <cstring>
#include "Persona.h"
#include "Administrador.h"
#include "Empleado.h"
#include "Mascota.h"
#include "Cliente.h"
#include "Detalle_Venta.h"
#include "Producto.h"
#include "Alimentos.h"
#include "Accesorios.h"

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
		Ad[0].set_Nombre_p("Gonzalo");
		Ad[0].set_Apellido_p("Sumina");
		Ad[0].set_Usuario("a1b2c3d4");
		Ad[0].set_correo("abcd@ucsp.pe");
		Ad[0].set_contrasena("1234");
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
			std::cout<<" (3) Registrar nuevos empleados               \n";
			std::cout<<" (4) Salir                                    \n";
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
									std::cout<<"Ingrese la cantidad: ";
									std::cin>>cant_prod;
									Al[i].set_marca(producto_y);
									Ac[i].set_cantidad(cant_prod);
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
						int cont_cl=0;

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
							for (int i = 0; i < cant_masc; ++i){
								std::cout<<" ===============================================\n";
								std::cout<<"                    Mascota "<<i+1<<"             \n";
								std::cout<<" ===============================================\n";
								std::cout<<"Especie de la mascota: ";
								std::cin>>esp_masc;
								std::cout<<"Nombre de la mascota: ";
								std::cin>>nom_masc;
								std::cout<<"Edad: ";
								std::cin>>edad_masc;
								std::cout<<" ===============================================\n";
								Cl[cont_cl].mascota[i].set_nombreM(nom_masc);
								Cl[cont_cl].mascota[i].set_especie(esp_masc);
								Cl[cont_cl].mascota[i].set_edad(edad_masc);
							}
							Cl[cont_cl].set_Nombre_p(nom_cl);
							Cl[cont_cl].set_Apellido_p(ap_cl);
							Cl[cont_cl].cant_mascota=cant_masc;
						}
						else if (option2==2){
							std::cout<<" ===========================================\n";
							std::cout<<"\tCliente "<<Cl[cont_cl].get_Nombre_p()<<"\t\n";
							std::cout<<" Nombre: "<<Cl[cont_cl].get_Nombre_p()<<std::endl;
							std::cout<<" Apellido: "<<Cl[cont_cl].get_Apellido_p()<<std::endl;
							std::cout<<" Cantidad de mascotas: "<<Cl[cont_cl].cant_mascota<<std::endl;
							for (int i = 0; i < cant_masc; ++i){
								std::cout<<" ===============================================\n";
								std::cout<<"                    Mascota "<<i+1<<"             \n";
								std::cout<<" ===============================================\n";
								std::cout<<" Especie de la mascota: "<<Cl[cont_cl].mascota[i].get_especie()<<std::endl;
								std::cout<<" Nombre de la mascota: "<<Cl[cont_cl].mascota[i].get_nombreM()<<std::endl;
								std::cout<<" Edad: "<<Cl[cont_cl].mascota[i].get_edad()<<std::endl;
								std::cout<<" ===========================================\n";
							}
						}
					}
			        break;
				case 3:
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
				case 4:
					B=false;
					break;
				}
			}
		}

		const void Menu_Empleado(){
		bool H=true;
		while(H){
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
								int unidades;
								std::cout<<"Tipo de producto: (Alimento // Accesorio)";
								std::cin>>tipo_de_producto;
								if(tipo_de_producto=="Alimentos"){
									std::cout<<"Nombre del producto: ";
									std::cin>>producto_cl_Ingresado;
									std::cout<<"Unidades:";
									std::cin>>unidades;
									for(int k=0; k<cont_Al; ++k){
										Detalle_Venta Nueva_venta;
										if(producto_cl_Ingresado==Al[k].get_marca()){
											float Pre;
											Al[k].set_precio(Pre);
											Nueva_venta.cantidad = unidades;
											Nueva_venta.total = unidades*Pre;
											std::cout<<"TOTAL: "<<Nueva_venta.total<<std::endl;
										}
										else{
											std::cout<<"Este producto no se encuentra en el almacen";
										}
									}
								}
								else if (tipo_de_producto=="Accesorio"){
									std::cout<<"Nombre del producto: ";
									std::cin>>producto_cl_Ingresado;
									std::cout<<"Unidades:";
									std::cin>>unidades;
									for(int k=0; k<cont_Ac; ++k){
										Detalle_Venta Nueva_venta;
										if(producto_cl_Ingresado==Ac[k].get_tipo_accesorio()){
											float Pre;
											Ac[k].set_precio(Pre);
											Nueva_venta.cantidad = unidades;
											Nueva_venta.total = unidades*Pre;
											std::cout<<"TOTAL: "<<Nueva_venta.total<<std::endl;
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
				H = false;
				break;
			default:
				break;
			}
		}
	}
};
