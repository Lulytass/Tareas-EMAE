#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

class Vendedor
{
public:
	Vendedor(char[]="",int=0,float=0,int=0);
	void setNombre(char[]);
	void setSueldo(int);
	void setVentas(float);
	void setComision(int);
	const char* getNombre();
	int getSueldo();
	float getVentas();
	int getComision();
	float sueldoACobrar();
	private:
		char nombre[15];
		float ventas;
		int sueldo, comision;
};

#endif // CLASS_H_INCLUDED
