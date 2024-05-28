#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarTablero(char *tablero[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%s", tablero[i][j]);
    }
    printf("\n");
  }
}

void decision(char *tablero[3][3]) {

  int contador = 0;
  while (contador < 9) {
    int fila, columna;
    printf("Elija que fila desea jugar como X: \n");
    scanf("%d", &fila);
    printf("Elija que columna desea jugar como X: \n");
    scanf("%d", &columna);

    if (strcmp(tablero[fila][columna], "|X|") == 0 ||
        strcmp(tablero[fila][columna], "|O|") == 0) {
      printf("Elija otra posicion, esta ocupada\n");
    } else {
      tablero[fila - 1][columna - 1] = "|X|";
    }
    mostrarTablero(tablero);
    contador++;
    printf("Elija que fila desea jugar como O: \n");
    scanf("%d", &fila);
    printf("Elija que columna desea jugar como O: \n");
    scanf("%d", &columna);

    if (strcmp(tablero[fila][columna], "|X|") == 0 ||
        strcmp(tablero[fila][columna], "|O|") == 0) {
      printf("Elija otra posicion, esta ocupada\n");
    } else {
      tablero[fila - 1][columna - 1] = "|O|";
    }
    mostrarTablero(tablero);
    contador++;
  }
}

void creartablero() {
  char *tablero[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      tablero[i][j] = "| |";
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%s", tablero[i][j]);
    }
    printf("\n");
  }
  decision(tablero);
}

int main(void) {
  creartablero();
  return 0;
}
