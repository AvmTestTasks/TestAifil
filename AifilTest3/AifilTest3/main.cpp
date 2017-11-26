//
//  main.cpp
//  AifilTest3
//
//  Created by Артем on 22.11.17.
//  Copyright © 2017 Артем. All rights reserved.
//
/*
 TASK3
 
 Напишите простую реализацию функции для разбора параметров командной строки (getopt).
 Полагаем, что нам требуется структура данных, содержащая заранее известный допустимый
 набор параметров различного типа - строки, целые, числа с плавающей точкой и т. д.,
 а также признак, является ли этот параметр обязательным.
 
 
 Полагаем, что параметры могут передаваться только в "длинном" формате с
 обязательным "--" перед именем параметра (то есть "--my-option-name my-option-val",
 "--my-option-name=my-option-val", "--my-boolean-option").
 Параметров может быть несколько.
 Функция должна обязательно уметь обрабатывать параметр "--help"
 (если он указан в списке параметров при вызове функции),
 выводящий пример использования (необязательные параметры должны выводиться в квадратных скобках).
 
 
 
 */
#include <iostream>


 using namespace std;

#define    no_argument       0
#define required_argument    1
#define optional_argument    2


struct option {
    const char *name;
    int         has_arg;
    int        *flag;
    int         val;
};

static struct option long_options[] = {
    {"add",     required_argument, 0,  0 },
    {"append",  no_argument,       0,  0 },
    {"delete",  required_argument, 0,  0 },
    {"verbose", no_argument,       0,  0 },
    {"create",  required_argument, 0, 'c'},
    {"file",    required_argument, 0,  0 }
};

int getopt_long (int argc, char *const *argv, const char *shortopts,
                 const struct option *longopts, int *longind);

int main(int argc, char * argv[])
{
    
    
    
    
    
    return 0;
}


