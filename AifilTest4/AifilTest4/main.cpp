//
//  main.cpp
//  AifilTest4
//
//  Created by Артем on 22.11.17.
//  Copyright © 2017 Артем. All rights reserved.
//
/*
 TASK4
 
 Имеется простой односвязный список размера N. Необходимо реализовать алгоритм,
 который перепаковывает список так, чтобы за первым элеметом следовал последний,
 затем второй, затем предпоследний и т. д.
 
 Пример работы алгоритма:
 исходный список: 1-2-3-4-5-6-7-8
 перепакованный список: 1-8-2-7-3-6-4-5.
 
 Оценить сложность предложенного алгоритма.
 */


/*
 Оценка сложности:
 
 O(N) - с увеличением входных данных N,  время работы алгоритма(использование памяти либо другой измеряемые параметр) возрастает линейно.
 
 */

#include <iostream>
#include <list>

using namespace std;

list<int> repack(list<int>&);
void print(list<int>&);

int main(int argc, const char * argv[]) {
    
    list<int> l1 = {1,2,3,4,5,6,7,8};
    
    cout<<"Old list:";
    print(l1);
    
    l1=repack(l1);
    
    cout<<"Repacked list:";
    print(l1);
    
    
    
    return 0;
}
list<int> repack(list<int>& l)
{
    list<int> l2;
    

    while(l.size()!=0)
    {
        int first = l.front();
        int last = l.back();
        
        l.pop_back();
        l.pop_front();
        
        l2.push_back(first);
        l2.push_back(last);
        
    }
    
    return l2;
}
void print(list<int>& l)
{
    list<int>::iterator iter;
    for(iter=l.begin();iter!=l.end();iter++)
        cout<< *iter <<' ';
    cout<<endl;
}
