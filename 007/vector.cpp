#include <iostream>
using namespace std;
template<class T>
Vector<T>::Vector(){
    m_nSize=0;
    m_pElements=NULL;
}
template<class T>
Vector<T>::Vector(int size){
    m_nSize=size;
    m_pElements=new T [size];
}

template<class T>
Vector<T>::~Vector(){
    cout<<m_nSize<<endl;
    delete []m_pElements;
}

template<class T>
int Vector<T>::size(){
    return m_nSize;
}

template<class T>
int Vector<T>::inflate(int addSize){
    T *tmp;
    tmp=new T [m_nSize];
    for (int i = 0; i < m_nSize; ++i)
    {
        tmp[i]=m_pElements[i];
    }
    delete []m_pElements;
    m_pElements=tmp;
    m_nSize+=addSize;
}

template<class T>
T& Vector<T>::operator[](int index){
    return m_pElements[index];
}

template<class T>
Vector<T>::Vector(const Vector& r){
    m_nSize=r.m_nSize;
    m_pElements=new T [m_nSize];
    memcpy(m_pElements,r.m_pElements,m_nSize*sizeof(T));
}


