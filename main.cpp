#include <iostream>

using namespace std;

void Iremink(string);

int main()
{
    string vardas;
    std::cin>>vardas;
    Iremink(vardas);
}
void Iremink(string vardas)
{
    string eil1 = "", eil2 = "", eil3 = "", eil4 = "", eil5 = "";
    int ilgis;
    string temp = "s";
    if(vardas[vardas.length()-1] == temp[0])
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

    if(vardas[vardas.length()-1] == temp[0])
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
