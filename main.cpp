#include <iostream>

using namespace std;
struct Vizitine
{
    string eil1 = "", eil2 = "", eil3 = "";
    string vardas;
    char lytis;
    int plotis;
};
void Iremink(Vizitine);

int main()
{
    Vizitine viz;
    cout<<"Iveskite savo varda: \n";
    cin>>viz.vardas;

    cout<<"Iveskite savo lyti: (v arba m) \n";
    cin>>viz.lytis;


    cout<<"Iveskite norima remelio ploti (eiluciu skaiciu turi buti nelyginis) \n";
    cin>>viz.plotis;

    Iremink(viz);
}
void Iremink(Vizitine viz)
{
    int ilgis;

    if(viz.lytis == 'v')
    {
         ilgis = 2 + 9 + viz.vardas.length() + 3;
    }
    else
    {
         ilgis = 2 + 8 + viz.vardas.length() + 3;
    }

    for(int i = 0; i< ilgis; i++)
    {
        viz.eil1 += "*";
    }

    viz.eil2 += "*";
    for(int i = 0; i< ilgis-2; i++)
    {
        viz.eil2 += " ";
    }
    viz.eil2+= "*";

    if(viz.lytis == 'v')
    {
        viz.eil3+= "* Sveikas, " + viz.vardas + "! *";
    }
    else
    {
        viz.eil3+= "* Sveika, " + viz.vardas + "! *";
    }

    cout<<viz.eil1<<endl;
    for(int i=0; i<(viz.plotis-3)/2;i++, cout<<viz.eil2<<endl);
    cout<<viz.eil3<<endl;
    for(int i=0; i<(viz.plotis-3)/2;i++, cout<<viz.eil2<<endl);
    cout<<viz.eil1<<endl;

}
