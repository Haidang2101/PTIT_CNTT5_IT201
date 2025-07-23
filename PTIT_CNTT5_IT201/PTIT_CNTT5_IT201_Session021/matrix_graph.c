//
// Created by Admin on 7/23/2025.
//
#include <stdio.h>
#include <stdlib.h>


int MATRIC[4][4];
void matric(){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            MATRIC[i][j] = 0;
        }
    }
}
void addMatric(int U, int V)
{
    MATRIC[U][V] = 1;
    MATRIC[V][U] = 1;
}
void PrintMatric()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", MATRIC[i][j]);
        }
        printf("\n");
    }

}
int main(){
    int U = 0, V = 1;
    matric();
    addMatric(U, V);
    PrintMatric();


    return 0;