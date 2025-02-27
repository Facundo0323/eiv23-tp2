#include <practico.h>


/**
 * @brief Sumar dos enteros de 32 bit
 * 
 * @param A Primer sumando
 * @param B Segundo sumando
 * @return Resultado de la suma 
 */
int32_t suma(int32_t A,int32_t B)
{
    // reemplazar el código de abajo con la solución

    int32_t S;
    S = A + B;

    (void)A;
    (void)B;
    return S;
}

/**
 * @brief Sumar los números de un arreglo en memoria
 * 
 * @param n Cantidad de números
 * @param b Puntero al primer número
 * @return sumatoria de b[0] hasta b[n-1]
 */
int64_t sumatoria(int32_t n,const int32_t *b)
{
    // reemplazar el código de abajo con la solución

    int64_t S;
    int64_t A=0;
    int32_t i=0;
    while (i<n)
    {
        A += b[i];
        i+= 1;
    }
    
    (void)n;
    (void)b;
    return A;
}

/**
 * @brief Encuentra la posicion del máximo elemento de un arreglo
 * 
 * @param n Cantidad de números
 * @param b Puntero al primer número
 * @return Posición del mayor número k tal que b[k] <= b[i] para todo i en {0,..,n-1}
 */
int32_t posicion_maximo(int32_t n,const int32_t *b)
{
    // reemplazar el código de abajo con la 
    int32_t k=0;
    int32_t M,i;

    if(n>1) {
        M = b[k];
        i = 1;
        for(i=1;i<n;i++) {
            if (M < b[i]) {
                M = b[i];
                k = i;
            }
        }
    }

    (void)n;
    (void)b;
    return k;
}

/**
 * @brief Ordenar un arreglo de menor a mayor en el lugar
 *
 * Luego del llamado a esta función debe cumplirse que
 * b[i]<=b[j] para todo i <= j con i,j en {0,..,n-1}
 *  
 * @param n Cantidad de números
 * @param b Puntero al primer número
 */
void ordenar_en_sitio_menor_a_mayor(int32_t n,int32_t *b)
{
    int32_t x, j, k;
    k = n-1;
    while(k>0) {
        j = posicion_maximo(k+1, b);
        x = b[k];
        b[k] = b[j];
        b[j] = x;
        k = k-1;
    }
    (void)n;
    (void)b;
}
