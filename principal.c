#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main()
{
    FILE *arquivo = fopen("trianguloABC.txt", "r");
    int numVertices;

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }


    fscanf(arquivo, "%d", &numVertices);

    Ponto *vertices = (Ponto *)malloc(numVertices * sizeof(Ponto));

    if (vertices == NULL)
    {
        printf("Erro. \n");
        fclose(arquivo);
        return 1;
    }


    for (int i = 0; i < numVertices; i++)
    {
        fscanf(arquivo, "%f %f", &vertices[i].X, &vertices[i].Y);
    }

    fclose(arquivo);
    float area = calculoDaArea(vertices, numVertices);
    printf("A area do poligono e: %.2f\n", area);

        return 0;
}
