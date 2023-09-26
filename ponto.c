#include "ponto.h"

float Area(Ponto *vertices, int numVertices)
{
    float area = 0.0;

  
    for (int i = 0; i < numVertices; i++)
    {
        int j = (i + 1) % numVertices;
        area += (vertices[i].X * vertices[j].Y - vertices[j].X * vertices[i].Y);
    }

    
    area = area / 2.0;
    if (area < 0)
        area = -area;

    return area;
}
