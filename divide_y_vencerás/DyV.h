#include<iostream>
#include<vector>

using namespace std;
template<typename T>

int BusquedaBinaria(T num, vector<T>& v, int ini, int fin){

    if(ini>fin){
        return -1;
    }
    int medio= (ini+fin) /2;
    if(v[medio]==num){
        return medio;
    }
    else if(v[medio]<num){
        return BusquedaBinaria(num, v, medio+1,fin);
    }
    else{
        return BusquedaBinaria(num, v, ini, medio-1);
    }
}
template<typename T>
int BusquedaBinaria_INV(T num, vector<T>& v, int ini, int fin){

    if(ini>fin){
        return -1;
    }
    int medio= (ini+fin) /2;
    if(v[medio]==num){
        return medio;
    }
    else if(v[medio]<num){
        return BusquedaBinaria_INV(num, v, ini,medio-1);
    }
    else{
        return BusquedaBinaria_INV(num, v, medio+1, fin);
    }
}
template<typename T>
int Partition(vector<T> v, int ini, int fin){
    int j=ini;
    int pivote=v[fin];
    for(int i=ini; i<fin; i++){
        if(v[i]<=pivote){
            swap(v[j],v[i]);
            j++;
        }
    }
swap(v[j], v[fin]);
return j;
}
template<typename T>
void QuickSort (vector<T>& v, int ini, int fin){ 

    if(ini<fin){
        int pivote=Partition(v,ini,fin);
        QuickSort(v, ini, pivot - 1);
        QuickSort(v, pivot + 1, fin);
    }

}

template<typename T>
int PartitionFirst(vector<T>& v, int ini, int fin) {
    swap(v[ini], v[fin]); 
    return Partition(v, ini, fin); 
}

template<typename T>
void QuickSortFirst(vector<T>& v, int ini, int fin) {
    if (ini < fin) {
        int pivote = PartitionFirst(v, ini, fin);
        QuickSortFirst(v, ini, pivote - 1);
        QuickSortFirst(v, pivote + 1, fin);
    }
}



