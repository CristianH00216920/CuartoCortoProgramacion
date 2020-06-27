#include<stdio.h>
#include<iostream>

using namespace std;

void letters()
{

    char pa[100];
    int i=0;

    cout<<"\n\nIngresa una palabra: ";
    cin>>pa;

    while (pa[i]!='\0')
    {
        if (pa[i] == 'M' || pa[i] == 'm'){
        pa[i]='0';
        }
        if (pa[i] == 'U' || pa[i] == 'u'){
        pa[i]='1';
        }
        if (pa[i] == 'R' || pa[i] == 'r'){
        pa[i]='2';
        }
        if (pa[i] == 'C' || pa[i] == 'c'){
        pa[i]='3';
        }
        if (pa[i] == 'I' || pa[i] == 'i'){
        pa[i]='4';
        }
        if (pa[i] == 'E' || pa[i] == 'e'){
        pa[i]='5';
        }
        if (pa[i] == 'L' || pa[i] == 'l'){
        pa[i]='6';
        }
        if (pa[i] == 'A' || pa[i] == 'a'){
        pa[i]='7';
        }
        if (pa[i] == 'G' || pa[i] == 'g'){
        pa[i]='8';
        }
        if (pa[i] == 'O' || pa[i] == 'o'){
        pa[i]='9';
        }

        i++;
    } 
    cout<<"\n\n"<<pa;
}


main()
{
    letters();

}