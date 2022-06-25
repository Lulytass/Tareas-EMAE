#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

class Obrero
{
public:
	Obrero(char[]="", int=0, float=0);
	void setNombre(char[]);
	void setHoras(int);
	void setPrecio(float);
	const char* getNombre();
	int getHoras();
	float getPrecio();
	float sueldoACobrar();
private:
	char nombre[15];
	int horas;
	float precio;
};
#endif
