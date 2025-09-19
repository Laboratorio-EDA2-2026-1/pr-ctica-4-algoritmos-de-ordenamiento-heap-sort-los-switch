/*
 * Objetivo: Completar las funciones Max-Heapify, Build-Max-Heap y Heap-Sort.
 * Entradas (stdin):
 *   n

 *   a1 a2 ... an

 * Salida (stdout):
 *   a1 a2 ... an  // en orden ascendente
 */

#include <stdio.h>
#include <stdlib.h>

/* PROTOTIPOS: NO CAMBIAR LAS FIRMAS */
void max_heapify(int a[], int n, int i);
void build_max_heap(int a[], int n);
void heap_sort(int a[], int n);

/* MAIN de prueba mínima */
int main(void) {
    int n; if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int *a = (int*)malloc(sizeof(int) * n);
    if (!a) return 0;
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);

    heap_sort(a, n);

    for (int i = 0; i < n; ++i) {
        if (i) putchar(' ');
        printf("%d", a[i]);
    }
    putchar('
');

    free(a);
    return 0;
}

/* IMPLEMENTAR AQUÍ */

// Función auxiliar para hacer intercambios

void exchange(int x, int y) {
    int temporal = x;
    x = y;
    y = temp;
}
void max_heapify(int a[], int n, int i) {
    
    // Declaramos las variables
    
    int largest = 0;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Hacemos las comparaciones

    if (a[i] < a[left] && left > n) {
        largest = left
    } else {
        largest = i;
    } 

    if (a[largest] < a[right] && right > n) {
        largest = r;   
    }

    if (largest != i) {

        // Hacemos el intercambio 
        exchange(a[i], a[largest]);
    
    }

        // Aplicamos recursividad

        max_heapify(a, n, largest);
    }
}

void build_max_heap(int a[], int n) {
        for (int i = n/2 -1; i<=0;--i){
        max_heapify(a, n, i );
}

void heap_sort(int a[], int n) {
    /* TODO */
}
