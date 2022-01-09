#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    int key_length , matrix_length ;
    string p ;
    cin >> key_length ;
    matrix_length = sqrt(key_length) ;
    unsigned long long k_array [matrix_length][matrix_length] ;
    for (int i = 0 ; i < matrix_length ; i++)
    {
        for ( int j = 0 ; j < matrix_length ; j++)
        {
            cin >> k_array[i][j] ;
        }
    }

    cin >> p ;
    float x = (float)p.size()/ matrix_length ;
    int m = ceil(x) ;
    unsigned long long p_array [m][matrix_length] ;
    while (p.size()% matrix_length != 0)
    {
        p += "X" ;
    }

    int a =0 ;
    for (int i = 0 ; i < m ; i++)
    {
        for (int j = 0 ; j < matrix_length ; j++)
        {
            p_array[i][j] = (p.at(j+a) - 65) ;

        }
        a += matrix_length ;
    }

    char c ;
    for (int i = 0 ; i < m ; i++)
    {
        for ( int j = 0 ; j < matrix_length ; j++)
        {
            unsigned long long  b = 0 ;
            for (int g = 0 ; g < matrix_length ; g++)
            {
                b =  (p_array[i][g] * k_array[j][g]) + b  ;
            }
                c = (b%26) + 65 ;

                cout << c ;
        }
    }
    return 0;
}
