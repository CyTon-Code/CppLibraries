//
// Created by cytoncode on 12.03.2021.
//



#ifndef CPPLIBRARIES_FOR_H
#define CPPLIBRARIES_FOR_H
// TODO узнать как с помощью define сменить for на синтаксический пайтон.
//#define in :
//#define _ auto_type
//#define foreach for (auto
//#define in ","
//#define foreach(i, list)for(auto i: list)
//#define foreac (i , list) foreach( i,  list)

#ifndef for_python_v1
#define for_python_v1
//#define foor(start, stop, step) for(int i=start,n=stop;i<n;i+=step)
// #define fo(stop) foor(0, stop, 1)
#define for for (auto
#define in(list) : list)
#define $

void print(auto args) {
    for i in (args) {
        cout << i << " ";
    }
    cout << endl;
}

#endif // for_python_v1


#ifdef for_python_arg
//#define for_python_arg

#define for(i, list) for (auto i: list)
#define $
#define in

void print(auto args) {
    for(i, args) {
        cout << i << " ";
    }
    cout << endl;
}

#endif //for_python_arg


#ifdef for_python
//#define for_python

#define for for (auto
#define $ ){
#define in :

void print(auto args) {
    for i in args $
        cout << i << " ";
    }
    cout << endl;
}

#endif //for_python

#endif //CPPLIBRARIES_FOR_H
