#include <iostream>
using namespace std;

const int MAX_LINHAS = 3;
const int MAX_COLUNAS = 4;

/* 
  leNotas (notas, linhas, colunas)
  notas: matriz de notas com o tamanho máximo MAX_LINHAS por MAX_COLUNAS.
  linhas: quantidade de linhas da matriz notas.
  colunas: quantidade de colunas da matriz notas.
  Realiza a leitura de notas com valores de 0 até 10.
*/
void leNotas (float notas[MAX_LINHAS][MAX_COLUNAS], int linhas, int colunas) {
  for (int linha = 0; linha < linhas; linha++) {
    for (int coluna = 0; coluna < colunas; coluna++) {
      do {
        cin >> notas[linha][coluna];
      } while (notas[linha][coluna] < 0 || notas[linha][coluna] > 10);
    }
  }
}

/* 
  maiorNota (notas, colunas)
  notas: vetor de notas de uma linha da matriz
  colunas: tamanho do vetor que é igual ao número de colunas da matriz
  RETORNA o maior valor do vetor de notas.
*/
float maiorNota (float notas[MAX_COLUNAS], int colunas) {
  float maior;
  /* 
    maior recebe a primeira nota de notas
    PARA cada coluna do vetor EXECUTE
      SE notas[coluna] > maior
        maior recebe notas[coluna]
      FIM-SE
    FIM-PARA
    RETORNE maior
  */
  return maior;
}

/*
  encontraMaioresNotas (maiores_notas, notas, linhas, colunas)
  maiores_notas: vetor para armazenar a maior nota de cada aluno na matriz. Cada posição do vetor é relacionada a linha de uma matriz.
  notas: matriz de notas de alunos e atividades realizadas.
  linhas: número de alunos
  colunas: número de atividades realizadas
  Ao final da execução da função, o vetor maiores_notas terá as maiores notas dos alunos da matriz.
*/
void encontraMaioresNotas (float maiores_notas[MAX_LINHAS], float notas[MAX_LINHAS][MAX_COLUNAS], int linhas, int colunas) {
  float maior;
  /* 
    PARA cada linha da matriz EXECUTE
      maior recebe maiorNota (notas[linha], colunas)
      maiores_notas[linha] recebe maior
    FIM PARA 
  */
}

/* 
  imprimeMaioresNotas (notas, linhas)
  notas: vetor das maiores notas.
  n: tamanho do vetor.
  IMPRIME cada uma das notas do vetor.
*/
void imprimeMaioresNotas (float notas[MAX_LINHAS], int n) {
  for (int i = 0; i < n; i++)
    cout << notas[i] << "\t";
  cout << endl;
}

int main() {
  float notas[MAX_LINHAS][MAX_COLUNAS];
  float maiores_notas[MAX_LINHAS];
  int nAlunos, nAtividades;

  leNotas (notas, MAX_LINHAS, MAX_COLUNAS);

  encontraMaioresNotas (maiores_notas, notas, MAX_LINHAS, MAX_COLUNAS);

  imprimeMaioresNotas (maiores_notas, MAX_LINHAS);

  return 0;
}
