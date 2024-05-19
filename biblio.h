#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void numordinalm(int valor, char *numext){
  int c, d, u;
  char centena[20] = "", dezena[20] = "", unidade[20] = "";
  c = valor / 100;
  d = (valor % 100) / 10;
  u = (valor % 10);
  switch (c) {
  case 1:
    if (d != 0 || u != 0) {
      strcpy(centena, "centésimo ");
    }
    break;
  case 2:
    if (d != 0 || u != 0) {
      strcpy(centena, "ducentésimo ");
    }
    break;
  case 3:
    if (d != 0 || u != 0) {
      strcpy(centena, "tricentésimo ");
    }
    break;
  case 4:
    if (d != 0 || u != 0) {
      strcpy(centena, "quadrigentésimo ");
    }
    break;
  case 5:
    if (d != 0 || u != 0) {
      strcpy(centena, "quingentésimo ");
    }
    break;
  case 6:
    if (d != 0 || u != 0) {
      strcpy(centena, "seiscentésimo ");
    }
    break;
  case 7:
    if (d != 0 || u != 0) {
      strcpy(centena, "septigentésimo ");
    }
    break;
  case 8:
    if (d != 0 || u != 0) {
      strcpy(centena, "octigentésimo ");
    }
    break;
  case 9:
    if (d != 0 || u != 0) {
      strcpy(centena, "nongentésimo ");
    }
    break;
  } // Escreve centena
  switch (d) {
  case 1:
    strcpy(dezena, "décimo ");
    break;
  case 2:
    if (d != 0 && u != 0) {
      strcpy(dezena, "vigésimo ");
    }
    break;
  case 3:
    if (d != 0 && u != 0) {
      strcpy(dezena, "trigésimo ");
    }
    break;
  case 4:
    if (d != 0 && u != 0) {
      strcpy(dezena, "quadragésimo ");
    }
    break;
  case 5:
    if (d != 0 && u != 0) {
      strcpy(dezena, "quinquagésimo ");
    }
    break;
  case 6:
    if (d != 0 && u != 0) {
      strcpy(dezena, "sexagésimo ");
    }
    break;
  case 7:
    if (d != 0 && u != 0) {
      strcpy(dezena, "septuagésimo ");
    }
    break;
  case 8:
    if (d != 0 && u != 0) {
      strcpy(dezena, "octogésimo ");
    }
    break;
  case 9:
    if (d != 0 && u != 0) {
      strcpy(dezena, "nonagésimo ");
    }
    break;
  } // Escreve dezena
  switch (u) {
    case 1:
      strcpy(unidade, "primeiro");
      break;
    case 2:
      strcpy(unidade, "segundo");
      break;
    case 3:
      strcpy(unidade, "terceiro");
      break;
    case 4:
      strcpy(unidade, "quarto");
      break;
    case 5:
      strcpy(unidade, "quinto");
      break;
    case 6:
      strcpy(unidade, "sexto");
      break;
    case 7:
      strcpy(unidade, "sétimo");
      break;
    case 8:
      strcpy(unidade, "oitavo");
      break;
    case 9:
      strcpy(unidade, "nono");
      break;
  }
  strcat(numext, centena);
  strcat(numext, dezena);
  strcat(numext, unidade);
}
void numordinalf(int valor, char *numext){
  int c, d, u;
  char centena[20] = "", dezena[20] = "", unidade[20] = "";
  c = valor / 100;
  d = (valor % 100) / 10;
  u = (valor % 10);
  switch (c) {
  case 1:
    if (d != 0 || u != 0) {
      strcpy(centena, "centésima ");
    }
    break;
  case 2:
    if (d != 0 || u != 0) {
      strcpy(centena, "ducentésima ");
    }
    break;
  case 3:
    if (d != 0 || u != 0) {
      strcpy(centena, "tricentésima ");
    }
    break;
  case 4:
    if (d != 0 || u != 0) {
      strcpy(centena, "quadrigentésima ");
    }
    break;
  case 5:
    if (d != 0 || u != 0) {
      strcpy(centena, "quingentésima ");
    }
    break;
  case 6:
    if (d != 0 || u != 0) {
      strcpy(centena, "seiscentésima ");
    }
    break;
  case 7:
    if (d != 0 || u != 0) {
      strcpy(centena, "septigentésima ");
    }
    break;
  case 8:
    if (d != 0 || u != 0) {
      strcpy(centena, "octigentésima ");
    }
    break;
  case 9:
    if (d != 0 || u != 0) {
      strcpy(centena, "nongentésima ");
    }
    break;
  } // Escreve centena
  switch (d) {
  case 1:
    strcpy(dezena, "décima ");
    break;
  case 2:
    if (d != 0 && u != 0) {
      strcpy(dezena, "vigésima ");
    }
    break;
  case 3:
    if (d != 0 && u != 0) {
      strcpy(dezena, "trigésima ");
    }
    break;
  case 4:
    if (d != 0 && u != 0) {
      strcpy(dezena, "quadragésima ");
    }
    break;
  case 5:
    if (d != 0 && u != 0) {
      strcpy(dezena, "quinquagésima ");
    }
    break;
  case 6:
    if (d != 0 && u != 0) {
      strcpy(dezena, "sexagésima ");
    }
    break;
  case 7:
    if (d != 0 && u != 0) {
      strcpy(dezena, "septuagésima ");
    }
    break;
  case 8:
    if (d != 0 && u != 0) {
      strcpy(dezena, "octogésima ");
    }
    break;
  case 9:
    if (d != 0 && u != 0) {
      strcpy(dezena, "nonagésima ");
    }
    break;
  } // Escreve dezena
  switch (u) {
    case 1:
      strcpy(unidade, "primeira");
      break;
    case 2:
      strcpy(unidade, "segunda");
      break;
    case 3:
      strcpy(unidade, "terceira");
      break;
    case 4:
      strcpy(unidade, "quarta");
      break;
    case 5:
      strcpy(unidade, "quinta");
      break;
    case 6:
      strcpy(unidade, "sexta");
      break;
    case 7:
      strcpy(unidade, "sétima");
      break;
    case 8:
      strcpy(unidade, "oitava");
      break;
    case 9:
      strcpy(unidade, "nona");
      break;
  }
  strcat(numext, centena);
  strcat(numext, dezena);
  strcat(numext, unidade);
}
void numextensom(int valor, char *numext){
  int c, d, u;
  char centena[20] = "", dezena[20] = "", unidade[20] = "";
  c = valor / 100;
  d = (valor % 100) / 10;
  u = (valor % 10);
  switch (c) {
  case 1:
    if (d != 0 || u != 0) {
      strcpy(centena, "cento e ");
    } else {
      strcpy(centena, "cem");
    }
    break;
  case 2:
    if (d != 0 || u != 0) {
      strcpy(centena, "duzentos e ");
    } else {
      strcpy(centena, "duzentos");
    }
    break;
  case 3:
    if (d != 0 || u != 0) {
      strcpy(centena, "trezentos e ");
    } else {
      strcpy(centena, "trezentos");
    }
    break;
  case 4:
    if (d != 0 || u != 0) {
      strcpy(centena, "quatrocentos e ");
    } else {
      strcpy(centena, "quatrocentos");
    }
    break;
  case 5:
    if (d != 0 || u != 0) {
      strcpy(centena, "quinhentos e ");
    } else {
      strcpy(centena, "quinhentos");
    }
    break;
  case 6:
    if (d != 0 || u != 0) {
      strcpy(centena, "seiscentos e ");
    } else {
      strcpy(centena, "seiscentos");
    }
    break;
  case 7:
    if (d != 0 || u != 0) {
      strcpy(centena, "setecentos e ");
    } else {
      strcpy(centena, "setecentos");
    }
    break;
  case 8:
    if (d != 0 || u != 0) {
      strcpy(centena, "oitocentos e ");
    } else {
      strcpy(centena, "oitocentos");
    }
    break;
  case 9:
    if (d != 0 || u != 0) {
      strcpy(centena, "novecentos e ");
    } else {
      strcpy(centena, "novecentos");
    }
    break;
  } // Escreve centena
  switch (d) {
  case 1:
    switch (u) {
    case 0:
      strcpy(dezena, "dez");
      break;
    case 1:
      strcpy(dezena, "onze");
      break;
    case 2:
      strcpy(dezena, "doze");
      break;
    case 3:
      strcpy(dezena, "treze");
      break;
    case 4:
      strcpy(dezena, "quatroze");
      break;
    case 5:
      strcpy(dezena, "quinze");
      break;
    case 6:
      strcpy(dezena, "dezeseis");
      break;
    case 7:
      strcpy(dezena, "dezessete");
      break;
    case 8:
      strcpy(dezena, "dezoito");
      break;
    case 9:
      strcpy(dezena, "dezenove");
      break;
    } //Escreve se for de 10 a 19
    break;
  case 2:
    if (d != 0 && u != 0) {
      strcpy(dezena, "vinte e ");
    } else {
      strcpy(dezena, "vinte");
    }
    break;
  case 3:
    if (d != 0 && u != 0) {
      strcpy(dezena, "trinta e ");
    } else {
      strcpy(dezena, "trinta");
    }
    break;
  case 4:
    if (d != 0 && u != 0) {
      strcpy(dezena, "quarenta e ");
    } else {
      strcpy(dezena, "quarenta");
    }
    break;
  case 5:
    if (d != 0 && u != 0) {
      strcpy(dezena, "cinquenta e ");
    } else {
      strcpy(dezena, "cinquenta");
    }
    break;
  case 6:
    if (d != 0 && u != 0) {
      strcpy(dezena, "sessenta e ");
    } else {
      strcpy(dezena, "sessenta");
    }
    break;
  case 7:
    if (d != 0 && u != 0) {
      strcpy(dezena, "setenta e ");
    } else {
      strcpy(dezena, "setenta");
    }
    break;
  case 8:
    if (d != 0 && u != 0) {
      strcpy(dezena, "oitenta e ");
    } else {
      strcpy(dezena, "oitenta");
    }
    break;
  case 9:
    if (d != 0 && u != 0) {
      strcpy(dezena, "noventa e ");
    } else {
      strcpy(dezena, "noventa");
    }
    break;
  } // Escreve dezena
  if (d != 1) {
    switch (u) {
    case 1:
      strcpy(unidade, "um");
      break;
    case 2:
      strcpy(unidade, "dois");
      break;
    case 3:
      strcpy(unidade, "três");
      break;
    case 4:
      strcpy(unidade, "quatro");
      break;
    case 5:
      strcpy(unidade, "cinco");
      break;
    case 6:
      strcpy(unidade, "seis");
      break;
    case 7:
      strcpy(unidade, "sete");
      break;
    case 8:
      strcpy(unidade, "oito");
      break;
    case 9:
      strcpy(unidade, "nove");
      break;
    }
  } //Escreve unidade se for maior q 19 ou menor q 10
  strcat(numext, centena);
  strcat(numext, dezena);
  strcat(numext, unidade);
}
void numextensof(int valor, char *numext){
  int c, d, u;
  char centena[20] = "", dezena[20] = "", unidade[20] = "";
  c = valor / 100;
  d = (valor % 100) / 10;
  u = (valor % 10);
  switch (c) {
  case 1:
    if (d != 0 || u != 0) {
      strcpy(centena, "cento e ");
    } else {
      strcpy(centena, "cem");
    }
    break;
  case 2:
    if (d != 0 || u != 0) {
      strcpy(centena, "duzentas e ");
    } else {
      strcpy(centena, "duzentas");
    }
    break;
  case 3:
    if (d != 0 || u != 0) {
      strcpy(centena, "trezentas e ");
    } else {
      strcpy(centena, "trezentas");
    }
    break;
  case 4:
    if (d != 0 || u != 0) {
      strcpy(centena, "quatrocentas e ");
    } else {
      strcpy(centena, "quatrocentas");
    }
    break;
  case 5:
    if (d != 0 || u != 0) {
      strcpy(centena, "quinhentas e ");
    } else {
      strcpy(centena, "quinhentas");
    }
    break;
  case 6:
    if (d != 0 || u != 0) {
      strcpy(centena, "seiscentas e ");
    } else {
      strcpy(centena, "seiscentas");
    }
    break;
  case 7:
    if (d != 0 || u != 0) {
      strcpy(centena, "setecentas e ");
    } else {
      strcpy(centena, "setecentas");
    }
    break;
  case 8:
    if (d != 0 || u != 0) {
      strcpy(centena, "oitocentas e ");
    } else {
      strcpy(centena, "oitocentas");
    }
    break;
  case 9:
    if (d != 0 || u != 0) {
      strcpy(centena, "novecentas e ");
    } else {
      strcpy(centena, "novecentas");
    }
    break;
  } // Escreve centena
  switch (d) {
  case 1:
    switch (u) {
    case 0:
      strcpy(dezena, "dez");
      break;
    case 1:
      strcpy(dezena, "onze");
      break;
    case 2:
      strcpy(dezena, "doze");
      break;
    case 3:
      strcpy(dezena, "treze");
      break;
    case 4:
      strcpy(dezena, "quatroze");
      break;
    case 5:
      strcpy(dezena, "quinze");
      break;
    case 6:
      strcpy(dezena, "dezeseis");
      break;
    case 7:
      strcpy(dezena, "dezessete");
      break;
    case 8:
      strcpy(dezena, "dezoito");
      break;
    case 9:
      strcpy(dezena, "dezenove");
      break;
    } //Escreve se for de 10 a 19
    break;
  case 2:
    if (d != 0 && u != 0) {
      strcpy(dezena, "vinte e ");
    } else {
      strcpy(dezena, "vinte");
    }
    break;
  case 3:
    if (d != 0 && u != 0) {
      strcpy(dezena, "trinta e ");
    } else {
      strcpy(dezena, "trinta");
    }
    break;
  case 4:
    if (d != 0 && u != 0) {
      strcpy(dezena, "quarenta e ");
    } else {
      strcpy(dezena, "quarenta");
    }
    break;
  case 5:
    if (d != 0 && u != 0) {
      strcpy(dezena, "cinquenta e ");
    } else {
      strcpy(dezena, "cinquenta");
    }
    break;
  case 6:
    if (d != 0 && u != 0) {
      strcpy(dezena, "sessenta e ");
    } else {
      strcpy(dezena, "sessenta");
    }
    break;
  case 7:
    if (d != 0 && u != 0) {
      strcpy(dezena, "setenta e ");
    } else {
      strcpy(dezena, "setenta");
    }
    break;
  case 8:
    if (d != 0 && u != 0) {
      strcpy(dezena, "oitenta e ");
    } else {
      strcpy(dezena, "oitenta");
    }
    break;
  case 9:
    if (d != 0 && u != 0) {
      strcpy(dezena, "noventa e ");
    } else {
      strcpy(dezena, "noventa");
    }
    break;
  } // Escreve dezena
  if (d != 1) {
    switch (u) {
    case 1:
      strcpy(unidade, "uma");
      break;
    case 2:
      strcpy(unidade, "duas");
      break;
    case 3:
      strcpy(unidade, "três");
      break;
    case 4:
      strcpy(unidade, "quatro");
      break;
    case 5:
      strcpy(unidade, "cinco");
      break;
    case 6:
      strcpy(unidade, "seis");
      break;
    case 7:
      strcpy(unidade, "sete");
      break;
    case 8:
      strcpy(unidade, "oito");
      break;
    case 9:
      strcpy(unidade, "nove");
      break;
    }
  } //Escreve unidade se for maior q 19 ou menor q 10
  strcat(numext, centena);
  strcat(numext, dezena);
  strcat(numext, unidade);
}
void inter(int valor, char *numext, int genero, int tipo){
  int total[9], x, cal[3];
  int cont = 100000000;
  for(x = 0; x < 9; x++){
    if(x == 0){
      total[x] = valor / cont;
    }
    else{
      total[x] = (valor % cont) / (cont / 10);
      cont = cont / 10;
    }
  }
  printf("\n");
  for(x = 0; x < 3; x++){
    cal[x] = total[x * 3] * 100 + total[(x * 3) + 1] * 10 + total[(x * 3) + 2]; 
  }
  if(tipo == 0){
    if(cal[0] == 0 && cal[1] == 0 && cal[2] == 0){
      strcpy(numext, "zero");
    }
    for(x = 0; x < 3; x++){
      switch(x){
        case 0:
          numextensom(cal[x], numext);
          if(cal[x] == 1){
            if(cal[x+1] % 1000 == 0){
              if(cal[x+2] % 1000 == 0){
                strcat(numext, " milhão");
              } else if(cal[x+2] / 100 == 0 && cal[x+2] % 100 > 0){
                strcat(numext, " milhão e ");
              } else if(cal[x+2] / 100 != 0 && cal[x+2] % 100 > 0){
                strcat(numext, " milhão ");
              } else{
                strcat(numext, " milhão e ");
              }
            }
            else{
              if(cal[x+1] / 100 == 0 && cal[x+1] % 100 > 0){
                strcat(numext, " milhão e ");
              } else if(cal[x+1] % 1000 == 0){
                strcat(numext, " milhão ");
              } else if(cal[x+1] / 100 != 0 && cal[x+1] % 100 > 0){
                strcat(numext, " milhão ");
              } else{
                strcat(numext, " milhão e ");
              }
            }
          } else if(cal[x] != 1 && cal[x] != 0){
            if(cal[x+1] % 1000 == 0){
              if(cal[x+2] % 1000 == 0){
                strcat(numext, " milhões");
              } else if(cal[x+2] / 100 == 0 && cal[x+2] % 100 > 0){
                strcat(numext, " milhões e ");
              } else if(cal[x+2] / 100 != 0 && cal[x+2] % 100 > 0){
                strcat(numext, " milhões ");
              } else{
                strcat(numext, " milhões e ");
              }
            }
            else{
              if(cal[x+1] / 100 == 0 && cal[x+1] % 100 > 0){
                strcat(numext, " milhões e ");
              } else if(cal[x+1] % 1000 == 0){
                strcat(numext, " milhões ");
              } else if(cal[x+1] / 100 != 0 && cal[x+1] % 100 > 0){
                strcat(numext, " milhões ");
              } else{
                strcat(numext, " milhões e ");
              }
            }
          }
        break;
        case 1:
          if(cal[x] == 1){
            if(cal[x+1] / 100 == 0 && cal[x+1] % 100 > 0){
              strcat(numext, "mil e ");
            } else if(cal[x+1] % 1000 == 0){
              strcat(numext, "mil");
            } else if(cal[x+1] / 100 != 0 && cal[x+1] % 100 > 0){
              strcat(numext, "mil ");
            } else{
              strcat(numext, "mil e ");
            }
          } else if(cal[x] != 1 && cal[x] != 0){ 
            if(genero != 0){
              numextensof(cal[x], numext);
            }
            else{
              numextensom(cal[x], numext);
            }
            if(cal[x+1] / 100 == 0 && cal[x+1] % 100 > 0){
              strcat(numext, " mil e ");
            } else if(cal[x+1] % 1000 == 0){
              strcat(numext, " mil");
            } else if(cal[x+1] / 100 != 0 && cal[x+1] % 100 > 0){
              strcat(numext, " mil ");
            } else{
              strcat(numext, " mil e ");
            }
          }
        break;
        case 2:
          if(genero != 0){
            numextensof(cal[x], numext);
          }
          else{
            numextensom(cal[x], numext);
          }
        break;
      }
    }
  }
  else{
    if(cal[0] == 0 && cal[1] == 0 && cal[2] == 0){
      strcpy(numext, "Inválido");
    }
    for(x = 0; x < 3; x++){
      switch(x){
        case 0:
          if(cal[x] == 1){
            if(genero == 0){
              strcat(numext, "milionésimo ");
            } else{
              strcat(numext, "milionésima ");
            }
          }
          else if(cal[x] != 0 && cal[x] != 1){
            numextensom(cal[x], numext);
            if(genero == 0){
              strcat(numext, " milionésimos ");
            }
            else{
             strcat(numext, " milionésimas ");
            }
          }
        break;
        case 1:
          if(cal[x] == 1){
            if(genero == 0){
              strcat(numext, "milésimo ");
            } else{
              strcat(numext, "milésima ");
            }
          } else if(cal[x] != 1 && cal[x] != 0){ 
            if(genero != 0){
              numextensof(cal[x], numext);
              strcat(numext, " milésimas ");
            }
            else{
              numextensom(cal[x], numext);
              strcat(numext, " milésimos ");
            }
          }
        break;
        case 2:
          if(genero != 0){
            numordinalf(cal[x], numext);
          }
          else{
            numordinalm(cal[x], numext);
          }
        break;
      }
    }
  }
}