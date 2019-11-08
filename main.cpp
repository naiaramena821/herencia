#include <iostream>
#include <string>
using namespace std;

class Animal
{
    protected:
        string rasa;
        int esterilizacion;
        string duenio;
    public:
      Animal();
      Animal(string rasa_, int esterilizacion_, string duenio_)
      {
          rasa = rasa_;
          esterilizacion = esterilizacion_;
          duenio = duenio_;
      }
      string getrasa()
      {
          return rasa;
      }
      int getesterilizacion()
      {
          return esterilizacion;
      }
      string getduenio()
      {
          return duenio;
      }
};

class Perro: public Animal
{
    private:
        string nombre;
    public:
        Perro( string _rasa, int _esterilizacion,string _duenio, string _nombre ):
            Animal( _rasa,_esterilizacion,_duenio), nombre(_nombre){}
        string getnombre()
        {
            return nombre;
        }
};

class Gato: public Animal
{
    private:
        string name;
    public:
        Gato(string r_asa,int e_sterilizacion,string d_uenio, string _name):
            Animal(r_asa, e_sterilizacion, d_uenio), name(_name){}
        string getname()
        {
            return name;
        }
};
int main()
{
    Animal a("husky siberiano",60,"Alejandro Jimenez");
    cout << "raza: " << a.getrasa() << endl;
    cout <<"costo de esterilizacion: " << a.getesterilizacion() << endl;
    cout <<"duenio: " << a.getduenio() << endl;
    cout << endl;
    Gato g("Persa",85,"Miguel Ramos","Pumpkin");
    cout << "raza: " << g.getrasa() << endl;
    cout <<"costo de esterilizacion: " << g.getesterilizacion() << endl;
    cout <<"duenio: " << g.getduenio() << endl;
    cout << "nombre: " << g.getname() << endl;
    cout << endl;
    Perro p("Pug",89,"Cristopher Ramos","Mimun");
    cout << "raza: " << p.getrasa() << endl;
    cout <<"costo de esterilizacion: " << p.getesterilizacion() << endl;
    cout <<"duenio: " << p.getduenio() << endl;
    cout << "nombre: " << p.getnombre() << endl;
    cout << endl;
    Animal *ptr = &a; /*la dirección de a*/
    cout << "raza: " << ptr -> getrasa() << endl;
    cout <<"costo de esterilizacion: " << ptr -> getesterilizacion() << endl;
    cout <<"duenio: " << ptr -> getduenio() << endl;
    cout << endl;


}
