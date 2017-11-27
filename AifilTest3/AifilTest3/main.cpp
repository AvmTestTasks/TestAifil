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
    {"file",    required_argument, 0,  0 },
    {"clone", optional_argument, 0, 0 },
    {"help", no_argument, 0, 0 }
};

int getopt_long (int argc, char *const *argv, const struct option *longopts, int *longind);

void display_usage();

int main(int argc, char * argv[])
{
    int option_index = 0;
    getopt_long(argc,argv, long_options, &option_index);
    
    
    
    
    return 0;
}
int getopt_long (int argc, char *const *argv, const struct option *longopts, int *longind)
{
    static char *place = argv[*longind];
    if( argc = 1)
    {
        cout<<"\nError:No options found!"<<endl;
        display_usage();
        return 1;
    }
    
    if (place[1] && *++place == '-')
    {    /* found "--" */
        *++longind;
    }
    else
    {
        cout<<"\nError:Incorrect option input!"<<endl;
        display_usage();
        return 2;
    }
    
    const char* h_mes = "--help";
    for(int i=0;i<argc;i++)
    {
        if(argv[i]== h_mes)
        {
            display_usage();
            return 0;
        }
            
    }
    return -1;
}
void display_usage()
{
    cout<<"\nAvaliable options:"<<endl;
    cout<<"\n--add argument [flag] [val]";
    cout<<"\n--append  [flag] [val]";
    cout<<"\n--delete  argument [flag] [val]";
    cout<<"\n--file argument [flag] [val]";
    cout<<"\n--clone optional_argument [flag] [val]";
    cout<<"\n--help  [flag] [val]";
    cout<<endl;
}

