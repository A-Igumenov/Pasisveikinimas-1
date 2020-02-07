#include <iostream>

using namespace std;

void Iremink(string, char);

int main()
{
    string vardas;
    cout<<"Iveskite savo varda: \n";
    cin>>vardas;

    char lytis;
    cout<<"Iveskite savo lyti: (v arba m) \n";
    cin>>lytis;
    Iremink(vardas, lytis);
}
void Iremink(string vardas, char lytis)
{
    string eil1 = "", eil2 = "", eil3 = "", eil4 = "", eil5 = "";
    int ilgis;

    if(lytis == 'v')
    {
         ilgis = 2 + 9 + vardas.length() + 3;
    }
    else
    {
         ilgis = 2 + 8 + vardas.length() + 3;
    }

    for(int i = 0; i< ilgis; i++)
    {
        eil1 += "*";
    }

    eil2 += "*";
    for(int i = 0; i< ilgis-2; i++)
    {
        eil2 += " ";
    }
    eil2+= "*";

    if(lytis == 'v')
    {
        eil3+= "* Sveikas, " + vardas + "! *";
    }
    else
    {
        eil3+= "* Sveika, " + vardas + "! *";
    }


    eil4 = eil2;
    eil5 = eil1;
    cout<<eil1<<endl;
    cout<<eil2<<endl;
    cout<<eil3<<endl;
    cout<<eil4<<endl;
    cout<<eil5<<endl;

}
