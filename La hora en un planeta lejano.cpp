#include <stdio.h>

int main()
 {
  int segundos;
  scanf("%d", &segundos);

  int dias = segundos / (12 * 70 * 50);
  int horas = (segundos % (12 * 70 * 50)) / (70 * 50);
  int minutos = ((segundos % (12 * 70 * 50)) % (70 * 50)) / 50;
  int segundos_restantes = ((segundos % (12 * 70 * 50)) % (70 * 50)) % 50;

  printf("%d %d %d %d", dias, horas, minutos, segundos_restantes);

  return 0;
}
