#include<bits/stdc++.h>
using namespace std;
class CCirculo{
	private:
		float radio;
		float diametro;
	public:
		void setRadio(float Radio){
			radio = Radio;
		}
		void setDiametro(float Diametro){
			diametro = Diametro;
		}
		float getRadio(){
			return radio;
		}
		float getDiametro(){
			return diametro;
		}
		float CalcularSupCirculo(){
			return radio * 3.14159;
		}
		float CalcularPerimetroCirculo(){
			return diametro * 3.14159;
		}
};
int main(){
	float Radio;
	float Diametro;
	cout<<"Ingrese el radio del circulo: "<<endl;
	cin>>Radio;
	cout<<"Ingrese el diametro del circulo: "<<endl;
	cin>>Diametro;
	CCirculo CLocal;
	CLocal.setDiametro(Diametro);
	CLocal.setRadio(Radio);
	cout<<"Radio: "<<CLocal.getRadio()<<endl;
	cout<<"Diametro: "<<CLocal.getDiametro()<<endl;
	cout<<"Superficie: "<<CLocal.CalcularSupCirculo()<<endl;
	cout<<"Perimetro: "<<CLocal.CalcularPerimetroCirculo()<<endl;
	return 0;
}
