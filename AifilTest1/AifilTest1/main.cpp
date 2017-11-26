//
//  main.cpp
//  AifilTest1
//
//  Created by Артем on 22.11.17.
//  Copyright © 2017 Артем. All rights reserved.
//
/*
 TASK1
 
 Напишите функцию, которая перебирает натуральные числа от 1 до N включительно
 и раскладывает каждое число на простые множители. Результат можно выводить на
 экран либо копить в любой структуре данных.

*/

#include <iostream>
#include <cmath>
using namespace std;

void simpleMultipliers(int);

void simpleMultipliers2(int);

int main(int argc, const char * argv[])
{
    
    simpleMultipliers(100);
    
    
    return 0;
}
void simpleMultipliers2(int N)
{
    for (int z=1;z<=N;z++)
    {
    int k =z;
    int i = 2;
    while(i<k)
    {
        while (k % i == 0)
        {
            cout<<i<<' ';
            k = k/i;
        }
        i = i + 1;
    }
    if(k > 1)
        cout<<k<<' ';
        
    cout<<endl;
    }
}


void simpleMultipliers(int N)
{
for(int i = 1;i<=N;i++)
{
    int k = i;
    cout<<k<<": ";
    
    while (k%2==0)
        {
            cout<<2<<' ';
            k = k/2;
        }
        
        //Find odd multipliers
        
        int j =3;
        int max_factor = sqrt(k);
        
        while(j <= max_factor)
        {
            while(k%j==0)
            {
                cout<<j<<' ';
                k=k/j;
                
                max_factor = sqrt(k);
            }
            j=j+2;
        }
        
        if(k>1)
            cout<<k;
        
        
        cout<<endl;
    
}
    
}
