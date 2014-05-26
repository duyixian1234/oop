#include <iostream>
#include "vector.h"
using namesapce std;

Vector<T>::Vector(){
    m_nSize=0;
    m_pElements=NULL;
}

Vector<T>::Vector(int size){
    m_nSize=size;
    m_pElements=new Vector<T> [n];
}

Vector<T>::~Vector(){
    delete []m_pElements;
}

Vector<T>::Vector(const Vector& r ){
    m_nSize=r.m_nSize;
    m_pElements=new Vector<T> [m_nSize];
    memcpy(m_pElements,r.m_pElements,sizeof(r.m_pElements));
}


