#include <cstdio>

int main() {
  int gal1, quart1, pint1, cup1, oz1;
  printf("Ingresa la cantidad de galones, cuartas, pintas, tazas y onzas: ");
  scanf("%d%d%d%d%d", &gal1, &quart1, &pint1, &cup1, &oz1);

  // Convertimos las unidades a galones.
  int gal2 = gal1 + quart1 / 4 + pint1 / 8 + cup1 / 16 + oz1 / 128;
  quart1 = quart1 % 4 + pint1 % 8 * 2 + cup1 % 16 * 8 + oz1 % 128 * 32;
  pint1 = quart1 / 8;
  quart1 %= 8;
  cup1 = pint1 / 2;
  pint1 %= 2;
  oz1 = cup1 * 8 + quart1 * 4;
  cup1 = 0;
  quart1 = 0;

  printf("La cantidad es: %d galones, %d cuartas, %d pintas, %d tazas y %d onzas\n", gal2, quart1, pint1, cup1, oz1);

  return 0;
}

