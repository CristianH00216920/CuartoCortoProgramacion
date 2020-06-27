#include "iostream"

using namespace std;


int a,i,j;
int n=5;
double promedio,acum,con;


int llenarmatriz()
{
    cout<<"\n\nIngrese la cantidad de alumnos: ";cin>>a;

    double matriz[a][n];

    for (i=0;i<a;i++)
    {
        cout<<"\nnotas del alumno "<<i+1<<"\n";
        for (j=0;j<n;j++)
        {
            cout<<"Calificacion #"<<j+1<<": ";
            cin>>matriz[i][j];

            acum+=matriz[i][j];
            con++;
        }

        promedio = (acum/con);
        cout<<"\nEl promedio para el alumno "<<i+1<<" es de: "<<promedio;

        if (promedio<6)
        {
            cout<<"\nEl alumno reprobo";
        }
        else if (promedio>=6)
        {
            cout<<"\nEl alumno aprobo";
        }
        acum = 0;
        con = 0;
        cout<<"\n";
    }
    return 0;
}



main()
{
    llenarmatriz();

}