#include "iostream"

using namespace std;

int alum=25,i;
double con,con1, con2,*est;
double promedio,acum;

void estaturas()
{
    est = new double[alum];

    for (i=0;i<alum;i++)
    {
        cout<<"Ingresa la estatura del estudiante "<<i+1<<" :";
        cin>>est[i];

        acum += est[i];
        con++;
        
    }
    promedio = (acum/con);
    cout<<"\n\nEl promedio de las estaturas es: "<<promedio;  
}


void canestaturas()
{
    for (i=0;i<alum;i++)
    {
        if (est[i]>promedio)
        {
            con1++;
        }
        else
        {
            con2++;
        }           
    }
    cout<<"\nLa cantidad de estaturas mayores al promedio es: "<<con1;    
    cout<<"\nLa cantidad de estaturas menores al promedio es: "<<con2;
}

main()
{   

    cout <<"\n\nPromedio de estaturas";
    estaturas();
    canestaturas();

    cout<<"\n\n";
    system ("PAUSE");
    
}