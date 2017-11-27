//
//  main.cpp
//  AifilTest2
//
//  Created by Артем on 22.11.17.
//  Copyright © 2017 Артем. All rights reserved.
//
/*
 TASK2
 
 Напишите код, который решает следующую задачу:
 Имеется вектор размера N. Необходимо разделить его на M < N равных частей
 (то есть чтобы количество элементов в каждой части было одинаковым).
 Части не должны пересекаться и должны покрывать весь вектор (исключение -
 допускаются промежутки от начала вектора до начала первой части и от конда
 последней части до конца вектора, но в этом случае необходимо добиться,
 чтобы разница в величине этих промежутков была минимальной).
 Результатом должны являться индексы начала и конца каждой части
 (либо вывод на экран, либо сохранение в любую структуру данных).

*/

#include <iostream>
#include <vector>


using namespace std;


int main(int argc, const char * argv[]) {
    
    int N,M;
 
    cout << "Enter vector size N=";
    cin >> N;
    
    cout<< "Enter number of parts M=";
    cin >> M;
    
    if ( M > N)
    {
        cout << "Error M must be less then N!"<<endl;
        exit(1);
    }
    
    vector<int> v(N);
    
    //Number of elements of each parts
    int temp = N / M;
    
    //Number of elements out of parts
    int rest = N % M;
    
    int start = rest/2;
    
    int end = N - (rest-rest/2);
    
    cout<<"\nIdexes of divided parts:"<<endl;
    for (int i = start;i<end;i+=temp)
    {
        cout<< i << ':' << i+(temp-1)<<endl;
    }
    
    
    return 0;
}
