
#include <locale>
#include <stdio.h>
#include <stdlib.h> 
#include <windows.h>
#include <conio.h>
#include <math.h>
#include <string.h>

// Cases adicionados: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16.

// Categoria GERAL/PRINCIPAL
int categoriaUnidades(){
	setlocale(LC_ALL,"portuguese");
	system ("cls");
	
	int resposta;
	printf("\n **** CALCULADORA DE UNIDADES  ****");
	printf("\n * 1)  Ângulo                     *");
	printf("\n * 2)  Área                       *");
	printf("\n * 3)  Armazenamento de dados     *");
	printf("\n * 4)  Comprimento                *");
	printf("\n * 5)  Consumo de Combustível     *");
	printf("\n * 6)  Capacidade Térmica Molar   *");
	printf("\n * 7)  Frequência                 *");
	printf("\n * 8)  Massa                      *");
	printf("\n * 9)  Pressão                    *");
	printf("\n * 10) Temperatura                *");
	printf("\n * 11) Tempo                      *");
	printf("\n * 12) Cozinhas e Receitas        *");
	printf("\n * 13) Velocidade                 *");
	printf("\n * 14) Volume                     *");
	printf("\n * 15) Tecido                     *");
	printf("\n * 16) Massa Molar                *");
	printf("\n * 17) Resistência Térmica        *");
	printf("\n * 18) Volume Molar               *");
	printf("\n * 19) Quantidade de Luz          *");
	printf("\n * 20) Transferência de dados     *");
	printf("\n * 21) Impulso                    *");
	printf("\n * 22) Tamanho Letra              *");
	printf("\n * 23) Força Magneto Motriz       *");
	printf("\n * 24) Aceleração                 *");	
	printf("\n * 25) Condutância Térmica        *");
	printf("\n * 26) Emissão de CO2             *");
	printf("\n * 27) Capacidade Térmica         *");
	printf("\n * 28) Tensão Superficial         *");
	printf("\n * 29) Sistema de Numeração       *");
	printf("\n * 30) Sair                       *");
	printf("\n **********************************");
	printf("\n Informa a resposta: ");
	scanf("%i",&resposta);
	return (resposta);
}
// Menu Massa Molar feito por Dimitri Monteiro
int categoriaMassaMoloar(){
	setlocale(LC_ALL,"portuguese");
	
	system ("cls");
	
	int opcao;
	printf("\n *************** CONVERSOR DE MASSA MOLAR  ****************");
	printf("\n * 1) Miligrama        - >   Grama                        *");
	printf("\n * 2) Miligrama        - >   Quilo                        *");
	printf("\n * 3) Grama            - >   Miligrama                    *");
	printf("\n * 4) Grama            - >   Quilo                        *");
	printf("\n * 5) Quilo            - >   Miligrama                    *");
	printf("\n * 6) Quilo            - >   Grama                        *");
	printf("\n Informa a opção desejada: ");
	printf("\n");
	scanf("%i",&opcao);
	return (opcao);
}

float MiliPGrama(float mass){
    return(mass/1000);
}

float MiliPQuilo(float mass){
    return(mass/1000000);
}

float GramPMili(float mass){
    return(mass*1000);
}

float GramPQuilo(float mass){
    return(mass/1000);
}

float QuilPMili(float mass){
    return(mass*1000000);
}

float QuilPGrama(float mass){
    return(mass*1000);
}

// Menu Resistência Térmica feita por Gabrielly Silva 
int categoriaResTermica(){
	setlocale(LC_ALL,"portuguese");
	
	system ("cls");
	
	int opcao;
	printf("\n *************** CONVERSOR DE RESISTÊNCIA TÉRMICA  ****************");
	printf("\n * 1) °C/W             - >  °F·h/Btu                      *");
	printf("\n * 2) °C/W             - >   K/W                          *");
	printf("\n * 3) °F·h/Btu         - >  °C/W                          *");
	printf("\n * 4) °F·h/Btu         - >   K/W                          *");
	printf("\n * 5)  K/W             - >  °C/W                          *");
	printf("\n * 6)  K/W             - >  °F·h/Btu                      *");
	printf("\n Informa a opção desejada: ");
	printf("\n");
	scanf("%i",&opcao);
	return (opcao);
}

float cwPbtu(float term){
    return(term * (1.8 * 3600 / 1055));
}

float cwPkw(float term){
    return(term +( 273.15));
}

float btuPcw(float term){
    return((term - 32)* 5 / 9 / 3600 * 1055);
}

float btuPkw(float term){
    return((term - 32)* 5 / 9 / 3600 * 1055 + 273.15);
}

float kwPcw(float term){
    return(term-273.15);
}

float kwPbtu(float term){
    return((term - 273.15) * 1.8 * 3600 / 1055 + 32);
}


// Menu Densidade feito por Eduardo Brito
int categoriaDensidade(){
	setlocale(LC_ALL,"portuguese");
	
	system ("cls");
	
	int opcao;
	printf("\n *************** CONVERSOR DE DENSIDADE  ****************");
	printf("\n * 1) Miligrama/ml     - >   Grama/l                      *");
	printf("\n * 2) Miligrama/ml     - >   Quilo/l                      *");
	printf("\n * 3) Grama/l          - >   Miligrama/ml                  *");
	printf("\n * 4) Grama/l          - >   Quilo/l                      *");
	printf("\n * 5) Quilo/l          - >   Miligrama/ml                  *");
	printf("\n * 6) Quilo/l          - >   Grama/l                      *");
	printf("\n Informe a opção desejada: ");
	printf("\n");
	scanf("%i",&opcao);
	return (opcao);
}

float MiliPGramaPorL(float densidade){
    return(densidade*1000);
}

float MiliPQuiloPorL(float densidade){
    return(densidade);
}

float GramPMiliPorL(float densidade){
    return(densidade/1000);
}

float GramPQuiloPorL(float densidade){
    return(densidade*1000);
}

float QuilPMiliPorL(float densidade){
    return(densidade/1000000);
}

float QuilPGramaPorL(float densidade){
    return(densidade/1000);
}

// Menu Peso do tecido feito por Lucas Caraiba
int categoriaPesoTecido(){
	setlocale(LC_ALL,"portuguese");
	
	system ("cls");
	
	int opcao;
	printf("\n *************** CONVERSOR TECIDOS  ****************");
	printf("\n * 1) Gsm              - >   Momme                        *");
	printf("\n * 2) Gsm              - >   Oz/Yd²                       *");
	printf("\n * 3) Momme            - >   Gsm                          *");
	printf("\n * 4) Momme            - >   Oz/Yd²                       *");
	printf("\n * 5) Oz/Yd²           - >   Gsm                          *");
	printf("\n * 6) Oz/Yd²           - >   Momme                        *");
	printf("\n Informa a opção desejada: ");
	printf("\n");
	scanf("%i",&opcao);
	return (opcao);
}

float gsm_para_momme(float gsm){
	return gsm/4.33;
}
float gsm_para_oz(float gsm){
	return gsm/33.906;
}
float momme_para_gsm(float momme){
	return momme*4.34;
}
float momme_para_oz(float momme){
	return momme/7.812;
}
float oz_para_gsm(float oz){
	return oz*33.906;
}
float oz_para_momme(float oz){
	return oz*7.812;
}

// Menu Comprimento, feito por Yago Santana
int categoriaComprimento(){
	setlocale(LC_ALL,"portuguese");
	
	system ("cls");
	
	int opcao;
	printf("\n *************** CONVERSOR DE COMPRIMENTO  ****************");
	printf("\n * 1) Quilômetro       - >   Metro                        *");
	printf("\n * 2) Quilômetro       - >   Centímetro                   *");
	printf("\n * 3) Quilômetro       - >   Milímetro                    *");
	printf("\n * 4) Quilômetro       - >   Micrômetro                   *");
	printf("\n * 5) Quilômetro       - >   Nanômetro                    *");
	printf("\n * 6) Quilômetro       - >   Milha                        *");
	printf("\n * 7) Quilômetro       - >   Jarda                        *");
	printf("\n * 8) Quilômetro       - >   Pé                           *");
	printf("\n * 9) Quilômetro       - >   Polegada                     *");
	printf("\n * 10) Quilômetro      - >   Milha Náutica                *");
	
	printf("\n");
	
	printf("\n * 11) Metro           - >  Quilômetro                    *");
	printf("\n * 12) Metro           - >  Centímetro                    *");
	printf("\n * 13) Metro           - >  Milímetro                     *");
	printf("\n * 14) Metro           - >  Micrômetro                    *");
	printf("\n * 15) Metro           - >  Nanômetro                     *");
	printf("\n * 16) Metro           - >  Milha                         *");
	printf("\n * 17) Metro           - >  Jarda                         *");
	printf("\n * 18) Metro           - >  Pé                            *");
	printf("\n * 19) Metro           - >  Polegada                      *");
	printf("\n * 20) Metro           - >  Milha Náutica                 *");
	
	printf("\n");
	
	printf("\n * 21) Centímetro      - > Quilômetro                     *");
	printf("\n * 22) Centímetro      - > Metro                          *");
	printf("\n * 23) Centímetro      - > Milímetro                      *");
	printf("\n * 24) Centímetro      - > Micrômetro                     *");
	printf("\n * 25) Centímetro      - > Nanômetro                      *");
	printf("\n * 26) Centímetro      - > Milha                          *");
	printf("\n * 27) Centímetro      - > Jarda                          *");
	printf("\n * 28) Centímetro      - > Pé                             *");
	printf("\n * 29) Centímetro      - > Polegada                       *");
	printf("\n * 30) Centímetro      - > Milha Náutica                  *");
	
	printf("\n");
	
	printf("\n * 31) Milímetro       - > Quilômetro                     *");
	printf("\n * 32) Milímetro       - > Metro                          *");
	printf("\n * 33) Milímetro       - > Centímetro                     *");
	printf("\n * 34) Milímetro       - > Micrômetro                     *");
	printf("\n * 35) Milímetro       - > Nanômetro                      *");
	printf("\n * 36) Milímetro       - > Milha                          *");
	printf("\n * 37) Milímetro       - > Jarda                          *");
	printf("\n * 38) Milímetro       - > Pé                             *");
	printf("\n * 39) Milímetro       - > Polegada                       *");
	printf("\n * 40) Milímetro       - > Milha Náutica                  *");
	
	printf("\n");
	
	printf("\n * 41) Micrômetro      - > Quilômetro                     *");
	printf("\n * 42) Micrômetro      - > Metro                          *");
	printf("\n * 43) Micrômetro      - > Centímetro                     *");
	printf("\n * 44) Micrômetro      - > Milímetro                      *");
	printf("\n * 45) Micrômetro      - > Nanômetro                      *");
	printf("\n * 46) Micrômetro      - > Milha                          *");
	printf("\n * 47) Micrômetro      - > Jarda                          *");
	printf("\n * 48) Micrômetro      - > Pé                             *");
	printf("\n * 49) Micrômetro      - > Polegada                       *");
	printf("\n * 50) Micrômetro      - > Milha Náutica                  *");
	
	printf("\n");
	 
	printf("\n * 51) Nanômetro       - > Quilômetro                     *");
	printf("\n * 52) Nanômetro       - > Metro                          *");
	printf("\n * 53) Nanômetro       - > Centímetro                     *");
	printf("\n * 54) Nanômetro       - > Milímetro                      *");
	printf("\n * 55) Nanômetro       - > Micrômetro                     *");
	printf("\n * 56) Nanômetro       - > Milha                          *");
	printf("\n * 57) Nanômetro       - > Jarda                          *");
	printf("\n * 58) Nanômetro       - > Pé                             *");
	printf("\n * 59) Nanômetro       - > Polegada                       *");
	printf("\n * 60) Nanômetro       - > Milha Náutica                  *");
	
	printf("\n");
	
	printf("\n * 61) Milha           - > Quilômetro                     *");
	printf("\n * 62) Milha           - > Metro                          *");
	printf("\n * 63) Milha           - > Centímetro                     *");
	printf("\n * 64) Milha           - > Milímetro                      *");
	printf("\n * 65) Milha           - > Micrômetro                     *");
	printf("\n * 66) Milha           - > Nanômetro                      *");
	printf("\n * 67) Milha           - > Jarda                          *");
	printf("\n * 68) Milha           - > Pé                             *");
	printf("\n * 69) Milha           - > Polegada                       *");
	printf("\n * 70) Milha           - > Milha Náutica                  *");
	
	printf("\n");
	
	printf("\n * 71) Jarda           - > Quilômetro                     *");
	printf("\n * 72) Jarda           - > Metro                          *");
	printf("\n * 73) Jarda           - > Centímetro                     *");
	printf("\n * 74) Jarda           - > Milímetro                      *");
	printf("\n * 75) Jarda           - > Micrômetro                     *");
	printf("\n * 76) Jarda           - > Nanômetro                      *");
	printf("\n * 77) Jarda           - > Milha                          *");
	printf("\n * 78) Jarda           - > Pé                             *");
	printf("\n * 79) Jarda           - > Polegada                       *");
	printf("\n * 80) Jarda           - > Milha Náutica                  *");
	
	printf("\n");
	
	printf("\n * 81) Pé              - > Quilômetro                     *");
	printf("\n * 82) Pé              - > Metro                          *");
	printf("\n * 83) Pé              - > Centímetro                     *");
	printf("\n * 84) Pé              - > Milímetro                      *");
	printf("\n * 85) Pé              - > Micrômetro                     *");
	printf("\n * 86) Pé              - > Nanômetro                      *");
	printf("\n * 87) Pé              - > Milha                          *");
	printf("\n * 88) Pé              - > Jarda                          *");
	printf("\n * 89) Pé              - > Polegada                       *");
	printf("\n * 90) Pé              - > Milha Náutica                  *");
	
	printf("\n");
	
	printf("\n * 91) Polegada        - > Quilômetro                     *");
	printf("\n * 92) Polegada        - > Metro                          *");
	printf("\n * 93) Polegada        - > Centímetro                     *");
	printf("\n * 94) Polegada        - > Milímetro                      *");
	printf("\n * 95) Polegada        - > Micrômetro                     *");
	printf("\n * 96) Polegada        - > Nanômetro                      *");
	printf("\n * 97) Polegada        - > Milha                          *");
	printf("\n * 98) Polegada        - > Jarda                          *");
	printf("\n * 99) Polegada        - > Pé                             *");
	printf("\n * 100) Polegada       - > Milha Náutica                  *");
	
	printf("\n");
	
	printf("\n * 101) Milha Náutica  - > Quilômetro                     *");
	printf("\n * 102) Milha Náutica  - > Metro                          *");
	printf("\n * 103) Milha Náutica  - > Centímetro                     *");
	printf("\n * 104) Milha Náutica  - > Milímetro                      *");
	printf("\n * 105) Milha Náutica  - > Micrômetro                     *");
	printf("\n * 106) Milha Náutica  - > Nanômetro                      *");
	printf("\n * 107) Milha Náutica  - > Milha                          *");
	printf("\n * 108) Milha Náutica  - > Jarda                          *");
	printf("\n * 109) Milha Náutica  - > Pé                             *");
	printf("\n * 110) Milha Náutica  - > Polegada                       *");
	printf("\n * 111) Sair                                              *");
	printf("\n **********************************************************");
	printf("\n Informa a opção: ");
	scanf("%i",&opcao);
	return (opcao);
}
//Converção de quilômetro

float KMpM(float lenght){
return(lenght*(1000));
}
float KMpCM(float lenght){
return(lenght*(100000));
}
float KMpMM(float lenght){
return(lenght*(1e+6));
}
float KMpMC(float lenght){
return(lenght*(1e+9));
}
float KMpNN(float lenght){
return(lenght*(1e+12));
}
float KMpML(float lenght){
return(lenght/(1.609));
}
float KMpJ(float lenght){
return(lenght*(1094));
}
float KMpP(float lenght){
return(lenght*(3281));
}
float KMpPL(float lenght){
return(lenght*(39370));
}
float KMpMN(float lenght){
return(lenght/(1.852));
}
// Conversão de metro

float MpKM(float lenght){
return(lenght/(1000));
}
float MpCM(float lenght){
return(lenght*(100));
}
float MpMM(float lenght){
return(lenght*(1000));
}
float MpMC(float lenght){
return(lenght*(1e+6));
}
float MpNN(float lenght){
return(lenght*(1e+9));
}
float MpML(float lenght){
return(lenght/(1609));
}
float MpJ(float lenght){
return(lenght*(1.094));
}
float MpP(float lenght){
return(lenght*(3.281));
}
float MpPL(float lenght){
return(lenght*(39.37));
}
float MpMN(float lenght){
return(lenght/(1852));
}
//Conversão de Centímetro

float CMpKM(float lenght){
return(lenght/(100000));
}
float CMpM(float lenght){
return(lenght/(100));
}
float CMpMM(float lenght){
return(lenght*(10));
}
float CMpMC(float lenght){
return(lenght*(10000));
}
float CMpNN(float lenght){
return(lenght*(1e+7));
}
float CMpML(float lenght){
return(lenght/(160934));
}
float CMpJ(float lenght){
return(lenght/(91.44));
}
float CMpP(float lenght){
return(lenght/(30.48));
}
float CMpPL(float lenght){
return(lenght/(2.54));
}
float CMpMN(float lenght){
return(lenght/(185200));
}
//Conversão de Milímetro 

float MMpKM(float lenght){
return(lenght/(1e+6));
}
float MMpM(float lenght){
return(lenght/(1000));
}
float MMpCM(float lenght){
return(lenght/(10));
}
float MMpMC(float lenght){
return(lenght*(1000));
}
float MMpNN(float lenght){
return(lenght*(1e+6));
}
float MMpML(float lenght){
return(lenght/(1.609e+6));
}
float MMpJ(float lenght){
return(lenght/(914));
}
float MMpP(float lenght){
return(lenght/(305));
}
float MMpPL(float lenght){
return(lenght/(25.4));
}
float MMpMN(float lenght){
return(lenght/(1.852e+6));
}
//Conversão de Micrômetro

float MCpKM(float lenght){
return(lenght/(1e+9));
}
float MCpM(float lenght){
return(lenght/(1e+6));
}
float MCpCM(float lenght){
return(lenght/(10000));
}
float MCpMM(float lenght){
return(lenght/(1000));
}
float MCpNN(float lenght){
return(lenght*(1000));
}
float MCpML(float lenght){
return(lenght/(1.609e+9));
}
float MCpJ(float lenght){
return(lenght/(914400));
}
float MCpP(float lenght){
return(lenght/(304800));
}
float MCpPL(float lenght){
return(lenght/(25400));
}
float MCpMN(float lenght){
return(lenght/(1.852e+9));
}
//Conversão de Nanômetro

float NNpKM(float lenght){
return(lenght/(1e+12));
}
float NNpM(float lenght){
return(lenght/(1e+9));
}
float NNpCM(float lenght){
return(lenght/(1e+7));
}
float NNpMM(float lenght){
return(lenght/(1e+6));
}
float NNpMC(float lenght){
return(lenght/(1000));
}
float NNpML(float lenght){
return(lenght/(1.609e+12));
}
float NNpJ(float lenght){
return(lenght/(9.144e+8));
}
float NNpP(float lenght){
return(lenght/(3.048e+8));
}
float NNpPL(float lenght){
return(lenght/(2.54e+7));
}
float NNpMN(float lenght){
return(lenght/(1.852e+12));
}
//Conversão de Milha

float MLpKM(float lenght){
return(lenght*(1.609));
}
float MLpM(float lenght){
return(lenght*(1609));
}
float MLpCM(float lenght){
return(lenght*(160934));
}
float MLpMM(float lenght){
return(lenght*(1.609e+6));
}
float MLpMC(float lenght){
return(lenght*(1.609e+9));
}
float MLpNN(float lenght){
return(lenght*(1.609e+12));
}
float MLpJ(float lenght){
return(lenght*(1760));
}
float MLpP(float lenght){
return(lenght*(5280));
}
float MLpPL(float lenght){
return(lenght*(63360));
}
float MLpMN(float lenght){
return(lenght/(1.151));
}
//Conversão de Jarda

float JpKM(float lenght){
return(lenght/(1094));
}
float JpM(float lenght){
return(lenght/(1.094));
}
float JpCM(float lenght){
return(lenght*(91.44));
}
float JpMM(float lenght){
return(lenght*(914));
}
float JpMC(float lenght){
return(lenght*(914400));
}
float JpNN(float lenght){
return(lenght*(9.144e+8));
}
float JpML(float lenght){
return(lenght/(1760));
}
float JpP(float lenght){
return(lenght*(3));
}
float JpPL(float lenght){
return(lenght*(36));
}
float JpMN(float lenght){
return(lenght/(2025));
}
//Conversão de Pé

float PpKM(float lenght){
return(lenght/(3281));
}
float PpM(float lenght){
return(lenght/(3.281));
}
float PpCM(float lenght){
return(lenght*(30.48));
}
float PpMM(float lenght){
return(lenght*(305));
}
float PpMC(float lenght){
return(lenght*(304802));
}
float PpNN(float lenght){
return(lenght*(3.048e+8));
}
float PpML(float lenght){
return(lenght*(5280));
}
float PpJ(float lenght){
return(lenght/(3));
}
float PpPL(float lenght){
return(lenght*(12));
}
float PpMN(float lenght){
return(lenght/(6076));
}
//Conversão de Polegada

float AngParaRadianos(float vlr){
	return((61 * 51) * vlr);
}

float PLpKM(float lenght){
return(lenght/(39370));
}
float PLpM(float lenght){
return(lenght/(39.37));
}
float PLpCM(float lenght){
return(lenght*(2.54));
}
float PLpMM(float lenght){
return(lenght*(25.4));
}
float PLpMC(float lenght){
return(lenght*(25400));
}
float PLpNN(float lenght){
return(lenght*(2.54e+7));
}
float PLpML(float lenght){
return(lenght/(63360));
}
float PLpJ(float lenght){
return(lenght/(36));
}
float PLpP(float lenght){
return(lenght/(12));
}
float PLpMN(float lenght){
return(lenght/(72913));
}
//Conversão de Milha Náutica

float MNpKM(float lenght){
return(lenght*(1.852));
}
float MNpM(float lenght){
return(lenght*(1852));
}
float MNpCM(float lenght){
return(lenght*(185201));
}
float MNpMM(float lenght){
return(lenght*(1.852e+6));
}
float MNpMC(float lenght){
return(lenght*(1.852e+9));
}
float MNpNN(float lenght){
return(lenght*(1.852e+12));
}
float MNpML(float lenght){
return(lenght*(1.151));
}
float MNpJ(float lenght){
return(lenght*(2025));
}
float MNpP(float lenght){
return(lenght*(6076));
}
float MNpPL(float lenght){
return(lenght*(72914));
}


// Menu Área feita por Matheus Matias
int MenuArea(){
	system ("cls");
    
     int resposta;
     printf("\n   ***************CONVERSOR DE AREAS********************");
     printf("\n   *   1)Quilometro Quadrado -> Metro Quadrado         *");
     printf("\n   *   2)Quilometro Quadrado -> Milha Quadrada         *");
     printf("\n   *   3)Quilometro Quadrado -> Jarda Quadrada         *");
     printf("\n   *   4)Quilometro Quadrado -> Pe Quadrado            *");
     printf("\n   *   5)Quilometro Quadrado -> Polegada Quadrada      *");
	 printf("\n   *   6)Quilometro Quadrado -> Hectare                *");
	 printf("\n   *   7)Quilometro Quadrado -> Acre                   *");
	 printf("\n   *   8)Metro  Quadrado      -> Quilometro Quadrado   *");
	 printf("\n   *   9)Metro  Quadrado      -> Milha Quadrada        *");
	 printf("\n   *   10)Metro Quadrado      -> Jarda Quadrada        *");
	 printf("\n   *   11)Metro Quadrado      -> Pe Quadrado           *");
	 printf("\n   *   12)Metro Quadrado      -> Polegada Quadrada     *");
	 printf("\n   *   13)Metro Quadrado      -> Hectare               *");
	 printf("\n   *   14)Metro Quadrado      -> Acre                  *");
	 printf("\n   *   15)Milha Quadrada      -> Quilometro Quadrado   *");
	 printf("\n   *   16)Milha Quadrada      -> Metro Quadrado        *");
	 printf("\n   *   17)Milha Quadrada      -> Jarda Quadrada        *");
	 printf("\n   *   18)Milha Quadrada      -> Pe Quadrado           *");
	 printf("\n   *   19)Milha Quadrada      -> Polegada Quadrada     *");
	 printf("\n   *   20)Milha Quadrada      -> Hectare               *");
	 printf("\n   *   21)Milha Quadrada      -> Acre                  *");
	 printf("\n   *   22)Jarda Quadrada      -> Quilometro Quadrado   *");
	 printf("\n   *   23)Jarda Quadrada      -> Metro Quadrado        *");
	 printf("\n   *   24)Jarda Quadrada      -> Milha Quadrada        *");
	 printf("\n   *   25)Jarda Quadrada      -> Pe Quadrado           *");
	 printf("\n   *   26)Jarda Quadrada      -> Polegada Quadrada     *");
	 printf("\n   *   27)Jarda Quadrada      -> Hectare               *");
	 printf("\n   *   28)Jarda Quadrada      -> Acre                  *");
	 printf("\n   *   29)  Pe  Quadrado      -> Quilometro Quadrado   *");
	 printf("\n   *   30)  Pe  Quadrado      -> Metro Quadrado        *");
	 printf("\n   *   31)  Pe  Quadrado      -> Milha Quarada         *");
	 printf("\n   *   32)  Pe  Quadrado      -> Jarda Quadrada        *");
	 printf("\n   *   33)  Pe  Quadrado      -> Polegada Quadrada     *");
	 printf("\n   *   34)  Pe  Quadrado      -> Hectare               *");
	 printf("\n   *   35)  Pe  Quadrado      -> Acre                  *");
	 printf("\n   *   36)Polegada Quadrada   -> Quilometro Quadrado   *");
	 printf("\n   *   37)Polegada Quadrada   -> Metro Quadrado        *");
	 printf("\n   *   38)Polegada Quadrada   -> Milha Quarada         *");
	 printf("\n   *   39)Polegada Quadrada   -> Jarda Quadrada        *");
	 printf("\n   *   40)Polegada Quadrada   -> Pe Quadrado           *");
	 printf("\n   *   41)Polegada Quadrada   -> Hectare               *");
	 printf("\n   *   42)Polegada Quadrada   -> Acre                  *");
	 printf("\n   *   43)    Hectare         -> Quilometro Quadrado   *");
	 printf("\n   *   44)    Hectare         -> Metro Quadrado        *");
	 printf("\n   *   45)    Hectare         -> Milha Quarada         *");
	 printf("\n   *   46)    Hectare         -> Jarda Quadrada        *");
	 printf("\n   *   47)    Hectare         -> Pe Quadrado           *");
	 printf("\n   *   48)    Hectare         -> Polegada Quadrada     *");
	 printf("\n   *   49)    Hectare         -> Acre                  *");
	 printf("\n   *   50)    Acre            -> Quilometro Quadrado   *");
	 printf("\n   *   51)    Acre            -> Metro Quadrado        *");
	 printf("\n   *   52)    Acre            -> Milha Quarada         *");
	 printf("\n   *   53)    Acre            -> Jarda Quadrada        *");
	 printf("\n   *   54)    Acre            -> Pe Quadrado           *");
	 printf("\n   *   55)    Acre            -> Polegada Quadrada     *");
	 printf("\n   *   56)    Acre            -> Hectare               *");
	 printf("\n   *   57) Sair do Progama                             *");
	 printf("\n   *****************************************************");
	 printf("\n Innorme a opcao desejada:");
	 scanf("%i", &resposta);
	 return resposta;	 
}

// QUILOMETRO QUADRADO para X
float QMQpMEQ (float area){
	return (area*1e+6);
}
float QMQpMIQ  (float area){
	return (area/2.59);
}
float QMQpJAQ (float area){
	return (area*1.196e+6);
}
float QMQpPEQ (float area){
	return (area* 1.076e+7);
}
float QMQpPGQ (float area){
	return (area+ 1.55e+9);
}
float QMQpHEC (float area){
	return (area*100);
}
float QMQpACR (float area){
	return (area*247);
}

// METRO QUADRADO para X
float MEQpQMQ (float area){
	return (area/1e+6);
}
float MEQpMIQ (float area){
	return (area/2.59e+6);
}
float MEQpJAQ (float area){
	return (area*1.196);
}
float MEQpPEQ (float area){
	return (area*10.764);
} 
float MEQpPGQ (float area){
	return (area*1550);
}
float MEQpHEC (float area){
	return (area/10000);
}
float MEQpACR (float area){
	return (area/4047);
}

// MILHA QUADRADA para X
float MIQpQMQ (float area){
	return (area*2.59);
}
float MIQpMEQ (float area){
	return (area*2.59e+6);
} 
float MIQpJAQ (float area){
	return (area*3.098e+6);
} 
float MIQpPEQ (float area){
	return (area*2.788e+7);
} 
float MIQpPGQ (float area){
	return (area*4.014e+9);
}
float MIQpHEC (float area){
	return (area*259);
} 
float MIQpACR (float area){
	return (area*640);
}

// JARDA QUADRADA para X
float JAQpQMQ (float area){
	return (area/1.196e+6);
}
float JAQpMEQ (float area){
	return (area/1.196);
}
float JAQpMIQ (float area){
	return (area/3.098e+6);
}     
float JAQpPEQ (float area){
	return (area*9);
}
float JAQpPGQ (float area){
	return (area*1296);
}
float JAQpHEC (float area){
	return (area/11960);
}
float JAQpACR (float area){
	return (area/4840);
}

// PE QUADRADO para X
float PEQpQMQ (float area){
	return (area/1.076e+7);
}
float PEQpMEQ (float area){
	return (area/10.764);
}
float PEQpMIQ (float area){
	return (area/2.788e+7);
}
float PEQpJAQ (float area){
	return (area/1296);
}
float PEQpPGQ  (float area){
	return (area*144);
}
float PEQpHEC (float area){
	return (area/107639);
}
float PEQpACR (float area){
	return (area/43560);
}

// POLEGADA QUADRADA para X
float PGQpQMQ (float area){
	return (area/1.55e+9);
}
float PGQpMEQ (float area){
	return (area/1550);
}
float PGQpMIQ (float area){
	return (area/4.014e+9);
}
float PGQpJAQ (float area){
	return (area/1296);
}
float PGQpPEQ (float area){
	return (area/144);
}
float PGQpHEC (float area){
	return (area/1.55e+7);
}
float PGQpACR (float area){
    return (area/6.273e+6);
}

// HECTARE para X
float HECpQMQ (float area){
	return (area/100);
}
float HECpMEQ (float area){
	return (area*10000);
}
float HECpMIQ (float area){
	return (area/259);
}
float HECpJAQ (float area){
	return (area*11960);
}
float HECpPEQ (float area){
	return (area*107639);
}
float HECpPGQ (float area){
	return (area*1.55e+7);
}
float HECpACR (float area){
	return (area*2.471);
}

// ACRE para X
float ACRpQMQ (float area){
	return (area/247);
}
float ACRpMEQ (float area){
	return (area*4047);
}
float ACRpMIQ (float area){
	return (area/640);
}
float ACRpJAQ (float area){
	return (area*4840);
}
float ACRpPEQ (float area){
	return (area*43560);
} 
float ACRpPGQ (float area){
	return (area*6.273e+6);
}
float ACRpHEC (float area){
	return (area/2.471);
}


// Menu Energia Mecanica feita por Thiago Bruno
int MenuENERGIAMECANICA(){
	system ("cls");
	
	int resposta;
	printf("\n ******* CONVERSOR ENERGIA MECANICA *********");
	printf("\n * 1)  Joule                                *");
	printf("\n * 2)  Quilojoule                           *");
	printf("\n * 3)  Gram Calorie                         *");
	printf("\n * 4)  Quilocaloria                         *");
	printf("\n * 5)  Watt-hora                            *");
	printf("\n * 6)  QuiloWathh-Hora                      *");
	printf("\n * 7)  Eletron-Volt                         *");
	printf("\n * 8)  BTU                                  *");
	printf("\n * 9)  Therm                                *");
	printf("\n * 10) Pe-libra Forca                       *");
	printf("\n ********************************************");
	printf("\n Selecione a energia:");
	scanf("%i", &resposta);
	return resposta;
}

// JOULES para X
float JOULEpQUILOJOULE(float energy){
return(energy/(1000));
}
float JOULEpGRAMCALORIE(float energy){
return(energy/(4.184));
}
float JOULEpQUILOCALORIA(float energy){
return(energy/(4184));
}
float JOULEpWATTHORA(float energy){
return(energy/(3600));
}
float JOULEpQUILOWATTHORA(float energy){
return(energy/(2176.782));
}
float JOULpELETRONWOLT(float energy){
return(energy*(206932111523840));
}
float JOULEpBTU(float energy){
return(energy/(1055));
}
float JOULEpTHERM(float energy){
return(energy/(1.534686));
}
float JOULEpPELIBRAFORCA(float energy){
return(energy/(1.356));
}

//QUILOJOULES para X
float QUILOJOULESpJOULES(float energy){
return(energy*(1000));
}
float QUILOJOULESpGRAMCALORIE(float energy){
return(energy*(239));
}
float QUILOJOULESpQUILOCALORIA(float energy){
return(energy/(4.184));
}
float QUILOJOULESpWATTHORA(float energy){
return(energy/(3.6));
}
float QUILOJOULESpQUILOWATTHORA(float energy){
return(energy/(3600));
}
float QUILOJOULESpELETRONWOLT(float energy){
return(energy*(150094641545347070));
}
float QUILOJOULESpBTU(float energy){
return(energy/(1.055));
}
float QUILOJOULESpTHERM(float energy){
return(energy/(105480));
}
float QUILOJOULESpPLF(float energy){
return(energy*(738));
}

// GRAM CALORIE para X
float GRAMCALORIEpJOULE(float energy){
return(energy*(4.184));
}
float GRAMCALORIEpQUILOJOULE(float energy){
return(energy/(239));
}
float GRAMACLORIEpQUILOCALORIA(float energy){
return(energy/(1000));
}
float GRAMCALORIEpWATTHORA(float energy){
return(energy/(860));
}
float GRAMCALORIEpQUILOWATTHORA(float energy){
return(energy/(0.405803));
}
float GRAMCALORIEpELETRONWOLT(float energy){
return(energy*(83048304));
}
float GRAMCALORIEpBTU(float energy){
return(energy/(252));
}
float GRAMCALORIEpTHERM(float energy){
return(energy/(647.157227));
}
float GRAMCALORIEpPLF(float energy){
return(energy*(3.086));
}

// QUILOCALORIA para X
float QUILOCALORIApJOULE(float energy){
return(energy*(4184));
}
float QUILOCALORIApQUILOJOULE(float energy){
return(energy*(4.184));
}
float QUILOCALORIApGRAMCALORIE(float energy){
return(energy*(1000));
}
float QUILOCALORIApWATTHORA(float energy){
return(energy*(1.162));
}
float QUILOCALORIApQUILOWATTHORA(float energy){
return(energy/(860));
}
float QUILOCALORIApELETRONWOLT(float energy){
return(energy*(233184340119388160));
}
float QUILOCALORIApBTU(float energy){
return(energy*(3.966));
}
float QUILOCALORIApTHERM(float energy){
return(energy/(25210));
}
float QUILOCALORIApPLF(float energy){
return(energy*(3086));
}

// WATTHORA para X
float WATTHORApJOULE(float energy){
return(energy*(3600));
}
float WATTHORApQUILOJOULE(float energy){
return(energy*(3.6));
}
float WATTHORApGRAMCALORIE(float energy){
return(energy*(860));
}
float WATTHORApQUILOCALORIA(float energy){
return(energy/(1.162));
}
float WATTHORApQUILOWATTHORA(float energy){
return(energy/(1000));
}
float WATTHORApELETRONWOLT(float energy){
return(energy*(233184340119388160));
}
float WATTHORApBTU(float energy){
return(energy*(3.412));
}
float WATTHORApTHERM(float energy){
return(energy/(29300));
}
float WATTHORApPLS(float energy){
return(energy*(2655));
}

// QUILOWATTHORA para X
float QWHpjL(float energy){
return(energy*(2176.781982));
}
float QWHpQLJ(float energy){
return(energy*(3600));
}
float QWHGC(float energy){
return(energy*(860421));
}
float QWHpQLC(float energy){
return(energy*(860));
}
float QWHpWH(float energy){
return(energy*(1000));
}
float QWHpELV(float energy){
return(energy*(233184340119388160));
}
float QWHpBTU(float energy){
return(energy*(3412));
}
float QWHpTH(float energy){
return(energy/(29.3));
}
float QWHpPLF(float energy){
return(energy*(350.257233));
}

// ELETRON WOLT para X
float EWpJL(float energy){
return(energy/(206932111523840.000000));
}
float EWpQJL(float energy){
return(energy/(233184340119388160));
}
float EWpGC(float energy){
return(energy/(233184340119388160));
}
float EWpQlC(float energy){
return(energy/(233184340119388160));
}
float EWpWTH(float energy){
return(energy/(233184340119388160));
}
float EWpQwH(float energy){
return(energy/(233184340119388160));
}
float EWpBTU(float energy){
return(energy/(233184340119388160));
}
float EWpTH(float energy){
return(energy/(233184340119388160));
}
float EWpPLF(float energy){
return(energy/(49489636841488384));
}

// BTU para X
float BTUpJL(float energy){
return(energy*(1055));
}
float BTUpQLJ(float energy){
return(energy*(1.055));
}
float BTUpGC(float energy){
return(energy*(252));
}
float BTUpQLC(float energy){
return(energy/(3.966));
}
float BTUpWTH(float energy){
return(energy/(3.412));
}
float BTUpQWH(float energy){
return(energy/(3412));
}
float BTUpEW(float energy){
return(energy*(233184340119388160.000000));
}
float BTUpTH(float energy){
return(energy/(99976));
}
float BTUpPLF(float energy){
return(energy*(778));
}

// THERM para X
float THpJL(float energy){
return(energy*(1.534686));
}
float THpQLJ(float energy){
return(energy*(105480));
}
float THpGC(float energy){
return(energy*(647.157227));
}
float THpQLC(float energy){
return(energy*(25210));
}
float THpWH(float energy){
return(energy*(29300));
}
float THpQWH(float energy){
return(energy*(29.3));
}
float THpEW(float energy){
return(energy*(2233184340119388160.000000));
}
float THpBTU(float energy){
return(energy*(99976));
}
float THpPLF(float energy){
return(energy*(1722168.000000));
}

// PLF para X
float PLFpJL(float energy){
return(energy*(1.356));
}
float PLFpQJL(float energy){
return(energy/(738));
}
float PLFpGC(float energy){
return(energy/(3.086));
}
float PLFpQLC(float energy){
return(energy/(3086));
}
float PLFpWH(float energy){
return(energy/(2655));
}
float PLFpQWH(float energy){
return(energy/(350.257233));
}
float PLFpEW(float energy){
return(energy*(49489636841488384.000000));
}
float PLFpBTU(float energy){
return(energy/(778));
}
float PLFpTH(float energy){
return(energy/(1722168.000000));
}


// Menu Frequência feita por Suzana Souza
int menuFrequencia(){
	setlocale(LC_ALL,"portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ********** CONVERSOR DE FREQUENCIA ********");
	printf("\n * 1) Nanohertz                            *");
	printf("\n * 2) Microhertz                           *");
	printf("\n * 3) Milihertz                            *");
	printf("\n * 4) Hertz                                *");
	printf("\n * 5) Decahertz                            *");
	printf("\n * 6) Hectohertz                           *");
	printf("\n * 7) Quilohertz                           *");
	printf("\n * 8) Megahertz                            *");
	printf("\n * 9) Gigahertz                            *");
	printf("\n * 10) Terahertz                           *");
	printf("\n * 11) Petahertz                           *");
	printf("\n * 12) Exahertz                            *");
	printf("\n * 13) Zetahertz                           *");
	printf("\n * 14) Yotahertz                           *");
	printf("\n * 15) 1/s                                 *");
	printf("\n * 16) 1/min                               *");
	printf("\n * 17) 1/h                                 *");
	printf("\n********************************************");
	printf("\nInforme a opção desejada: ");
	scanf("%i",&resposta);
	return (resposta);
}

/* Funções dividir */
float div10e2(float num1){
	return num1*10e-2;
}
float div10e3(float num1){
	return num1*10e-3;
}
float div10e4(float num1){
	return num1*10e-4;
}
float div10e5(float num1){
	return num1*10e-5;
}
float div10e6(float num1){
	return num1*10e-6;
}
float div10e7(float num1){
	return num1*10e-7;
}
float div10e8(float num1){
	return num1*10e-8;
}
float div10e9(float num1){
	return num1*10e-9;
}
float div10e10(float num1){
	return num1*10e-10;
}
float div10e11(float num1){
	return num1*10e-11;
}
float div10e12(float num1){
	return num1*10e-12;
}
float div10e13(float num1){
	return num1*10e-13;
}
float div10e14(float num1){
	return num1*10e-14;
}
float div10e15(float num1){
	return num1*10e-15;
}
float div10e16(float num1){
	return num1*10e-16;
}
float div10e17(float num1){
	return num1*10e-17;
}
float div10e18(float num1){
	return num1*10e-18;
}
float div10e19(float num1){
	return num1*10e-19;
}
float div10e20(float num1){
	return num1*10e-20;
}
float div10e21(float num1){
	return num1*10e-21;
}
float div10e22(float num1){
	return num1*10e-22;
}
float div10e23(float num1){
	return num1*10e-23;
}
float div10e24(float num1){
	return num1*10e-24;
}
float div10e25(float num1){
	return num1*10e-25;
}
float div10e28(float num1){
	return num1*10e-28;
}
float div10e31(float num1){
	return num1*10e-31;
}
float div10e34(float num1){
	return num1*10e-34;
}

/* Funções multiplicar */
float mul10(float num1){
	return num1*10;
}
float mul10e1(float num1){
	return num1*10e+1;
}
float mul10e2(float num1){
	return num1*10e+2;
}
float mul10e3(float num1){
	return num1*10e+3;
}
float mul10e4(float num1){
	return num1*10e+4;
}
float mul10e5(float num1){
	return num1*10e+5;
}
float mul10e6(float num1){
	return num1*10e+6;
}
float mul10e7(float num1){
	return num1*10e+7;
}
float mul10e8(float num1){
	return num1*10e+8;
}
float mul10e9(float num1){
	return num1*10e+9;
}
float mul10e10(float num1){
	return num1*10e+10;
}
float mul10e11(float num1){
	return num1*10e+11;
}
float mul10e12(float num1){
	return num1*10e+12;
}
float mul10e13(float num1){
	return num1*10e+13;
}
float mul10e14(float num1){
	return num1*10e+14;
}
float mul10e15(float num1){
	return num1*10e+15;
}
float mul10e16(float num1){
	return num1*10e+16;
}
float mul10e17(float num1){
	return num1*10e+17;
}
float mul10e18(float num1){
	return num1*10e+18;
}
float mul10e19(float num1){
	return num1*10e+19;
}
float mul10e20(float num1){
	return num1*10e+20;
}
float mul10e21(float num1){
	return num1*10e+21;
}
float mul10e22(float num1){
	return num1*10e+22;
}
float mul10e23(float num1){
	return num1*10e+23;
}
float mul10e26(float num1){
	return num1*10e+26;
}
float mul10e29(float num1){
	return num1*10e+29;
}
float mul10e32(float num1){
	return num1*10e+32;
}


// Menu Armazenamento de Dados feita por Daniel Rodrigues
int MenuArmDados() {
	setlocale(LC_ALL, "Portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ************ CONVERSOR ***********");
	printf("\n ***** ARMAZENAMENTO DE DADOS *****");
	printf("\n *  1) Bit                        *");
	printf("\n *  2) Kilobit                    *");
	printf("\n *  3) Kibibit                    *");
	printf("\n *  4) Megabit                    *");
	printf("\n *  5) Mebibit                    *");
	printf("\n *  6) Gigabit                    *");
	printf("\n *  7) Gibibit                    *");
	printf("\n *  8) Terabit                    *");
	printf("\n *  9) Tebibit                    *");
	printf("\n *  10) Petabit                   *");
	printf("\n *  11) Pebibit                   *");
	printf("\n *  12) Byte                      *");
	printf("\n *  13) Kilobyte                  *");
	printf("\n *  14) Kibibyte                  *");
	printf("\n *  15) Megabyte                  *");
	printf("\n *  16) MebiByte                  *");
	printf("\n *  17) Gigabyte                  *");
	printf("\n *  18) Gibibyte                  *");
	printf("\n *  19) Terabyte                  *");
	printf("\n *  20) Tebibyte                  *");
	printf("\n *  21) Petabyte                  *");
	printf("\n *  22) Pebibyte                  *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}

// BIT para X
float BITpKilobit (float data) {
	return (data/1000);
}
float BITpKibibit (float data) {
	return (data/1024);
}
float BITpMegabit (float data) {
	return (data/(1e+6));
}
float BITpMebibit (float data) {
	return (data/(1.049e+6));
}
float BITpGigabit (float data) {
	return (data/(1e+9));
}
float BITpGibibit (float data) {
	return (data/(1.074e+9));
}
float BITpTerabit (float data) {
	return (data/(1e+12));
}
float BITpTebibit (float data) {
	return (data/(1.1e+12));
}
float BITpPetabit (float data) {
	return (data/(1e+15));
}
float BITpPebibit (float data) {
	return (data/(1.126e+15));
}
float BITpByte (float data) {
	return (data/(8));
}
float BITpKilobyte (float data) {
	return (data/(8000));
}
float BITpKibibyte (float data) {
	return (data/(8192));
}
float BITpMegabyte (float data) {
	return (data/(8e+6));
}
float BITpMebiByte (float data) {
	return (data/(8.389e+6));
}
float BITpGigabyte (float data) {
	return (data/(8e+9));
}
float BITpGibibyte (float data) {
	return (data/(8.59e+9));
}
float BITpTerabyte (float data) {
	return (data/(8e+12));
}
float BITpTebibyte (float data) {
	return (data/(8.796e+12));
}
float BITpPetabyte (float data) {
	return (data/(8e+15));
}
float BITpPebibyte (float data) {
	return (data/(9.007e+15));
}
int MenuBit() {
	system("cls");
	
	int resposta;
	printf("\n ******** CONVERSOR DE BIT ********");
	printf("\n *  1)  Bit   ->   Kilobit        *");
	printf("\n *  2)  Bit   ->   Kibibit        *");
	printf("\n *  3)  Bit   ->   Megabit        *");
	printf("\n *  4)  Bit   ->   Mebibit        *");
	printf("\n *  5)  Bit   ->   Gigabit        *");
	printf("\n *  6)  Bit   ->   Gibibit        *");
	printf("\n *  7)  Bit   ->   Terabit        *");
	printf("\n *  8)  Bit   ->   Tebibit        *");
	printf("\n *  9)  Bit   ->   Petabit        *");
	printf("\n *  10) Bit   ->   Pebibit        *");
	printf("\n *  11) Bit   ->   Byte           *");
	printf("\n *  12) Bit   ->   Kilobyte       *");
	printf("\n *  13) Bit   ->   Kibibyte       *");
	printf("\n *  14) Bit   ->   Megabyte       *");
	printf("\n *  15) Bit   ->   MebiByte       *");
	printf("\n *  16) Bit   ->   Gigabyte       *");
	printf("\n *  17) Bit   ->   Gibibyte       *");
	printf("\n *  18) Bit   ->   Terabyte       *");
	printf("\n *  19) Bit   ->   Tebibyte       *");
	printf("\n *  20) Bit   ->   Petabyte       *");
	printf("\n *  21) Bit   ->   Pebibyte       *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//KILOBIT para X
float KILOBITpBit (float data) {
	return (data*(1000));
}
float KILOBITpKibibit (float data) {
	return (data/(1.024));
}
float KILOBITpMegabit (float data) {
	return (data/(1000));
}
float KILOBITpMebibit (float data) {
	return (data/(1049));
}
float KILOBITpGigabit (float data) {
	return (data/(1e+6));
}
float KILOBITpGibibit (float data) {
	return (data/(1.074e+6));
}
float KILOBITpTerabit (float data) {
	return (data/(1e+9));
}
float KILOBITpTebibit (float data) {
	return (data/(1.1e+9));
}
float KILOBITpPetabit (float data) {
	return (data/(1e+12));
}
float KILOBITpPebibit (float data) {
	return (data/(1.126e+12));
}
float KILOBITpByte (float data) {
	return (data*(125));
}
float KILOBITpKilobyte (float data) {
	return (data/(8));
}
float KILOBITpKibibyte (float data) {
	return (data/(8.192));
}
float KILOBITpMegabyte (float data) {
	return (data/(8000));
}
float KILOBITpMebiByte (float data) {
	return (data/(8389));
}
float KILOBITpGigabyte (float data) {
	return (data/(8e+6));
}
float KILOBITpGibibyte (float data) {
	return (data/(8.59e+6));
}
float KILOBITpTerabyte (float data) {
	return (data/(8e+9));
}
float KILOBITpTebibyte (float data) {
	return (data/(8.796e+9));
}
float KILOBITpPetabyte (float data) {
	return (data/(8e+12));
}
float KILOBITpPebibyte (float data) {
	return (data/(9.007e+12));
}
int MenuKilobit() {
	system("cls || clear");
	
	int resposta;
	printf("\n ****** CONVERSOR DE KILOBIT ******");
	printf("\n *  1)  Kilobit   ->   Bit        *");
	printf("\n *  2)  Kilobit   ->   Kibibit    *");
	printf("\n *  3)  Kilobit   ->   Megabit    *");
	printf("\n *  4)  Kilobit   ->   Mebibit    *");
	printf("\n *  5)  Kilobit   ->   Gigabit    *");
	printf("\n *  6)  Kilobit   ->   Gibibit    *");
	printf("\n *  7)  Kilobit   ->   Terabit    *");
	printf("\n *  8)  Kilobit   ->   Tebibit    *");
	printf("\n *  9)  Kilobit   ->   Petabit    *");
	printf("\n *  10) Kilobit   ->   Pebibit    *");
	printf("\n *  11) Kilobit   ->   Byte       *");
	printf("\n *  12) Kilobit   ->   Kilobyte   *");
	printf("\n *  13) Kilobit   ->   Kibibyte   *");
	printf("\n *  14) Kilobit   ->   Megabyte   *");
	printf("\n *  15) Kilobit   ->   MebiByte   *");
	printf("\n *  16) Kilobit   ->   Gigabyte   *");
	printf("\n *  17) Kilobit   ->   Gibibyte   *");
	printf("\n *  18) Kilobit   ->   Terabyte   *");
	printf("\n *  19) Kilobit   ->   Tebibyte   *");
	printf("\n *  20) Kilobit   ->   Petabyte   *");
	printf("\n *  21) Kilobit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//KIBIBIT para X
float KIBIBITpBit (float data) {
	return (data*(1024));
}
float KIBIBITpKilobit (float data) {
	return (data*(1.024));
}
float KIBIBITpMegabit (float data) {
	return (data/(977));
}
float KIBIBITpMebibit (float data) {
	return (data/(1024));
}
float KIBIBITpGigabit (float data) {
	return (data/(976562));
}
float KIBIBITpGibibit (float data) {
	return (data/(1.049e+6));
}
float KIBIBITpTerabit (float data) {
	return (data/(9.766e+8));
}
float KIBIBITpTebibit (float data) {
	return (data/(1.074e+9));
}
float KIBIBITpPetabit (float data) {
	return (data/(9.766e+11));
}
float KIBIBITpPebibit (float data) {
	return (data/(1.1e+12));
}
float KIBIBITpByte (float data) {
	return (data*(128));
}
float KIBIBITpKilobyte (float data) {
	return (data/(7.812));
}
float KIBIBITpKibibyte (float data) {
	return (data/(8));
}
float KIBIBITpMegabyte (float data) {
	return (data/(7813));
}
float KIBIBITpMebiByte (float data) {
	return (data/(8192));
}
float KIBIBITpGigabyte (float data) {
	return (data/(7.812e+6));
}
float KIBIBITpGibibyte (float data) {
	return (data/(8.389e+6));
}
float KIBIBITpTerabyte (float data) {
	return (data/(7.812e+9));
}
float KIBIBITpTebibyte (float data) {
	return (data/(8.59e+9));
}
float KIBIBITpPetabyte (float data) {
	return (data/(7.812e+12));
}
float KIBIBITpPebibyte (float data) {
	return (data/(8.796e+12));
}
int MenuKibibit() {
	system("cls || clear");
	
	int resposta;
	printf("\n ****** CONVERSOR DE KIBIBIT ******");
	printf("\n *  1)  Kibibit   ->   Bit        *");
	printf("\n *  2)  Kibibit   ->   Kilobit    *");
	printf("\n *  3)  Kibibit   ->   Megabit    *");
	printf("\n *  4)  Kibibit   ->   Mebibit    *");
	printf("\n *  5)  Kibibit   ->   Gigabit    *");
	printf("\n *  6)  Kibibit   ->   Gibibit    *");
	printf("\n *  7)  Kibibit   ->   Terabit    *");
	printf("\n *  8)  Kibibit   ->   Tebibit    *");
	printf("\n *  9)  Kibibit   ->   Petabit    *");
	printf("\n *  10) Kibibit   ->   Pebibit    *");
	printf("\n *  11) Kibibit   ->   Byte       *");
	printf("\n *  12) Kibibit   ->   Kilobyte   *");
	printf("\n *  13) Kibibit   ->   Kibibyte   *");
	printf("\n *  14) Kibibit   ->   Megabyte   *");
	printf("\n *  15) Kibibit   ->   MebiByte   *");
	printf("\n *  16) Kibibit   ->   Gigabyte   *");
	printf("\n *  17) Kibibit   ->   Gibibyte   *");
	printf("\n *  18) Kibibit   ->   Terabyte   *");
	printf("\n *  19) Kibibit   ->   Tebibyte   *");
	printf("\n *  20) Kibibit   ->   Petabyte   *");
	printf("\n *  21) Kibibit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//MEGABIT para X
float MEGABITpBit (float data) {
	return (data*(1e+6));
}
float MEGABITpKilobit (float data) {
	return (data*(1000));
}
float MEGABITpKibibit (float data) {
	return (data*(977));
}
float MEGABITpMebibit (float data) {
	return (data/(1.049));
}
float MEGABITpGigabit (float data) {
	return (data/(1000));
}
float MEGABITpGibibit (float data) {
	return (data/(1074));
}
float MEGABITpTerabit (float data) {
	return (data/(1e+6));
}
float MEGABITpTebibit (float data) {
	return (data/(1.1e+6));
}
float MEGABITpPetabit (float data) {
	return (data/(1e+9));
}
float MEGABITpPebibit (float data) {
	return (data/(1.126e+9));
}
float MEGABITpByte (float data) {
	return (data*(125000));
}
float MEGABITpKilobyte (float data) {
	return (data*(125));
}
float MEGABITpKibibyte (float data) {
	return (data*(122));
}
float MEGABITpMegabyte (float data) {
	return (data/(8));
}
float MEGABITpMebiByte (float data) {
	return (data/(8.389));
}
float MEGABITpGigabyte (float data) {
	return (data/(8000));
}
float MEGABITpGibibyte (float data) {
	return (data/(8590));
}
float MEGABITpTerabyte (float data) {
	return (data/(8e+6));
}
float MEGABITpTebibyte (float data) {
	return (data/(8.796e+6));
}
float MEGABITpPetabyte (float data) {
	return (data/(8e+9));
}
float MEGABITpPebibyte (float data) {
	return (data/(9.007e+9));
}
int MenuMegabit() {
	system("cls || clear");
	
	int resposta;
	printf("\n ****** CONVERSOR DE MEGABIT ******");
	printf("\n *  1)  Megabit   ->   Bit        *");
	printf("\n *  2)  Megabit   ->   Kilobit    *");
	printf("\n *  3)  Megabit   ->   Kibibit    *");
	printf("\n *  4)  Megabit   ->   Mebibit    *");
	printf("\n *  5)  Megabit   ->   Gigabit    *");
	printf("\n *  6)  Megabit   ->   Gibibit    *");
	printf("\n *  7)  Megabit   ->   Terabit    *");
	printf("\n *  8)  Megabit   ->   Tebibit    *");
	printf("\n *  9)  Megabit   ->   Petabit    *");
	printf("\n *  10) Megabit   ->   Pebibit    *");
	printf("\n *  11) Megabit   ->   Byte       *");
	printf("\n *  12) Megabit   ->   Kilobyte   *");
	printf("\n *  13) Megabit   ->   Kibibyte   *");
	printf("\n *  14) Megabit   ->   Megabyte   *");
	printf("\n *  15) Megabit   ->   MebiByte   *");
	printf("\n *  16) Megabit   ->   Gigabyte   *");
	printf("\n *  17) Megabit   ->   Gibibyte   *");
	printf("\n *  18) Megabit   ->   Terabyte   *");
	printf("\n *  19) Megabit   ->   Tebibyte   *");
	printf("\n *  20) Megabit   ->   Petabyte   *");
	printf("\n *  21) Megabit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//MEBIBIT para X
float MEBIBITpBit (float data) {
	return (data*(1.049e+6));
}
float MEBIBITpKilobit (float data) {
	return (data*(1049));
}
float MEBIBITpKibibit (float data) {
	return (data*(1024));
}
float MEBIBITpMegabit (float data) {
	return (data*(1.049));
}
float MEBIBITpGigabit (float data) {
	return (data/(954));
}
float MEBIBITpGibibit (float data) {
	return (data/(1024));
}
float MEBIBITpTerabit (float data) {
	return (data/(953674));
}
float MEBIBITpTebibit (float data) {
	return (data/(1.049e+6));
}
float MEBIBITpPetabit (float data) {
	return (data/(9.537e+8));
}
float MEBIBITpPebibit (float data) {
	return (data/(1.074e+9));
}
float MEBIBITpByte (float data) {
	return (data*(131072));
}
float MEBIBITpKilobyte (float data) {
	return (data*(131));
}
float MEBIBITpKibibyte (float data) {
	return (data*(128));
}
float MEBIBITpMegabyte (float data) {
	return (data/(7.629));
}
float MEBIBITpMebiByte (float data) {
	return (data/(8));
}
float MEBIBITpGigabyte (float data) {
	return (data/(7629));
}
float MEBIBITpGibibyte (float data) {
	return (data/(8192));
}
float MEBIBITpTerabyte (float data) {
	return (data/(7.629e+6));
}
float MEBIBITpTebibyte (float data) {
	return (data/(8.389e+6));
}
float MEBIBITpPetabyte (float data) {
	return (data/(7.629e+9));
}
float MEBIBITpPebibyte (float data) {
	return (data/(8.59e+9));
}
int MenuMebibit() {
	system("cls || clear");
	
	int resposta;
	printf("\n ****** CONVERSOR DE MEBIBIT ******");
	printf("\n *  1)  Mebibit   ->   Bit        *");
	printf("\n *  2)  Mebibit   ->   Kilobit    *");
	printf("\n *  3)  Mebibit   ->   Kibibit    *");
	printf("\n *  4)  Mebibit   ->   Megabit    *");
	printf("\n *  5)  Mebibit   ->   Gigabit    *");
	printf("\n *  6)  Mebibit   ->   Gibibit    *");
	printf("\n *  7)  Mebibit   ->   Terabit    *");
	printf("\n *  8)  Mebibit   ->   Tebibit    *");
	printf("\n *  9)  Mebibit   ->   Petabit    *");
	printf("\n *  10) Mebibit   ->   Pebibit    *");
	printf("\n *  11) Mebibit   ->   Byte       *");
	printf("\n *  12) Mebibit   ->   Kilobyte   *");
	printf("\n *  13) Mebibit   ->   Kibibyte   *");
	printf("\n *  14) Mebibit   ->   Megabyte   *");
	printf("\n *  15) Mebibit   ->   MebiByte   *");
	printf("\n *  16) Mebibit   ->   Gigabyte   *");
	printf("\n *  17) Mebibit   ->   Gibibyte   *");
	printf("\n *  18) Mebibit   ->   Terabyte   *");
	printf("\n *  19) Mebibit   ->   Tebibyte   *");
	printf("\n *  20) Mebibit   ->   Petabyte   *");
	printf("\n *  21) Mebibit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//GIGABIT para X
float GIGABITpBit (float data) {
	return (data*(1e+9));
}
float GIGABITpKilobit (float data) {
	return (data*(1e+6));
}
float GIGABITpKibibit (float data) {
	return (data*(976563));
}
float GIGABITpMegabit (float data) {
	return (data*(1000));
}
float GIGABITpMebibit (float data) {
	return (data/(954));
}
float GIGABITpGibibit (float data) {
	return (data/(1074));
}
float GIGABITpTerabit (float data) {
	return (data/(1e+6));
}
float GIGABITpTebibit (float data) {
	return (data/(1.1e+6));
}
float GIGABITpPetabit (float data) {
	return (data/(1e+9));
}
float GIGABITpPebibit (float data) {
	return (data/(1.126e+9));
}
float GIGABITpByte (float data) {
	return (data*(125000));
}
float GIGABITpKilobyte (float data) {
	return (data*(125));
}
float GIGABITpKibibyte (float data) {
	return (data*(122));
}
float GIGABITpMegabyte (float data) {
	return (data/(8));
}
float GIGABITpMebiByte (float data) {
	return (data/(8.389));
}
float GIGABITpGigabyte (float data) {
	return (data/(8000));
}
float GIGABITpGibibyte (float data) {
	return (data/(8590));
}
float GIGABITpTerabyte (float data) {
	return (data/(8e+6));
}
float GIGABITpTebibyte (float data) {
	return (data/(8.796e+6));
}
float GIGABITpPetabyte (float data) {
	return (data/(8e+9));
}
float GIGABITpPebibyte (float data) {
	return (data/(9.007e+9));
}
int MenuGigabit() {
	system("cls || clear");
	
	int resposta;
	printf("\n ****** CONVERSOR DE GIGABIT ******");
	printf("\n *  1)  Gigabit   ->   Bit        *");
	printf("\n *  2)  Gigabit   ->   Kilobit    *");
	printf("\n *  3)  Gigabit   ->   Kibibit    *");
	printf("\n *  4)  Gigabit   ->   Megabit    *");
	printf("\n *  5)  Gigabit   ->   Mebibit    *");
	printf("\n *  6)  Gigabit   ->   Gibibit    *");
	printf("\n *  7)  Gigabit   ->   Terabit    *");
	printf("\n *  8)  Gigabit   ->   Tebibit    *");
	printf("\n *  9)  Gigabit   ->   Petabit    *");
	printf("\n *  10) Gigabit   ->   Pebibit    *");
	printf("\n *  11) Gigabit   ->   Byte       *");
	printf("\n *  12) Gigabit   ->   Kilobyte   *");
	printf("\n *  13) Gigabit   ->   Kibibyte   *");
	printf("\n *  14) Gigabit   ->   Megabyte   *");
	printf("\n *  15) Gigabit   ->   MebiByte   *");
	printf("\n *  16) Gigabit   ->   Gigabyte   *");
	printf("\n *  17) Gigabit   ->   Gibibyte   *");
	printf("\n *  18) Gigabit   ->   Terabyte   *");
	printf("\n *  19) Gigabit   ->   Tebibyte   *");
	printf("\n *  20) Gigabit   ->   Petabyte   *");
	printf("\n *  21) Gigabit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//GIBIBIT para X
float GIBIBITpBit (float data) {
	return (data*(1.074e+9));
}
float GIBIBITpKilobit (float data) {
	return (data*(1.074e+6));
}
float GIBIBITpKibibit (float data) {
	return (data*(1.049e+6));
}
float GIBIBITpMegabit (float data) {
	return (data*(1074));
}
float GIBIBITpMebibit (float data) {
	return (data*(1024));
}
float GIBIBITpGigabit (float data) {
	return (data*(1.074));
}
float GIBIBITpTerabit (float data) {
	return (data/(931));
}
float GIBIBITpTebibit (float data) {
	return (data/(1024));
}
float GIBIBITpPetabit (float data) {
	return (data/(931323));
}
float GIBIBITpPebibit (float data) {
	return (data/(1.049e+6));
}
float GIBIBITpByte (float data) {
	return (data*(1.342e+8));
}
float GIBIBITpKilobyte (float data) {
	return (data*(134218));
}
float GIBIBITpKibibyte (float data) {
	return (data*(131072));
}
float GIBIBITpMegabyte (float data) {
	return (data*(134));
}
float GIBIBITpMebiByte (float data) {
	return (data*(128));
}
float GIBIBITpGigabyte (float data) {
	return (data/(7.451));
}
float GIBIBITpGibibyte (float data) {
	return (data/(8));
}
float GIBIBITpTerabyte (float data) {
	return (data/(7451));
}
float GIBIBITpTebibyte (float data) {
	return (data/(8192));
}
float GIBIBITpPetabyte (float data) {
	return (data/(7.451e+6));
}
float GIBIBITpPebibyte (float data) {
	return (data/(8.389e+6));
}
int MenuGibibit() {
	system("cls || clear");
	
	int resposta;
	printf("\n ****** CONVERSOR DE GIBIBIT ******");
	printf("\n *  1)  Gibibit   ->   Bit        *");
	printf("\n *  2)  Gibibit   ->   Kilobit    *");
	printf("\n *  3)  Gibibit   ->   Kibibit    *");
	printf("\n *  4)  Gibibit   ->   Megabit    *");
	printf("\n *  5)  Gibibit   ->   Mebibit    *");
	printf("\n *  6)  Gibibit   ->   Gigabit    *");
	printf("\n *  7)  Gibibit   ->   Terabit    *");
	printf("\n *  8)  Gibibit   ->   Tebibit    *");
	printf("\n *  9)  Gibibit   ->   Petabit    *");
	printf("\n *  10) Gibibit   ->   Pebibit    *");
	printf("\n *  11) Gibibit   ->   Byte       *");
	printf("\n *  12) Gibibit   ->   Kilobyte   *");
	printf("\n *  13) Gibibit   ->   Kibibyte   *");
	printf("\n *  14) Gibibit   ->   Megabyte   *");
	printf("\n *  15) Gibibit   ->   MebiByte   *");
	printf("\n *  16) Gibibit   ->   Gigabyte   *");
	printf("\n *  17) Gibibit   ->   Gibibyte   *");
	printf("\n *  18) Gibibit   ->   Terabyte   *");
	printf("\n *  19) Gibibit   ->   Tebibyte   *");
	printf("\n *  20) Gibibit   ->   Petabyte   *");
	printf("\n *  21) Gibibit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//TERABIT para X
float TERABITpBit (float data) {
	return (data*(1e+12));
}
float TERABITpKilobit (float data) {
	return (data*(1e+9));
}
float TERABITpKibibit (float data) {
	return (data*(9.766e+8));
}
float TERABITpMegabit (float data) {
	return (data*(1e+6));
}
float TERABITpMebibit (float data) {
	return (data*(953674));
}
float TERABITpGigabit (float data) {
	return (data/(1000));
}
float TERABITpGibibit (float data) {
	return (data/(931));
}
float TERABITpTebibit (float data) {
	return (data/(1.1));
}
float TERABITpPetabit (float data) {
	return (data/(1000));
}
float TERABITpPebibit (float data) {
	return (data/(1126));
}
float TERABITpByte (float data) {
	return (data*(1.25e+11));
}
float TERABITpKilobyte (float data) {
	return (data*(1.25e+8));
}
float TERABITpKibibyte (float data) {
	return (data*(1.221e+8));
}
float TERABITpMegabyte (float data) {
	return (data*(125000));
}
float TERABITpMebiByte (float data) {
	return (data*(119209));
}
float TERABITpGigabyte (float data) {
	return (data*(125));
}
float TERABITpGibibyte (float data) {
	return (data*(116));
}
float TERABITpTerabyte (float data) {
	return (data/(8));
}
float TERABITpTebibyte (float data) {
	return (data/(8.796));
}
float TERABITpPetabyte (float data) {
	return (data/(8000));
}
float TERABITpPebibyte (float data) {
	return (data/(9007));
}
int MenuTerabit() {
	system("cls || clear");
	
	int resposta;
	printf("\n ****** CONVERSOR DE TERABIT ******");
	printf("\n *  1)  Terabit   ->   Bit        *");
	printf("\n *  2)  Terabit   ->   Kilobit    *");
	printf("\n *  3)  Terabit   ->   Kibibit    *");
	printf("\n *  4)  Terabit   ->   Megabit    *");
	printf("\n *  5)  Terabit   ->   Mebibit    *");
	printf("\n *  6)  Terabit   ->   Gigabit    *");
	printf("\n *  7)  Terabit   ->   Gibibit    *");
	printf("\n *  8)  Terabit   ->   Tebibit    *");
	printf("\n *  9)  Terabit   ->   Petabit    *");
	printf("\n *  10) Terabit   ->   Pebibit    *");
	printf("\n *  11) Terabit   ->   Byte       *");
	printf("\n *  12) Terabit   ->   Kilobyte   *");
	printf("\n *  13) Terabit   ->   Kibibyte   *");
	printf("\n *  14) Terabit   ->   Megabyte   *");
	printf("\n *  15) Terabit   ->   MebiByte   *");
	printf("\n *  16) Terabit   ->   Gigabyte   *");
	printf("\n *  17) Terabit   ->   Gibibyte   *");
	printf("\n *  18) Terabit   ->   Terabyte   *");
	printf("\n *  19) Terabit   ->   Tebibyte   *");
	printf("\n *  20) Terabit   ->   Petabyte   *");
	printf("\n *  21) Terabit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//TEBIBIT para X
float TEBIBITpBit (float data) {
	return (data*(1.1e+12));
}
float TEBIBITpKilobit (float data) {
	return (data*(1.1e+9));
}
float TEBIBITpKibibit (float data) {
	return (data*(1.074e+9));
}
float TEBIBITpMegabit (float data) {
	return (data*(1.1e+6));
}
float TEBIBITpMebibit (float data) {
	return (data*(1.049e+6));
}
float TEBIBITpGigabit (float data) {
	return (data*(1100));
}
float TEBIBITpGibibit (float data) {
	return (data*(1024));
}
float TEBIBITpTerabit (float data) {
	return (data*(1.1));
}
float TEBIBITpPetabit (float data) {
	return (data/(909));
}
float TEBIBITpPebibit (float data) {
	return (data/(1024));
}
float TEBIBITpByte (float data) {
	return (data*(1.374e+11));
}
float TEBIBITpKilobyte (float data) {
	return (data*(1.374e+8));
}
float TEBIBITpKibibyte (float data) {
	return (data*(1.342e+8));
}
float TEBIBITpMegabyte (float data) {
	return (data*(137439));
}
float TEBIBITpMebiByte (float data) {
	return (data*(131072));
}
float TEBIBITpGigabyte (float data) {
	return (data*(137));
}
float TEBIBITpGibibyte (float data) {
	return (data*(128));
}
float TEBIBITpTerabyte (float data) {
	return (data/(7.276));
}
float TEBIBITpTebibyte (float data) {
	return (data/(8));
}
float TEBIBITpPetabyte (float data) {
	return (data/(7276));
}
float TEBIBITpPebibyte (float data) {
	return (data/(8192));
}
int MenuTebibit() {
	system("cls || clear");
	
	int resposta;
	printf("\n ****** CONVERSOR DE TEBIBIT ******");
	printf("\n *  1)  Tebibit   ->   Bit        *");
	printf("\n *  2)  Tebibit   ->   Kilobit    *");
	printf("\n *  3)  Tebibit   ->   Kibibit    *");
	printf("\n *  4)  Tebibit   ->   Megabit    *");
	printf("\n *  5)  Tebibit   ->   Mebibit    *");
	printf("\n *  6)  Tebibit   ->   Gigabit    *");
	printf("\n *  7)  Tebibit   ->   Gibibit    *");
	printf("\n *  8)  Tebibit   ->   Terabit    *");
	printf("\n *  9)  Tebibit   ->   Petabit    *");
	printf("\n *  10) Tebibit   ->   Pebibit    *");
	printf("\n *  11) Tebibit   ->   Byte       *");
	printf("\n *  12) Tebibit   ->   Kilobyte   *");
	printf("\n *  13) Tebibit   ->   Kibibyte   *");
	printf("\n *  14) Tebibit   ->   Megabyte   *");
	printf("\n *  15) Tebibit   ->   MebiByte   *");
	printf("\n *  16) Tebibit   ->   Gigabyte   *");
	printf("\n *  17) Tebibit   ->   Gibibyte   *");
	printf("\n *  18) Tebibit   ->   Terabyte   *");
	printf("\n *  19) Tebibit   ->   Tebibyte   *");
	printf("\n *  20) Tebibit   ->   Petabyte   *");
	printf("\n *  21) Tebibit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//PETABIT para X
float PETABITpBit (float data) {
	return (data*(1e+15));
}
float PETABITpKilobit (float data) {
	return (data*(1e+12));
}
float PETABITpKibibit (float data) {
	return (data*(9.766e+11));
}
float PETABITpMegabit (float data) {
	return (data*(1e+9));
}
float PETABITpMebibit (float data) {
	return (data*(9.537e+8));
}
float PETABITpGigabit (float data) {
	return (data*(1e+6));
}
float PETABITpGibibit (float data) {
	return (data*(931323));
}
float PETABITpTerabit (float data) {
	return (data*(1000));
}
float PETABITpTebibit (float data) {
	return (data*(909));
}
float PETABITpPebibit (float data) {
	return (data/(1.126));
}
float PETABITpByte (float data) {
	return (data*(1.25e+14));
}
float PETABITpKilobyte (float data) {
	return (data*(1.25e+11));
}
float PETABITpKibibyte (float data) {
	return (data*(1.221e+11));
}
float PETABITpMegabyte (float data) {
	return (data*(1.25e+8));
}
float PETABITpMebiByte (float data) {
	return (data*(1.192e+8));
}
float PETABITpGigabyte (float data) {
	return (data*(125000));
}
float PETABITpGibibyte (float data) {
	return (data*(116415));
}
float PETABITpTerabyte (float data) {
	return (data*(125));
}
float PETABITpTebibyte (float data) {
	return (data*(114));
}
float PETABITpPetabyte (float data) {
	return (data/(8));
}
float PETABITpPebibyte (float data) {
	return (data/(9.007));
}
int MenuPetabit() {
	system("cls || clear");
	
	int resposta;
	printf("\n ****** CONVERSOR DE PETABIT ******");
	printf("\n *  1)  Petabit   ->   Bit        *");
	printf("\n *  2)  Petabit   ->   Kilobit    *");
	printf("\n *  3)  Petabit   ->   Kibibit    *");
	printf("\n *  4)  Petabit   ->   Megabit    *");
	printf("\n *  5)  Petabit   ->   Mebibit    *");
	printf("\n *  6)  Petabit   ->   Gigabit    *");
	printf("\n *  7)  Petabit   ->   Gibibit    *");
	printf("\n *  8)  Petabit   ->   Terabit    *");
	printf("\n *  9)  Petabit   ->   Tebibit    *");
	printf("\n *  10) Petabit   ->   Pebibit    *");
	printf("\n *  11) Petabit   ->   Byte       *");
	printf("\n *  12) Petabit   ->   Kilobyte   *");
	printf("\n *  13) Petabit   ->   Kibibyte   *");
	printf("\n *  14) Petabit   ->   Megabyte   *");
	printf("\n *  15) Petabit   ->   MebiByte   *");
	printf("\n *  16) Petabit   ->   Gigabyte   *");
	printf("\n *  17) Petabit   ->   Gibibyte   *");
	printf("\n *  18) Petabit   ->   Terabyte   *");
	printf("\n *  19) Petabit   ->   Tebibyte   *");
	printf("\n *  20) Petabit   ->   Petabyte   *");
	printf("\n *  21) Petabit   ->   Pebibyte   *");
	printf("\n **********************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//PEBIBIT para X
float PEBIBITpBit (float data) {
	return (data*(1.126e+15));
}
float PEBIBITpKilobit (float data) {
	return (data*(1.126e+12));
}
float PEBIBITpKibibit (float data) {
	return (data*(1.1e+12));
}
float PEBIBITpMegabit (float data) {
	return (data*(1.126e+9));
}
float PEBIBITpMebibit (float data) {
	return (data*(1.074e+9));
}
float PEBIBITpGigabit (float data) {
	return (data*(1.126e+6));
}
float PEBIBITpGibibit (float data) {
	return (data*(1.049e+6));
}
float PEBIBITpTerabit (float data) {
	return (data*(1126));
}
float PEBIBITpTebibit (float data) {
	return (data*(1024));
}
float PEBIBITpPetabit (float data) {
	return (data*(1.126));
}
float PEBIBITpByte (float data) {
	return (data*(1.407e+14));
}
float PEBIBITpKilobyte (float data) {
	return (data*(1.407e+11));
}
float PEBIBITpKibibyte (float data) {
	return (data*(1.374e+11));
}
float PEBIBITpMegabyte (float data) {
	return (data*(1.407e+8));
}
float PEBIBITpMebiByte (float data) {
	return (data*(1.342e+8));
}
float PEBIBITpGigabyte (float data) {
	return (data*(140737));
}
float PEBIBITpGibibyte (float data) {
	return (data*(131072));
}
float PEBIBITpTerabyte (float data) {
	return (data*(141));
}
float PEBIBITpTebibyte (float data) {
	return (data*(128));
}
float PEBIBITpPetabyte (float data) {
	return (data/(7.105));
}
float PEBIBITpPebibyte (float data) {
	return (data/(8));
}
int MenuPebibit() {
	system("cls || clear");
	
	int resposta;
	printf("\n ************ CONVERSOR DE PEBIBIT ************");
	printf("\n *  1)  Pebibit   ->   Bit                    *");
	printf("\n *  2)  Pebibit   ->   Kilobit                *");
	printf("\n *  3)  Pebibit   ->   Kibibit                *");
	printf("\n *  4)  Pebibit   ->   Megabit                *");
	printf("\n *  5)  Pebibit   ->   Mebibit                *");
	printf("\n *  6)  Pebibit   ->   Gigabit                *");
	printf("\n *  7)  Pebibit   ->   Gibibit                *");
	printf("\n *  8)  Pebibit   ->   Terabit                *");
	printf("\n *  9)  Pebibit   ->   Tebibit                *");
	printf("\n *  10) Pebibit   ->   Petabit                *");
	printf("\n *  11) Pebibit   ->   Byte                   *");
	printf("\n *  12) Pebibit   ->   Kilobyte               *");
	printf("\n *  13) Pebibit   ->   Kibibyte               *");
	printf("\n *  14) Pebibit   ->   Megabyte               *");
	printf("\n *  15) Pebibit   ->   MebiByte               *");
	printf("\n *  16) Pebibit   ->   Gigabyte               *");
	printf("\n *  17) Pebibit   ->   Gibibyte               *");
	printf("\n *  18) Pebibit   ->   Terabyte               *");
	printf("\n *  19) Pebibit   ->   Tebibyte               *");
	printf("\n *  20) Pebibit   ->   Petabyte               *");
	printf("\n *  21) Pebibit   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//BYTE para X
float BYTEpBit (float data) {
	return (data*(8));
}
float BYTEpKilobit (float data) {
	return (data/(125));
}
float BYTEpKibibit (float data) {
	return (data/(128));
}
float BYTEpMegabit (float data) {
	return (data/(125000));
}
float BYTEpMebibit (float data) {
	return (data/(131072));
}
float BYTEpGigabit (float data) {
	return (data/(1.25e+8));
}
float BYTEpGibibit (float data) {
	return (data/(1.342e+8));
}
float BYTEpTerabit (float data) {
	return (data/(1.25e+11));
}
float BYTEpTebibit (float data) {
	return (data/(1.374e+11));
}
float BYTEpPetabit (float data) {
	return (data/(1.25e+14));
}
float BYTEpPebibit (float data) {
	return (data/(1.407e+14));
}
float BYTEpKilobyte (float data) {
	return (data/(1000));
}
float BYTEpKibibyte (float data) {
	return (data/(1024));
}
float BYTEpMegabyte (float data) {
	return (data/(1e+6));
}
float BYTEpMebiByte (float data) {
	return (data/(1.049e+6));
}
float BYTEpGigabyte (float data) {
	return (data/(1e+9));
}
float BYTEpGibibyte (float data) {
	return (data/(1.074e+9));
}
float BYTEpTerabyte (float data) {
	return (data/(1e+12));
}
float BYTEpTebibyte (float data) {
	return (data/(1.1e+12));
}
float BYTEpPetabyte (float data) {
	return (data/(1e+15));
}
float BYTEpPebibyte (float data) {
	return (data/(1.126e+15));
}
int MenuByte() {
	system("cls || clear");
	
	int resposta;
	printf("\n ************ CONVERSOR DE BYTE ************");
	printf("\n *  1)  Byte   ->   Bit                    *");
	printf("\n *  2)  Byte   ->   Kilobit                *");
	printf("\n *  3)  Byte   ->   Kibibit                *");
	printf("\n *  4)  Byte   ->   Megabit                *");
	printf("\n *  5)  Byte   ->   Mebibit                *");
	printf("\n *  6)  Byte   ->   Gigabit                *");
	printf("\n *  7)  Byte   ->   Gibibit                *");
	printf("\n *  8)  Byte   ->   Terabit                *");
	printf("\n *  9)  Byte   ->   Tebibit                *");
	printf("\n *  10) Byte   ->   Petabit                *");
	printf("\n *  11) Byte   ->   Pebibit                *");
	printf("\n *  12) Byte   ->   Kilobyte               *");
	printf("\n *  13) Byte   ->   Kibibyte               *");
	printf("\n *  14) Byte   ->   Megabyte               *");
	printf("\n *  15) Byte   ->   MebiByte               *");
	printf("\n *  16) Byte   ->   Gigabyte               *");
	printf("\n *  17) Byte   ->   Gibibyte               *");
	printf("\n *  18) Byte   ->   Terabyte               *");
	printf("\n *  19) Byte   ->   Tebibyte               *");
	printf("\n *  20) Byte   ->   Petabyte               *");
	printf("\n *  21) Byte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//KILOBYTE para X
float KILOBYTEpBit (float data) {
	return (data*(8000));
}
float KILOBYTEpKilobit (float data) {
	return (data*(8));
}
float KILOBYTEpKibibit (float data) {
	return (data*(7.812));
}
float KILOBYTEpMegabit (float data) {
	return (data/(125));
}
float KILOBYTEpMebibit (float data) {
	return (data/(131));
}
float KILOBYTEpGigabit (float data) {
	return (data/(125000));
}
float KILOBYTEpGibibit (float data) {
	return (data/(134218));
}
float KILOBYTEpTerabit (float data) {
	return (data/(1.25e+8));
}
float KILOBYTEpTebibit (float data) {
	return (data/(1.374e+8));
}
float KILOBYTEpPetabit (float data) {
	return (data/(1.25e+11));
}
float KILOBYTEpPebibit (float data) {
	return (data/(1.407e+11));
}
float KILOBYTEpByte (float data) {
	return (data*(1000));
}
float KILOBYTEpKibibyte (float data) {
	return (data/(1.024));
}
float KILOBYTEpMegabyte (float data) {
	return (data/(1000));
}
float KILOBYTEpMebiByte (float data) {
	return (data/(1049));
}
float KILOBYTEpGigabyte (float data) {
	return (data/(1e+6));
}
float KILOBYTEpGibibyte (float data) {
	return (data/(1.074e+6));
}
float KILOBYTEpTerabyte (float data) {
	return (data/(1e+9));
}
float KILOBYTEpTebibyte (float data) {
	return (data/(1.1e+9));
}
float KILOBYTEpPetabyte (float data) {
	return (data/(1e+12));
}
float KILOBYTEpPebibyte (float data) {
	return (data/(1.126e+12));
}
int MenuKilobyte() {
	system("cls || clear");
	
	int resposta;
	printf("\n ************ CONVERSOR DE KILOBYTE ************");
	printf("\n *  1)  Kilobyte   ->   Bit                    *");
	printf("\n *  2)  Kilobyte   ->   Kilobit                *");
	printf("\n *  3)  Kilobyte   ->   Kibibit                *");
	printf("\n *  4)  Kilobyte   ->   Megabit                *");
	printf("\n *  5)  Kilobyte   ->   Mebibit                *");
	printf("\n *  6)  Kilobyte   ->   Gigabit                *");
	printf("\n *  7)  Kilobyte   ->   Gibibit                *");
	printf("\n *  8)  Kilobyte   ->   Terabit                *");
	printf("\n *  9)  Kilobyte   ->   Tebibit                *");
	printf("\n *  10) Kilobyte   ->   Petabit                *");
	printf("\n *  11) Kilobyte   ->   Pebibit                *");
	printf("\n *  12) Kilobyte   ->   Byte                   *");
	printf("\n *  13) Kilobyte   ->   Kibibyte               *");
	printf("\n *  14) Kilobyte   ->   Megabyte               *");
	printf("\n *  15) Kilobyte   ->   MebiByte               *");
	printf("\n *  16) Kilobyte   ->   Gigabyte               *");
	printf("\n *  17) Kilobyte   ->   Gibibyte               *");
	printf("\n *  18) Kilobyte   ->   Terabyte               *");
	printf("\n *  19) Kilobyte   ->   Tebibyte               *");
	printf("\n *  20) Kilobyte   ->   Petabyte               *");
	printf("\n *  21) Kilobyte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//KIBIBYTE para X
float KIBIBYTEpBit (float data) {
	return (data*(8192));
}
float KIBIBYTEpKilobit (float data) {
	return (data*(8.192));
}
float KIBIBYTEpKibibit (float data) {
	return (data*(8));
}
float KIBIBYTEpMegabit (float data) {
	return (data/(122));
}
float KIBIBYTEpMebibit (float data) {
	return (data/(128));
}
float KIBIBYTEpGigabit (float data) {
	return (data/(122070));
}
float KIBIBYTEpGibibit (float data) {
	return (data/(131072));
}
float KIBIBYTEpTerabit (float data) {
	return (data/(1.221e+8));
}
float KIBIBYTEpTebibit (float data) {
	return (data/(1.342e+8));
}
float KIBIBYTEpPetabit (float data) {
	return (data/(1.221e+11));
}
float KIBIBYTEpPebibit (float data) {
	return (data/(1.374e+11));
}
float KIBIBYTEpByte (float data) {
	return (data*(1024));
}
float KIBIBYTEpKilobyte (float data) {
	return (data*(1.024));
}
float KIBIBYTEpMegabyte (float data) {
	return (data/(977));
}
float KIBIBYTEpMebiByte (float data) {
	return (data/(1024));
}
float KIBIBYTEpGigabyte (float data) {
	return (data/(976562));
}
float KIBIBYTEpGibibyte (float data) {
	return (data/(1.049e+6));
}
float KIBIBYTEpTerabyte (float data) {
	return (data/(9.766e+8));
}
float KIBIBYTEpTebibyte (float data) {
	return (data/(1.074e+9));
}
float KIBIBYTEpPetabyte (float data) {
	return (data/(9.766e+11));
}
float KIBIBYTEpPebibyte (float data) {
	return (data/(1.1e+12));
}
int MenuKibibyte() {
	system("cls || clear");
	
	int resposta;
	printf("\n ************ CONVERSOR DE KIBIBYTE ************");
	printf("\n *  1)  Kibibyte   ->   Bit                    *");
	printf("\n *  2)  Kibibyte   ->   Kilobit                *");
	printf("\n *  3)  Kibibyte   ->   Kibibit                *");
	printf("\n *  4)  Kibibyte   ->   Megabit                *");
	printf("\n *  5)  Kibibyte   ->   Mebibit                *");
	printf("\n *  6)  Kibibyte   ->   Gigabit                *");
	printf("\n *  7)  Kibibyte   ->   Gibibit                *");
	printf("\n *  8)  Kibibyte   ->   Terabit                *");
	printf("\n *  9)  Kibibyte   ->   Tebibit                *");
	printf("\n *  10) Kibibyte   ->   Petabit                *");
	printf("\n *  11) Kibibyte   ->   Pebibit                *");
	printf("\n *  12) Kibibyte   ->   Byte                   *");
	printf("\n *  13) Kibibyte   ->   Kolobyte               *");
	printf("\n *  14) Kibibyte   ->   Megabyte               *");
	printf("\n *  15) Kibibyte   ->   MebiByte               *");
	printf("\n *  16) Kibibyte   ->   Gigabyte               *");
	printf("\n *  17) Kibibyte   ->   Gibibyte               *");
	printf("\n *  18) Kibibyte   ->   Terabyte               *");
	printf("\n *  19) Kibibyte   ->   Tebibyte               *");
	printf("\n *  20) Kibibyte   ->   Petabyte               *");
	printf("\n *  21) Kibibyte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//MEGABYTE para X
float MEGABYTEpBit (float data) {
	return (data*(8e+6));
}
float MEGABYTEpKilobit (float data) {
	return (data*(8000));
}
float MEGABYTEpKibibit (float data) {
	return (data*(7813));
}
float MEGABYTEpMegabit (float data) {
	return (data*(8));
}
float MEGABYTEpMebibit (float data) {
	return (data*(7.629));
}
float MEGABYTEpGigabit (float data) {
	return (data/(125));
}
float MEGABYTEpGibibit (float data) {
	return (data/(134));
}
float MEGABYTEpTerabit (float data) {
	return (data/(125000));
}
float MEGABYTEpTebibit (float data) {
	return (data/(137439));
}
float MEGABYTEpPetabit (float data) {
	return (data/(1.25e+8));
}
float MEGABYTEpPebibit (float data) {
	return (data/(1.407e+8));
}
float MEGABYTEpByte (float data) {
	return (data*(1e+6));
}
float MEGABYTEpKilobyte (float data) {
	return (data*(1000));
}
float MEGABYTEpKibibyte (float data) {
	return (data*(977));
}
float MEGABYTEpMebiByte (float data) {
	return (data/(1.049));
}
float MEGABYTEpGigabyte (float data) {
	return (data/(1000));
}
float MEGABYTEpGibibyte (float data) {
	return (data/(1074));
}
float MEGABYTEpTerabyte (float data) {
	return (data/(1e+6));
}
float MEGABYTEpTebibyte (float data) {
	return (data/(1.1e+6));
}
float MEGABYTEpPetabyte (float data) {
	return (data/(1e+9));
}
float MEGABYTEpPebibyte (float data) {
	return (data/(1.126e+9));
}
int MenuMegabyte() {
	system("cls || clear");
	
	int resposta;
	printf("\n ************ CONVERSOR DE MEGABYTE ************");
	printf("\n *  1)  Megabyte   ->   Bit                    *");
	printf("\n *  2)  Megabyte   ->   Kilobit                *");
	printf("\n *  3)  Megabyte   ->   Kibibit                *");
	printf("\n *  4)  Megabyte   ->   Megabit                *");
	printf("\n *  5)  Megabyte   ->   Mebibit                *");
	printf("\n *  6)  Megabyte   ->   Gigabit                *");
	printf("\n *  7)  Megabyte   ->   Gibibit                *");
	printf("\n *  8)  Megabyte   ->   Terabit                *");
	printf("\n *  9)  Megabyte   ->   Tebibit                *");
	printf("\n *  10) Megabyte   ->   Petabit                *");
	printf("\n *  11) Megabyte   ->   Pebibit                *");
	printf("\n *  12) Megabyte   ->   Byte                   *");
	printf("\n *  13) Megabyte   ->   Kilobyte               *");
	printf("\n *  14) Megabyte   ->   Kibibyte               *");
	printf("\n *  15) Megabyte   ->   MebiByte               *");
	printf("\n *  16) Megabyte   ->   Gigabyte               *");
	printf("\n *  17) Megabyte   ->   Gibibyte               *");
	printf("\n *  18) Megabyte   ->   Terabyte               *");
	printf("\n *  19) Megabyte   ->   Tebibyte               *");
	printf("\n *  20) Megabyte   ->   Petabyte               *");
	printf("\n *  21) Megabyte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//MEBIBYTE para X
float MEBIBYTEpBit (float data) {
	return (data*(8.389e+6));
}
float MEBIBYTEpKilobit (float data) {
	return (data*(8389));
}
float MEBIBYTEpKibibit (float data) {
	return (data*(8192));
}
float MEBIBYTEpMegabit (float data) {
	return (data*(8.389));
}
float MEBIBYTEpMebibit (float data) {
	return (data*(8));
}
float MEBIBYTEpGigabit (float data) {
	return (data/(119));
}
float MEBIBYTEpGibibit (float data) {
	return (data/(128));
}
float MEBIBYTEpTerabit (float data) {
	return (data/(119209));
}
float MEBIBYTEpTebibit (float data) {
	return (data/(131072));
}
float MEBIBYTEpPetabit (float data) {
	return (data/(1.192e+8));
}
float MEBIBYTEpPebibit (float data) {
	return (data/(1.342e+8));
}
float MEBIBYTEpByte (float data) {
	return (data*(1.049e+6));
}
float MEBIBYTEpKilobyte (float data) {
	return (data*(1049));
}
float MEBIBYTEpKibibyte (float data) {
	return (data*(1024));
}
float MEBIBYTEpMegabyte (float data) {
	return (data*(1.049));
}
float MEBIBYTEpMebiByte (float data) {
	return (data/(1024));
}
float MEBIBYTEpGigabyte (float data) {
	return (data/(976562));
}
float MEBIBYTEpGibibyte (float data) {
	return (data/(1.049e+6));
}
float MEBIBYTEpTerabyte (float data) {
	return (data/(9.766e+8));
}
float MEBIBYTEpTebibyte (float data) {
	return (data/(1.074e+9));
}
float MEBIBYTEpPetabyte (float data) {
	return (data/(9.766e+11));
}
float MEBIBYTEpPebibyte (float data) {
	return (data/(1.1e+12));
}
int MenuMebiByte() {
	system("cls || clear");
	
	int resposta;
	printf("\n ************ CONVERSOR DE MEBIBYTE ************");
	printf("\n *  1)  MebiByte   ->   Bit                    *");
	printf("\n *  2)  MebiByte   ->   Kilobit                *");
	printf("\n *  3)  MebiByte   ->   Kibibit                *");
	printf("\n *  4)  MebiByte   ->   Megabit                *");
	printf("\n *  5)  MebiByte   ->   Mebibit                *");
	printf("\n *  6)  MebiByte   ->   Gigabit                *");
	printf("\n *  7)  MebiByte   ->   Gibibit                *");
	printf("\n *  8)  MebiByte   ->   Terabit                *");
	printf("\n *  9)  MebiByte   ->   Tebibit                *");
	printf("\n *  10) MebiByte   ->   Petabit                *");
	printf("\n *  11) MebiByte   ->   Pebibit                *");
	printf("\n *  12) MebiByte   ->   Byte                   *");
	printf("\n *  13) MebiByte   ->   Kilobyte               *");
	printf("\n *  14) MebiByte   ->   Kibibyte               *");
	printf("\n *  15) MebiByte   ->   Megabyte               *");
	printf("\n *  16) MebiByte   ->   Gigabyte               *");
	printf("\n *  17) MebiByte   ->   Gibibyte               *");
	printf("\n *  18) MebiByte   ->   Terabyte               *");
	printf("\n *  19) MebiByte   ->   Tebibyte               *");
	printf("\n *  20) MebiByte   ->   Petabyte               *");
	printf("\n *  21) MebiByte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//GIGABYTE para X
float GIGABYTEpBit (float data) {
	return (data*(8e+9));
}
float GIGABYTEpKilobit (float data) {
	return (data*(8e+6));
}
float GIGABYTEpKibibit (float data) {
	return (data*(7.812e+6));
}
float GIGABYTEpMegabit (float data) {
	return (data*(8000));
}
float GIGABYTEpMebibit (float data) {
	return (data*(7629));
}
float GIGABYTEpGigabit (float data) {
	return (data*(8));
}
float GIGABYTEpGibibit (float data) {
	return (data*(7.451));
}
float GIGABYTEpTerabit (float data) {
	return (data/(125));
}
float GIGABYTEpTebibit (float data) {
	return (data/(137));
}
float GIGABYTEpPetabit (float data) {
	return (data/(125000));
}
float GIGABYTEpPebibit (float data) {
	return (data/(140737));
}
float GIGABYTEpByte (float data) {
	return (data*(1e+9));
}
float GIGABYTEpKilobyte (float data) {
	return (data*(1e+6));
}
float GIGABYTEpKibibyte (float data) {
	return (data*(976563));
}
float GIGABYTEpMegabyte (float data) {
	return (data*(1000));
}
float GIGABYTEpMebiByte (float data) {
	return (data*(954));
}
float GIGABYTEpGibibyte (float data) {
	return (data/(1.074));
}
float GIGABYTEpTerabyte (float data) {
	return (data/(1000));
}
float GIGABYTEpTebibyte (float data) {
	return (data/(1100));
}
float GIGABYTEpPetabyte (float data) {
	return (data/(1e+6));
}
float GIGABYTEpPebibyte (float data) {
	return (data/(1.126e+6));
}
int MenuGigabyte() {
	system("cls || clear");
	
	int resposta;
	printf("\n ************ CONVERSOR DE GIGABYTE ************");
	printf("\n *  1)  Gigabyte   ->   Bit                    *");
	printf("\n *  2)  Gigabyte   ->   Kilobit                *");
	printf("\n *  3)  Gigabyte   ->   Kibibit                *");
	printf("\n *  4)  Gigabyte   ->   Megabit                *");
	printf("\n *  5)  Gigabyte   ->   Mebibit                *");
	printf("\n *  6)  Gigabyte   ->   Gigabit                *");
	printf("\n *  7)  Gigabyte   ->   Gibibit                *");
	printf("\n *  8)  Gigabyte   ->   Terabit                *");
	printf("\n *  9)  Gigabyte   ->   Tebibit                *");
	printf("\n *  10) Gigabyte   ->   Petabit                *");
	printf("\n *  11) Gigabyte   ->   Pebibit                *");
	printf("\n *  12) Gigabyte   ->   Byte                   *");
	printf("\n *  13) Gigabyte   ->   Kilobyte               *");
	printf("\n *  14) Gigabyte   ->   Kibibyte               *");
	printf("\n *  15) Gigabyte   ->   Megabyte               *");
	printf("\n *  16) Gigabyte   ->   MebiByte               *");
	printf("\n *  17) Gigabyte   ->   Gibibyte               *");
	printf("\n *  18) Gigabyte   ->   Terabyte               *");
	printf("\n *  19) Gigabyte   ->   Tebibyte               *");
	printf("\n *  20) Gigabyte   ->   Petabyte               *");
	printf("\n *  21) Gigabyte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//GIBIBYTE para X
float GIBIBYTEpBit (float data) {
	return (data*(8.59e+9));
}
float GIBIBYTEpKilobit (float data) {
	return (data*(8.59e+6));
}
float GIBIBYTEpKibibit (float data) {
	return (data*(8.389e+6));
}
float GIBIBYTEpMegabit (float data) {
	return (data*(8590));
}
float GIBIBYTEpMebibit (float data) {
	return (data*(8192));
}
float GIBIBYTEpGigabit (float data) {
	return (data*(8.59));
}
float GIBIBYTEpGibibit (float data) {
	return (data*(8));
}
float GIBIBYTEpTerabit (float data) {
	return (data/(116));
}
float GIBIBYTEpTebibit (float data) {
	return (data/(128));
}
float GIBIBYTEpPetabit (float data) {
	return (data/(116415));
}
float GIBIBYTEpPebibit (float data) {
	return (data/(131072));
}
float GIBIBYTEpByte (float data) {
	return (data*(1.074e+9));
}
float GIBIBYTEpKilobyte (float data) {
	return (data*(1.074e+6));
}
float GIBIBYTEpKibibyte (float data) {
	return (data*(1.049e+6));
}
float GIBIBYTEpMegabyte (float data) {
	return (data*(1074));
}
float GIBIBYTEpMebiByte (float data) {
	return (data*(1024));
}
float GIBIBYTEpGigabyte (float data) {
	return (data*(1.074));
}
float GIBIBYTEpTerabyte (float data) {
	return (data/(931));
}
float GIBIBYTEpTebibyte (float data) {
	return (data/(1024));
}
float GIBIBYTEpPetabyte (float data) {
	return (data/(931323));
}
float GIBIBYTEpPebibyte (float data) {
	return (data/(1.049e+6));
}
int MenuGibibyte() {
	system("cls || clear");
	
	int resposta;
	printf("\n ************ CONVERSOR DE GIBIBYTE ************");
	printf("\n *  1)  Gibibyte   ->   Bit                    *");
	printf("\n *  2)  Gibibyte   ->   Kilobit                *");
	printf("\n *  3)  Gibibyte   ->   Kibibit                *");
	printf("\n *  4)  Gibibyte   ->   Megabit                *");
	printf("\n *  5)  Gibibyte   ->   Mebibit                *");
	printf("\n *  6)  Gibibyte   ->   Gigabit                *");
	printf("\n *  7)  Gibibyte   ->   Gibibit                *");
	printf("\n *  8)  Gibibyte   ->   Terabit                *");
	printf("\n *  9)  Gibibyte   ->   Tebibit                *");
	printf("\n *  10) Gibibyte   ->   Petabit                *");
	printf("\n *  11) Gibibyte   ->   Pebibit                *");
	printf("\n *  12) Gibibyte   ->   Byte                   *");
	printf("\n *  13) Gibibyte   ->   Kilobyte               *");
	printf("\n *  14) Gibibyte   ->   Kibibyte               *");
	printf("\n *  15) Gibibyte   ->   Megabyte               *");
	printf("\n *  16) Gibibyte   ->   MebiByte               *");
	printf("\n *  17) Gibibyte   ->   Gigabyte               *");
	printf("\n *  18) Gibibyte   ->   Terabyte               *");
	printf("\n *  19) Gibibyte   ->   Tebibyte               *");
	printf("\n *  20) Gibibyte   ->   Petabyte               *");
	printf("\n *  21) Gibibyte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//TERABYTE para X
float TERABYTEpBit (float data) {
	return (data*(8e+12));
}
float TERABYTEpKilobit (float data) {
	return (data*(8e+9));
}
float TERABYTEpKibibit (float data) {
	return (data*(7.812e+9));
}
float TERABYTEpMegabit (float data) {
	return (data*(8e+6));
}
float TERABYTEpMebibit (float data) {
	return (data*(7.629e+6));
}
float TERABYTEpGigabit (float data) {
	return (data*(8000));
}
float TERABYTEpGibibit (float data) {
	return (data*(7451));
}
float TERABYTEpTerabit (float data) {
	return (data*(8));
}
float TERABYTEpTebibit (float data) {
	return (data*(7.276));
}
float TERABYTEpPetabit (float data) {
	return (data/(125));
}
float TERABYTEpPebibit (float data) {
	return (data/(141));
}
float TERABYTEpByte (float data) {
	return (data*(1e+12));
}
float TERABYTEpKilobyte (float data) {
	return (data*(1e+9));
}
float TERABYTEpKibibyte (float data) {
	return (data*(9.766e+8));
}
float TERABYTEpMegabyte (float data) {
	return (data*(1e+6));
}
float TERABYTEpMebiByte (float data) {
	return (data*(953674));
}
float TERABYTEpGigabyte (float data) {
	return (data*(1000));
}
float TERABYTEpGibibyte (float data) {
	return (data*(931));
}
float TERABYTEpTebibyte (float data) {
	return (data/(1.1));
}
float TERABYTEpPetabyte (float data) {
	return (data/(1000));
}
float TERABYTEpPebibyte (float data) {
	return (data/(1126));
}
int MenuTerabyte() {
	system("cls || clear");
	
	int resposta;
	printf("\n ************ CONVERSOR DE TERABYTE ************");
	printf("\n *  1)  Terabyte   ->   Bit                    *");
	printf("\n *  2)  Terabyte   ->   Kilobit                *");
	printf("\n *  3)  Terabyte   ->   Kibibit                *");
	printf("\n *  4)  Terabyte   ->   Megabit                *");
	printf("\n *  5)  Terabyte   ->   Mebibit                *");
	printf("\n *  6)  Terabyte   ->   Gigabit                *");
	printf("\n *  7)  Terabyte   ->   Gibibit                *");
	printf("\n *  8)  Terabyte   ->   Terabit                *");
	printf("\n *  9)  Terabyte   ->   Tebibit                *");
	printf("\n *  10) Terabyte   ->   Petabit                *");
	printf("\n *  11) Terabyte   ->   Pebibit                *");
	printf("\n *  12) Terabyte   ->   Byte                   *");
	printf("\n *  13) Terabyte   ->   Kilobyte               *");
	printf("\n *  14) Terabyte   ->   Kibibyte               *");
	printf("\n *  15) Terabyte   ->   Megabyte               *");
	printf("\n *  16) Terabyte   ->   MebyByte               *");
	printf("\n *  17) Terabyte   ->   Gigabyte               *");
	printf("\n *  18) Terabyte   ->   Gibibyte               *");
	printf("\n *  19) Terabyte   ->   Tebibyte               *");
	printf("\n *  20) Terabyte   ->   Petabyte               *");
	printf("\n *  21) Terabyte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//TEBIBYTE para X
float TEBIBYTEpBit (float data) {
	return (data*(8.796e+12));
}
float TEBIBYTEpKilobit (float data) {
	return (data*(8.796e+9));
}
float TEBIBYTEpKibibit (float data) {
	return (data*(8.59e+9));
}
float TEBIBYTEpMegabit (float data) {
	return (data*(8.796e+6));
}
float TEBIBYTEpMebibit (float data) {
	return (data*(8.389e+6));
}
float TEBIBYTEpGigabit (float data) {
	return (data*(8796));
}
float TEBIBYTEpGibibit (float data) {
	return (data*(8192));
}
float TEBIBYTEpTerabit (float data) {
	return (data*(8.796));
}
float TEBIBYTEpTebibit (float data) {
	return (data*(8));
}
float TEBIBYTEpPetabit (float data) {
	return (data/(114));
}
float TEBIBYTEpPebibit (float data) {
	return (data/(128));
}
float TEBIBYTEpByte (float data) {
	return (data*(1.1e+12));
}
float TEBIBYTEpKilobyte (float data) {
	return (data*(1.1e+9));
}
float TEBIBYTEpKibibyte (float data) {
	return (data*(1.074e+9));
}
float TEBIBYTEpMegabyte (float data) {
	return (data*(1.1e+6));
}
float TEBIBYTEpMebiByte (float data) {
	return (data*(1.049e+6));
}
float TEBIBYTEpGigabyte (float data) {
	return (data*(1100));
}
float TEBIBYTEpGibibyte (float data) {
	return (data*(1024));
}
float TEBIBYTEpTerabyte (float data) {
	return (data*(1.1));
}
float TEBIBYTEpPetabyte (float data) {
	return (data/(909));
}
float TEBIBYTEpPebibyte (float data) {
	return (data/(1024));
}
int MenuTebibyte() {
	system("cls || clear");
	
	int resposta;
	printf("\n ************ CONVERSOR DE TEBIBYTE ************");
	printf("\n *  1)  Tebibyte   ->   Bit                    *");
	printf("\n *  2)  Tebibyte   ->   Kilobit                *");
	printf("\n *  3)  Tebibyte   ->   Kibibit                *");
	printf("\n *  4)  Tebibyte   ->   Megabit                *");
	printf("\n *  5)  Tebibyte   ->   Mebibit                *");
	printf("\n *  6)  Tebibyte   ->   Gigabit                *");
	printf("\n *  7)  Tebibyte   ->   Gibibit                *");
	printf("\n *  8)  Tebibyte   ->   Terabit                *");
	printf("\n *  9)  Tebibyte   ->   Tebibit                *");
	printf("\n *  10) Tebibyte   ->   Petabit                *");
	printf("\n *  11) Tebibyte   ->   Pebibit                *");
	printf("\n *  12) Tebibyte   ->   Byte                   *");
	printf("\n *  13) Tebibyte   ->   Kilobyte               *");
	printf("\n *  14) Tebibyte   ->   Kibibyte               *");
	printf("\n *  15) Tebibyte   ->   Megabyte               *");
	printf("\n *  16) Tebibyte   ->   MebiByte               *");
	printf("\n *  17) Tebibyte   ->   Gigabyte               *");
	printf("\n *  18) Tebibyte   ->   Gibibyte               *");
	printf("\n *  19) Tebibyte   ->   Terabyte               *");
	printf("\n *  20) Tebibyte   ->   Petabyte               *");
	printf("\n *  21) Tebibyte   ->   Pebibyte               *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//PETABYTE para X
float PETABYTEpBit (float data) {
	return (data*(8e+15));
}
float PETABYTEpKilobit (float data) {
	return (data*(8e+12));
}
float PETABYTEpKibibit (float data) {
	return (data*(7.812e+12));
}
float PETABYTEpMegabit (float data) {
	return (data*(8e+9));
}
float PETABYTEpMebibit (float data) {
	return (data*(7.629e+9));
}
float PETABYTEpGigabit (float data) {
	return (data*(8e+6));
}
float PETABYTEpGibibit (float data) {
	return (data*(7.451e+6));
}
float PETABYTEpTerabit (float data) {
	return (data*(8000));
}
float PETABYTEpTebibit (float data) {
	return (data*(7276));
}
float PETABYTEpPetabit (float data) {
	return (data*(8));
}
float PETABYTEpPebibit (float data) {
	return (data*(7.105));
}
float PETABYTEpByte (float data) {
	return (data*(1e+15));
}
float PETABYTEpKilobyte (float data) {
	return (data*(1e+12));
}
float PETABYTEpKibibyte (float data) {
	return (data*(9.766e+11));
}
float PETABYTEpMegabyte (float data) {
	return (data*(1e+9));
}
float PETABYTEpMebiByte (float data) {
	return (data*(9.537e+8));
}
float PETABYTEpGigabyte (float data) {
	return (data*(1e+6));
}
float PETABYTEpGibibyte (float data) {
	return (data*(931323));
}
float PETABYTEpTerabyte (float data) {
	return (data*(1000));
}
float PETABYTEpTebibyte (float data) {
	return (data*(909));
}
float PETABYTEpPebibyte (float data) {
	return (data/(1024));
}
int MenuPetabyte() {
	system("cls || clear");
	
	int resposta;
	printf("\n ******* CONVERSOR DE PETABYTE *******");
	printf("\n *  1)  Petabyte   ->   Bit          *");
	printf("\n *  2)  Petabyte   ->   Kilobit      *");
	printf("\n *  3)  Petabyte   ->   Kibibit      *");
	printf("\n *  4)  Petabyte   ->   Megabit      *");
	printf("\n *  5)  Petabyte   ->   Mebibit      *");
	printf("\n *  6)  Petabyte   ->   Gigabit      *");
	printf("\n *  7)  Petabyte   ->   Gibibit      *");
	printf("\n *  8)  Petabyte   ->   Terabit      *");
	printf("\n *  9)  Petabyte   ->   Tebibit      *");
	printf("\n *  10) Petabyte   ->   Petabit      *");
	printf("\n *  11) Petabyte   ->   Pebibit      *");
	printf("\n *  12) Petabyte   ->   Byte         *");
	printf("\n *  13) Petabyte   ->   Kilobyte     *");
	printf("\n *  14) Petabyte   ->   Kibibyte     *");
	printf("\n *  15) Petabyte   ->   Megabyte     *");
	printf("\n *  16) Petabyte   ->   MebiByte     *");
	printf("\n *  17) Petabyte   ->   Gigabyte     *");
	printf("\n *  18) Petabyte   ->   Gibibyte     *");
	printf("\n *  19) Petabyte   ->   Terabyte     *");
	printf("\n *  20) Petabyte   ->   TebiByte     *");
	printf("\n *  21) Petabyte   ->   Pebibyte     *");
	printf("\n *************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


//PEBIBYTE para X
float PEBIBYTEpBit (float data) {
	return (data*(9.007e+15));
}
float PEBIBYTEpKilobit (float data) {
	return (data*(9.007e+12));
}
float PEBIBYTEpKibibit (float data) {
	return (data*(8.796e+12));
}
float PEBIBYTEpMegabit (float data) {
	return (data*(9.007e+9));
}
float PEBIBYTEpMebibit (float data) {
	return (data*(8.59e+9));
}
float PEBIBYTEpGigabit (float data) {
	return (data*(9.007e+6));
}
float PEBIBYTEpGibibit (float data) {
	return (data*(8.389e+6));
}
float PEBIBYTEpTerabit (float data) {
	return (data*(9007));
}
float PEBIBYTEpTebibit (float data) {
	return (data*(8192));
}
float PEBIBYTEpPetabit (float data) {
	return (data*(9.007));
}
float PEBIBYTEpPebibit (float data) {
	return (data*(8));
}
float PEBIBYTEpByte (float data) {
	return (data*(1126e+15));
}
float PEBIBYTEpKilobyte (float data) {
	return (data*(1.126e+12));
}
float PEBIBYTEpKibibyte (float data) {
	return (data*(1.1e+12));
}
float PEBIBYTEpMegabyte (float data) {
	return (data*(1.126e+9));
}
float PEBIBYTEpMebiByte (float data) {
	return (data*(1.074e+9));
}
float PEBIBYTEpGigabyte (float data) {
	return (data*(1.126e+6));
}
float PEBIBYTEpGibibyte (float data) {
	return (data*(1.049e+6));
}
float PEBIBYTEpTerabyte (float data) {
	return (data*(1126));
}
float PEBIBYTEpTebibyte (float data) {
	return (data*(1024));
}
float PEBIBYTEpPetabyte (float data) {
	return (data*(1.126));
}
int MenuPebibyte() {
	system("cls || clear");
	
	int resposta;
	printf("\n ******* CONVERSOR DE PEBIBYTE *******");
	printf("\n *  1)  Pebibyte   ->   Bit          *");
	printf("\n *  2)  Pebibyte   ->   Kilobit      *");
	printf("\n *  3)  Pebibyte   ->   Kibibit      *");
	printf("\n *  4)  Pebibyte   ->   Megabit      *");
	printf("\n *  5)  Pebibyte   ->   Mebibit      *");
	printf("\n *  6)  Pebibyte   ->   Gigabit      *");
	printf("\n *  7)  Pebibyte   ->   Gibibit      *");
	printf("\n *  8)  Pebibyte   ->   Terabit      *");
	printf("\n *  9)  Pebibyte   ->   Tebibit      *");
	printf("\n *  10) Pebibyte   ->   Petabit      *");
	printf("\n *  11) Pebibyte   ->   Pebibit      *");
	printf("\n *  12) Pebibyte   ->   Byte         *");
	printf("\n *  13) Pebibyte   ->   Kilobyte     *");
	printf("\n *  14) Pebibyte   ->   Kibibyte     *");
	printf("\n *  15) Pebibyte   ->   Megabyte     *");
	printf("\n *  16) Pebibyte   ->   MebiByte     *");
	printf("\n *  17) Pebibyte   ->   Gigabyte     *");
	printf("\n *  18) Pebibyte   ->   Gibibyte     *");
	printf("\n *  19) Pebibyte   ->   Terabyte     *");
	printf("\n *  20) Pebibyte   ->   TebiByte     *");
	printf("\n *  21) Pebibyte   ->   Petabyte     *");
	printf("\n *************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// Menu Combustível, feita por Thiago Bruno
int MenuCombustivel(){
	setlocale (LC_ALL,"portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ******* CONVERSOR DE COMBUSTÍVEL *********");
	printf("\n * 1)  Quilometro por litro               *");
	printf("\n * 2)  Milha por galão americano          *");
	printf("\n * 3)  Milha por galão imperial           *");
	printf("\n * 4)  100 Litros por quilometro          *");
	printf("\n ******************************************");
	printf("\n Informe a unidade que deseja converter:   ");
	scanf ("%i",  &resposta);
	return resposta;
}

// Só quem fez entende
float KmLMpGa (float comb){
return (comb * 2.352);
}
float KmLMpGi (float comb){
return (comb * 2.825);
}
float MpGaKmL (float comb){
return (comb / 2.352);
}
float MpGaMpGi (float comb){
return (comb * 1.201);
}
float MpGiKmL (float comb){
return (comb / 2.825);
}
float MpGiMpGa (float comb){
return (comb / 1.201);
}
float CkMLMpGa (float comb){
return (235.215 / comb);
}
float CkmLMpGi (float comb){
return (282.481 / comb );
}
float KmLCkMl (float comb){
return (100 / comb);
}


// Menu Volume feito por Daniel Rodrigues
int menuMassa() {
	system ("cls");

	int respostaMassa;
	printf("\n ********* CONVERSOR DE MASSA *********");
	printf("\n *  1) Tonelada                       *");
	printf("\n *  2) Quilograma                     *");
	printf("\n *  3) Grama                          *");
	printf("\n *  4) Miligrama                      *");
	printf("\n *  5) Micrograma                     *");
	printf("\n *  6) Tonelada de deslocamento       *");
	printf("\n *  7) Tonelada curta                 *");
	printf("\n *  8) Stone                          *");
	printf("\n *  9) Libra                          *");
	printf("\n *  10) Onça                          *");
	printf("\n **************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &respostaMassa);
	return respostaMassa;
}

// TONELADA para X
float (TNLpQuilograma (float mass)) {
	return (mass*(1000));
}
float (TNLpGrama (float mass)) {
	return (mass*(1e+6));
}
float (TNLpMiligrama (float mass)) {
	return (mass*(1e+9));
}
float (TNLpMicrograma (float mass)) {
	return (mass*(1e+12));
}
float (TNLpToneladaDesloc (float mass)) {
	return (mass/(1.016));
}
float (TNLpToneladaCurta (float mass)) {
	return (mass*(1.102));
}
float (TNLpStone (float mass)) {
	return (mass*(157));
}
float (TNLpLibra (float mass)) {
	return (mass*(2205));
}
float (TNLpOnca (float mass)) {
	return (mass*(35274));
}
int MenuTonelada() {
	system ("cls");

	int resposta;
	printf("\n ************* CONVERSOR DE TONELADA *************");
	printf("\n *  1)  Tonelada   ->   Quilograma               *");
	printf("\n *  2)  Tonelada   ->   Grama                    *");
	printf("\n *  3)  Tonelada   ->   Miligrama                *");
	printf("\n *  4)  Tonelada   ->   Micrograma               *");
	printf("\n *  5)  Tonelada   ->   Tonelada de deslocamento *");
	printf("\n *  6)  Tonelada   ->   Tonelada curta           *");
	printf("\n *  7)  Tonelada   ->   Stone                    *");
	printf("\n *  8)  Tonelada   ->   Libra                    *");
	printf("\n *  9)  Tonelada   ->   Onça                     *");
	printf("\n *************************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// QUILOGRAMA para X
float (QLGMpTonelada (float mass)) {
	return (mass/(1000));
}
float (QLGMpGrama (float mass)) {
	return (mass*(1000));
}
float (QLGMpMiligrama (float mass)) {
	return (mass*(1e+6));
}
float (QLGMpMicrograma (float mass)) {
	return (mass*(1e+9));
}
float (QLGMpToneladaDesloc (float mass)) {
	return (mass/(1016));
}
float (QLGMpToneladaCurta (float mass)) {
	return (mass/(907));
}
float (QLGMpStone (float mass)) {
	return (mass/(6.35));
}
float (QLGMpLibra (float mass)) {
	return (mass*(2.205));
}
float (QLGMpOnca (float mass)) {
	return (mass*(35.274));
}
int MenuQuilograma() {
	system ("cls");

	int resposta;
	printf("\n ************* CONVERSOR DE QUILOGRAMA *************");
	printf("\n *  1)  Quilograma   ->   Tonelada                 *");
	printf("\n *  2)  Quilograma   ->   Grama                    *");
	printf("\n *  3)  Quilograma   ->   Miligrama                *");
	printf("\n *  4)  Quilograma   ->   Micrograma               *");
	printf("\n *  5)  Quilograma   ->   Tonelada de deslocamento *");
	printf("\n *  6)  Quilograma   ->   Tonelada curta           *");
	printf("\n *  7)  Quilograma   ->   Stone                    *");
	printf("\n *  8)  Quilograma   ->   Libra                    *");
	printf("\n *  9)  Quilograma   ->   Onça                     *");
	printf("\n ***************************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// GRAMA para X
float (GRAMApTonelada (float mass)) {
	return (mass/(1e+6));
}
float (GRAMApQuilograma (float mass)) {
	return (mass/(1000));
}
float (GRAMApMiligrama (float mass)) {
	return (mass/(1000));
}
float (GRAMApMicrograma (float mass)) {
	return (mass*(1e+6));
}
float (GRAMApToneladaDesloc (float mass)) {
	return (mass/(1.016e+6));
}
float (GRAMApToneladaCurta (float mass)) {
	return (mass/(907185));
}
float (GRAMApStone (float mass)) {
	return (mass/(6350));
}
float (GRAMApLibra (float mass)) {
	return (mass/(454));
}
float (GRAMApOnca (float mass)) {
	return (mass/(28.35));
}
int MenuGrama() {
	system ("cls");

	int resposta;
	printf("\n ************* CONVERSOR DE GRAMA *************");
	printf("\n *  1)  Grama   ->   Tonelada                 *");
	printf("\n *  2)  Grama   ->   Quilograma               *");
	printf("\n *  3)  Grama   ->   Miligrama                *");
	printf("\n *  4)  Grama   ->   Micrograma               *");
	printf("\n *  5)  Grama   ->   Tonelada de deslocamento *");
	printf("\n *  6)  Grama   ->   Tonelada curta           *");
	printf("\n *  7)  Grama   ->   Stone                    *");
	printf("\n *  8)  Grama   ->   Libra                    *");
	printf("\n *  9)  Grama   ->   Onça                     *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// MILIGRAMA para X
float (MLGMpTonelada (float mass)) {
	return (mass/(1e+9));
}
float (MLGMpQuilograma (float mass)) {
	return (mass/(1e+6));
}
float (MLGMpGrama (float mass)) {
	return (mass/(1000));
}
float (MLGMpMicrograma (float mass)) {
	return (mass*(1000));
}
float (MLGMpToneladaDesloc (float mass)) {
	return (mass/(1.016e+9));
}
float (MLGMpToneladaCurta (float mass)) {
	return (mass/(9.072e+8));
}
float (MLGMpStone (float mass)) {
	return (mass/(6.35e+6));
}
float (MLGMpLibra (float mass)) {
	return (mass/(453592));
}
float (MLGMpOnca (float mass)) {
	return (mass/(28350));
}
int MenuMiligrama() {
	system ("cls");

	int resposta;
	printf("\n ************* CONVERSOR DE MILIGRAMA *************");
	printf("\n *  1)  Miligrama   ->   Tonelada                 *");
	printf("\n *  2)  Miligrama   ->   Quilograma               *");
	printf("\n *  3)  Miligrama   ->   Grama                    *");
	printf("\n *  4)  Miligrama   ->   Micrograma               *");
	printf("\n *  5)  Miligrama   ->   Tonelada de deslocamento *");
	printf("\n *  6)  Miligrama   ->   Tonelada curta           *");
	printf("\n *  7)  Miligrama   ->   Stone                    *");
	printf("\n *  8)  Miligrama   ->   Libra                    *");
	printf("\n *  9)  Miligrama   ->   Onça                     *");
	printf("\n **************************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// MICROGRAMA para X
float (MCGMpTonelada (float mass)) {
	return (mass/(1e+12));
}
float (MCGMpQuilograma (float mass)) {
	return (mass/(1e+9));
}
float (MCGMpGrama (float mass)) {
	return (mass/(1e+6));
}
float (MCGMpMiligrama (float mass)) {
	return (mass/(1000));
}
float (MCGMpToneladaDesloc (float mass)) {
	return (mass/(1.016e+12));
}
float (MCGMpToneladaCurta (float mass)) {
	return (mass/(9.072e+11));
}
float (MCGMpStone (float mass)) {
	return (mass/(6.35e+9));
}
float (MCGMpLibra (float mass)) {
	return (mass/(4.536e+8));
}
float (MCGMpOnca (float mass)) {
	return (mass/(2.835e+7));
}
int MenuMicrograma() {
	system ("cls");

	int resposta;
	printf("\n ************ CONVERSOR DE MICROGRAMA **************");
	printf("\n *  1)  Micrograma   ->   Tonelada                 *");
	printf("\n *  2)  Micrograma   ->   Quilograma               *");
	printf("\n *  3)  Micrograma   ->   Grama                    *");
	printf("\n *  4)  Micrograma   ->   Miligrama                *");
	printf("\n *  5)  Micrograma   ->   Tonelada de deslocamento *");
	printf("\n *  6)  Micrograma   ->   Tonelada curta           *");
	printf("\n *  7)  Micrograma   ->   Stone                    *");
	printf("\n *  8)  Micrograma   ->   Libra                    *");
	printf("\n *  9)  Micrograma   ->   Onça                     *");
	printf("\n ***************************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// Tonelada de Deslocamento para X
float (TNLDSLpTonelada (float mass)) {
	return (mass*(1.016));
}
float (TNLDSLpQuilograma (float mass)) {
	return (mass*(1016));
}
float (TNLDSLpGrama (float mass)) {
	return (mass*(1.16e+6));
}
float (TNLDSLpMiligrama (float mass)) {
	return (mass*(1.16e+9));
}
float (TNLDSLpMicrograma (float mass)) {
	return (mass*(1.016e+12));
}
float (TNLDSLpToneladaCurta (float mass)) {
	return (mass*(1.12));
}
float (TNLDSLpStone (float mass)) {
	return (mass*(160));
}
float (TNLDSLpLibra (float mass)) {
	return (mass*(2240));
}
float (TNLDSLpOnca (float mass)) {
	return (mass*(35840));
}
int MenuToneladaDesloc() {
	system ("cls");

	int resposta;
	printf("\n *********************** CONVERSOR ***********************");
	printf("\n **************** Tonelada de Deslocamento ***************");
	printf("\n *  1)  Tonelada de Deslocamento   ->   Tonelada         *");
	printf("\n *  2)  Tonelada de Deslocamento   ->   Quilograma       *");
	printf("\n *  3)  Tonelada de Deslocamento   ->   Grama            *");
	printf("\n *  4)  Tonelada de Deslocamento   ->   Miligrama        *");
	printf("\n *  5)  Tonelada de Deslocamento   ->   Micrograma       *");
	printf("\n *  6)  Tonelada de Deslocamento   ->   Tonelada curta   *");
	printf("\n *  7)  Tonelada de Deslocamento   ->   Stone            *");
	printf("\n *  8)  Tonelada de Deslocamento   ->   Libra            *");
	printf("\n *  9)  Tonelada de Deslocamento   ->   Onça             *");
	printf("\n *********************************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// Tonelada Curta para X
float (TNLCTpTonelada (float mass)) {
	return (mass/(1.102));
}
float (TNLCTpQuilograma (float mass)) {
	return (mass*(907));
}
float (TNLCTpGrama (float mass)) {
	return (mass*(907185));
}
float (TNLCTpMiligrama (float mass)) {
	return (mass*(9.072e+8));
}
float (TNLCTpMicrograma (float mass)) {
	return (mass*(9.072e+11));
}
float (TNLCTpToneladaDesloc (float mass)) {
	return (mass/(1.12));
}
float (TNLCTpStone (float mass)) {
	return (mass*(143));
}
float (TNLCTpLibra (float mass)) {
	return (mass*(2000));
}
float (TNLCTpOnca (float mass)) {
	return (mass*(32000));
}
int MenuToneladaCurta() {
	system ("cls");

	int resposta;
	printf("\n ********************** CONVERSOR **********************");
	printf("\n ****************** Tonelada de Curta ******************");
	printf("\n *  1)  Tonelada Curta   ->   Tonelada                 *");
	printf("\n *  2)  Tonelada Curta   ->   Quilograma               *");
	printf("\n *  3)  Tonelada Curta   ->   Grama                    *");
	printf("\n *  4)  Tonelada Curta   ->   Miligrama                *");
	printf("\n *  5)  Tonelada Curta   ->   Micrograma               *");
	printf("\n *  6)  Tonelada Curta   ->   Tonelada de deslocamento *");
	printf("\n *  7)  Tonelada Curta   ->   Stone                    *");
	printf("\n *  8)  Tonelada Curta   ->   Libra                    *");
	printf("\n *  9)  Tonelada Curta   ->   Onça                     *");
	printf("\n *******************************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// Stone para X
float (STONEpTonelada (float mass)) {
	return (mass/(157));
}
float (STONEpQuilograma (float mass)) {
	return (mass*(6.35));
}
float (STONEpGrama (float mass)) {
	return (mass*(6350));
}
float (STONEpMiligrama (float mass)) {
	return (mass*(6.35e+6));
}
float (STONEpMicrograma (float mass)) {
	return (mass*(6.35e+9));
}
float (STONEpToneladaDesloc (float mass)) {
	return (mass/(160));
}
float (STONEpToneladaCurta (float mass)) {
	return (mass/(143));
}
float (STONEpLibra (float mass)) {
	return (mass*(14));
}
float (STONEpOnca (float mass)) {
	return (mass*(224));
}
int MenuStone() {
	system ("cls");

	int resposta;
	printf("\n ************* CONVERSOR DE STONE *************");
	printf("\n *  1)  Stone   ->   Tonelada                 *");
	printf("\n *  2)  Stone   ->   Quilograma               *");
	printf("\n *  3)  Stone   ->   Grama                    *");
	printf("\n *  4)  Stone   ->   Miligrama                *");
	printf("\n *  5)  Stone   ->   Micrograma               *");
	printf("\n *  6)  Stone   ->   Tonelada de deslocamento *");
	printf("\n *  7)  Stone   ->   Tonelada Curta           *");
	printf("\n *  8)  Stone   ->   Libra                    *");
	printf("\n *  9)  Stone   ->   Onça                     *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// Libra para X
float (LIBRApTonelada (float mass)) {
	return (mass/(2205));
}
float (LIBRApQuilograma (float mass)) {
	return (mass/(2.205));
}
float (LIBRApGrama (float mass)) {
	return (mass*(454));
}
float (LIBRApMiligrama (float mass)) {
	return (mass*(453592));
}
float (LIBRApMicrograma (float mass)) {
	return (mass*(4.536e+8));
}
float (LIBRApToneladaDesloc (float mass)) {
	return (mass/(2240));
}
float (LIBRApToneladaCurta (float mass)) {
	return (mass/(2000));
}
float (LIBRApStone (float mass)) {
	return (mass/(14));
}
float (LIBRApOnca (float mass)) {
	return (mass*(16));
}
int MenuLibra() {
	system ("cls");

	int resposta;
	printf("\n ************* CONVERSOR DE LIBRA *************");
	printf("\n *  1)  Libra   ->   Tonelada                 *");
	printf("\n *  2)  Libra   ->   Quilograma               *");
	printf("\n *  3)  Libra   ->   Grama                    *");
	printf("\n *  4)  Libra   ->   Miligrama                *");
	printf("\n *  5)  Libra   ->   Micrograma               *");
	printf("\n *  6)  Libra   ->   Tonelada de deslocamento *");
	printf("\n *  7)  Libra   ->   Tonelada Curta           *");
	printf("\n *  8)  Libra   ->   Stone                    *");
	printf("\n *  9)  Libra   ->   Onça                     *");
	printf("\n **********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// Onca para X
float (ONCApTonelada (float mass)) {
	return (mass/(35274));
}
float (ONCApQuilograma (float mass)) {
	return (mass/(35.274));
}
float (ONCApGrama (float mass)) {
	return (mass*(28.35));
}
float (ONCApMiligrama (float mass)) {
	return (mass*(28350));
}
float (ONCApMicrograma (float mass)) {
	return (mass*(2.835e+7));
}
float (ONCApToneladaDesloc (float mass)) {
	return (mass/(35840));
}
float (ONCApToneladaCurta (float mass)) {
	return (mass/(32000));
}
float (ONCApStone (float mass)) {
	return (mass/(224));
}
float (ONCApLibra (float mass)) {
	return (mass/(16));
}
int MenuOnca() {
	system ("cls");

	int resposta;
	printf("\n ************* CONVERSOR DE ONÇA *************");
	printf("\n *  1)  Onça   ->   Tonelada                 *");
	printf("\n *  2)  Onça   ->   Quilograma               *");
	printf("\n *  3)  Onça   ->   Grama                    *");
	printf("\n *  4)  Onça   ->   Miligrama                *");
	printf("\n *  5)  Onça   ->   Micrograma               *");
	printf("\n *  6)  Onça   ->   Tonelada de deslocamento *");
	printf("\n *  7)  Onça   ->   Tonelada Curta           *");
	printf("\n *  8)  Onça   ->   Stone                    *");
	printf("\n *  9)  Onça   ->   Libra                    *");
	printf("\n *********************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// Menu Pressão, feito por Daniel Rodrigues
int MenuPressao() {
	system ("cls");
	
	int resposta;
	printf("\n ***** CONVERSOR PRESSÃO *****");
	printf("\n * 1)  Atmosfera Padrão      *");
	printf("\n * 2)  Bar                   *");
	printf("\n * 3)  Pascal                *");
	printf("\n * 4)  Psi                   *");
	printf("\n * 5)  Torr                  *");
	printf("\n *****************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;	
}

// ATMOSFERA PADRÃO para X
float ATMPDpBar (float pressure) {
	return (pressure*(1.013));
}
float ATMPDpPascal (float pressure) {
	return (pressure*(101325));
}
float ATMPDpPsi (float pressure) {
	return (pressure*(14.696));
}
float ATMPDpTorr (float pressure) {
	return (pressure*(760));
}
int MenuATMPD() {
	system ("cls");
	
	int resposta;
	printf("\n ****** CONVERSOR ATMOSFERA PADRÃO ******");
	printf("\n * 1)  Atmosfera Padrão   ->   Bar      *");
	printf("\n * 2)  Atmosfera Padrão   ->   Pascal   *");
	printf("\n * 3)  Atmosfera Padrão   ->   Psi      *");
	printf("\n * 4)  Atmosfera Padrão   ->   Torr     *");
	printf("\n ****************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}

// BAR para X
float BARpAtmpd (float pressure) {
	return (pressure/(1.013));
}
float BARpPascal (float pressure) {
	return (pressure*(100000));
}
float BARpPsi (float pressure) {
	return (pressure*(14.504));
}
float BARpTorr (float pressure) {
	return (pressure*(750));
}
int MenuBar() {
	system ("cls");
	
	int resposta;
	printf("\n *********** CONVERSOR BAR ***********");
	printf("\n * 1)  Bar   ->   Atmosfera padrão   *");
	printf("\n * 2)  Bar   ->   Pascal             *");
	printf("\n * 3)  Bar   ->   Psi                *");
	printf("\n * 4)  Bar   ->   Torr               *");
	printf("\n *************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}

// PASCAL para X
float PASCALpAtmpd (float pressure) {
	return (pressure/(101325));
}
float PASCALpBar (float pressure) {
	return (pressure/(100000));
}
float PASCALpPsi (float pressure) {
	return (pressure/(6895));
}
float PASCALpTorr (float pressure) {
	return (pressure/(133));
}
int MenuPascal() {
	system ("cls");
	
	int resposta;
	printf("\n *********** CONVERSOR PASCAL ***********");
	printf("\n * 1)  PASCAL   ->   Atmosfera padrão   *");
	printf("\n * 2)  PASCAL   ->   Bar                *");
	printf("\n * 3)  PASCAL   ->   Psi                *");
	printf("\n * 4)  PASCAL   ->   Torr               *");
	printf("\n ****************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}

// PSI para X
float PSIpAtmpd (float pressure) {
	return (pressure/(14.696));
}
float PSIpBar (float pressure) {
	return (pressure/(14.504));
}
float PSIpPascal (float pressure) {
	return (pressure/(6895));
}
float PSIpTorr (float pressure) {
	return (pressure/(51.715));
}
int MenuPsi() {
	system ("cls");
	
	int resposta;
	printf("\n *********** CONVERSOR PSI ***********");
	printf("\n * 1)  PSI   ->   Atmosfera padrão   *");
	printf("\n * 2)  PSI   ->   Bar                *");
	printf("\n * 3)  PSI   ->   Pascal             *");
	printf("\n * 4)  PSI   ->   Torr               *");
	printf("\n *************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}

// TORR para X
float TORRpAtmpd (float pressure) {
	return (pressure/(760));
}
float TORRpBar (float pressure) {
	return (pressure/(750));
}
float TORRpPascal (float pressure) {
	return (pressure*(133));
}
float TORRpPsi (float pressure) {
	return (pressure/(51.715));
}
int MenuTorr() {
	system ("cls");
	
	int resposta;
	printf("\n *********** CONVERSOR TORR ***********");
	printf("\n * 1)  TORR   ->   Atmosfera padrão   *");
	printf("\n * 2)  TORR   ->   Bar                *");
	printf("\n * 3)  TORR   ->   Pascal             *");
	printf("\n * 4)  TORR   ->   Psi                *");
	printf("\n **************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return resposta;
}


// Menu Temperaturas, feita por Vinícius Fernandes
int MenuTemperaturas(){
	setlocale(LC_ALL,"portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ******* CONVERSOR DE TEMPERATURAS *********");
	printf("\n *  1) Celsius   -> Fahrenheit             *");
	printf("\n *  2) Farenheit -> Celsius                *");
	printf("\n *  3) Celsius   -> Kelvin                 *");
	printf("\n *  4) Kelvin    -> Celsius                *");
	printf("\n *  5) Farenheit -> Kelvin                 *");
	printf("\n *  6) Kelvin    -> Fahrenheit             *");
	printf("\n *  7) Sair do programa                    *");
	printf("\n *******************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i", &resposta);
	return (resposta);	
 }

float CpF(float temp){
return (temp * 1.8 + 32);
}
float FpC(float temp){
return (temp - 32) / 1.8;
}
float CpKK(float temp){
return temp + 273;
}
float KpC(float temp){
 return temp - 273;
}
float FpK(float temp){
return (temp + 45967) * 5/9;
}
float KpF(float temp){
return 1.8 * (temp - 273) + 32;
}


// Menu Tempo, feita por João Victor Costa de Queiroz
int MenuTempo(){
	setlocale(LC_ALL,"portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ************ CONVERSOR DE TEMPO ***********");
	printf("\n * 1) Nanosegundo                          *");
	printf("\n * 2) Microsegundo                         *");
	printf("\n * 3) Milisegundo                          *");
	printf("\n * 4) Segundo                              *");
	printf("\n * 5) Minuto                               *");
	printf("\n * 6) Hora                                 *");
	printf("\n * 7) Dia                                  *");
	printf("\n * 8) Semana                               *");
	printf("\n * 9) Mês                                  *");
	printf("\n * 10) Ano                                 *");
	printf("\n * 11) Década                              *");
	printf("\n * 12) Século                              *");
	printf("\n********************************************");
	printf("\nInforme a opção desejada: ");
	scanf("%i",&resposta);
	return (resposta);
}

int MenuNanoseg(){
	setlocale(LC_ALL,"portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ********* CONVERSOR DE NANOSEGUNDOS ********");
	printf("\n * 1) Nanosegundo - > Microsegundo         *");
	printf("\n * 2) Nanosegundo - > Milisegundo          *");
	printf("\n * 3) Nanosegundo - > Segundo              *");
	printf("\n * 4) Nanosegundo - > Minuto               *");
	printf("\n * 5) Nanosegundo - > Hora                 *");
	printf("\n * 6) Nanosegundo - > Dia                  *");
	printf("\n * 7) Nanosegundo - > Semana               *");
	printf("\n * 8) Nanosegundo - > Mês                  *");
	printf("\n * 9) Nanosegundo - > Ano                  *");
	printf("\n * 10) Nanosegundo - > Década              *");
	printf("\n * 11) Nanosegundo - > Século              *");
	printf("\n********************************************");
	printf("\nInforme a opção desejada: ");
	scanf("%i",&resposta);
	return (resposta);
	
}

// NANOSEGUNDO para X
float NspMicroS (float time){
	return (time/1000);	
}
float NspMiliS (float time){
	return (time/(1e+6));
}
float NspS (float time){
	return (long double)(time/(1e+9));
}
float NspM (float time){
	return (time/(6e+10));
}
float NspH (float time){
	return (time/(3.6e+12));
}
float NspDia (float time){
	return (time/(8.64e+13));
}
float NspSem (float time){
	return (time/(6.048e+14));
}
float NspMes (float time){
	return (time/2.628e+15);
}
float NspAno (float time){
	return (time/3.154e+16);
}
float NspDec (float time){
	return (time/3.154e+17);
}
float NspSec (float time){
	return (time/3.154e+18);
}


int MenuMicroseg(){
	setlocale(LC_ALL, "portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ********* CONVERSOR DE MICROSEGUNDOS *******");
	printf("\n * 1) Microsegundo - > Nanosegundo          *");
	printf("\n * 2) Microsegundo - > Milisegundo          *");
	printf("\n * 3) Microsegundo - > Segundo              *");
	printf("\n * 4) Microsegundo - > Minuto               *");
	printf("\n * 5) Microsegundo - > Hora                 *");
	printf("\n * 6) Microsegundo - > Dia                  *");
	printf("\n * 7) Microsegundo - > Semana               *");
	printf("\n * 8) Microsegundo - > Mês                  *");
	printf("\n * 9) Microsegundo - > Ano                  *");
	printf("\n * 10) Microsegundo - > Década              *");
	printf("\n * 11) Microsegundo - > Século              *");
	printf("\n *******************************************");
	printf("\n Informe a opção desejada: ");
	scanf("%i",&resposta);
	return (resposta);
}

// MICROSEGUNDO para X
float MicrosegpNs(float time){
	return (time*1000);
}
float MicrosegpMs(float time){
	return (time/1000);
}
float MicrosegpS(float time){
	return (time/(1e+6));
}
float MicrosegpM(float time){
	return (time/6e+7);
}
float MicrosegpH(float time){
	return (time/3.6e+9);
}
float MicrosegpD(float time){
	return (time/8.64e+10);
}
float MicrosegpSem(float time){
	return (time/6.048e+11);
}
float MicrosegpMes(float time){
	return (time/2.628e+12);
}
float MicrosegpAno(float time){
	return (time/3.154e+13);
}
float MicrosegpDec(float time){
	return (time/3.154e+14);
}
float MicrosegpSec(float time){
	return (time/3.154e+15);
}

int MenuMiliseg(){
	setlocale(LC_ALL, "portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ********* CONVERSOR DE MILISEGUNDOS *******");
	printf("\n * 1) Milisegundo - > Nanosegundo          *");
	printf("\n * 2) Milisegundo - > Microsegundo         *");
	printf("\n * 3) Milisegundo - > Segundo              *");
	printf("\n * 4) Milisegundo - > Minuto               *");
	printf("\n * 5) Milisegundo - > Hora                 *");
	printf("\n * 6) Milisegundo - > Dia                  *");
	printf("\n * 7) Milisegundo - > Semana               *");
	printf("\n * 8) Milisegundo - > Mês                  *");
	printf("\n * 9) Milisegundo - > Ano                  *");
	printf("\n * 10) Milisegundo - > Década              *");
	printf("\n * 11) Milisegundo - > Século              *");
	printf("\n *******************************************");
	printf("\nInforme a opção desejada: ");
	scanf("%i", &resposta);
	return (resposta);
}

// MILISEGUNDOS para X
float MilisegpNs(float time){
	return (time*(1e+6));
}
float MilisegpMic(float time){
	return (time*1000);
}
float MilisegpS(float time){
	return (time/1000);
}
float MilisegpM(float time){
	return (time/60000);
}
float MilisegpH(float time){
	return (time/(3.6e+6));
}
float MilisegpD(float time){
	return (time/(8.64e+7));
}
float MilisegpSem(float time){
	return (time/(6.048e+8));
}
float MilisegpMes(float time){
	return (time/(2.628e+9));
}
float MilisegpAno(float time){
	return (time/(3.154e+10));
}
float MilisegpDec(float time){
	return (time/(3.154e+11));
}
float MilisegpSec(float time){
	return (time/(3.154e+12));
}

int MenuSeg(){
	setlocale(LC_ALL, "portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ********* CONVERSOR DE SEGUNDOS *******");
	printf("\n * 1) Segundo - > Nanosegundo          *");
	printf("\n * 2) Segundo - > Microsegundo         *");
	printf("\n * 3) Segundo - > Segundo              *");
	printf("\n * 4) Segundo - > Minuto               *");
	printf("\n * 5) Segundo - > Hora                 *");
	printf("\n * 6) Segundo - > Dia                  *");
	printf("\n * 7) Segundo - > Semana               *");
	printf("\n * 8) Segundo - > Mês                  *");
	printf("\n * 9) Segundo - > Ano                  *");
	printf("\n * 10) Segundo - > Década              *");
	printf("\n * 11) Segundo - > Século              *");
	printf("\n *******************************************");
	printf("\nInforme a opção desejada: ");
	scanf("%i", &resposta);
	return (resposta);
}

// SEGUNDOS para X
float SegpNs(float time){
	return (time*(1e+9));
}
float SegpMic(float time){
	return (time*(1e+6));
}
float SegpMil(float time){
	return (time*(1000));
}
float SegpM(float time){
	return (time/(60));
}
float SegpH(float time){
	return (time/(3600));
}
float SegpD(float time){
	return (time/(86400));
}
float SegpSem(float time){
	return (time/(604800));
}
float SegpMes(float time){
	return (time/(2.628e+6));
}
float SegpAno(float time){
	return (time/(3.154e+7));
}
float SegpDec(float time){
	return (time/(3.154e+8));
}
float SegpSec(float time){
	return (time/(3.154e+9));
}

int MenuMin(){
	setlocale(LC_ALL, "portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ********* CONVERSOR DE MINUTOS *********");
	printf("\n * 1) Minutos - > Nanosegundo           *");
	printf("\n * 2) Minutos - > Microsegundo          *");
	printf("\n * 3) Minutos - > Milisegundo           *");
	printf("\n * 4) Minutos - > Segundo               *");
	printf("\n * 5) Minutos - > Hora                  *");
	printf("\n * 6) Minutos - > Dia                   *");
	printf("\n * 7) Minutos - > Semana                *");
	printf("\n * 8) Minutos - > Mês                   *");
	printf("\n * 9) Minutos - > Ano                   *");
	printf("\n * 10) Minutos - > Década               *");
	printf("\n * 11) Minutos - > Século               *");
	printf("\n ****************************************");
	printf("\nInforme a opção desejada: ");
	scanf("%i", &resposta);
	return (resposta);
}

float MinpNs(float time){
	return (time*(6e+10));
}
float MinpMic(float time){
	return (time*(6e+7));
}
float MinpMil(float time){
	return (time*(60000));
}
float MinpS(float time){
	return (time*60);
}
float MinpH(float time){
	return (time/60);
}
float MinpD(float time){
	return (time/1440);
}
float MinpSem(float time){
	return (time/10080);
}
float MinpMes(float time){
	return (time/43800);
}
float MinpAno(float time){
	return (time/525600);
}
float MinpDec(float time){
	return (time/5.256e+6);
}
float MinpSec(float time){
	return (time/5.256e+7);
}

int MenuHora(){
	setlocale(LC_ALL, "portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ********* CONVERSOR DE HORAS *********");
	printf("\n * 1) Hora - > Nanosegundo            *");
	printf("\n * 2) Hora - > Microsegundo           *");
	printf("\n * 3) Hora - > Milisegundo            *");
	printf("\n * 4) Hora - > Segundo                *");
	printf("\n * 5) Hora - > Minuto                 *");
	printf("\n * 6) Hora - > Dia                    *");
	printf("\n * 7) Hora - > Semana                 *");
	printf("\n * 8) Hora - > Mês                    *");
	printf("\n * 9) Hora - > Ano                    *");
	printf("\n * 10) Hora - > Década                *");
	printf("\n * 11) Hora - > Século                *");
	printf("\n **************************************");
	printf("\nInforme a opção desejada: ");
	scanf("%i", &resposta);
	return (resposta);
}

// HORAS para X
float HorapNs (float time){
	return (time*(3.6e+12));
}
float HorapMic (float time){
	return (time*(3.6e+9));
}
float HorapMil (float time){
	return (time*(3.6e+6));
}
float HorapS (float time){
	return (time*(3600));
}
float HorapM (float time){
	return (time*(60));
}
float HorapD (float time){
	return (time/24);
}
float HorapSem (float time){
	return (time/168);
}
float HorapMes (float time){
	return (time/730);
}
float HorapAno (float time){
	return (time/8760);
}
float HorapDec (float time){
	return (time/87600);
}
float HorapSec (float time){
	return (time/876000);
}

int MenuDia(){
	setlocale(LC_ALL, "portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ********* CONVERSOR DE DIAS **********");
	printf("\n * 1) Dia - > Nanosegundo            *");
	printf("\n * 2) Dia - > Microsegundo           *");
	printf("\n * 3) Dia - > Milisegundo            *");
	printf("\n * 4) Dia - > Segundo                *");
	printf("\n * 5) Dia - > Minuto                 *");
	printf("\n * 6) Dia - > Hora                   *");
	printf("\n * 7) Dia - > Semana                 *");
	printf("\n * 8) Dia - > Mês                    *");
	printf("\n * 9) Dia - > Ano                    *");
	printf("\n * 10) Dia - > Década                *");
	printf("\n * 11) Dia - > Século                *");
	printf("\n **************************************");
	printf("\nInforme a opção desejada: ");
	scanf("%i", &resposta);
	return (resposta);
}

// DIAS para X
float DiapNs (float time){
	return (time*(8.64e+13));
}
float DiapMic (float time){
	return (time*(8.64e+10));
}
float DiapMil (float time){
	return (time*(8.64e+7));
}
float DiapS (float time){
	return (time*86400);
}
float DiapM (float time){
	return (time*1440);
}
float DiapH (float time){
	return (time*24);
}
float DiapSem (float time){
	return (time/7 );
}
float DiapMes (float time){
	return (time/30.417);
}
float DiapAno (float time){
	return (time/365);
}
float DiapDec (float time){
	return (time/3650);
}
float DiapSec (float time){
	return (time/36500);
}

int MenuSem(){
	setlocale(LC_ALL, "portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ******** CONVERSOR DE SEMANAS *******");
	printf("\n * 1) Semana - > Nanosegundo         *");
	printf("\n * 2) Semana - > Microsegundo        *");
	printf("\n * 3) Semana - > Milisegundo         *");
	printf("\n * 4) Semana - > Segundo             *");
	printf("\n * 5) Semana - > Minuto              *");
	printf("\n * 6) Semana - > Hora                *");
	printf("\n * 7) Semana - > Dia                 *");
	printf("\n * 8) Semana - > Mês                 *");
	printf("\n * 9) Semana - > Ano                 *");
	printf("\n * 10) Semana - > Década             *");
	printf("\n * 11) Semana - > Século             *");
	printf("\n *************************************");
	printf("\nInforme a opção desejada: ");
	scanf("%i", &resposta);
	return (resposta);
}

// SEMANAS para X
float SempNs (float time){
	return (time*(6.048e+14));
}
float SempMic (float time){
	return (time* (6.048e+11));
}
float SempMil (float time){
	return (time*(6.048e+8));
}
float SempS (float time){
	return (time*604800);
}
float SempM (float time){
	return (time*10080);
}
float SempH (float time){
	return (time*168);
}
float SempD (float time){
	return (time*7);
}
float SempMes (float time){
	return (time/4.345 );
}
float SempAno (float time){
	return (time/52.143 );
}
float SempDec (float time){
	return (time/521 );
}
float SempSec (float time){
	return (time/5214);
}


int MenuMes(){
	setlocale(LC_ALL, "portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ********* CONVERSOR DE MESES ********");
	printf("\n * 1) Mês - > Nanosegundo            *");
	printf("\n * 2) Mês - > Microsegundo           *");
	printf("\n * 3) Mês - > Milisegundo            *");
	printf("\n * 4) Mês - > Segundo                *");
	printf("\n * 5) Mês - > Minuto                 *");
	printf("\n * 6) Mês - > Hora                   *");
	printf("\n * 7) Mês - > Dia                    *");
	printf("\n * 8) Mês - > Semana                 *");
	printf("\n * 9) Mês - > Ano                    *");
	printf("\n * 10) Mês - > Década                *");
	printf("\n * 11) Mês - > Século                *");
	printf("\n *************************************");
	printf("\nInforme a opção desejada: ");
	scanf("%i", &resposta);
	return (resposta);
}

// MES para X
float MespNs (float time){
	return (time*(2.628e+15));
}
float MespMic (float time){
	return (time*(2.628e+12));
}
float MespMil (float time){
	return (time*(2.628e+9) );
}
float MespS (float time){
	return (time*(2.628e+6));
}
float MespM (float time){
	return (time*43800);
}
float MespH (float time){
	return (time*730);
}
float MespD (float time){
	return (time*30.417);
}
float MespSem (float time){
	return (time*4.345);
}
float MespAno (float time){
	return (time/12);
}
float MespDec (float time){
	return (time/120);
}
float MespSec (float time){
	return (time/1200);
}

int MenuAno(){
	setlocale(LC_ALL, "portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ********* CONVERSOR DE ANOS *********");
	printf("\n * 1) Ano - > Nanosegundo            *");
	printf("\n * 2) Ano - > Microsegundo           *");
	printf("\n * 3) Ano - > Milisegundo            *");
	printf("\n * 4) Ano - > Segundo                *");
	printf("\n * 5) Ano - > Minuto                 *");
	printf("\n * 6) Ano - > Hora                   *");
	printf("\n * 7) Ano - > Dia                    *");
	printf("\n * 8) Ano - > Semana                 *");
	printf("\n * 9) Ano - > Mês                    *");
	printf("\n * 10) Ano - > Década                *");
	printf("\n * 11) Ano - > Século                *");
	printf("\n *************************************");
	printf("\nInforme a opção desejada: ");
	scanf("%i", &resposta);
	return (resposta);
}

// ANO para X
float AnopNs (float time){
	return (time*(3.154e+16));
}
float AnopMic (float time){
	return (time*3.154e+13);
}
float AnopMil (float time){
	return (time*(3.154e+13));
}
float AnopS (float time){
	return (time*(3.154e+7));
}
float AnopM (float time){
	return (time*525600);
}
float AnopH (float time){
	return (time*8760);
}
float AnopD (float time){
	return (time*365);
}
float AnopSem (float time){
	return (time*52.143);
}
float AnopMes (float time){
	return (time*12);
}
float AnopDec (float time){
	return (time/10 );
}
float AnopSec (float time){
	return (time/100);
}

int MenuDec(){
	setlocale(LC_ALL, "portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ******* CONVERSOR DE DÉCADAS ********");
	printf("\n * 1) Década - > Nanosegundo         *");
	printf("\n * 2) Década - > Microsegundo        *");
	printf("\n * 3) Década - > Milisegundo         *");
	printf("\n * 4) Década - > Segundo             *");
	printf("\n * 5) Década - > Minuto              *");
	printf("\n * 6) Década - > Hora                *");
	printf("\n * 7) Década - > Dia                 *");
	printf("\n * 8) Década - > Semana              *");
	printf("\n * 9) Década - > Mês                 *");
	printf("\n * 10) Década - > Ano                *");
	printf("\n * 11) Década - > Século             *");
	printf("\n *************************************");
	printf("\nInforme a opção desejada: ");
	scanf("%i", &resposta);
	return (resposta);
}

// DECADAS para X
float DecpNs (float time){
	return (time*(3.154e+17));
}
float DecpMic (float time){
	return (time* (3.154e+14));
}
float DecpMil (float time){
	return (time* (3.154e+11));
}
float DecpS (float time){
	return (time* (3.154e+8));
}
float DecpM (float time){
	return (time* (5.256e+6));
}
float DecpH (float time){
	return (time*87600);
}
float DecpD (float time){
	return (time*3650);
}
float DecpSem (float time){
	return (time*521);
}
float DecpMes (float time){
	return (time*120);
}
float DecpAno (float time){
	return (time*10);
}
float DecpSec (float time){
	return (time/10);
}

int MenuSec(){
	setlocale(LC_ALL, "portuguese");
	system ("cls");
	
	int resposta;
	printf("\n ******* CONVERSOR DE SÉCULOS ********");
	printf("\n * 1) Século - > Nanosegundo         *");
	printf("\n * 2) Século - > Microsegundo        *");
	printf("\n * 3) Século - > Milisegundo         *");
	printf("\n * 4) Século - > Segundo             *");
	printf("\n * 5) Século - > Minuto              *");
	printf("\n * 6) Século - > Hora                *");
	printf("\n * 7) Século - > Dia                 *");
	printf("\n * 8) Século - > Semana              *");
	printf("\n * 9) Século - > Mês                 *");
	printf("\n * 10) Século - > Ano                *");
	printf("\n * 11) Século - > Décadas            *");
	printf("\n *************************************");
	printf("\nInforme a opção desejada: ");
	scanf("%i", &resposta);
	return (resposta);
}

// SECULOS para X
float SecpNs (float time){
	return (time*3.154e+18);
}
float SecpMic (float time){
	return (time*3.154e+15);
}
float SecpMil (float time){
	return (time*3.154e+12);
}
float SecpS (float time){
	return (time*3.154e+9);
}
float SecpM (float time){
	return (time*5.256e+7);
}
float SecpH (float time){
	return (time*876000);
}
float SecpD (float time){
	return (time*36500);
}
float SecpSem (float time){
	return (time*5214);
}
float SecpMes (float time){
	return (time*1200);
}
float SecpAno (float time){
	return (time*100);
}
float SecpDec (float time){
	return (time*10);
}

// Menu Transmissão de Dados feita por Lucas Bolelli
int MenuTransmissao(){	
	setlocale(LC_ALL,"portuguese");	
	system ("cls");
	
	int resposta;
	printf("\n **  CALCULADORA DE TRANSMISSÃO DE DADOS  **");
	printf("\n *  1) Bit                                 *");
	printf("\n *  2) Quilobit                            *");
	printf("\n *  3) Quilobyte                           *");
	printf("\n *  4) kibibit                             *");
	printf("\n *  5) Megabit                             *");
	printf("\n *  6) Megabyte                            *");
	printf("\n *  7) Mebibit                             *");
	printf("\n *  8) Gigabit                             *");
	printf("\n *  9) Gigabyte                            *");
	printf("\n *  10) Gibibite                           *");
	printf("\n *  11) Terabit                            *");
	printf("\n *  12) Terabyte                           *");
	printf("\n *  13) Tebibit                            *");
	printf("\n *  14) Sair do programa                   *");
	printf("\n *******************************************");
	printf("\n Informe a opcao desejada converter: ");
	scanf("%i", &resposta);
	return resposta;	
}

int BIT(){
	setlocale(LC_ALL, "portuguese");	
	system ("cls");
	
	int resposta;
	printf("\n ************ CONVERSOR DE BIT **************");
	printf("\n *  1) Bit -> QuiloBit                      *");
	printf("\n *  2) Bit -> QuiloByte                     *");
	printf("\n *  3) Bit -> KibiBit	                      *");
	printf("\n *  4) Bit -> MegaBit                       *");
	printf("\n *  5) Bit -> MegaByte 	                  *");
	printf("\n *  6) Bit -> MebiBit	                      *");
	printf("\n *  7) Bit -> GibaBit	                      *");
	printf("\n *  8) Bit -> GigaByte                      *");
	printf("\n *  9) Bit -> GibiBit                       *");
	printf("\n *  10) Bit -> TeraBit                      *");
	printf("\n *  11) Bit -> TeraByte                     *");
	printf("\n *  12) Bit -> TebiBit                      *");
	printf("\n *  13) Sair do programa                    *");
	printf("\n ********************************************");
	printf("\n Informe para qual unidade deseja converter: ");
	scanf("%i", &resposta);
	return resposta;
}

// BIT para X			
float BQb(float bit){
	return bit /1000;			 
}
float BQy(float bit){
	return bit / 8000;
}
float KBb(float bit){
	return bit / 1024;
}
float MGb(float bit){
	return bit /1e+6;
}
float MGy(float bit){
	return bit / 8e+6;
}
float MBb(float bit){
	return bit / 1.049e+6;
}
float GAb(float bit){
	return bit / 1e+9;
}
float GBy(float bit){
	return bit / 8e+9;
}
float GBb(float bit){
	return bit /1.074e+9;
}
float TRb(float bit){
	return bit /1e+12;
}
float TRy(float bit){
	return bit /8e+12;
}
float TBb(float bit){
	return bit /1.1e+12;
}

int QuiloBit(){
	setlocale(LC_ALL, "portuguese");	
	system ("cls");
	
	int resposta;
	printf("\n ********** CONVERSOR DE QUILOBIT ***********");
	printf("\n *  1) QuiloBit -> Bit                      *");
	printf("\n *  2) QuiloBit -> QuiloByte                *");
	printf("\n *  3) QuiloBit -> KibiBit                  *");
	printf("\n *  4) QuiloBit -> MegaBit                  *");
	printf("\n *  5) QuiloBit -> MegaByte 	              *");
	printf("\n *  6) QuiloBit -> MebiBit                  *");
	printf("\n *  7) QuiloBit -> GibaBit                  *");
	printf("\n *  8) QuiloBit -> GigaByte                 *");
	printf("\n *  9) QuiloBit -> GibiBit                  *");
	printf("\n *  10) QuiloBit -> TeraBit                 *");
	printf("\n *  11) QuiloBit -> TeraByte                *");
	printf("\n *  12) QuiloBit -> TebiBit                 *");
	printf("\n *  13) Sair do programa                    *");
	printf("\n ********************************************");
	printf("\n Informe para qual unidade deseja converter: ");
	scanf("%i", &resposta);
	return resposta;
}

// QUILOBIT	para X
float QBIt(float qbt){
	return qbt * 1000;			 
}
float QBQy(float qbt){
	return qbt  /   8;
}	
float QKBb(float qbt){
    return qbt / 1.024;
}
float QMGb(float qbt){
    return qbt / 1000;
}
float QMGy(float qbt){
    return qbt / 8000;
}
float QMBb(float qbt){
    return qbt / 1049;
}
float QGAb(float qbt){
    return qbt / 1e+6;
}
float QGBy(float qbt){
    return qbt / 8e+6;
}
float QGBb(float qbt){
    return qbt /1.074e+6;
}
float QTRb(float qbt){
    return qbt /1e+9;
}
float QTRy(float qbt){
    return qbt /8e+9;
}
float QTBb(float qbt){
    return qbt /1.1e+9;
}

int QuiloByte(){
	setlocale(LC_ALL, "portuguese");	
	system ("cls");
	
	int resposta;
	printf("\n ********** CONVERSOR DE QUILOBIT ***********");
	printf("\n *  1) QuiloByte -> Bit                     *");
	printf("\n *  2) QuiloByte -> QuiloBit                *");
	printf("\n *  3) QuiloByte -> KibiBit                 *");
	printf("\n *  4) QuiloByte -> MegaBit                 *");
	printf("\n *  5) QuiloByte -> MegaByte 	              *");
	printf("\n *  6) QuiloByte -> MebiBit                 *");
	printf("\n *  7) QuiloByte -> GibaBit                 *");
	printf("\n *  8) QuiloByte -> GigaByte                *");
	printf("\n *  9) QuiloByte -> GibiBit                 *");
	printf("\n *  10) QuiloByte -> TeraBit                *");
	printf("\n *  11) QuiloByte -> TeraByte               *");
	printf("\n *  12) QuiloByte -> TebiBit                *");
	printf("\n *  13) Sair do programa                    *");
	printf("\n ********************************************");
	printf("\n Informe para qual unidade deseja converter: ");
	scanf("%i", &resposta);
	return resposta;
}

// QUILOBYTE para X
float YBIt(float qby){
	return qby*8000;			 
}
float YBQb(float qby){
	return qby*8;
}	
float YKBb(float qby){
    return qby * 7.812;
}
float YMGb(float qby){
    return qby / 125;
}
float YMGy(float qby){
    return qby / 1000;
}
float YMBb(float qby){
    return qby / 131;
}
float YGAb(float qby){
    return qby / 125000;
}
float YGBy(float qby){
    return qby / 1e+6;
}
float YGBb(float qby){
    return qby /134218;
}
float YTRb(float qby){
    return qby /1.25e+8;
}
float YTRy(float qby){
    return qby /1e+9;
}
float YTBb(float qby){
    return qby /1.374e+8;
}

int KibiBit(){
	setlocale(LC_ALL, "portuguese");	
	system ("cls");
	
	int resposta;
	printf("\n ********** CONVERSOR DE KIBIBIT ************");
	printf("\n *  1) KibiBit -> Bit                       *");
	printf("\n *  2) KibiBit -> QuiloBit                  *");
	printf("\n *  3) KibiBit -> QuiloByte                 *");
	printf("\n *  4) KibiBit -> MegaBit                   *");
	printf("\n *  5) KibiBit -> MegaByte 	              *");
	printf("\n *  6) KibiBit -> MebiBit                   *");
	printf("\n *  7) KibiBit -> GigaBit                   *");
	printf("\n *  8) KibiBit -> GigaByte                  *");
	printf("\n *  9) KibiBit -> GibiBit                   *");
	printf("\n *  10) KibiBit -> TeraBit                  *");
	printf("\n *  11) KibiBit -> TeraByte                 *");
	printf("\n *  12) KibiBit -> TebiBit                  *");
	printf("\n *  13) Sair do programa                    *");
	printf("\n ********************************************");
	printf("\n Informe para qual unidade deseja converter: ");
	scanf("%i", &resposta);
	return resposta;
}

// KIBIBIT para X
float KBIt(float kbt){
	return kbt*1024;			 
}
float KQBt(float kbt){
	return kbt*1.024;
}	
float KQBy(float kbt){
    return kbt/7.812;
}
float KMGb(float kbt){
    return kbt/977;
}
float KMGy(float kbt){
    return kbt/7813;
}
float KMBb(float kbt){
    return kbt/1024;
}
float KGAb(float kbt){
    return kbt / 976562;
}
float KGBy(float kbt){
    return kbt /7.812e+6;
}
float KGBb(float kbt){
    return kbt /1.049e+6;
}
float KTRb(float kbt){
    return kbt / 9.766e+8;
}
float KTRy(float kbt){
    return kbt /7.812e+9;
}
float KTBb(float kbt){
    return kbt /1.074e+9;
}

int MegaBit(){
	setlocale(LC_ALL, "portuguese");	
	system ("cls");
	
	int resposta;
	printf("\n ********** CONVERSOR DE MEGABIT ************");
	printf("\n *  1) MegaBit -> Bit                       *");
	printf("\n *  2) MegaBit -> QuiloBit                  *");
	printf("\n *  3) MegaBit -> QuiloByte                 *");
	printf("\n *  4) MegaBit -> KibiBit                   *");
	printf("\n *  5) MegaBit -> MegaByte                  *");
	printf("\n *  6) MegaBit -> MebiBit                   *");
	printf("\n *  7) MegaBit -> GigaBit                   *");
	printf("\n *  8) MegaBit -> GigaByte                  *");
	printf("\n *  9) MegaBit -> GibiBit                   *");
	printf("\n *  10) MegaBit -> TeraBit                  *");
	printf("\n *  11) MegaBit -> TeraByte                 *");
	printf("\n *  12) MegaBit -> TebiBit                  *");
	printf("\n *  13) Sair do programa                    *");
	printf("\n ********************************************");
	printf("\n Informe para qual unidade deseja converter: ");
	scanf("%i", &resposta);
	return resposta;
}

// MEGABIT para X
float MBIt(float mgb){
	return mgb*1e+6;			 
}
float MQBt(float mgb){
	return mgb*1000;
}	
float MQBy(float mgb){
    return mgb/125;
}
float MKBb(float mgb){
    return mgb*977;
}
float MMGy(float mgb){
    return mgb/8;
}
float MMBb(float mgb){
    return mgb/1.049;
}
float MGAb(float mgb){
    return mgb/1000;
}
float MGBy(float mgb){
    return mgb /8000;
}
float MGBb(float mgb){
    return mgb /1074;
}
float MTRb(float mgb){
    return mgb /1e+6;
}
float MTRy(float mgb){
    return mgb /8e+6;
}
float MTBb(float mgb){
    return mgb /1.1e+6;
}

int MegaByte(){
	setlocale(LC_ALL, "portuguese");	
	system ("cls");
	
	int resposta;
	printf("\n ********* CONVERSOR DE MEGABYTE ************");
	printf("\n *  1) MegaByte -> Bit                      *");
	printf("\n *  2) MegaByte -> QuiloBit                 *");
	printf("\n *  3) MegaByte -> QuiloByte                *");
	printf("\n *  4) MegaByte -> KibiBit                  *");
	printf("\n *  5) MegaByte -> MegaBit                  *");
	printf("\n *  6) MegaByte -> MebiBit                  *");
	printf("\n *  7) MegaByte -> GigaBit                  *");
	printf("\n *  8) MegaByte -> GigaByte                 *");
	printf("\n *  9) MegaByte -> GibiBit                  *");
	printf("\n *  10) MegaByte -> TeraBit                 *");
	printf("\n *  11) MegaByte -> TeraByte                *");
	printf("\n *  12) MegaByte -> TebiBit                 *");
	printf("\n *  13) Sair do programa                    *");
	printf("\n ********************************************");
	printf("\n Informe para qual unidade deseja converter: ");
	scanf("%i", &resposta);
	return resposta;
}

// MEGABYTE para X
float MeBIt(float mgy){
	return mgy*8e+6;			 
}
float MeQBt(float mgy){
	return mgy*8000;
}	
float MeQBy(float mgy){
    return mgy/1000;
}
float MeKBb(float mgy){
    return mgy*7813;
}
float MeMGb(float mgy){
    return mgy*8;
}
float MeMBb(float mgy){
    return mgy/7.629;
}
float MeGAb(float mgy){
    return mgy/125;
}
float MeGBy(float mgy){
    return mgy /1000;
}
float MeGBb(float mgy){
    return mgy /134;
}
float MeTRb(float mgy){
    return mgy /12500;
}
float MeTRy(float mgy){
    return mgy /1e+6;
}
float MeTBb(float mgy){
    return mgy /137439;
}

int MebiBit(){
	setlocale(LC_ALL, "portuguese");	
	system ("cls");
	
	int resposta;
	printf("\n ********* CONVERSOR DE MEGIBIT *************");
	printf("\n *  1) MebiBit -> Bit                       *");
	printf("\n *  2) MebiBit -> QuiloBit                  *");
	printf("\n *  3) MebiBit -> QuiloByte                 *");
	printf("\n *  4) MebiBit -> KibiBit                   *");
	printf("\n *  5) MebiBit -> MegaBit                   *");
	printf("\n *  6) MebiBit -> MegaByte                  *");
	printf("\n *  7) MebiBit -> GigaBit                   *");
	printf("\n *  8) MebiBit -> GigaByte                  *");
	printf("\n *  9) MebiBit -> GibiBit                   *");
	printf("\n *  10) MebiBit -> TeraBit                  *");
	printf("\n *  11) MebiBit -> TeraByte                 *");
	printf("\n *  12) MebiBit -> TebiBit                  *");
	printf("\n *  13) Sair do programa                    *");
	printf("\n ********************************************");
	printf("\n Informe para qual unidade deseja converter: ");
	scanf("%i", &resposta);
	return resposta;
}

// MEBIBIT para X
float MbBIt(float mbb){
	return mbb*1.049e+6;			 
}
float MbQBt(float mbb){
	return mbb*1049;
}	
float MbQBy(float mbb){
    return mbb/131;
}
float MbKBb(float mbb){
    return mbb*1024;
}
float MbMGb(float mbb){
    return mbb*1.049;
}
float MbMGy(float mbb){
    return mbb/7.629;
}
float MbGAb(float mbb){
    return mbb/954;
}
float MbGBy(float mbb){
    return mbb /7629;
}
float MbGBb(float mbb){
    return mbb /1024;
}
float MbTRb(float mbb){
    return mbb /953674;
}
float MbTRy(float mbb){
    return mbb /7.629e+6;
}
float MbTBb(float mbb){
    return mbb /1.049e+6;
}

int GigaBit(){
	setlocale(LC_ALL, "portuguese");	
	system ("cls");
	
	int resposta;
	printf("\n ********* CONVERSOR DE GIGABIT *************");
	printf("\n *  1) GigaBit -> Bit                       *");
	printf("\n *  2) GigaBit -> QuiloBit                  *");
	printf("\n *  3) GigaBit -> QuiloByte                 *");
	printf("\n *  4) GigaBit -> KibiBit                   *");
	printf("\n *  5) GigaBit -> MegaBit                   *");
	printf("\n *  6) GigaBit -> MegaByte                  *");
	printf("\n *  7) GigaBit -> MebiBit                   *");
	printf("\n *  8) GigaBit -> GigaByte                  *");
	printf("\n *  9) GigaBit -> GibiBit                   *");
	printf("\n *  10) GigaBit -> TeraBit                  *");
	printf("\n *  11) GigaBit -> TeraByte                 *");
	printf("\n *  12) GigaBit -> TebiBit                  *");
	printf("\n *  13) Sair do programa                    *");
	printf("\n ********************************************");
	printf("\n Informe para qual unidade deseja converter: ");
	scanf("%i", &resposta);
	return resposta;
}

// GIGABIT para X
float GBIt(float gab){
	return gab*1e+9;			 
}
float GQBt(float gab){
	return gab*1e+6;
}	
float GQBy(float gab){
    return gab*125000;
}
float GKBb(float gab){
    return gab*976563;
}
float GMGb(float gab){
    return gab*1000;
}
float GMGy(float gab){
    return gab*125;
}
float GMBb(float gab){
    return gab*954;
}
float GGBy(float gab){
    return gab /8;
}
float GGBb(float gab){
    return gab /1.074;
}
float GTRb(float gab){
    return gab /1000;
}
float GTRy(float gab){
    return gab /8000;
}
float GTBb(float gab){
    return gab /1100;
}

int GigaByte(){
	setlocale(LC_ALL, "portuguese");	
	system ("cls");
	
	int resposta;
	printf("\n ********* CONVERSOR DE GIGABYTE ************");
	printf("\n *  1) GigaByte -> Bit                      *");
	printf("\n *  2) GigaByte -> QuiloBit                 *");
	printf("\n *  3) GigaByte -> QuiloByte                *");
	printf("\n *  4) GigaByte -> KibiBit                  *");
	printf("\n *  5) GigaByte -> MegaBit                  *");
	printf("\n *  6) GigaByte -> MegaByte                 *");
	printf("\n *  7) GigaByte -> MebiBit                  *");
	printf("\n *  8) GigaByte -> GigaBit                  *");
	printf("\n *  9) GigaByte -> GibiBit                  *");
	printf("\n *  10) GigaByte -> TeraBit                 *");
	printf("\n *  11) GigaByte -> TeraByte                *");
	printf("\n *  12) GigaByte -> TebiBit                 *");
	printf("\n *  13) Sair do programa                    *");
	printf("\n ********************************************");
	printf("\n Informe para qual unidade deseja converter: ");
	scanf("%i", &resposta);
	return resposta;
}

// GIGABYTE para X
float GbBIt(float gby){
	return gby*8e+9;			 
}
float GbQBt(float gby){
	return gby*8e+6;
}
float GbQBy(float gby){
    return gby*1e+6;
}
float GbKBb(float gby){
    return gby*7.812e+6;
}
float GbMGb(float gby){
    return gby*8000;
}
float GbMGy(float gby){
    return gby*1000;
}
float GbMBb(float gby){
    return gby*7629;
}
float GbGAb(float gby){
    return gby*8;
}
float GbGBb(float gby){
    return gby*7.451;
}
float GbTRb(float gby){
    return gby /125;
}
float GbTRy(float gby){
    return gby /1000;
}
float GbTBb(float gby){
    return gby /137;
}

int GibiBit(){
	setlocale(LC_ALL, "portuguese");	
	system ("cls");
	
	int resposta;
	printf("\n ********* CONVERSOR DE GIBIBIT *************");
	printf("\n *  1) GibiBit -> Bit                       *");
	printf("\n *  2) GibiBit -> QuiloBit                  *");
	printf("\n *  3) GibiBit -> QuiloByte                 *");
	printf("\n *  4) GibiBit -> KibiBit                   *");
	printf("\n *  5) GibiBit -> MegaBit                   *");
	printf("\n *  6) GibiBit -> MegaByte                  *");
	printf("\n *  7) GibiBit -> MebiBit                   *");
	printf("\n *  8) GibiBit -> GigaBit                   *");
	printf("\n *  9) GibiBit -> GigaByte                  *");
	printf("\n *  10) GibiBit -> TeraBit                  *");
	printf("\n *  11) GibiBit -> TeraByte                 *");
	printf("\n *  12) GibiBit -> TebiBit                  *");
	printf("\n *  13) Sair do programa                    *");
	printf("\n ********************************************");
	printf("\n Informe para qual unidade deseja converter: ");
	scanf("%i", &resposta);
	return resposta;
}

// GIBIBIT para X
float GtBIt(float gbb){
	return gbb*1.074e+9;			 
}
float GtQBt(float gbb){
	return gbb*1.074e+6;
}	
float GtQBy(float gbb){
    return gbb*134218;
}
float GtKBb(float gbb){
    return gbb*1.049e+6;
}
float GtMGb(float gbb){
    return gbb*1074;
}
float GtMGy(float gbb){
    return gbb*134;
}
float GtMBb(float gbb){
    return gbb*1024;
}
float GtGAb(float gbb){
    return gbb*1.074;
}
float GtGBy(float gbb){
    return gbb/7.451;
}
float GtTRb(float gbb){
    return gbb /931;
}
float GtTRy(float gbb){
    return gbb /7451;
}
float GtTBb(float gbb){
    return gbb /1024;
}

int TeraBit(){
	setlocale(LC_ALL, "portuguese");	
	system ("cls");
	
	int resposta;
	printf("\n ********* CONVERSOR DE TERABIT *************");
	printf("\n *  1) TeraBit -> Bit                       *");
	printf("\n *  2) TeraBit -> QuiloBit                  *");
	printf("\n *  3) TeraBit -> QuiloByte                 *");
	printf("\n *  4) TeraBit -> KibiBit                   *");
	printf("\n *  5) TeraBit -> MegaBit                   *");
	printf("\n *  6) TeraBit -> MegaByte                  *");
	printf("\n *  7) TeraBit -> MebiBit                   *");
	printf("\n *  8) TeraBit -> GigaBit                   *");
	printf("\n *  9) TeraBit -> GigaByte                  *");
	printf("\n *  10) TeraBit -> GibiBit                  *");
	printf("\n *  11) TeraBit -> TeraByte                 *");
	printf("\n *  12) TeraBit -> TebiBit                  *");
	printf("\n *  13) Sair do programa                    *");
	printf("\n ********************************************");
	printf("\n Informe para qual unidade deseja converter: ");
	scanf("%i", &resposta);
	return resposta;
}

// TERABIT para X
float TBIt(float trb){
	return trb*1e+12;			 
}
float TQBt(float trb){
	return trb*1e+9;
}	
float TQBy(float trb){
    return trb*1.25e+8;
}
float TKBb(float trb){
    return trb*9.766e+8;
}
float TMGb(float trb){
    return trb*1e+6;
}
float TMGy(float trb){
    return trb*125000;
}
float TMBb(float trb){
    return trb*953674;
}
float TGAb(float trb){
    return trb*1000;
}
float TGBy(float trb){
    return trb*125;
}
float TGBb(float trb){
    return trb*931;
}
float TTRy(float trb){
    return trb /8;
}
float TTBb(float trb){
    return trb /1.1;
}

int TeraByte(){
	setlocale(LC_ALL, "portuguese");	
	system ("cls");
	
	int resposta;
	printf("\n ********* CONVERSOR DE TERABIT *************");
	printf("\n *  1) TeraByte -> Bit                      *");
	printf("\n *  2) TeraByte -> QuiloBit                 *");
	printf("\n *  3) TeraByte -> QuiloByte                *");
	printf("\n *  4) TeraByte -> KibiBit                  *");
	printf("\n *  5) TeraByte -> MegaBit                  *");
	printf("\n *  6) TeraByte -> MegaByte                 *");
	printf("\n *  7) TeraByte -> MebiBit                  *");
	printf("\n *  8) TeraByte -> GigaBit                  *");
	printf("\n *  9) TeraByte -> GigaByte                 *");
	printf("\n *  10) TeraByte -> GibiBit                 *");
	printf("\n *  11) TeraByte -> TeraBit                 *");
	printf("\n *  12) TeraByte -> TebiBit                 *");
	printf("\n *  13) Sair do programa                    *");
	printf("\n ********************************************");
	printf("\n Informe para qual unidade deseja converter: ");
	scanf("%i", &resposta);
	return resposta;
}

// TERABYTE para X
float TbBIt(float tryy){
	return tryy*8e+12;			 
}
float TbQBt(float tryy){
	return tryy*8e+9;
}	
float TbQBy(float tryy){
    return tryy*1e+9;
}
float TbKBb(float tryy){
    return tryy*7.812e+9;
}
float TbMGb(float tryy){
    return tryy*8e+6;
}
float TbMGy(float tryy){
    return tryy*1e+6;
}
float TbMBb(float tryy){
    return tryy*7.629e+6;
}
float TbGAb(float tryy){
    return tryy*8000;
}
float TbGBy(float tryy){
    return tryy*1000;
}
float TbGBb(float tryy){
    return tryy*7451;
}
float TbTRb(float tryy){
    return tryy*8;
}
float TbTBb(float tryy){
    return tryy /7.276;
}

int TebiBit(){
	setlocale(LC_ALL, "portuguese");	
	system ("cls");
	
	int resposta;
	printf("\n ********* CONVERSOR DE TERABIT *************");
	printf("\n *  1) TebiBit -> Bit                       *");
	printf("\n *  2) TebiBit -> QuiloBit                  *");
	printf("\n *  3) TebiBit -> QuiloByte                 *");
	printf("\n *  4) TebiBit -> KibiBit                   *");
	printf("\n *  5) TebiBit -> MegaBit                   *");
	printf("\n *  6) TebiBit -> MegaByte                  *");
	printf("\n *  7) TebiBit -> MebiBit                   *");
	printf("\n *  8) TebiBit -> GigaBit                   *");
	printf("\n *  9) TebiBit -> GigaByte                  *");
	printf("\n *  10) TebiBit -> GibiBit                  *");
	printf("\n *  11) TebiBit -> TeraBit                  *");
	printf("\n *  12) TebiBit -> TebiBit                  *");
	printf("\n *  13) Sair do programa                    *");
	printf("\n ********************************************");
	printf("\n Informe para qual unidade deseja converter: ");
	scanf("%i", &resposta);
	return resposta;
}

// TEBIBIT para X
float TtBIt(float tbb){
	return tbb*1.1e+12;			 
}
float TtQBt(float tbb){
	return tbb*1.1e+9;
}	
float TtQBy(float tbb){
    return tbb*1.374e+8;
}
float TtKBb(float tbb){
    return tbb*1.074e+9;
}
float TtMGb(float tbb){
    return tbb*1.1e+6;
}
float TtMGy(float tbb){
    return tbb*137439;
}
float TtMBb(float tbb){
    return tbb*1.049e+6;
}
float TtGAb(float tbb){
    return tbb*1100;
}
float TtGBy(float tbb){
    return tbb*137;
}
float TtGBb(float tbb){
    return tbb*1024;
}
float TtTRb(float tbb){
    return tbb*1.1;
}
float TtTRy(float tbb){
    return tbb /7.276;
}


// Menu Velocidade feito por Gustavo Êrades
int printmenu(){
	setlocale(LC_ALL,"portuguese");	
	system ("cls");
	
	int resposta;
	setlocale (LC_ALL,"portuguese");
	printf("\n *******  VELOCIDADE *******");
	printf("\n *                         *");
	printf("\n * 1) Km/h    --> m/s      *");
	printf("\n * 2) Km/h    --> m/min    *");
	printf("\n * 3) Km/h    --> m/h      *");
	printf("\n * 4) Km/h    --> Km/min   *");
	printf("\n * 5) Km/h    --> Km/s     *");
	printf("\n * 6) Km/min  --> Km/s     *");
	printf("\n * 7) m/s     --> Km/h     *");
	printf("\n * 8) m/s     --> m/min    *");
	printf("\n * 9) m/s     --> m/h      *");
	printf("\n * 10) m/s    --> cm/s     *");
	printf("\n * 11) C      --> Mach     *");
	printf("\n * 12) C      --> m/s      *");
	printf("\n * 13) C      --> Km/h     *");
	printf("\n * 14) Mach   --> C        *");
	printf("\n * 15) Mach   --> m/s      *");
	printf("\n * 16) Mach   --> Km/h     *");
	printf("\n * 17) mph    --> mpm      *");
	printf("\n * 18) mph    --> mps      *");
	printf("\n * 19) mpm    --> mps      *");
	printf("\n * 20) mps    --> mpm      *");
	printf("\n * 21) mps    --> m/s      *");
	printf("\n * 22) mpm    --> m/min    *");
	printf("\n * 23) mph    --> Km/h     *");
	printf("\n * 24) cm/s   --> m/s      *");
	printf("\n * 25) cm/s   --> Km/h     *");
	printf("\n * 26) cm/s   --> cm/min   *");
	printf("\n * 27) cm/h   --> cm/min   *");
	printf("\n * 28) cm/min --> cm/h     *");
	printf("\n * 29) fps    --> fpm      *");
	printf("\n * 30) fpm    --> f        *");
	printf("\n * 31) fph    --> fps      *");
	printf("\n * 32) fph    --> Km/h     *");
	printf("\n * 33) fpm    --> m/min    *");
	printf("\n * 34) fps    --> m/s      *");
	printf("\n * 35) nm/h   --> mph      *");
	printf("\n * 36) nm/h   --> Km/h     *");
	printf("\n * 37) nm/h   --> m/s      *");
	printf("\n * 38) mph    --> nm/h     *");
	printf("\n * 39) Km/h   --> nm/h     *");
	printf("\n * 40) nm/h   --> Kn       *");
	printf("\n * 41) Kn     --> Km/h     *");
	printf("\n * 42) Kn     --> m/s      *");
	printf("\n * 43) Kn     --> nm/h     *");
	printf("\n * 44) Kn     --> fps      *");
	printf("\n * 45) iph    --> ipm      *");
	printf("\n * 46) ipm    --> ips      *");
	printf("\n * 47) ips    --> iph      *");
	printf("\n * 48) Sair do programa    *");
	printf("\n * *************************");
	printf("\n\n Informe o valor desejado:");
	scanf("%d", &resposta);
	return resposta;
}
//------------------Conversão de base------------------

//Chamadas das funções
int converterBin2Dec(long long valor_binario);
long long converterDec2Bin(int valor_decimal);
int converterDec2Oct(int valor_decimal);
long long converterOct2Dec(int valor_octal);
 
int ConvBase()
{
     
    //Variáveis usadas
    char opc = ' ';
    int valor_octal;
    long long valor_binario;
    int valor_decimal, cociente;
    int sequencial, valor_temp, tamanho_string;
    char valor_hexa[100];
     
    //Enquanto não for a opção 0 (Sair)
    while (opc != '0') {
         
        //Mostra o menu principal
        printf("\n----------------------\n");
        printf("Digite a Opcao\n");
        printf("1 - Binario para Decimal\n");
        printf("2 - Binario para Octal\n");
        printf("3 - Decimal para Binario\n");
        printf("4 - Decimal para Octal\n");
        printf("5 - Decimal para Hexa\n");
        printf("6 - Octal para Decimal\n");
        printf("7 - Hexa para Decimal\n");
        printf("0 - Sair\n");
        printf("Resposta: ");
        scanf("%c", &opc);
        getchar();
         
        //Opção 1 - Binário -> Decimal
        if (opc == '1') {
            printf("Digite numero binario: ");
            scanf("%lld", &valor_binario);
            printf("[%lld] em binario = [%d] em decimal\n", valor_binario, converterBin2Dec(valor_binario));
        }
         
        //Opção 2 - Binário -> Octal
        else if (opc == '2') {
            printf("Digite numero binario: ");
            scanf("%lld", &valor_binario);
            valor_decimal = converterBin2Dec(valor_binario);
            valor_octal   = converterDec2Oct(valor_decimal);
            printf("[%lld] em binario = [%d] em octal\n", valor_binario, valor_octal);
        }
         
        //Opção 3 - Decimal -> Binário
        else if (opc == '3') {
            printf("Digite o numero decimal: ");
            scanf("%d", &valor_decimal);
            printf("[%d] em decimal = [%lld] em binario\n", valor_decimal, converterDec2Bin(valor_decimal));
        }
         
        //Opção 4 - Decimal -> Octal
        else if (opc == '4') {
            printf("Digite o numero decimal: ");
            scanf("%d", &valor_decimal);
            printf("[%d] em decimal = [%d] em octal\n", valor_decimal, converterDec2Oct(valor_decimal));
        }
         
        //Opção 5 - Decimal -> Hexadecimal
        else if (opc == '5') {
            printf("Digite o numero decimal: ");
            scanf("%d", &valor_decimal);
             
            //Zerando variáveis
            sequencial = 0;
            cociente = valor_decimal;
             
            //Enquanto tiver cociente
            while (cociente != 0) {
                //Pega o resto da divisão por 16
                valor_temp = cociente % 16;
                 
                //Se for menor que 10, soma com 48 (tabela ascii - parte de números)
                if( valor_temp < 10)
                    valor_temp = valor_temp + 48;
                     
                //Senão, soma com 55 (tabela ascii - parte de letras)
                else
                    valor_temp = valor_temp + 55;
                 
                //Joga o caracter na sequência da string
                valor_hexa[sequencial++] = valor_temp;
                 
                //Divide o resto por 16
                cociente = cociente / 16;
            }
            //Encerra a string e mostra a mensagem
            valor_hexa[sequencial++] = '\0';
            printf("[%d] em decimal = [%s] em hexa", valor_decimal, valor_hexa);
        }
         
        //Opção 6 - Octal -> Decimal
        else if (opc == '6') {
            printf("Digite o numero octal: ");
            scanf("%d", &valor_octal);
            printf("[%d] em octal = [%lld] em decimal\n", valor_octal, converterOct2Dec(valor_octal));
        }
         
        //Opção 7 - Hexa -> Decimal
        else if (opc == '7') {
            //Zera a variável de valor Decimal
            valor_decimal = 0;
             
            //Mostra mensagem para inserir valor hexa
            printf("Insira o valor hexa: ");
            gets(valor_hexa);
 
            //Pega o tamanho da string
            tamanho_string = strlen(valor_hexa);
            tamanho_string--;
             
            //Percorre todas as posições da string
            for(sequencial=0; valor_hexa[sequencial]!='\0'; sequencial++)
            {
                //Se for maior ou igual a 0 e menor ou igual a 9, será o valor retirando 48 (tabela ascii)
                if(valor_hexa[sequencial]>='0' && valor_hexa[sequencial]<='9')
                {
                    valor_temp = valor_hexa[sequencial] - 48;
                }
                 
                //Se for maior ou igual a a e menor ou igual a f, será o valor retirando 97 (tabela ascii) + 10 (0 a 9)
                else if(valor_hexa[sequencial]>='a' && valor_hexa[sequencial]<='f')
                {
                    valor_temp = valor_hexa[sequencial] - 97 + 10;
                }
                 
                //Se for maior ou igual a A e menor ou igual a F, será o valor retirando 65 (tabela ascii) + 10 (0 a 9)
                else if(valor_hexa[sequencial]>='A' && valor_hexa[sequencial]<='F')
                {
                    valor_temp = valor_hexa[sequencial] - 65 + 10;
                }
                 
                //Incrementa o valor decimal multiplicando o valor por 16 elevado à potência
                valor_decimal += valor_temp * pow(16, tamanho_string);
                tamanho_string--;
            }
            printf("[%s] em hexa = [%d] em decimal", valor_hexa, valor_decimal);
        }
         
        //Opção desconhecida
        else {
            printf("Opcao desconhecida [%c]\n", opc);
        }
    }
     
    return 0;
}
 
//Função para converter Binário para Decimal
int converterBin2Dec(long long valor_binario)
{
    int valor_decimal = 0, sequencial = 0, resto;
     
    //Enquanto existir valor no binário
    while (valor_binario != 0)
    {
        //Pega o resto da divisão do valor binário por 10
        resto = valor_binario % 10;
         
        //Divide o valor binário por 10
        valor_binario /= 10;
         
        //Incrementa o valor decimal com o resto da divisão multiplicado por 2 elevado ao sequencial
        valor_decimal += resto * pow(2, sequencial);
         
        //Incrementa a sequencial
        ++sequencial;
    }
     
    return valor_decimal;
}
 
//Função para converter Decimal para Binário
long long converterDec2Bin(int valor_decimal)
{
    long long valor_binario = 0;
    int resto, sequencial = 1;
 
    //Enquanto o valor decimal for diferente de zero
    while (valor_decimal != 0)
    {
        //Pega o resto da divisão
        resto = valor_decimal % 2;
         
        //Divide o valor decimal por 2
        valor_decimal /= 2;
         
        //Incrementa o valor binário, multiplicando o resto da divisão pelo sequencial
        valor_binario += resto * sequencial;
         
        //Multiplica o sequencial por 10
        sequencial *= 10;
    }
     
    return valor_binario;
}
 
//Função para converter Decimal para Octal
int converterDec2Oct(int valor_decimal)
{
    int valor_octal = 0, sequencia = 1;
     
    //Enquanto o valor decimal for diferente de zero
    while (valor_decimal != 0)
    {
        //Incrementa o valor octal com o resto da divisão do decimal por 8 multiplicado pelo sequencial
        valor_octal += (valor_decimal % 8) * sequencia;
         
        //O valor decimal será dividido por 8
        valor_decimal /= 8;
         
        //O sequencial sera multiplicado por 10
        sequencia *= 10;
    }
 
    return valor_octal;
}
 
//Função para converter Octal para Decimal
long long converterOct2Dec(int valor_octal)
{
    int valor_decimal = 0, sequencia = 0;
 
    //Enquanto o valor octal for diferente de zero
    while(valor_octal != 0)
    {
        //Incrementa o valor decimal com o resto da divisão do valor octal por 10 multiplicado por 8 elevado pelo sequencial
        valor_decimal += (valor_octal % 10) * pow(8, sequencia);
         
        //Incrementa o sequencial
        ++sequencia;
         
        //Divide o valor octal por 10
        valor_octal /= 10;
    }
 
    return valor_decimal;
}

// Só quem fez entende
float KpM(float speed){
	return(speed/3.6);
}
float KpMmin(float speed){
	return((speed*1000)/60);
}
float KpMh(float speed){
	return(speed*1000);
}
float KpKmin(float speed){
	return(speed/60);
}
float KpKs(float speed){
	return((speed/60)/60);
}
float KminpKs(float speed){
	return(speed/60);
}
float MpK(float speed){
	return(speed*3.6);
}
float MpMmin(float speed){
	return(speed*60);
}
float MpMh(float speed){
	return(speed*60*60);
}
float Mapm(float speed){
	return (speed*340.29);
}
float MapK(float speed){
	return(speed*1225.044);
}
float MapC(float speed){
	return(speed/880991.1);
}
float CpMa(float speed){
	return(speed*880991.1);
}
float Cpm(float speed){
	return(speed*299792458);
}
float CpK(float speed){
	return(speed*1079252849);
}
float mpcm(float speed){
	return(speed*100);
}
float cmpm (float speed){
	return(speed/100);
}
float cmpK(float speed){
	return(speed*0.036);
}
float cmpcmin(float speed){
	return(speed/60);
}
float cmhpcmin(float speed){
	return(speed*60);
}
float cminpcmh(float speed){
	return(speed/60);
}
float mphpmpm(float speed){
	return(speed*60);
}
float mphpmps(float speed){
	return(speed*3600);
}
float mpmpmps(float speed){
	return(speed*60);
}
float mpspmpm(float speed){
	return(speed/60);
}
float mpspm(float speed){
	return(speed*1609.344);
}
float mpmpmmin(float speed){
	return(speed*1609.344);
}
float mphpK(float speed){
	return(speed*1.609344);
}
float fpspfpm(float speed){
	return(speed/60);
}
float fpmpfph(float speed){
	return(speed/60);
}
float fphpfps(float speed){
	return(speed*3600);
}
float fphpK(float speed){
	return(speed*0.0003048);
}
float fpmpmmin(float speed){
	return(speed*0.3048);
}
float fpspm(float speed){
	return(speed*0.3048);
}
float nmpmph(float speed){
	return(speed*1.1507784538296);
}
float nmpK(float speed){
	return(speed*1.8519984);
}
float nmpm(float speed){
	return(speed*0.514444);
}
float mphpnm(float speed){
	return(speed/1.1507784538296);
}
float Kpnm(float speed){
	return(speed/1.8519984);
}
float nmpKn(float speed){
	return(speed);
}
float KnpK(float speed){
	return(speed*1.8519984);
}
float Knpm(float speed){
	return(speed*0.514444);
}
float Knpnm(float speed){
	return(speed);
}
float Knpfps(float speed){
	return(speed*1.6878083989501);
}
float iphpipm(float speed){
	return(speed/60);
}
float ipmpips(float speed){
	return(speed/60);
}
float ipspiph(float speed){
	return(speed*3600);
}
float iphpBft(float speed){
	return(speed*0.00041452265174368);
}


// Menu Volume feito por Kaun Feitosa e Lucas Jamaica
int MenuVolume () {
	system ("cls");
	
	int resposta;
	printf ("\n ***************** CONVERSOR VOLUMETRICO *******************");
	printf ("\n * 1)  Litro                  -> Mililitro                 *");
	printf ("\n * 2)  Litro                  -> Metro Cubico              *");
	printf ("\n * 3)  Litro                  -> Polegada Cubica           *");
	printf ("\n * 4)  Litro                  -> Pinto Imperial            *");
	printf ("\n * 5)  Litro                  -> Onca Liquida americana    *");
	printf ("\n * 6)  Mililitro              -> Litro                     *");
	printf ("\n * 7)  Mililitro              -> Metro Cubico              *");
	printf ("\n * 8)  Mililitro              -> Polegada Cubica           *");
	printf ("\n * 9)  Mililitro              -> Pinto Imperial            *");
	printf ("\n * 10) Mililitro              -> Onca Liquida americana    *");
	printf ("\n * 11) Metro Cubico           -> Litro                     *");
	printf ("\n * 12) Metro Cubico           -> Mililitro                 *");
	printf ("\n * 13) Metro Cubico           -> Polegada Cubica           *");
	printf ("\n * 14) Metro Cubico           -> Pinto Imperial            *");
	printf ("\n * 15) Metro Cubico           -> Onca Liquida americana    *");
	printf ("\n * 16) Polegada Cubica        -> Litro                     *"); 
	printf ("\n * 17) Polegada Cubica        -> Mililitro                 *");
	printf ("\n * 18) Polegada Cubica        -> Metro Cubico              *");
	printf ("\n * 19) Polegada Cubica        -> Pinto Imperial            *");
	printf ("\n * 20) Polegada Cubica        -> Onca Liquida americana    *");
	printf ("\n * 21) Pinto Imperial         -> Litro                     *");
	printf ("\n * 22) Pinto Imperial         -> Mililitro                 *");
	printf ("\n * 23) Pinto Imperial         -> Metro Cubico              *");
	printf ("\n * 24) Pinto Imperial         -> Polegada Cubica           *"); 
	printf ("\n * 25) Pinto Imperial         -> Onca Liquida americana    *");
	printf ("\n * 26) Onca Liquida americana -> Litro                     *");
	printf ("\n * 27) Onca Liquida americana -> Mililitro                 *");
	printf ("\n * 28) Onca Liquida americana -> Metro Cubico              *");
	printf ("\n * 29) Onca Liquida americana -> Polegada Cubica           *");
	printf ("\n * 30) Onca Liquida americana -> Pinto Imperial            *");
	printf ("\n ***********************************************************");
	printf ("\n Informe a opção desejada: ");
	scanf  ("%i", &resposta);
	return resposta;
}
 
float LpML(float vol) {
	return (vol * 1000);
}
float LpMC(float vol) {
	return (vol / 1000);
}
float LpPC(float vol) {
	return (vol * 61.024);
}
float LpPI(float vol) {
	return (vol * 1.76);
}
float LpOLA(float vol) {
	return (vol * 33.814);
}
float MLLpL(float vol) {
	return (vol / 1000);
}
float MLLpMC(float vol) {
	return (vol / 1e+6);
}
float MLLpPC(float vol) {
	return (vol / 16.387);
}
float MLLpPI(float vol){
	return (vol / 568);
}
float MLLpOLA(float vol) {
	return (vol / 29.574);
}
float MCCpL(float vol) {
	return (vol * 1000);
}
float MCCpML(float vol) {
	return (vol * 1e+6);
}
float MCCpPC(float vol) {
	return (vol * 61024);
}
float MCCpPI(float vol) {
	return (vol * 1760);
}
float MCCpOLA(float vol) {
	return (vol * 33814);
}
float PCpL(float vol) {
	return (vol / 61.024);
}
float PCpML(float vol) {
	return (vol / 16.387);
}
float PCpMC(float vol) {
	return (vol / 61024);
}
float PCpPI(float vol) {
	return (vol / 34.677);
}
float PCpOLA(float vol) {
	return (vol / 1.805);
}
float PIpL(float vol) {
	return (vol / 1.76);
}
float PIpML(float vol) {
	return (vol * 568);
}
float PIpMC(float vol) {
	return (vol / 1760);
}
float PIpPC(float vol) {
	return (vol * 34.677);
}
float PIpOLA(float vol) {
	return (vol * 19.215);
}
float OLApL(float vol) {
	return (vol / 33.814);
}
float OLApML(float vol) {
	return (vol * 29.574);
}
float OLApMC(float vol) {
	return (vol / 33814);
}
float OLApPC(float vol) {
	return (vol * 1.805);
}
float OLApPI(float vol) {
	return (vol / 19.215);
}
//---------------------------- Volume molar -> Weslley Wilker ------------------------
		//------------------------------------------Cm---------------------------------------------
float CmtoDm(float x){
	float y = x / 1000;
	return y;
}
//Lembra que 1 dm³ =  1L kkkk -> Gambiarra
float CmtoL(float x)
{
	float y = x / 1000;
	return y;
}
float CmtoM(float x)
{
	float y = x / 1000000;
	return y;
}
//cm³= ml ---> já sabe
float CmtoMl(float x)
{
	float y = x;
	return y = x / 1000;
}
//-----------------------------------------------Dm------------------------
float DmtoCm(float x)
{
 	float y =	x * 1000;
	return y;
}

//dm³/mol = l/mol--> dá pra eliminar essa função
float DmtoL(float x)
{
	float y = x; 
	return y;
}
float DmtoM(float x)
{
	float y = x/1000;
	return y;
}
//Mesma coisa de converter pra cm -> dá pra fazer gambiarra
float DmtoMl(float x)
{
	float y = x * 1000;
	return y;
}
//---------------------------------------------------L---------------------------------------------
//é igual
float LtoDm(float x)
{
	float y = x;
	return y;
}
float LtoCm(float x)
{
	float y = x * 1000;
	return y;
}
float LtoM(float x)
{
	float y = x * 0.001;
	return y;
}
//mesma coisa do cm =>gambiarra
float LtoMl(float x)
{
	float y = x * 1000;
	return y;
}

//-------------------------------------------------------------M------------------------------------------
float MtoCm(float x)
{
	float y = x*1000000;
	return y;
}
float MtoDm(float x)
{
	float y = x*1000;
	return y;
}
float MtoL(float x)
{
	float y = x*1000;
	return y;
}
//mesma coisa do cm³
float MtoMl(float x)
{
	float y = x*1000000;
	return y;
}
//----------------------------------------------------------Ml----------------------------------------------------
//são iguais
float MltoCm(float x)
{
	float y = x;
	return y;
}
float MltoDm(float x)
{
	float y = x / 1000;
	return y;
}
///mesma coisa o dm
float MltoL(float x)
{
	float y = x / 1000;
	return y;
}
float MltoM(float x)
{
	float y = x / 1000000;
	return y;
}
//------------------------------------------------------Conversão----------------------------------------------------------
void Conversao(int a, int b)
{
	
	float Valor;
	switch(a)
	{
		
		case 1://cm³/mol---------------------------------
			switch(b)
			{
				case 1:
					printf("Unidades de medida iguais");
				break;
				case 2://cm³/mol -> dm³/mol
					
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",CmtoDm(Valor));					
				break;	
				case 3://cm³/mol -> l/mol
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",CmtoL(Valor));
				break;
				case 4://cm³/mol -> m/mol
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",CmtoM(Valor));
				break;	
				case 5://cm³/mol -> ml/mol
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",CmtoMl(Valor));
			}
		break;
		case 2://dm³/mol----------------------------------
			switch(b)
			{
				case 1://dm³/mol -> cm³/mol
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",DmtoCm(Valor));					
				break;
				case 2:
					printf("Unidades de medida iguais.");
				break;	
				case 3://dm³/mol -> L/mol
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",DmtoL(Valor));
				break;
				case 4:
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",DmtoM(Valor));
				break;	
				case 5:
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",DmtoMl(Valor));
				break;	
			}
		break;
		case 3://L/mol----------------------------------------------
			switch(b)
			{
				case 1://L/mol -> cm³/mol
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",LtoCm(Valor));		
				break;
				case 2://L/mol -> dm³/mol
					
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",LtoDm(Valor));					
				break;	
				case 3://L/mol -> l/mol
				printf("Unidades de medida iguais.");
				break;
				case 4://L/mol -> m/mol
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",LtoM(Valor));
				break;	
				case 5://L/mol -> ml/mol
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",LtoMl(Valor));
				break;	
			}
		break;
		case 4://M/mol----------------------------------------------
			switch(b)
			{
				case 1://m³/mol -> cm³/mol
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",MtoCm(Valor));		
				break;
				case 2://m³/mol -> dm³/mol
					
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",MtoDm(Valor));					
				break;	
				case 3://m³/mol -> l/mol
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",MtoL(Valor));
				break;
				case 4://m³/mol 
				printf("Unidades de medida iguais.");
				break;	
				case 5://m³/mol -> ml/mol
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",MtoMl(Valor));
				break;	
			}
		break; 
		case 5://ml/mol----------------------------------------------
			switch(b)
			{
				case 1://ml/mol -> cm³/mol
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",MltoCm(Valor));		
				break;
				case 2://ml/mol -> dm³/mol
					
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",MltoDm(Valor));					
				break;	
				case 3://ml/mol -> l/mol
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",MltoL(Valor));
				break;
				case 4://ml/mol -> m³/mol
					printf("Insira o valor");
					scanf("%f",&Valor);
					printf("%f",MltoM(Valor));				
				break;	
				case 5://ml/mol -> ml/mol
					printf("Unidades de medida iguais.");
				break;	
			}
		break; 	 	 	
		
	}
}
	float RespVolumeMolar()
	{
	
		setlocale(LC_ALL,"Portuguese");
	
	float Valor;
	int MedidaI, MedidaF, SouN;
	
		system("cls");
		printf("Unidade de medida inicial: [1-Cm³/mol| 2-Dm³/mol|3-L/mol|4 -M³/mol| 5-ml/mol]");
		scanf("%d",&MedidaI);
		printf("\nUnidade de destino: [1-Cm³/mol| 2-Dm³/mol|3-L/mol|4 -M³/mol| 5-ml/mol]");
		scanf("%d",&MedidaF);	

		Conversao(MedidaI,MedidaF);

	}
float Lumberg(float a);
float LumemTime(float a);
float Lumerg(float a);
float Talbot(float a);

struct User{
    char nome[30];
};
//----------------------------------Quantidade de Luz --------------------------------------
int QuantLuz(){
    setlocale(LC_ALL, "Portuguese");
    
    char op[8];
    int count = 1;
    float value;
    struct User user;
    
    printf("Bem vindo ao conversor de Quantidade de Luz\n\n");
    
    printf("Por favor, digite seu nome: \n-> ");
    scanf("%29s%*c", user.nome);
    
    system("cls");
    
    printf("Olá %s! Vamos começar!!\n", user.nome);
    printf("Digite uma das operações abaixo:\n"
            "\'/start\' - Iniciar conversor de Quantida de de Luz\n-> ");
    scanf("%7s%*c", op);
    
    while(1){
        if(strcmp(op, "/start") == 0){
            system("cls");
            break;
        }
        else{
            system("cls");
            printf("%s, o comando é inválido! Tente novamente.\n\n", user.nome);
            printf("Digite uma das operações abaixo:\n"
                   "\'/start\' - Iniciar conversor de Quantidade de Luz\n-> ");
            scanf("%s", &op);
        }
    }
    
    while(count != 0){
        printf("Escolha a Unidade de partida abaixo:\n\n");
        printf("1 - Conversor de Lumberg\n"
               "2 - Conversor de Lúmem(Horas, minutos ou segundos)\n"
               "3 - Conversor de Lumerg\n"
               "4 - Conversor de Talbot\n"
               "0 - Sair\n\n-> ");
        scanf("%i", &count);
  
    switch(count){
        case 1:
          system("cls");
          printf("Digite o valor para ser convertido\n");
          printf("-> ");
          scanf("%f%*c", &value);
          Lumberg(value);
          break;
        case 2:
        system("cls");
          printf("Digite o valor para ser convertido\n");
          printf("-> ");
          scanf("%f%*c", &value);
          LumemTime(value);
          break;
        case 3:
        system("cls");
          printf("Digite o valor para ser convertido\n");
          printf("-> ");
          scanf("%f%*c", &value);
          Lumerg(value);
        case 4:
          system("cls");
          printf("Digite o valor para ser convertido\n");
          printf("-> ");
          scanf("%f%*c", &value);
          Talbot(value);
    
        default:
          printf("Operação inválida, tente novamente!\n\n");
        }
  }
    
    return 0;
}

float Lumberg(float a){
    int count = 0;
    struct User user;
    
    printf("Escolha a Unidade de destino:\n\n");
    printf("1 - Lumberg -> Lúmem-Hora\n"
           "2 - Lumberg -> Lúmem-Minuto\n"
           "3 - Lumberg -> Lúmem-segundo\n"
           "4 - Lumberg -> Lumerg\n"
           "5 - Lumberg -> Talbot\n\n-> ");
    scanf("%i%*c", &count);
    
    switch(count){
        case 1:
            printf("\n----------------------\n");
            printf("1 Lumberg = 0,000 277 777 777 777 78 Lúmem-Hora [lmh]\n\n");
            printf("%.2f Lumberg = %f ou %.4f Lúmem-Hora\n", a, (a * 0.00027777777777778), (a * 0.00027777777777778));
            printf("\n----------------------\n");
            //printf("Deseja ");
            break;
        case 2:
            printf("\n----------------------\n");
            printf("1 Lumberg = 0,016 666 666 666 667 Lúmen-minuto [lmmin]\n\n");
            printf("%.2f Lumberg = %f ou %.4f Lumen-minuto\n", a, (a * 0.016666666666667), (a * 0.016666666666667));
            printf("\n----------------------\n");
            break;
        case 3:
            printf("\n----------------------\n");
            printf("1 Lumberg = 1 Lúmen-segundo [lms]\n\n");
            printf("%.2f Lumberg = %f ou %.4f Lúmen-segundo\n", a, (a * 1), (a * 1));
            printf("\n----------------------\n");
            break;
        case 4:
            printf("\n----------------------\n");
            printf("1 Lumberg = 10 000 000 Lumerg\n\n");
            printf("%.2f Lumberg = %f ou %.4f Lumerg\n", a, (a * 10000000), (a * 10000000));
            printf("\n----------------------\n");
            break;
        case 5:
            printf("\n----------------------\n");
            printf("1 Lumberg = 1 Talbot\n\n");
            printf("%.2f Lumberg = %f ou %.4f Talbot\n", a, (a * 1), (a * 1));
            printf("\n----------------------\n");
            break;
        default:
            printf("%s, não existe nenhuma operação [%i]!\n", user.nome, count);
    }
  return 1;
}

float LumemTime(float a){
    int count = 0, opTime = 0;
    struct User user;
    
    printf("Escolha a Unidade de destino:\n\n");
    printf("1 - Lúmem -> Lumberg\n"
           "2 - Lúmem -> Lumerg\n"
           "3 - Lúmem -> Talbot\n\n-> ");
    scanf("%i%*c", &count);
    
    switch(count){
        case 1:
            printf("\n----------------------\n");
            printf("1 Lúmem-Hora = 3 600 Lumberg\n"
                   "2 Lúmem-Minuto = 60 Lumberg\n"
                   "3 Lúmem-Segundo = 1 Lumberg\n\n");
            printf("%.2f Lúmem-Hora = %f ou %.4f Lumberg\n", a, (a * 3600), (a * 3600));
            printf("%.2f Lúmem-Minuto = %f ou %.4f Lumberg\n", a, (a * 60), (a * 60));
            printf("%.2f Lúmem-Segundo = %f ou %.4f Lumberg\n", a, (a * 1), (a * 1));
            printf("\n----------------------\n");
            //printf("Deseja ");
            break;
        case 2:
            printf("\n----------------------\n");
            printf("1 Lúmem-Hora = 36 000 000 000 Lumerg\n"
                   "2 Lúmem-Minuto = 600 000 000 Lumerg\n"
                   "3 Lúmem-Segundo = 10 000 000 Lumerg\n\n");
            printf("%.2f Lúmem-Hora = %f ou %.4f Lumerg\n", a, (a * 36000000000), (a * 36000000000));
            printf("%.2f Lúmem-Minuto = %f ou %.4f Lumerg\n", a, (a * 600000000), (a * 600000000));
            printf("%.2f Lúmem-Segundo = %f ou %.4f Lumerg\n", a, (a * 10000000), (a * 10000000));
            printf("\n----------------------\n");
            break;
        case 3:
            printf("\n----------------------\n");
            printf("1 Lúmem-Hora = 3 600 Talbot\n"
                   "2 Lúmem-Minuto = 60 Talbot\n"
                   "3 Lúmem-Segundo = 1 Talbot\n\n");
            printf("%.2f Lúmem-Hora = %f ou %.4f Talbot\n", a, (a * 3600), (a * 3600));
            printf("%.2f Lúmem-Minuto = %f ou %.4f Talbot\n", a, (a * 60), (a * 60));
            printf("%.2f Lúmem-Segundo = %f ou %.4f Talbot\n", a, (a * 1), (a * 1));
            printf("\n----------------------\n");
            break;
        default:
            printf("%s, não existe nenhuma operação [%i]!\n", user.nome, count);
    }
  return 1;
}

float Lumerg(float a){
    int count = 0;
    struct User user;
    
    printf("Escolha a Unidade de destino:\n\n");
    printf("1 - Lumerg -> Lumberg\n"
           "2 - Lumerg -> Lúmem-Hora\n"
           "3 - Lumerg -> Lúmem-Minuto\n"
           "4 - Lumerg -> Lúmem-segundo\n"
           "5 - Lumerg -> Talbot\n\n-> ");
    scanf("%i%*c", &count);
    
    switch(count){
        case 1:
            printf("\n----------------------\n");
            printf("1 Lumerg = 0,000 000 1 Lumberg\n\n");
            printf("%.2f Lumerg = %f Lumberg\n", a, (a * 0.0000001), (a * 0.0000001));
            printf("\n----------------------\n");
            //printf("Deseja ");
            break;
        case 2:
            printf("\n----------------------\n");
            printf("1 Lumerg = 0,000 000 000 027 777 78 Lúmen-hora [lmh]\n\n");
            printf("%.2f Lumerg = %f ou %.4f Lúmen-hora\n", a, (a * 0.00000000002777778), (a * 0.00000000002777778));
            printf("\n----------------------\n");
            break;
        case 3:
            printf("\n----------------------\n");
            printf("1 Lumerg = 0,000 000 001 666 666 67 Lumen-minuto [lmmin]\n\n");
            printf("%.2f Lumerg = %f ou %.4f Lúmen-minuto\n", a, (a * 0.00000000166666667), (a * 0.00000000166666667));
            printf("\n----------------------\n");
            break;
        case 4:
            printf("\n----------------------\n");
            printf("1 Lumerg = 0,000 000 1 Lúmen-segundo [lms]\n\n");
            printf("%.2f Lumerg = %f ou %.4f Lúmem-segundo\n", a, (a * 0.0000001), (a * 0.0000001));
            printf("\n----------------------\n");
            break;
        case 5:
            printf("\n----------------------\n");
            printf("1 Lumerg = 0,000 000 1 Talbot\n\n");
            printf("%.2f Lumerg = %f ou %.4f Talbot\n", a, (a * 0.0000001), (a * 0.0000001));
            printf("\n----------------------\n");
            break;
        default:
            printf("%s, não existe nenhuma operação [%i]!\n", user.nome, count);
    }
  return 1;
}

float Talbot(float a){
    int count = 0;
    struct User user;
    
    printf("Escolha a Unidade de destino:\n\n");
    printf("1 - Talbot -> Lumberg\n"
           "2 - Talbot -> Lúmem-Hora\n"
           "3 - Talbot -> Lúmem-Minuto\n"
           "4 - Talbot -> Lúmem-segundo\n"
           "5 - Talbot -> Lumerg\n\n-> ");
    scanf("%i%*c", &count);
    
    switch(count){
        case 1:
            printf("\n----------------------\n");
            printf("1 Talbot = 1 Lumberg\n\n");
            printf("%.2f Lumberg = %f ou %.4f Talbot\n", a, (a * 1), (a * 1));
            printf("\n----------------------\n");
            break;
        case 2:
            printf("\n----------------------\n");
            printf("1 Talbot = 0,000 277 777 777 777 78 Lúmen-hora [lmh]\n\n");
            printf("%.2f Lumberg = %f ou %.4f Lúmem-Hora\n", a, (a * 0.00027777777777778), (a * 0.00027777777777778));
            printf("\n----------------------\n");
            //printf("Deseja ");
            break;
        case 3:
            printf("\n----------------------\n");
            printf("1 Talbot = 0,016 666 666 666 667 Lumen-minuto [lmmin]\n\n");
            printf("%.2f Lumberg = %f ou %.4f Lumen-minuto\n", a, (a * 0.016666666666667), (a * 0.016666666666667));
            printf("\n----------------------\n");
            break;
        case 4:
            printf("\n----------------------\n");
            printf("1 Talbot = 1 Lúmen-segundo [lms]\n\n");
            printf("%.2f Lumberg = %f ou %.4f Lúmen-segundo\n", a, (a * 1), (a * 1));
            printf("\n----------------------\n");
            break;
        case 5:
            printf("\n----------------------\n");
            printf("1 Talbot = 10 000 000 Lumerg\n\n");
            printf("%.2f Lumberg = %f ou %.4f Lumerg\n", a, (a * 10000000), (a * 10000000));
            printf("\n----------------------\n");
            break;
        default:
            printf("%s, não existe nenhuma operação [%i]!\n", user.nome, count);
    }
}
//----------------------------------Capacidade Térmica --------------------------------------
int CapTer()
{
    float capacidade, resultado;
    int unidade_partida, unidade_destino;
    
    printf("--------------------------CAPACIDADE TERMICA--------------------------\n\n");

    printf("Digite o valor da capacidade termica a ser convertida: ");
    scanf("%f", &capacidade);

    printf("Selecione a unidade de medida de partida:\n");
    printf("1 - Joules/Kelvin\n");
    printf("2 - Calorias/Grau Celsius\n");
    printf("3 - BTUs/Fahrenheit\n");
    scanf("%d", &unidade_partida);

    printf("Selecione a unidade de medida de destino:\n");
    printf("1 - Joules/Kelvin\n");
    printf("2 - Calorias/Grau Celsius\n");
    printf("3 - BTUs/Fahrenheit\n");
    scanf("%d", &unidade_destino);

    switch (unidade_partida) {
        case 1: // Joules/Kelvin
            switch (unidade_destino) {
                case 1: // Joules/Kelvin
                    resultado = capacidade;
                    break;
                case 2: // Calorias/Grau Celsius
                    resultado = capacidade / 4.184;
                    break;
                case 3: // BTUs/Fahrenheit
                    resultado = capacidade * 1.8;
                    break;
                default:
                    printf("Unidade de medida de destino invalida.\n");
                    return 1;
            }
            break;
        case 2: // Calorias/Grau Celsius
            switch (unidade_destino) {
                case 1: // Joules/Kelvin
                    resultado = capacidade * 4.184;
                    break;
                case 2: // Calorias/Grau Celsius
                    resultado = capacidade;
                    break;
                case 3: // BTUs/Fahrenheit
                    resultado = capacidade * 1.8 * 4.184;
                    break;
                default:
                    printf("Unidade de medida de destino invalida.\n");
                    return 1;
            }
            break;
        case 3: // BTUs/Fahrenheit
            switch (unidade_destino) {
                case 1: // Joules/Kelvin
                    resultado = capacidade / 1.8;
                    break;
                case 2: // Calorias/Grau Celsius
                    resultado = capacidade / 1.8 / 4.184;
                    break;
                case 3: // BTUs/Fahrenheit
                    resultado = capacidade;
                    break;
                default:
                    printf("Unidade de medida de destino invalida.\n");
                    return 1;
            }
            break;
        default:
            printf("Unidade de medida de partida invalida.\n");
            return 1;
    }

    printf("%.2f ", capacidade);
    switch (unidade_partida) {
        case 1:
            printf("J/K ");
            break;
        case 2:
            printf("cal/C ");
            break;
        case 3:
            printf("BTU/F ");
            break;
    }
    printf("= %.2f ", resultado);
    switch (unidade_destino) {
        case 1:
            printf("J/K\n");
            break;
        case 2:
            printf("cal/C\n");
            break;
        case 3:
            printf("BTU/F\n");
            break;
    }

    return 0;
}
//-----------------------------Tensão Superficial-------------------------
float converterNMparaDYNCM(float a) {
    return a * 1000;
}

float converterNMparaMNM(float a) {
    return a * 1000;
}

float converterNMparaMJM(float a) {
    return a / 2;
}
float converterNMparaERG(float a) {
    return a * 10;
}

float converterMNMparaDYNCM(float a) {
    return a = a;
}

float converterMNMparaNM(float a) {
    return a = a;
}

float converterMNMparaMJM(float a) {
    return a / a;
}
float converterMNMparaERG(float a) {
    return a /1000;
}

float converterDYNCMparaNM(float a) {
    return a = 1000;
}

float converterDYNCMparaMNM(float a) {
    return a = a;
}

float converterDYNCMparaMJM(float a) {
    return a = 12;
}

float converterDYNCMparaERG(float a) {
    return a = a;
}

float converterMJMparaNM(float a) {
    return a / 1000;
}

float converterMJMparaMNM(float a) {
    return a = a;
}

float converterMJMparaERG(float a) {
    return a = a;
}

float converterMJMparaDYNCM(float a){
	return a = a;
}

float converterERGparaNM(float a) {
    return a / 1000;
}

float converterERGparaMNM(float a) {
    return a = a;
}

float converterERGparaDYNCM(float a) {
    return a = a;
}

float converterERGparaMJM(float a) {
    return a = a;
}

int TensSup() {
    setlocale(LC_ALL, "Portuguese");
    float a, a_knew;
    int unit_from, unit_to;

    printf("Olá, obrigado por usar nossa calculadora de Tensão Superficial!\n\n");
    printf("Primeiro digite um valor:\n");
	scanf("%f", &a);

    printf("Agora selecione a unidade de medida de partida:\n");
	printf("1 - N/m\n");
    printf("2 - dyn/cm\n");
    printf("3 - mN/m\n");
    printf("4 - mJm^2\n");
    printf("5 - erg/cm\n");
    scanf("%d", &unit_from);

    printf("Selecione a unidade de medida de destino:\n");
    printf("1 - N/m\n");
    printf("2 - dyn/cm\n");
    printf("3 - mN/m\n");
    printf("4 - mJm^2\n");
    printf("5 - erg/cm\n");
    scanf("%d", &unit_to);

    if (unit_from == unit_to) {
        printf("O valor é igual em ambas as unidades\n");
        return 0;
    }

    switch (unit_from) {
        case 1:
            switch (unit_to) {
                case 2:
                    a_knew = converterNMparaDYNCM(a);
                    printf("%.2f N/m equivalem a %.2f dyn/cm.\nAperte ENTER para sair...", a, a_knew);
                    break;
                case 3:
                    a_knew = converterNMparaMNM(a);
                    printf("%.2f N/m equivalem a %.2f mN/m.\nAperte ENTER para sair...", a, a_knew);
                    break;
                case 4:
                	a_knew = converterNMparaMJM(a);
                    printf("%.2f N/m equivalem a %.2f mJ/m^2.\nAperte ENTER para sair...", a, a_knew);
                    break;
                case 5:
                	a_knew = converterNMparaERG(a);
                    printf("%.2f N/m equivalem a %.2f erg/cm^2.\nAperte ENTER para sair...", a, a_knew);
                    break;
                default:
                    printf("Unidade de medida de destino inválida!\n");
                    break;
            }
            break;
        case 2:
            switch (unit_to) {
                case 1:
                    a_knew = converterDYNCMparaNM(a);
                    printf("%.2f dyn/cm equivalem a %.2f N/m.\nAperte ENTER para sair...", a, a_knew);
                    break;
                case 3:
                    a_knew = converterDYNCMparaMNM(a);
                    printf("%.2f dyn/cm equivalem a %.2f mN/m.\nAperte ENTER para sair...", a, a_knew);
                    break;
                case 4:
                	a_knew = converterDYNCMparaMJM(a);
                    printf("%.2f dyn/cm equivalem a %.2f mJ/m^2.\nAperte ENTER para sair...", a, a_knew);
                    break;
                case 5:
                	a_knew = converterDYNCMparaERG(a);
                    printf("%.2f dyn/cm equivalem a %.2f erg/cm^2.\nAperte ENTER para sair...", a, a_knew);
                    break;
                default:
                    printf("Unidade de medida de destino inválida\n");
                    break;
            }
            break;
        case 3:    
        	switch (unit_to) {
                case 1:
                    a_knew = converterMNMparaNM(a);
                    printf("%.2f mN/m equivalem a %.2f N/m.\nAperte ENTER para sair...", a, a_knew);
                    break;
                case 2:
                    a_knew = converterMNMparaDYNCM(a);
                    printf("%.2f mN/m equivalem a %.2f dyn/cm.\nAperte ENTER para sair...", a, a_knew);
                    break;
                case 4:
                	a_knew = converterMNMparaMJM(a);
                    printf("%.2f mN/m equivalem a %.2f mJ/m^2.\nAperte ENTER para sair...", a, a_knew);
                    break;
                case 5:
                	a_knew = converterMNMparaERG(a);
                    printf("%.2f mN/m equivalem a %.2f erg/cm^2.\nAperte ENTER para sair...", a, a_knew);
                    break;
                default:
                    printf("Unidade de medida de destino inválida\n");
                    break;
            }
            break; 
        case 4:    
        	switch (unit_to) {
                case 1:
                    a_knew = converterMJMparaNM(a);
                    printf("%.2f mJ/m^2 equivalem a %.2f N/m.\nAperte ENTER para sair...", a, a_knew);
                    break;
                case 2:
                    a_knew = converterMJMparaDYNCM(a);
                    printf("%.2f mJ/m^2 equivalem a %.2f dyn/cm.\nAperte ENTER para sair...", a, a_knew);
                    break;
                case 3:
                	a_knew = converterMJMparaMNM(a);
                    printf("%.2f mJ/m^2 equivalem a %.2f mN/m.\nAperte ENTER para sair...", a, a_knew);
                    break;
                case 5:
                	a_knew = converterMJMparaERG(a);
                    printf("%.2f mJ/m^2 equivalem a %.2f erg/cm^2.\nAperte ENTER para sair...", a, a_knew);
                    break;
                default:
                    printf("Unidade de medida de destino inválida\n");
                    break;
            }
            break; 
        case 5:    
        	switch (unit_to) {
                case 1:
                    a_knew = converterERGparaNM(a);
                    printf("%.2f erg/cm^2 equivalem a %.2f N/m.\nAperte ENTER para sair...", a, a_knew);
                    break;
                case 2:
                    a_knew = converterERGparaDYNCM(a);
                    printf("%.2f erg/cm^2 equivalem a %.2f dyn/cm.\nAperte ENTER para sair...", a, a_knew);
                    break;
                case 3:
                	a_knew = converterERGparaMNM(a);
                    printf("%.2f erg/cm^2 equivalem a %.2f mN/m.\nAperte ENTER para sair...", a, a_knew);
                    break;
                case 4:
                	a_knew = converterERGparaMJM(a);
                    printf("%.2f erg/cm^2 equivalem a %.2f mJ/m^2.\nAperte ENTER para sair...", a, a_knew);
                    break;
                default:
                    printf("Unidade de medida de destino inválida\n");
                    break;
            }
            break; 
        default:
            printf("Unidade de medida de partida inválida\n");
            break;
    }

    return 0;
}


//-----------------------------Contundancia termica-------------------------
float convert_w_to_k(float k) {
    return k;
}

float convert_k_to_w(float k) {
    return k;
}

float convert_btuf_to_w(float k){
    return k * 1.730735;
}

float convert_w_to_btuf(float k) {
    return k / 1.8 * 3600 / 1055;
}

float convert_w_to_c(float k) {
    return k;
}

float convert_c_to_w(float k) {
    return k;
}

float convert_btuf_to_c(float k) {
    return k * 1.730735;
}

float convert_c_to_btuf(float k) {
    return k *1.8 * 3600 / 1055;
}
int CondTer() {
	setlocale(LC_ALL, "Portuguese");
    float k, k_new;
    int unit_from, unit_to;

    printf("Digite o valor da condutância térmica: ");
    scanf("%f", &k);

    printf("Selecione a unidade de medida de partida:\n");
    printf("1 - W/K\n");
    printf("2 - W/°C\n");
    printf("3 - BTU/°F·h\n");
    scanf("%d", &unit_from);

    printf("Selecione a unidade de medida de destino:\n");
    printf("1 - W/K\n");
    printf("2 - W/°C\n");
    printf("3 - BTU/°F·h\n");
    scanf("%d", &unit_to);

    if (unit_from == unit_to) {
        printf("O valor é igual em ambas as unidades\n");
        return 0;
    }

    switch (unit_from) {
        case 1:
            switch (unit_to) {
                case 2:
                    k_new = convert_w_to_c(k);
                    printf("%.2f W/K equivale a %.2f W/°C\n", k, k_new);
                    break;
                case 3:
                    k_new = convert_w_to_btuf(k);
                    printf("%.2f W/K equivale a %.2f BTU/°F·h\n", k, k_new);
                    break;
                default:
                    printf("Unidade de medida de destino inválida\n");
                    break;
            }
            break;
        case 2:
            switch (unit_to) {
                case 1:
                    k_new = convert_c_to_w(k);
                    printf("%.2f W/°C equivale a %.2f W/K\n", k, k_new);
                    break;
                case 3:
                    k_new = convert_c_to_w(k);
                    k_new = convert_w_to_btuf(k_new);
                    printf("%.2f W/°C equivale a %.2f BTU/°F·h\n", k, k_new);
                    break;
                default:
                    printf("Unidade de medida de destino inválida\n");
                    break;
            }
            break;
        case 3:
            switch (unit_to) {
                case 1:
                    k_new = convert_btuf_to_w(k);
                    printf("%.2f BTU/°F·h equivale a %.2f W/K\n", k, k_new);
                    break;
                case 2:
                    k_new = convert_btuf_to_w(k);
                    k_new = convert_w_to_c(k_new);
                    printf("%.2f BTU/°F·h equivale a %.2f W/°C\n", k, k_new);
                    break;
                default:
                    printf("Unidade de medida de destino inválida\n");
                    break;
            }
            break;
        default:
            printf("Unidade de medida de partida inválida\n");
            break;
    }

    return 0;
}
//-----------------------------Emissão de CO2-------------------------
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	//CO2
float co2_cng(float A){
	float resultado= A *0.061349;
	return(resultado);
}

float co2_diesel(float A){
	float resultado=A*0.037735;
	return(resultado);
}

float CO2_gasolina(float A){
	float resultado= A*0.043103;
	return(resultado);
}

float CO2_LPG(float A){
	float resultado = A*0.055865;
	return(resultado);
}

// CNG
float CNG_CO2(float A){
	float resultado = A*16.3;
	return(resultado);
}

float CNG_diesel(float A){
	float resultado=A*0.615094;
	return(resultado);
}

float CNG_Gasolina(float A){
	float resultado=A*0.702586;
	return(resultado);
}

float CNG_LPG(float A){
	float resultado=A*0.9106; 
	return(resultado);
}

//Diesel
float Diesel_CO2(float A){
	float resultado = A* 26.5;
	return(resultado);
}

float Diesel_CNG(float A){
	float resultado = A* 1.6258;
	return (resultado);
}

float Diesel_Gasolina(float A){
	float resultado= A*1.142241;
	return(resultado); 
}

float Diesel_LPG(float A){
	float resultado=A*1.480446;
	return(resultado);
}

//Gasolina
float Gasolina_CO2(float A){
	float resultado=A*23.2;
	return(resultado);
}

float Gasolina_CNG(float A){
	float resultado=A*1.423312;
	return(resultado);
}

float Gasolina_Diesel(float A){
	float resultado =A*0.875471;
	return(resultado);
}

float Gasolina_LPG(float A){
	float resultado = A*1.296089;
	return(resultado);
}

//LPG
float LPG_CO2(float A){
	float resultado=A*17.9;
	return(resultado);
	
}

float LPG_CNG(float A){
	float resultado=A*1.098159;
	return(resultado);
}

float LPG_Diesel(float A){
	float resultado=A*0.675471;
	return(resultado);
}

float LPG_Gasolina(float A){
	float resultado=A* 0.771551;
	return(resultado);
}
	int EmiCO2() {
	int num1,num2;	
	printf("********************** Bem-Vindo a conversao 'emissoes de CO2' ********************** \n\n");
	
	printf("Digite um numero para ser convertido: \n");
	scanf("%i",&num1);
	
	printf("escolha a unidade de partida: \n");
	printf(" (1)g/km CO2\n (2)Kg/100km CNG\n (3)I/100km Diesel \n (4)I/100km Gasolina \n (5)I/100km LPG \n");
	scanf("%i",&num2);
	
	
  switch (  num2 )
  {
    case 1 :
    printf ("%i G/km CO2 corresponde a %0.3fkg/100km CNG \n",num1,co2_cng(num1));
    printf ("%i G/km CO2 corresponde a %0.3fkg/100km Diesel \n",num1,co2_diesel(num1));
    printf ("%i G/km CO2 corresponde a %0.3fkg/100km Gasolina \n",num1,CO2_gasolina(num1));
    printf ("%i G/km CO2 corresponde a %0.3fkg/100km LPG \n",num1,CO2_LPG(num1));
    break;
    
    case 2 :
    printf ("%i I/100km CNG corresponde a %0.2f g/km C02\n",num1,CNG_CO2(num1));
    printf ("%i I/100km CNG corresponde a %0.2f kg/100km Diesel\n",num1, CNG_diesel(num1));
    printf ("%i I/100km CNG corresponde a %0.2f kg/100km Gasolina\n",num1,CNG_Gasolina(num1));
    printf ("%i I/100km CNG corresponde a %0.2f kg/100km LPG \n",num1,CNG_LPG(num1));
    break;	
    
    case 3:
  	printf ("%i kg/100km Diesel corresponde a %0.2f g/km C02\n",num1,Diesel_CO2(num1));
    printf ("%i kg/100km Diesel corresponde a %0.2f kg/100km CNG\n",num1, Diesel_CNG(num1));
    printf ("%i kg/100km Diesel corresponde a %0.2f kg/100km Gasolina\n",num1,Diesel_Gasolina(num1));
    printf ("%i kg/100km Diesel corresponde a %0.2f kg/100km LPG \n",num1,Diesel_LPG(num1));
    break;
    
    case 4:
    printf("%i kg/100km Gasolina corresponde a %0.2f g/100km C02\n",num1,Gasolina_CO2(num1));
    printf("%i kg/100km Gasolina corresponde a %0.2f kg/100km CNG\n",num1,Gasolina_CNG(num1));
    printf("%i kg/100km Gasolina corresponde a %0.2f kg/100km Diesel\n",num1, Gasolina_Diesel(num1));
    printf("%i kg/100km Gasolina corresponde a %0.2f kg/100km LPG\n",num1,Gasolina_LPG(num1));
    break;
    
    case 5:
    printf("%i kg/100km LPG corresponde a %0.2f g/100km C02\n",num1, LPG_CO2(num1));
    printf("%i kg/100km LPG corresponde a %0.2f g/100km CNG\n",num1,LPG_CNG(num1));
    printf("%i kg/100km LPG corresponde a %0.2f g/100km Diesel\n",num1,LPG_Diesel(num1));
    printf("%i kg/100km LPG corresponde a %0.2f g/100km Gasolina\n",num1,LPG_Gasolina(num1));
    break;
}
}

//-----------------------------Capacidade Térmica Molar-------------------------
void Menu_Ctm(){
	printf("\n CAPACIDADE TÉRMICA MOLAR\n\n");
	printf(" [1] - J/(mol.°C) --> J/(mol.K)\n");
	printf(" [2] - J/(mol.°C) --> KJ/(mol.K)\n");
	printf(" [3] - J/(mol.K) --> J/(mol.°C)\n");
	printf(" [4] - J/(mol.K) --> KJ/(mol.K)\n");
	printf(" [5] - KJ/(mol.K) --> J/(mol.°C)\n");
	printf(" [6] - KJ/(mol.K) --> J/(mol.K)\n");
	printf(" [0] - Sair\n\n");
	printf(" Escolha uma opção: ");
}
// Conversão de J/(mol.°C) --> J/(mol.K)
int Jc_Jk(){
    float valor;
    int aux;
    system("\ncls");
    printf(" J/(mol.°C) --> J/(mol.K)\n\n");
    printf(" Digite o número: ");
    scanf("%f",&valor);
	aux = valor;
    if (aux == valor){
        printf("\n %d J/(mol.K)\n\n", aux);
        system("pause");
		system("cls");
        return aux;
    } else {
        printf("\n %.1f J/(mol.K)\n", valor);
        system("pause");
		system("cls");
        return valor;
    }
}
// Conversão de J/(mol.°C) --> KJ/(mol.K)
int Jc_KJ(){
    float valor, div;
    int aux;
    system("\ncls");
    printf(" J/(mol.°C) --> KJ/(mol.K)\n\n");
    printf(" Digite o número: ");
    scanf("%f",&valor);
	div = valor/1000;
	aux = div;
	
    if (aux == div){
        printf("\n %d kJ/(mol.K)\n\n", aux);
        system("pause");
		system("cls");
        return aux;
        
    } else {
        printf("\n %.3f kJ/(mol.K)\n\n", div);
        system("pause");
		system("cls");
        return div;
    }
}
// Conversão de J/(mol.K) --> J/(mol.°C)
int Jk_Jc(){
    float valor;
    int aux;
    system("\ncls");
    printf(" J/(mol.K) --> J/(mol.°C)\n\n");
    printf(" Digite o número: ");
    scanf("%f",&valor);
	aux = valor;
    if (aux == valor){
        printf("\n %d J/(mol.°C)\n\n", aux);
        system("pause");
		system("cls");
        return aux;
    } else {
        printf("\n %.1f J/(mol.°C)\n\n", valor);
        system("pause");
		system("cls");
        return valor;
    }
}
// Conversão de J/(mol.K) --> KJ/(mol.K)
int Jk_KJ(){
    float valor, div;
    int aux;
    system("\ncls");
    printf(" J/(mol.°C) --> KJ/(mol.K)\n\n");
    printf(" Digite o número: ");
    scanf("%f",&valor);
	div = valor/1000;
	aux = div;
	
    if (aux == div){
        printf("\n %d kJ/(mol.K)\n\n", aux);
        system("pause");
		system("cls");
        return aux;
        
    } else {
        printf("\n %.3f kJ/(mol.K)\n\n", div);
        system("pause");
		system("cls");
        return div;
    }
}
// Conversão de KJ/(mol.K) --> J/(mol.°C)
int KJ_Jc(){
    float valor, div;
    int aux;
    system("\ncls");
    printf(" KJ/(mol.K) --> J/(mol.°C)\n\n");
    printf(" Digite o número: ");
    scanf("%f",&valor);
	div = valor*1000;
	aux = div;
	
    if (aux == div){
        printf("\n %d J/(mol.°C)\n\n", aux);
        system("pause");
		system("cls");
        return aux;
        
    } else {
        printf("\n %.3f J/(mol.°C)\n\n", div);
        system("pause");
		system("cls");
        return div;
    }
}
// Conversão de KJ/(mol.K) --> J/(mol.K)
int KJ_Jk(){
    float valor, div;
    int aux;
    system("\ncls");
    printf(" KJ/(mol.K) --> J/(mol.K)\n\n");
    printf(" Digite o número: ");
    scanf("%f",&valor);
	div = valor*1000;
	aux = div;
	
    if (aux == div){
        printf("\n %d J/(mol.K)\n\n", aux);
        system("pause");
		system("cls");
        return aux;
        
    } else {
        printf("\n %.3f J/(mol.K)\n\n", div);
        system("pause");
		system("cls");
        return div;
    }
}
// Leitura do menu
int Ler_Menu_Ctm(){
	int op;
	while(1){
		scanf(" %d", &op);
		switch(op){
			case 1:
				Jc_Jk();
				Menu_Ctm();
				break;
			case 2:
				Jc_KJ();
				Menu_Ctm();
				break;
			case 3:
				Jk_Jc();
				Menu_Ctm();
				break;
			case 4:
				Jk_KJ();
				Menu_Ctm();
				break;
			case 5:
				KJ_Jc();
				Menu_Ctm();
				break;
			case 6:
				KJ_Jk();
				Menu_Ctm();
				break;
			case 0:
				system("pause");
				
			return op;	
			default:
				system("cls");
				printf(" OPÇÃO INVÁLIDA!!!\n");
				Menu_Ctm();
		}
	}
}
// execução do código 
int CAPTERMOLAR(){
	setlocale(LC_ALL, "Portuguese");
	int op;
	Menu_Ctm();
	op = Ler_Menu_Ctm();	
	}
	
float milimetroTOcentimetro (float A){ 
	float Resultado = A / 10;
	return (Resultado);
}
float milimetroTOpixel (float A) { 
	float Resultado = A * 3.779527559055;
	return (Resultado);
}
float milimetroTOinch (float A) { 
	float Resultado = A / 25.4;
	return (Resultado);
}
float milimetroTOagate (float A) { 
	float Resultado = A * 0.51539012168933;
	return (Resultado);	
}

//Centimetro
float centimetroTOmilimetro (float A){ 
	float Resultado = A * 10;
	return (Resultado);
}
float centimetroTOpixel (float A) { 
	float Resultado = A * 37.795275590551;
	return (Resultado);
}
float centimetroTOinch (float A) { 
	float Resultado = A / 2.54;
	return (Resultado);
}
float centimetroTOagate (float A) { 
	float Resultado = A * 5.1539012168933;
	return (Resultado);
}

//Pixel
float pixelTOmilimetro (float A) { 
	float Resultado = A * 0.26458333333333;
	return (Resultado);
}
float pixelTOcentimetro (float A) { 
	float Resultado = A * 0.026458333333333;
	return (Resultado);
}
float pixelTOinch (float A) { 
	float Resultado = A * 0.010416666666667;
	return (Resultado);
}
float pixelTOagate (float A) { 
	float Resultado = A * 0.13636363636364;
	return (Resultado);
}

//Inch
float inchTOmilimetro (float A) { 
	float Resultado = A * 25.4;
	return (Resultado);
}
float inchTOcentimetro (float A) { 
	float Resultado = A * 2.54;
	return (Resultado);
}
float inchTOpixel (float A) { 
	float Resultado = A * 96;
	return (Resultado);
}
float inchTOagate (float A) { 
	float Resultado = A * 13.090909090909;
	return (Resultado);
}

//Agate
float agateTOmilimetro (float A) { 
	float Resultado = A * 1.9402777777778;
	return (Resultado);
}
float agateTOcentimetro (float A) { 
	float Resultado = A * 0.19402777777778;
	return (Resultado);
}
float agateTOpixel (float A) { 
	float Resultado = A * 7.3333333333333;
	return (Resultado);
}
float agateTOinch (float A) { 
	float Resultado = A * 0.076388888888889;
	return (Resultado);
}

float ColherSopaCha(float valor){
	return valor * 3;
}
float ColherSopaChavena(float valor){
	return valor * 0.06;
}
float ColherSopaCentilitro(float valor){
	return valor * 1.5;
}
float ColherSopaPitada(float valor){
	return valor * 750;
}
float ColherChaSopa(float valor){
	return valor * 3;
}
float ColherChaChavena(float valor){
	return valor * 0.02;
}
float ColherChaCentrilitro(float valor){
	return valor * 0.5;
}
float ColherChaPitada(float valor){
	return valor * 250;	
}
float ChavenaColherSopa(float valor){
	return valor * 16.7 ;
}
float ChavenaColherCha(float valor){
	return valor * 50;
}
float ChavenaCentilitro(float valor){
	return valor * 25;
}
float ChavenaPitada(float valor){
	return valor * 1.25;
}
float CentilitroColherSopa(float valor){
	return valor * 0.66;
}
float CentilitroColherCha(float valor){
	return valor * 2;
}
float CentilitroChavena(float valor){
	return valor * 0.04;
}
float CentilitroPitada(float valor){
	return valor * 500;
}
float PintadaColherSopa(float valor){
	return valor * 0.0013;
}
float PintadaColherCha(float valor){
	return valor * 0.004;
}
float PintadaChavena(float valor){
	return valor * 0.0008;
}
float PintadaCentilitro(float valor){
	return valor * 0.002;
}
//-----------------------------Cozinha-------------------------
int cozinha() {
  float valor, resultado;
  int opcao;

  printf("Digite o valor da medida: ");
  scanf("%f", &valor);

  printf("\nEscolha a opcao de medida de origem:\n");
  printf("1 - Colher de sopa\n");
  printf("2 - Colher de cha\n");
  printf("3 - Chavena\n");
  printf("4 - Centilitro\n");
  printf("5 - Pitada\n");

  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("\nEscolha a opcao de medida de destino:\n");
      printf("1 - Colher de cha\n");
      printf("2 - Chavena\n");
      printf("3 - Centilitro\n");
      printf("4 - Pitada\n");

      scanf("%d", &opcao);

      switch (opcao) {
        case 1:
          resultado = ColherSopaCha(valor);
          printf("\n%.2f colher(es) de sopa equivale(m) a %.2f colher(es) de cha\n", valor, resultado);
          break;
        case 2:
          resultado = ColherSopaChavena(valor);
          printf("\n%.2f colher(es) de sopa equivale(m) a %.2f Chavena(s)\n", valor, resultado);
          break;
        case 3:
          resultado = ColherSopaCentilitro(valor);
          printf("\n%.2f colher(es) de sopa equivale(m) a %.2f Centilitro(s)\n", valor, resultado);
          break;
        case 4:
          resultado = ColherSopaPitada(valor);
          printf("\n%.2f colher(es) de sopa equivale(m) a %.2f Pitada(s)\n", valor, resultado);
          break;
        default:
          printf("\nOpcao invalida!\n");
          break;
      }
      break;
    case 2:
      printf("\nEscolha a opcao de medida de destino:\n");
      printf("1 - Colher de sopa\n");
      printf("2 - Chavena\n");
      printf("3 - Centilitro\n");
      printf("4 - Pitada");
      scanf("%d", &opcao);

      switch (opcao) {
        case 1:
          resultado = ColherChaSopa(valor);
          printf("\n%.2f colher(es) de cha equivale(m) a %.2f colher(es) de sopa\n", valor, resultado);
          break;
        case 2:
          resultado = ColherChaChavena(valor);
          printf("\n%.2f colher(es) de cha equivale(m) a %.2f Chavena(s)\n", valor, resultado);
          break;
        case 3:
          resultado = ColherChaCentrilitro(valor);
          printf("\n%.2f colher(es) de cha equivale(m) a %.2f Centilitro(s)\n", valor, resultado);
          break;
        case 4:
          resultado = ColherChaPitada(valor);
          printf("\n%.2f colher(es) de cha equivale(m) a %.2f Pitada(s)\n", valor, resultado);
          break;
        default:
          printf("\nOpcao invalida!\n");
          break;
      }
      break;
    case 3:
      printf("\nEscolha a opcao de medida de destino:\n");
	  printf("1 - Colher de sopa\n");
      printf("2 - Colher de cha\n");
  	  printf("3 - Centilitro\n");
  	  printf("4 - Pitada\n");
  	  scanf("%d", &opcao);
  		
  		switch (opcao) {
        case 1:
          resultado = ChavenaColherSopa(valor) ;
          printf("\n%.2f Chavena(s) a %.2f Colher(es) de sopa\n", valor, resultado);
          break;
        case 2:
          resultado = ChavenaColherCha(valor);
          printf("\n%.2f Chavena(s) a %.2f Colher(es) de cha\n", valor, resultado);
          break;
        case 3:
          resultado = ChavenaCentilitro(valor);
          printf("\n%.2f Chavena(s) a %.2f Centilitro(s)\n", valor, resultado);
          break;
        case 4:
          resultado = ChavenaPitada(valor);
          printf("\n%.2f Chavena(s) a %.2f Pitada(s)\n", valor, resultado);
          break;
        default:
          printf("\nOpcao invalida!\n");
          break;
      }
      break;
    case 4:
      printf("\nEscolha a opcao de medida de destino:\n");
      printf("1 - Colher de sopa\n");
      printf("2 - Colher de cha\n");
      printf("3 - Chavena\n");
  	  printf("4 - Pitada\n");
      scanf("%d", &opcao);
      
      switch (opcao) {
        case 1:
          resultado = CentilitroColherSopa(valor);
          printf("\n%.2f Centilitro(s) a %.2f Colher(es) de sopa\n", valor, resultado);
          break;
        case 2:
          resultado = CentilitroColherCha(valor);
          printf("\n%.2f Centilitro(s) a %.2f Colher(es) de cha\n", valor, resultado);
          break;
        case 3:
          resultado = CentilitroChavena(valor);
          printf("\n%.2f Centilitro(s) a %.2f Chavena(s)\n", valor, resultado);
          break;
        case 4:
          resultado = CentilitroPitada(valor);
          printf("\n%.2f Centilitro(s) a %.2f Pitada(s)\n", valor, resultado);
          break;
        default:
          printf("\nOpcao invalida!\n");
          break;
      }
      break;
    case 5:
      printf("\nEscolha a opcao de medida de destino:\n");
      printf("1 - Colher de sopa\n");
      printf("2 - Colher de cha\n");
      printf("3 - Chavena\n");
  	  printf("4 - Centilitro\n");
      scanf("%d", &opcao);
    
      switch (opcao) {
        case 1:
          resultado = PintadaColherSopa(valor);
          printf("\n%.2f Pitada(s) a %.2f Colher(es) de sopa\n", valor, resultado);
          break;
        case 2:
          resultado = PintadaColherCha(valor);
          printf("\n%.2f Pitada(s) a %.2f Colher(es) de cha\n", valor, resultado);
          break;
        case 3:
          resultado = PintadaChavena(valor);
          printf("\n%.2f Pitada(s) a %.2f Chavena(s)\n", valor, resultado);
          break;
        case 4:
          resultado = PintadaCentilitro(valor);
          printf("\n%.2f Pitada(s) a %.2f Centilitro(s)\n", valor, resultado);
          break;
        default:
          printf("\nOpcao invalida!\n");
          break;
      }
      break;
      
    	
    	return 0;
    }
}
//-----------------------------Letra-------------------------
int TamLetra(){
	
	//declaração de variáveis
	float valor;
	int partida, destino;
	
	//Pede e armazena o valor a ser convertido
	printf("Digite o valor a ser convertido: ");
	scanf("%f", &valor);
	
	//Pede e armazena o número correspondente a unidade de partida 
	printf("\nDigite o numero correspondente a unidade de partida: \n1-milimetro [mm] \n2-centimetro [cm] \n3-pixel [px] \n4-inch [in] \n5-agate\n\n");
	scanf("%i", &partida);
		
	//Pede e armazena o número correspondente a unidade de destino 
	printf("\nDigite o numero correspondente a unidade de destino: \n1-milimetro [mm] \n2-centimetro [cm] \n3-pixel [px] \n4-inch [in] \n5-agate\n\n");
	scanf("%i", &destino); 
	
	//dependendo das unidades de medida escolhidas, chama a função correta e exibe o resultado
	switch (partida){
		case 1: // Milímetro
				switch (destino){
					case 2: // Centímetro
						printf("\n-- Converter Milimetro para Centimetro --\n");
						printf("%.1f Milimetro [mm] = %.1f Centimetro [cm] \n", valor, milimetroTOcentimetro(valor)); 
						break;
					case 3: //Pixel
						printf("\n-- Converter Milimetro para Pixel --\n");
						printf("%f Milimetro [mm] = %f Pixel [px] \n", valor, milimetroTOpixel(valor)); 
						break;
					case 4: //Inch
						printf("\n-- Converter Milimetro para Inch --\n");
						printf("%f Milimetro [mm] = %f Inch [in] \n", valor, milimetroTOinch(valor)); 
						break;
					case 5: //Agate
						printf("\n-- Converter Milimetro para Agate --\n");
						printf("%f Milimetro [mm] = %f Agate \n", valor, milimetroTOagate(valor)); 
						break;											
				}	
			break;		
		case 2: // Centímetro
				switch (destino){
					case 1: // Milímetro
						printf("\n-- Converter Centimetro para Milimetro --\n");
						printf("%.1f Centimetro [cm] = %.1f Milimetro [mm] \n", valor, centimetroTOmilimetro(valor)); 
						break;
					case 3: //Pixel
						printf("\n-- Converter Centimetro para Pixel --\n");
						printf("%f Centimetro [cm] = %f Pixel [px] \n", valor, centimetroTOpixel(valor)); 
						break;
					case 4: //Inch
						printf("\n-- Converter Centimetro para Inch --\n");
						printf("%f Centimetro [cm] = %f Inch [in] \n", valor, centimetroTOinch(valor)); 
						break;
					case 5: //Agate
						printf("\n-- Converter Centimetro para Agate --\n");
						printf("%f Centimetro [cm] = %f Agate \n", valor, centimetroTOagate(valor)); 
						break;											
				}
			break;
		case 3: // Pixel
				switch (destino){
					case 1: // Milímetro
						printf("\n-- Converter Pixel para Milimetro --\n");
						printf("%f Pixel [px] = %f Milimetro [mm] \n", valor, pixelTOmilimetro(valor)); 
						break;
					case 2: //Centímetro					
						printf("\n-- Converter Pixel para Centimetro --\n");
						printf("%f Pixel [px] = %f Centimetro [cm] \n", valor, pixelTOcentimetro(valor)); 
						break;
					case 4: //Inch					
						printf("\n-- Converter Pixel para Inch --\n");
						printf("%f Pixel [px] = %f Inch [in] \n", valor, pixelTOinch(valor)); 
						break;
					case 5: //Agate					
						printf("\n-- Converter Pixel para Agate --\n");
						printf("%f Pixel [px] = %f Agate \n", valor, pixelTOagate(valor)); 
						break;
				}
			break;								
		case 4: // Inch
				switch (destino){
					case 1: // Milímetro					
						printf("\n-- Converter Inch para Milimetro --\n");
						printf("%f Inch [in] = %f Milimetro [mm] \n", valor, inchTOmilimetro(valor)); 
						break;
					case 2: //Centímetro
						printf("\n-- Converter Inch para Centimetro --\n");
						printf("%f Inch [in] = %f Centimetro [cm] \n", valor, inchTOcentimetro(valor)); 
						break;
					case 3: //Pixel
						printf("\n-- Converter Inch para Pixel --\n");
						printf("%f Inch [in] = %f Pixel [px] \n", valor, inchTOpixel(valor)); 
						break;
					case 5: //Agate
						printf("\n-- Converter Inch para Agate --\n");
						printf("%f Inch [in] = %f Agate \n", valor, inchTOagate(valor)); 
						break;									
				}
			break;
		case 5: // Agate
				switch (destino){
					case 1: // Milímetro
						printf("\n-- Converter Agate para Milimetro --\n");
						printf("%f Agate = %f Milimetro [mm] \n", valor, agateTOmilimetro(valor)); 
						break;
					case 2: //Centímetro
						printf("\n-- Converter Agate para Centimetro --\n");
						printf("%f Agate = %f Centimetro [cm] \n", valor, agateTOcentimetro(valor)); 
						break;
					case 3: //Pixel
						printf("\n-- Converter Agate para Pixel --\n");
						printf("%f Agate = %f Pixel [px] \n", valor, agateTOpixel(valor)); 
						break;
					case 4: //Inch
						printf("\n-- Converter Agate para Inch --\n");
						printf("%f Agate = %f Inch [in] \n", valor, agateTOinch(valor)); 
						break;											
				}
			break;					
	}//fecha o primeiro switch
}
//-----------------------------Força Mag-------------------------
float calcula_fmm(float Fm, float Rcm) {//Fm = Fluxo Magnético, Rcm = Relutância do Circuito MAgnético
	// cálculo da força magnetomotriz
    float fmm = Fm * Rcm;
    return fmm;
}

float converte(float valor, int opcao) {
	// conversão de unidades
    float resultado;
    switch(opcao) {
        case 1: // ampere para ampere-espira
            resultado = valor * 1;
            break;
        case 2: // ampere-espira para ampere
            resultado = valor * 1;
            break;
        case 3: // ampere para gilbert
            resultado = valor * 1.2566370614359;
            break;
        case 4: // ampere-espira para gilbert
            resultado = valor * 1.2566370614359;
            break;
        case 5: // gilbert para ampere
            resultado = valor * 0.79577471545948;
            break;
        case 6: // gilbert para ampere-espira
            resultado = valor * 0.79577471545948;
            break;
        default:
            resultado = 0;
            printf("\nOpção inválida!\n");
            break;
    }
    return resultado;
}

void calcular_fmm() {
    float Fm, Rcm;
    printf("\nDigite o valor do Fluxo magnético: ");
    scanf("%f", &Fm);
    printf("\nDigite o valor da Relutância do Circuito Magnético: ");
    scanf("%f", &Rcm);
    float fmm = calcula_fmm(Fm, Rcm);
    printf("\nA força magnetomotriz é: %f\n", fmm);
}

void converter_unidades() {
    float valor;
    int opcao_repetir = 1;
    printf("\nDigite o valor a ser convertido: ");
    scanf("%f", &valor);

    while (opcao_repetir == 1) {
        int opcao_conversao;
        printf("\nEscolha uma opção de conversão:\n\n1 - Ampere para Ampere-espira\n2 - Ampere-espira para Ampere\n3 - Ampere para Gilbert\n4 - Ampere-espira para Gilbert\n5 - Gilbert para Ampere\n6 - Gilbert para Ampere-espira\n");
        scanf("%d", &opcao_conversao);

        float resultado = converte(valor, opcao_conversao);
        printf("\nO resultado da conversão é: %f\n", resultado);

        printf("\nDeseja realizar outra conversão com o mesmo valor? (1 - Sim / 0 - Não): ");
        scanf("%d", &opcao_repetir);
    }
}

void realizar_operacao(int opcao) {
    if (opcao == 1) {
        calcular_fmm();
    } else if (opcao == 2) {
        converter_unidades();
    } else {
        printf("\nOpção inválida!\n");
    }
}

int ForcMag() {
    int opcao_repetir = 1;
    setlocale(LC_ALL, "Portuguese");

    while (opcao_repetir == 1) {
        int opcao;
        printf("\nEscolha uma opção:\n");
        printf("1 - Cálculo da força magnetomotriz\n");
        printf("2 - Conversão de unidades\n");
        scanf("%d", &opcao);
        realizar_operacao(opcao);
        printf("\nDeseja realizar outra operação? (1 - Sim / 0 - Não): ");
        scanf("%d", &opcao_repetir);
    }
}

float gravcm(float A){
  return 980.665*A;
}

float mt2mm2(float A){
	return 1000*A;
}

float mpmsmphs(float A){
	return 60*A;
}

float mpmsfpms(float A){
	return 5280*A;
}

float ms2fpms(float A){
	return 196.85039370079*A;
}
//-----------------------------Aceleração-------------------------
int aceleracao (){ 

char resposta;
int op;
float valor, resultado;

setlocale(LC_ALL, "portuguese");

do {
printf("---------- CALCULADORA DE CONVERSÃO!!!----------\n");								
 	printf("1 - Aceleração da gravidade para centímetros por segundo quadrado (cm/s²): \n"
           "2 - Metros por segundo quadrado (m/s²) para milímetros por segundo quadrado (mm/s²) \n"
           "3 - Milhas por minuto por segundo (mpm/s) para Milhas por hora por segundo (mph/s)  \n"
           "4 - Milhas por minuto por segundo (mpm/s) para Pés por minuto por segundo (fpm/s) \n"
           "5 - Metros por segundo quadrado (m/s²) para pés por minuto por segundo (fpm/s) \n"
           "------------------------------------------------ ");
    printf("\n-> ");
    
    scanf("%d", &op);

	system ("cls");
	
	switch(op){
		case 1: 
			valor = 0; resultado = 0;
			printf("Qual é a aceleração da gravidade? ");
			scanf("%f", &valor);
		
			printf("%.2f acelerações de gravidade é igual à: ", valor);
			resultado = gravcm(valor);
			printf("%f cm/s² \n\n", resultado);
		break;
		
		case 2: 
			valor = 0; resultado = 0;
			printf("Quantos metros por segundo quadrado?\n ");
			scanf("%f", &valor);
		
			printf("%.2f m/s² é igual à: ", valor);
			resultado = mt2mm2(valor);
			printf("%f mm/s² \n\n", resultado);
			break;
			
		case 3: 
			valor = 0; resultado = 0;
			printf("Quantas milhas por minuto por segundo?\n ");
			scanf("%f", &valor);
		
			printf("%.2f mpm/s é igual à: ", valor);
			resultado = mpmsmphs(valor);
			printf("%f mph/s \n\n", resultado);
			break;
			
		case 4: 
			valor = 0; resultado = 0;
			printf("Quantas milhas por minuto por segundo?\n ");
			scanf("%f", &valor);
		
			printf("%.2f mpm/s é igual à: ", valor);
			resultado = mpmsfpms(valor);
			printf("%f fpm/s \n\n", resultado);
			break;
			
			case 5: 
			valor = 0; resultado = 0;
			printf("Quantas metros por segundo quadrado?\n ");
			scanf("%f", &valor);
		
			printf("%.2f m/s² é igual à: ", valor);
			resultado = ms2fpms(valor);
			printf("%f fpms/s \n\n", resultado);
			break;
			
			default:
          	printf("Operação inválida, tente novamente!\n\n");
	}

printf("Deseja fazer outra operação? [S/N] ");
scanf("%s", &resposta);
printf("\n\n");

system("cls");

}while(resposta == 's' | resposta == 'S');

}

//-----------------------------Impulso-------------------------
int Impulso() {
	setlocale(LC_ALL,"Portuguese");
   	float f, t, impulso;

   	printf("Digite a força em N: ");
   	scanf("%f", &f);

  	printf("Digite o tempo em s: ");
   	scanf("%f", &t);
   	
   	impulso = f * t;
   	
   	printf("O impulso é: %.2f Ns\n", impulso);
   return 0;
}
//-----------------------------Taxa de transferencia de dados-------------------------
float TaxaTransfDados(){
    float velocidade;
    
    // Solicita ao usuário para inserir a velocidade em bits por segundo (bps)
    printf("Digite a velocidade em bps: ");
    scanf("%f", &velocidade);
    
    // Realiza as conversões de velocidade para outras unidades
    float velocidadeBytePorSegundo = velocidade / 8;
    float velocidadeGigabitPorSegundo = velocidade / 1000000000;
    float velocidadeGigabytePorSegundo = velocidadeBytePorSegundo / 1000000000;
    float velocidadeKilobitPorSegundo = velocidade / 1000;
    float velocidadeKilobytePorSegundo = velocidadeBytePorSegundo / 1000;
    float velocidadeMegabitPorSegundo = velocidade / 1000000;
    float velocidadeMegabytePorSegundo = velocidadeBytePorSegundo / 1000000;
    float velocidadeTerabitPorSegundo = velocidade / 1000000000000;
    float velocidadeTerabytePorSegundo = velocidadeBytePorSegundo / 1000000000000;
    
    // Exibe os resultados das conversões
    printf("Velocidade em Bps: %.10f\n", velocidadeBytePorSegundo);
    printf("Velocidade em Gbps: %.10f\n", velocidadeGigabitPorSegundo);
    printf("Velocidade em GBps: %.10f\n", velocidadeGigabytePorSegundo);
    printf("Velocidade em kbps: %.10f\n", velocidadeKilobitPorSegundo);
    printf("Velocidade em KBps: %.10f\n", velocidadeKilobytePorSegundo);
    printf("Velocidade em Mbps: %.10f\n", velocidadeMegabitPorSegundo);
    printf("Velocidade em MBps: %.10f\n", velocidadeMegabytePorSegundo);
    printf("Velocidade em Tbps: %.10f\n", velocidadeTerabitPorSegundo);
    printf("Velocidade em TBps: %.15f\n", velocidadeTerabytePorSegundo);
    
    return 0;
}		
// -------------------------- Aqui termina as funções das MEDIDAS ------------------------------

// ---------------------------- Função para Centralizar textos ---------------------------------
const char *centerAlignText(char *field, unsigned int fieldWidth, const char *text){
    if (fieldWidth == 0 || field == NULL) return "";

    fieldWidth--;
    unsigned int len = strlen(text);
    unsigned int padding = fieldWidth > len ? (fieldWidth+1 - len)/2 : 0;
    sprintf(field, "%*s%.*s%*s", padding, "", fieldWidth-1, text, padding>0 && len%2!=fieldWidth%2 ? padding-1 : padding, "");

    return (const char *)field;
}

// --------------------------------- Aqui começa o int main  -----------------------------------
int main() {
	setlocale (LC_ALL,"portuguese");
Inicio:
	
	char respContinuar;
do {
	int Categorias = categoriaUnidades();
	
switch (Categorias){
	// Integrantes da Atividade
	case 0: {
		system ("cls");
		
		int verificaAtv;
		printf("\n **************************************************************************************");
		printf("\n");
		printf("\n Deseja verificar alguma atividade ??\n Se sim, qual ??: ");
		scanf ("%i", &verificaAtv);
		switch(verificaAtv) {
			case 1:
				goto Primeiro;
			case 2:
				goto Segundo;
			case 3:
				goto Terceiro;
			case 4:
				goto Quarto;
			case 5:
				goto Quinto;
			case 6:
				goto Sexto;
			case 7:
				goto Setimo;
			case 8:
				goto Oitavo;
			case 9:
				goto Nono;
			case 10:
				goto Decimo;
			case 11:
				goto DecimoP;
			case 12:
				goto DecimoS;
			case 13:
				goto DecimoT;
			case 14:
				goto DecimoQ;
			case 15:
				goto DecimoQi;
			case 16:
				goto DecimoSex;
			case 17:
				goto DecimoSet;
			case 18:
				goto DecimoOit;
			case 19: 
				goto DecimoNon;
			case 20:
				goto Vigesimo;
			case 21:
				goto VigesimoP;	
			case 22:
				goto VigesimoS;	
			case 23:
				goto VigesimoT;	
			case 24:
				goto VigesimoQ;	
			case 25:
				goto VigesimoQu;	
			case 26:
				goto VigesimoSex;	
			case 27:
				goto VigesimoSet;
			case 28:
				goto VigesimoOi;
			default:
				goto Inicio;
		}
	break;
	}
	
	// Felipe Monteiro (ANGULO)
	Primeiro:
	case 1: {
		system ("cls");
		
		double resultadoAngulo;
		int opcaoAngulo;
		float angulo;
		
		printf(" Digite o angulo: ");
		scanf("%f", &angulo);
		printf("\n Digite 1 para SENO\n Digite 2 para COSSENO\n Digite 3 para TANGENTE\n ->|: ");
		scanf("%d", &opcaoAngulo);
		
		switch(opcaoAngulo) {
			case 1: {
				resultadoAngulo = sin(angulo*(3.14/180));
				printf("\n O SENO de %g é %g.", angulo, resultadoAngulo);
			break;
			}
			case 2: {
				resultadoAngulo = cos(angulo*(3.14/180.0));
				printf("\n O COSSENO de %g é %g.", angulo, resultadoAngulo);
			break;
			}
			case 3: {
				resultadoAngulo = tan(angulo*(3.14/180.0));
				printf("\n A TANGENTE de %gf é %g.\n", angulo, resultadoAngulo);
			break;
			}
			default: {
				printf("\n Digitou a opcao errada!");
			break;
			}
		break;
		}
		printf("\n\n Deseja sair ?? [S/N]: ");
		scanf("%s", &respContinuar);
	break;
	}
	
	// João Victor Vieira (ÁREA)
	Segundo:
	case 2: {
		float area;
	 	int resparea=MenuArea ();
	 	switch (resparea){
	 		case 1: {
	 			printf("\n Informe o valor em Quilometro quadrado a ser convertido a Metro Quadrdo: ");
				scanf("%f", &area);
				printf("\n %g Quilometros Quadrados equivalem a %g Metros Quadrados", area, QMQpMEQ(area)); //Printf para resposta 
			break;
			}
	        case 2: {
				printf("\n Informe o valor em Quiloemetro Quadrado a ser convertido a Milha Quadrada:  ");
				scanf("%f", &area);
				printf("\n %g Quilometros Quadrados equivalem a %g Milhas Quadradas", area, QMQpMIQ(area));
			break;
		    } 
	        case 3: {
		       	printf("\n Informe o valor em Quilometro Quadrado a ser convertido a Jarda Quadrada:   ");
		       	scanf("%f", &area);
		       	printf("\n %g Quilometros Quadrados equivalem a %g Jardas Quadradas", area, QMQpJAQ(area));
			break;
		    }
	        case 4: {
	       		printf("\n Informe o valor em Quilometro Quadrado a ser convertido a Pe Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g Quilometros Quadrados equivalem a %g Pe Quadrado", area, QMQpPEQ(area));
			break;
		    }
	        case 5: {
	       		printf("\n Informe o valor em Quilometro Quadrado a ser convertido a Polegada Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g Quilometros Quadrados equivalem a %g Polegada Quadrada", area, QMQpPEQ(area));
			break;
		    }
	        case 6: {
	      		printf("\n Informe o valor em Quilometro Quadrado a ser convertido a Hectare:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g Quiometros Quadrados equivalem a %g Hectare", area, QMQpHEC(area));
			break;
		    }
            case 7: {
          		printf("\n Informe o valor em Quilometro Quadrado a ser convertido a Acre:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g Quilometros Quadrados equivalem a %g Acre", area, QMQpACR(area));
			break;
		    }	   
	        case 8: {
	      	    printf("\n Informe o valor em Metro Qaudrado a ser convertido a Quilometro Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g Metros Quadrados equivalem a %g Quilometro Quadrados", area, MEQpQMQ(area));
			break;
		    }
	        case 9: {
	      	    printf("\n Informe o valor em Metro Quadrado a ser convertido em Milha Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g Metros Quadrados equivalem a %g Milhas Quadradas", area, MEQpMIQ(area));
			break;
		    }
	        case 10: {
	      	    printf("\n Informe o valor em Metro Quadrado a ser convertido em Jarda Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g Metros Quadrados equivalem a %g Jardas Quadradas", area, MEQpJAQ(area));
	      	break;
		    }
	        case 11: {
	      	    printf("\n Informe o valor em Metro Quadrado a ser convertido em Pe Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g Metros Quadrados equivalem a %g Pe Quadrado", area, MEQpPEQ(area));
			break;
		    }
            case 12: {
          	    printf("\n Informe o valor em Metro Quadrado a ser convertido em Polegada Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g Metros Quadrados equivalem a %g Polegada Quadrada", area, MEQpPGQ(area));
			break;
		    }	   
	        case 13: {
	      	    printf("\n Informe o valor em Metro Quadrado a ser convertido em Hectare:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g Metros Quadrados equivalem a %g Hecatares", area, MEQpHEC(area));
			break;
		    }
	        case 14: {
	      	    printf("\n Informe o valor em Metro Quadrado a ser convertido em Acre:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g Metros Quadrados equivalem a %g Acre", area, MEQpACR(area));
			break;
		    }
	        case 15: {
	     	    printf("\n Informe o valor em Milha Quadrada a ser convertido em Quilometro Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Milhas Quadradas equivalem a %g Quilometro Quadrados", area, MIQpQMQ(area));
			}
	        case 16: {
	     	    printf("\n Informe o valor em Milha Quadrada a ser convertido em Metro Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Milhas Quadradas equivalem a %g Metros Quadrados", area, MIQpMEQ(area));
			break;
		    }
            case 17: {
         	    printf("\n Informe o valor em Milha Quadrada a ser convertido em Jarda Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Milhas Quadradas equivalem a %g Jarda Quadrada", area, MIQpJAQ(area));
			break;
		    }	   
	        case 18: {
	   	        printf("\n Informe o valor em Milha Quadrada a ser convertido em Pe Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Milhas Quadradas equivalem a %g Pe Quadrado", area, MIQpPEQ(area));
		    break;
	   		}
	   		case 19: {
	   	        printf("\n Informe o valor em Milha Quadrada a ser convertido em Polegada Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Milhas Quadradas equivalem a %g Polegadas Quadradas", area, MIQpPGQ(area));
			break;
	   		}
	   		case 20: {
		        printf("\n Informe o valor em Milha Quadrada a ser convertido em Hectare:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Milhas Quadradas equivalem a %g Hectare", area, MIQpHEC(area));
			break;
	   		}
	  		case 21:  {
	   	        printf("\n Informe o valor em Milha Quadrada a ser convertido em Acre:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Milhas Quadradas equivalem a %g Acre", area, MIQpACR(area));
			break;
	   		}
	   		case 22: {
	   	        printf("\n Informe o valor em Jarda Quadrada a ser convertido Quilometro Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Jardas Quadradas equivalem a %g Quilometros Quadrados", area, JAQpQMQ(area));
			break;
	   		}
	   		case 23: {
	   	        printf("\n Informe o valor em Jarda Quadrada a ser convertido em Metro Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Milhas Jardas Quadradas a %g Metros Quadrados", area, JAQpMEQ(area));
			break;
	   		}
	   		case 24: {
	   	        printf("\n Informe o valor em Jarda Quadrada a ser convertido em Milha Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Jardas Quadradas equivalem a %g Mihas Quadradas", area, JAQpMIQ(area));
			break;
	   		}
	   		case 25:{
		        printf("\n Informe o valor em Jarda Quadrada a ser convertido em Pe Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Jardas Quadradas equivalem a %g Pe Quadrado", area, JAQpPEQ(area));
			break;
	   		}
	 		case 26: {
	 	        printf("\n Informe o valor em Jarda Quadrada a ser convertido em Polegada Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Jardas Quadradas equivalem a %g Polegadas Quadradas", area, JAQpPGQ(area));
			break;
	 		}   
			case 27: {
		        printf("\n Informe o valor em Jarda Quadrada a ser convertido em Hectare:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Jardas Quadradas equivalem a %g Hectare", area, JAQpHEC(area));
			break;
			}
			case 28: {
		        printf("\n Informe o valor em Jarda Quadrada a ser convertido em Acre:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Jardas Quadradas equivalem a %g Acre", area, JAQpACR(area));
			break;
			}
			case 29: {
		        printf("\n Informe o valor em Pe Quadrado a ser convertido em Quilometro Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Pe Quadrado equivalem a %g Quilometros Quadrados", area, PEQpQMQ(area));
			break;
			}
			case 30: {
	            printf("\n Informe o valor em Pe Quadrado a ser convertido em Metro Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Pe Quadrado equivalem a %g Metros Quadrados", area, PEQpMEQ(area));
			break;	   
			}
			case 31: {
		        printf("\n Informe o valor em Pe Quadrado a ser convertido em Milha Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Pe Quadrado equivalem a %g Milhas Quadradas", area, PEQpMIQ(area));
			break;
			}
			case 32: {
		        printf("\n Informe o valor em Pe Quadrado a ser convertido em Jarda Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Pe Quadrado equivalem a %g Jardas Quadradas", area, PEQpJAQ(area));
			break;
			}
			case 33: {
		        printf("\n Informe o valor em Pe Quadrado a ser convertido em Polegada Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Pe Quadrado equivalem a %g Polegadas Quadrada", area, PEQpPGQ(area));
			break;
			}
			case 34: {
		        printf("\n Informe o valor em Pe Quadrado a ser convertido em Hectare:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Pe Quadrado equivalem a %g Hectare", area, PEQpHEC(area));
			break;
			}
			case 35: {
		        printf("\n Informe o valor em Pe Quadrado a ser convertido em Acre:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Pe Quadrado equivalem a %g Acre", area, PEQpACR(area));
			break;
			}
			case 36: {
		        printf("\n Informe o valor em Polegada Quadrada a ser convertido em Quilometro Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Polegada Quadrada equivalem a %g Quilometro Quadrados", area, PGQpQMQ(area));
			break;
			}
			case 37: {
		        printf("\n Informe o valor em Polegada Quadrada a ser convertido em Metro Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Polegada Quadrada equivalem a %g Metros Quadrados", area, PGQpMEQ(area));
			break;
			}
			case 38: {
		        printf("\n Informe o valor em Polegada Quadrada a ser convertido em Milha Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Polegada Quadrada equivalem a %g Milhas Quadradas", area, PGQpMIQ(area));
			break;
			}
			case 39:{
		        printf("\n Informe o valor em Polegada Quadrada a ser convertido em Jarda Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Polegada Quadrada equivalem a %g Jarda Quadrada", area, PGQpJAQ(area));
			break;
			}
			case 40: {
		        printf("\n Informe o valor em Polegada Quadrada a ser convertido em Pe Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Polegada Quadrada equivalem a %g Pe Quadrado", area, PGQpPEQ(area));
			break;
			}
			case 41: {
		        printf("\n Informe o valor em Polegada Quadrada a ser convertido em Hectare:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Polegada Quadrada equivalem a %g Hectare", area, PGQpHEC(area));
			break;
			}
			case 42: {
		        printf("\n Informe o valor em Polegada Quadrada a ser convertido em Acre:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Polegada Quadrada equivalem a %g Acre", area, PGQpACR(area));
			break;
			}
			case 43: {
		        printf("\n Informe o valor em Hectare a ser convertido em Quilometro Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Hectare equivalem a %g Quilometros Quadrados", area, HECpQMQ(area));
			break;
			}
			case 44: {
		        printf("\n Informe o valor em Hectare a ser convertido em Metro Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Hectare equivalem a %g Metros Quadrados", area, HECpMEQ(area));
			break;
			}
			case 45: {
				printf("\n Informe o valor em Hectare a ser convertido em Milha Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Hectare equivalem a %g Milhas Quadradas", area, HECpMIQ(area));
			break;
			}
			case 46: {
		        printf("\n Informe o valor em Hectare a ser convertido em Jarda Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Hectare equivalem a %g Jarda Quadrada", area, HECpJAQ(area));
			break;
			}
			case 47: {
		        printf("\n Informe o valor em Hectare a ser convertido em Pe Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Hectare equivalem a %g Pe Quadrado", area, HECpPEQ(area));
			break;
			}
			case 48: {
				printf("\n Informe o valor em Hectare a ser convertido em Polegada Quadrada: ");
				scanf("%f", &area);
				printf("\n %g  Hectare equivalem a %g Polegada Quadrada", area, HECpPGQ(area));
			break;
			}
			case 49: {
		        printf("\n Informe o valor em Hectare a ser convertido em Acre:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Hectare equivalem a %g Acre", area, HECpACR(area));
			break;
			}
			case 50: {
		        printf("\n Informe o valor em Acre a ser convertido em Quilometro Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Acre equivalem a %g Quilometros Quadrados", area, ACRpQMQ(area));
			break;
			}
			case 51: {
		        printf("\n Informe o valor em Acre a ser convertido em Metro Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Acre equivalem a %g Metros Quadrados", area, ACRpMEQ(area));
			break;
			}
			case 52: {
		        printf("\n Informe o valor em Acre a ser convertido em Milha Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Acre equivalem a %g Milhas Quadradas", area, ACRpMIQ(area));
			break;
			}
			case 53: {
			    printf("\n Informe o valor em Acre a ser convertido em Jarda Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Acre equivalem a %g Jarda Quadrada", area, ACRpJAQ(area));
			break;
			}
			case 54: {
		        printf("\n Informe o valor em Acre a ser convertido em Pe Quadrado:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Acre equivalem a %g Pe Quadrado", area, ACRpPEQ(area));
			break;
			}
			case 55: {
		        printf("\n Informe o valor em Acre a ser convertido em Polegada Quadrada:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Acre equivalem a %g Polegada Quadrada", area, ACRpPGQ(area));
			break;
			}
			case 56: {
		        printf("\n Informe o valor em Acre a ser convertido em Hectare:   ");
	       	    scanf("%f", &area);
	       	    printf("\n %g  Acre equivalem a %g Hectare", area, ACRpHEC(area));
			break;
			}
		}
		printf("\n\n Deseja sair ?? [S/N]: ");
		scanf("%s", &respContinuar);
	break;
	}
	
	// Giovana Peixoto (DADOS)
	Terceiro:
	case 3: {
		float Dados;
		int respDados = MenuArmDados();
		switch (respDados) {
			case 1: {
				int respBit = MenuBit();
				switch(respBit) {
					case 1: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Kilobits.", Dados, BITpKilobit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Kibibits.", Dados, BITpKibibit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Megabits.", Dados, BITpMegabit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Mebibits.", Dados, BITpMebibit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Gigabits.", Dados, BITpGigabit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Gibibits.", Dados, BITpGibibit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Terabits.", Dados, BITpTerabit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Tebibits.", Dados, BITpTebibit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Petabits.", Dados, BITpPetabit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Pebibits.", Dados, BITpPebibit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Bytes.", Dados, BITpByte(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Kilobytes.", Dados, BITpKilobyte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Kibibytes.", Dados, BITpKibibyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Megabytes.", Dados, BITpMegabyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g MebiBytes.", Dados, BITpMebiByte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Gigabytes.", Dados, BITpGigabyte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Gibibytes.", Dados, BITpGibibyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Terabytes.", Dados, BITpTerabyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Tebibytes.", Dados, BITpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Petabytes.", Dados, BITpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Bit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bits equivalem a %g Pebibytes.", Dados, BITpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 2: {
				int respKilobit = MenuKilobit();
				switch(respKilobit) {
					case 1 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Bits.", Dados, KILOBITpBit(Dados));
					break;
					}
					case 2 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Kibibits.", Dados, KILOBITpKibibit(Dados));
					break;
					}
					case 3 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Megabits.", Dados, KILOBITpMegabit(Dados));
					break;
					}
					case 4 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Mebibits.", Dados, KILOBITpMebibit(Dados));
					break;
					}
					case 5 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Gigabits.", Dados, KILOBITpGigabit(Dados));
					break;
					}
					case 6 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Gibibits.", Dados, KILOBITpGibibit(Dados));
					break;
					}
					case 7 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Terabits.", Dados, KILOBITpTerabit(Dados));
					break;
					}
					case 8 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Tebibits.", Dados, KILOBITpTebibit(Dados));
					break;
					}
					case 9 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Petabits.", Dados, KILOBITpPetabit(Dados));
					break;
					}
					case 10 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Pebibits.", Dados, KILOBITpPebibit(Dados));
					break;
					}
					case 11 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Bytes.", Dados, KILOBITpByte(Dados));
					break;
					}
					case 12 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Kilobytes.", Dados, KILOBITpKilobyte(Dados));
					break;
					}
					case 13 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Kibibytes.", Dados, KILOBITpKibibyte(Dados));
					break;
					}
					case 14 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Megabytes.", Dados, KILOBITpMegabyte(Dados));
					break;
					}
					case 15 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g MebiBytes.", Dados, KILOBITpMebiByte(Dados));
					break;
					}
					case 16 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Gigabytes.", Dados, KILOBITpGigabyte(Dados));
					break;
					}
					case 17 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Gibibytes.", Dados, KILOBITpGibibyte(Dados));
					break;
					}
					case 18 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Terabytes.", Dados, KILOBITpTerabyte(Dados));
					break;
					}
					case 19 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g TebiBytes.", Dados, KILOBITpTebibyte(Dados));
					break;
					}
					case 20 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Petabytes.", Dados, KILOBITpPetabyte(Dados));
					break;
					}
					case 21 : {
						printf(" Valor em Kilobit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobits equivalem a %g Pebibytes.", Dados, KILOBITpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 3: {
				int respKibibit = MenuKibibit();
				switch (respKibibit) {
					case 1: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Bits.", Dados, KIBIBITpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Kilobits.", Dados, KIBIBITpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Megabits.", Dados, KIBIBITpMegabit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Mebibits.", Dados, KIBIBITpMebibit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Gigabits.", Dados, KIBIBITpGigabit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Gibibits.", Dados, KIBIBITpGibibit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Terabits.", Dados, KIBIBITpTerabit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Tebibits.", Dados, KIBIBITpTebibit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Petabits.", Dados, KIBIBITpPetabit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Pebibits.", Dados, KIBIBITpPebibit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Bytes.", Dados, KIBIBITpByte(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Kilobytes.", Dados, KIBIBITpKibibyte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Kibibytes.", Dados, KIBIBITpKibibyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Megabytes.", Dados, KIBIBITpMegabyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g MebiBytes.", Dados, KIBIBITpMebiByte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Gigabytes.", Dados, KIBIBITpGigabyte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Gibibytes.", Dados, KIBIBITpGibibyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Terabytes.", Dados, KIBIBITpTerabyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g TebiBytes.", Dados, KIBIBITpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Petabytes.", Dados, KIBIBITpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Kibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibits equivalem a %g Pebibytes.", Dados, KIBIBITpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 4: {
				int respMegabit = MenuMegabit();
				switch (respMegabit) {
					case 1: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Bits.", Dados, MEGABITpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Kilobits.", Dados, MEGABITpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Kibibits.", Dados, MEGABITpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Mebibits.", Dados, MEGABITpMebibit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Gigabits.", Dados, MEGABITpGigabit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Gibibits.", Dados, MEGABITpGibibit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Terabits.", Dados, MEGABITpTerabit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Tebibits.", Dados, MEGABITpTebibit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Petabits.", Dados, MEGABITpPetabit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Pebibits.", Dados, MEGABITpPebibit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Bytes.", Dados, MEGABITpByte(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Kilobytes.", Dados, MEGABITpKilobyte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Kibibytes.", Dados, MEGABITpKibibyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Megabytes.", Dados, MEGABITpMegabyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g MebiBytes.", Dados, MEGABITpMebiByte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Gigabytes.", Dados, MEGABITpGigabyte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Gibibytes.", Dados, MEGABITpGibibyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Megabits a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Terabytes.", Dados, MEGABITpTerabyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g TebiBytes.", Dados, MEGABITpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Petabytes.", Dados, MEGABITpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Megabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabits equivalem a %g Pebibytes.", Dados, MEGABITpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 5: {
				int respMebibit = MenuMebibit();
				switch (respMebibit) {
					case 1: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Bits.", Dados, MEBIBITpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Kilobits.", Dados, MEBIBITpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Kibibits.", Dados, MEBIBITpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Megabits.", Dados, MEBIBITpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Gigabits.", Dados, MEBIBITpGigabit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Gibibits.", Dados, MEBIBITpGibibit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Terabits.", Dados, MEBIBITpTerabit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Tebibits.", Dados, MEBIBITpTebibit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Petabits.", Dados, MEBIBITpPetabit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Pebibits.", Dados, MEBIBITpPebibit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Bytes.", Dados, MEBIBITpByte(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Kilobytes.", Dados, MEBIBITpKilobyte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Kibibytes.", Dados, MEBIBITpKibibyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Megabytes.", Dados, MEBIBITpMegabyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g MebiBytes.", Dados, MEBIBITpMebiByte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Gigabytes.", Dados, MEBIBITpGigabyte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Gibibytes.", Dados, MEBIBITpGibibyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Terabytes.", Dados, MEBIBITpTerabyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g TebiBytes.", Dados, MEBIBITpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Petabyte.", Dados, MEBIBITpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Mebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Mebibits equivalem a %g Pebibytes.", Dados, MEBIBITpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 6: {
				int respGigabit = MenuGigabit();
				switch (respGigabit) {
					case 1: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Bits.", Dados, GIGABITpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Kilobits.", Dados, GIGABITpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Kibibits.", Dados, GIGABITpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Megabits.", Dados, GIGABITpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Mebibits.", Dados, GIGABITpMebibit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Gibibits.", Dados, GIGABITpGibibit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Terabits.", Dados, GIGABITpTerabit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Tebibits.", Dados, GIGABITpTebibit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Petabits.", Dados, GIGABITpPetabit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Pebibits.", Dados, GIGABITpPebibit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Bytes.", Dados, GIGABITpByte(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Kilobytes.", Dados, GIGABITpKilobyte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Kibibytes.", Dados, GIGABITpKibibyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Megabytes.", Dados, GIGABITpMegabyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g MebiBytes.", Dados, GIGABITpMebiByte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Gigabytes.", Dados, GIGABITpGigabyte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Gibibytes.", Dados, GIGABITpGibibyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Terabytes.", Dados, GIGABITpTerabyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g TebiBytes.", Dados, GIGABITpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Petabytes.", Dados, GIGABITpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Gigabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabits equivalem a %g Pebibytes.", Dados, GIGABITpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 7: {
				int respGibibit = MenuGibibit();
				switch (respGibibit) {
					case 1: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Bits.", Dados, GIBIBITpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Kilobits.", Dados, GIBIBITpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Kibibits.", Dados, GIBIBITpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Megabits.", Dados, GIBIBITpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Mebibits.", Dados, GIBIBITpMebibit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Gigabits.", Dados, GIBIBITpGigabit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Terabits.", Dados, GIBIBITpTerabit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Tebibits.", Dados, GIBIBITpTebibit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Petabits.", Dados, GIBIBITpPetabit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Pebibits.", Dados, GIBIBITpPebibit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Bytes.", Dados, GIBIBITpByte(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Kilobytes.", Dados, GIBIBITpKilobyte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Kibibytes.", Dados, GIBIBITpKibibyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Kibibytes a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibyte equivalem a %g Megabytes.", Dados, GIBIBITpMegabyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g MebiBytes.", Dados, GIBIBITpMebiByte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Gigabytes.", Dados, GIBIBITpGigabyte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Gibibytes.", Dados, GIBIBITpGibibyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Terabytes.", Dados, GIBIBITpTerabyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Tebibytes.", Dados, GIBIBITpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Petabytes.", Dados, GIBIBITpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Gibibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibits equivalem a %g Pebibytes.", Dados, GIBIBITpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 8: {
				int respTerabit = MenuTerabit();
				switch (respTerabit) {
					case 1: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Bits.", Dados, TERABITpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Kilobits.", Dados, TERABITpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Kibibits.", Dados, TERABITpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Megabits.", Dados, TERABITpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Mebibits.", Dados, TERABITpMebibit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Gigabits.", Dados, TERABITpGigabit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Gibibits.", Dados, TERABITpGibibit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Tebibits.", Dados, TERABITpTebibit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Petabits.", Dados, TERABITpPetabit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Pebibits.", Dados, TERABITpPebibit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Bytes.", Dados, TERABITpByte(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Kilobytes.", Dados, TERABITpKilobyte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Kibibytes.", Dados, TERABITpKibibyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Megabytes.", Dados, TERABITpMegabyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g MebiBytes.", Dados, TERABITpMebiByte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Gigabytes.", Dados, TERABITpGigabyte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Gibibytes.", Dados, TERABITpGibibyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Terabytes.", Dados, TERABITpTerabyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g TebiBytes.", Dados, TERABITpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Petabytes.", Dados, TERABITpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Terabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabits equivalem a %g Pebibytes.", Dados, TERABITpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 9: {
				int respTebibit = MenuTebibit();
				switch (respTebibit) {
					case 1: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Bits.", Dados, TEBIBITpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Kilobits.", Dados, TEBIBITpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Kibibits.", Dados, TEBIBITpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Megabits.", Dados, TEBIBITpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Mebibits.", Dados, TEBIBITpMebibit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Gigabits.", Dados, TEBIBITpGigabit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Gibibits.", Dados, TEBIBITpGibibit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Terabits.", Dados, TEBIBITpTerabit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Petabits.", Dados, TEBIBITpPetabit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Pebibits.", Dados, TEBIBITpPebibit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Bytes.", Dados, TEBIBITpByte(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Kilobytes.", Dados, TEBIBITpKilobyte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Kibibytes.", Dados, TEBIBITpKibibyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Megabytes.", Dados, TEBIBITpMegabyte(Dados));
					break;
				    }
					case 15: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g MebiBytes.", Dados, TEBIBITpMebiByte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Gigabytes.", Dados, TEBIBITpGigabyte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Gibibytes.", Dados, TEBIBITpGibibyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Terabytes.", Dados, TEBIBITpTerabyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g TebiBytes.", Dados, TEBIBITpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Petabytes.", Dados, TEBIBITpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Tebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibits equivalem a %g Pebibytes.", Dados, TEBIBITpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 10: {
				int respPetabit = MenuPetabit();
				switch (respPetabit) {
					case 1: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Bits.", Dados, PETABITpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Petabits a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Kilobits.", Dados, PETABITpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Kibibits.", Dados, PETABITpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Megabits.", Dados, PETABITpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Mebibits.", Dados, PETABITpMebibit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Gigabits.", Dados, PETABITpGigabit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Gibibits.", Dados, PETABITpGibibit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Terabits.", Dados, PETABITpTerabit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Tebibits.", Dados, PETABITpTebibit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Pebibits.", Dados, PETABITpPebibit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Bytes.", Dados, PETABITpByte(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Kilobytes.", Dados, PETABITpKilobyte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Kibibytes.", Dados, PETABITpKibibyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Megabytes.", Dados, PETABITpMegabyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g MebiBytes.", Dados, PETABITpMebiByte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Gigabytes.", Dados, PETABITpGigabyte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Gibibytes.", Dados, PETABITpGibibyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Terabytes.", Dados, PETABITpTerabyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g TebiBytes.", Dados, PETABITpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Petabytes.", Dados, PETABITpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Petabit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabits equivalem a %g Pebibytes.", Dados, PETABITpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 11: {
				int respPebibit = MenuPebibit();
				switch (respPebibit) {
					case 1: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Bits.", Dados, PEBIBITpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Kilobits.", Dados, PEBIBITpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Kibibits.", Dados, PEBIBITpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Megabits.", Dados, PEBIBITpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Mebibits.", Dados, PEBIBITpMebibit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Gigabits.", Dados, PEBIBITpGigabit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Gibibits.", Dados, PEBIBITpGibibit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Terabits.", Dados, PEBIBITpTerabit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Tebibits.", Dados, PEBIBITpTebibit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Petabits.", Dados, PEBIBITpPetabit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Bytes.", Dados, PEBIBITpByte(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Kilobytes.", Dados, PEBIBITpKilobyte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Kibibytes.", Dados, PEBIBITpKibibyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Megabytes.", Dados, PEBIBITpMegabyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g MebiBytes.", Dados, PEBIBITpMebiByte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Gigabytes.", Dados, PEBIBITpGigabyte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Gibibytes.", Dados, PEBIBITpGibibyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Terabytes.", Dados, PEBIBITpTerabyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g TebiBytes.", Dados, PEBIBITpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Petabytes.", Dados, PEBIBITpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Pebibit a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibits equivalem a %g Pebibytes.", Dados, PEBIBITpPebibyte(Dados));
					break;
			    	}
				}
			break;
			}
			case 12: {
				int respByte = MenuByte();
				switch (respByte) {
					case 1: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Bits.", Dados, BYTEpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Kilobits.", Dados, BYTEpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Kibibits.", Dados, BYTEpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Megabits.", Dados, BYTEpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Mebibits.", Dados, BYTEpMebibit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Byte equivalem a %g Gigabits.", Dados, BYTEpGigabit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Gibibits.", Dados, BYTEpGibibit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Terabits.", Dados, BYTEpTerabit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Tebibits.", Dados, BYTEpTebibit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Petabits.", Dados, BYTEpPetabit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Pebibits.", Dados, BYTEpPebibit(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Kilobytes.", Dados, BYTEpKilobyte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Kibibytes.", Dados, BYTEpKibibyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Megabytes.", Dados, BYTEpMegabyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g MebiBytes.", Dados, BYTEpMebiByte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Gigabytes.", Dados, BYTEpGigabyte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Gibibytes.", Dados, BYTEpGibibyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Terabytes.", Dados, BYTEpTerabyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Bytes a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g TebiBytes.", Dados, BYTEpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Petabytes.", Dados, BYTEpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Byte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Bytes equivalem a %g Pebibytes.", Dados, BYTEpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 13: {
				int respKilobyte = MenuKilobyte();
				switch (respKilobyte) {
					case 1: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Bits.", Dados, KILOBYTEpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Kilobits.", Dados, KILOBYTEpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Kibibits.", Dados, KILOBYTEpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Megabits.", Dados, KILOBYTEpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Mebibits.", Dados, KILOBYTEpMebibit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Gigabits.", Dados, KILOBYTEpGigabit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Gibibits.", Dados, KILOBYTEpGibibit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Terabits.", Dados, KILOBYTEpTerabit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Tebibits.", Dados, KILOBYTEpTebibit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Petabits.", Dados, KILOBYTEpPetabit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Pebibits.", Dados, KILOBYTEpPebibit(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Bytes.", Dados, KILOBYTEpByte(Dados));
					break;
				    }
					case 13: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Kibibytes.", Dados, KILOBYTEpKibibyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Megabytes.", Dados, KILOBYTEpMegabyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g MebiBytes.", Dados, KILOBYTEpMebiByte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Gigabytes.", Dados, KILOBYTEpGigabyte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Gibibytes.", Dados, KILOBYTEpGibibyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Terabytes.", Dados, KILOBYTEpTerabyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g TebibBytes.", Dados, KILOBYTEpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Petabytes.", Dados, KILOBYTEpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Kilobyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kilobytes equivalem a %g Pebibytes.", Dados, KILOBYTEpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 14: {
				int respKibibyte = MenuKibibyte();
				switch (respKibibyte) {
					case 1: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Bits.", Dados, KIBIBYTEpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Kilobits.", Dados, KIBIBYTEpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Kibibits.", Dados, KIBIBYTEpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Megabits.", Dados, KIBIBYTEpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Mebibits.", Dados, KIBIBYTEpMebibit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Gigabits.", Dados, KIBIBYTEpGigabit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Gibibits.", Dados, KIBIBYTEpGibibit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Terabits.", Dados, KIBIBYTEpTerabit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Tebibits.", Dados, KIBIBYTEpTebibit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Petabits.", Dados, KIBIBYTEpPetabit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Pebibits.", Dados, KIBIBYTEpPebibit(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Bytes.", Dados, KIBIBYTEpByte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Kilobytes.", Dados, KIBIBYTEpKilobyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Megabytes.", Dados, KIBIBYTEpMegabyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g MebiBytes.", Dados, KIBIBYTEpMebiByte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Gigabytes.", Dados, KIBIBYTEpGigabyte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Gibibytes.", Dados, KIBIBYTEpGibibyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Terabytes.", Dados, KIBIBYTEpTerabyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g TebiBytes.", Dados, KIBIBYTEpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Petabytes.", Dados, KIBIBYTEpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Kibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Kibibytes equivalem a %g Pebibytes.", Dados, KIBIBYTEpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 15: {
				int respMegabyte = MenuMegabyte();
				switch (respMegabyte) {
					case 1: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Bits.", Dados, MEGABYTEpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Kilobits.", Dados, MEGABYTEpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Kibibits.", Dados, MEGABYTEpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Megabits.", Dados, MEGABYTEpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Mebibits.", Dados, MEGABYTEpMebibit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Gigabits.", Dados, MEGABYTEpGigabit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Gibibits.", Dados, MEGABYTEpGibibit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Terabits.", Dados, MEGABYTEpTerabit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Tebibits.", Dados, MEGABYTEpTebibit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Petabits.", Dados, MEGABYTEpPetabit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Pebibits.", Dados, MEGABYTEpPebibit(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Bytes.", Dados, MEGABYTEpByte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Kilobytes.", Dados, MEGABYTEpKilobyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Kibibytes.", Dados, MEGABYTEpKibibyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g MebiBytes.", Dados, MEGABYTEpMebiByte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Gigabytes.", Dados, MEGABYTEpGigabyte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Gibibytes.", Dados, MEGABYTEpGibibyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Terabytes.", Dados, MEGABYTEpTerabyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g TebiBytes.", Dados, MEGABYTEpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Petabytes.", Dados, MEGABYTEpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Megabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Megabytes equivalem a %g Pebibytes.", Dados, MEGABYTEpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 16: {
				int respMebiByte = MenuMebiByte();
				switch (respMebiByte) {
					case 1: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Bits.", Dados, MEBIBYTEpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Kilobits.", Dados, MEBIBYTEpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Kibibits.", Dados, MEBIBYTEpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Megabits.", Dados, MEBIBYTEpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Mebibits.", Dados, MEBIBYTEpMebibit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Gigabits.", Dados, MEBIBYTEpGigabit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Gibibits.", Dados, MEBIBYTEpGibibit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Terabits.", Dados, MEBIBYTEpTerabit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Tebibits.", Dados, MEBIBYTEpTebibit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Petabits.", Dados, MEBIBYTEpPetabit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Pebibits.", Dados, MEBIBYTEpPebibit(Dados));
					break;
					}
					case 12: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Bytes.", Dados, MEBIBYTEpByte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Kilobytes.", Dados, MEBIBYTEpKilobyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Kibibytes.", Dados, MEBIBYTEpKibibyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Megabytes.", Dados, MEBIBYTEpMegabyte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Gigabytes.", Dados, MEBIBYTEpGigabyte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Gibibytes.", Dados, MEBIBYTEpGibibyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Terabytes.", Dados, MEBIBYTEpTerabyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g TebiBytes.", Dados, MEBIBYTEpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Petabytes.", Dados, MEBIBYTEpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em MebiByte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g MebiBytes equivalem a %g Pebibytes.", Dados, MEBIBYTEpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 17: {
				int respGigabyte = MenuGigabyte();
				switch (respGigabyte) {
					case 1: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Bits.", Dados, GIGABYTEpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Kilobits.", Dados, GIGABYTEpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Kibibits.", Dados, GIGABYTEpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Megabits.", Dados, GIGABYTEpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Mebibits.", Dados, GIGABYTEpMebibit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Gigabits.", Dados, GIGABYTEpGigabit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Gibibits.", Dados, GIGABYTEpGibibit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Terabits.", Dados, GIGABYTEpTerabit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Gigabytes a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Tebibits.", Dados, GIGABYTEpTebibit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Petabits.", Dados, GIGABYTEpPetabit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Pebibits.", Dados, GIGABYTEpPebibit(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Bytes.", Dados, GIGABYTEpByte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Kilobytes.", Dados, GIGABYTEpKilobyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Kibibytes.", Dados, GIGABYTEpKibibyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Megabytes.", Dados, GIGABYTEpMegabyte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g MebiBytes.", Dados, GIGABYTEpMebiByte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Gibibytes.", Dados, GIGABYTEpGibibyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Terabytes.", Dados, GIGABYTEpTerabyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g TebiBytes.", Dados, GIGABYTEpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Petabytes.", Dados, GIGABYTEpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Gigabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gigabytes equivalem a %g Pebibytes.", Dados, GIGABYTEpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 18: {
				int respGibibyte = MenuGibibyte();
				switch (respGibibyte) {
					case 1: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Bits.", Dados, GIBIBYTEpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Kilobits.", Dados, GIBIBYTEpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Kibibits.", Dados, GIBIBYTEpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Megabits.", Dados, GIBIBYTEpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Mebibits.", Dados, GIBIBYTEpMebibit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Gigabits.", Dados, GIBIBYTEpGigabit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Gibibits.", Dados, GIBIBYTEpGibibit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Terabits.", Dados, GIBIBYTEpTerabit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Tebibits.", Dados, GIBIBYTEpTebibit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Petabits.", Dados, GIBIBYTEpPetabit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Pebibits.", Dados, GIBIBYTEpPebibit(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Bytes.", Dados, GIBIBYTEpByte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Kilobytes.", Dados, GIBIBYTEpKilobyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Kibibytes.", Dados, GIBIBYTEpKibibyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Megabytes.", Dados, GIBIBYTEpMegabyte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g MebiBytes.", Dados, GIBIBYTEpMebiByte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Gigabytes.", Dados, GIBIBYTEpGigabyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Terabytes.", Dados, GIBIBYTEpTerabyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g TebiBytes.", Dados, GIBIBYTEpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Petabytes.", Dados, GIBIBYTEpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Gibibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibytes equivalem a %g Pebibytes.", Dados, GIBIBYTEpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 19: {
				int respTerabyte = MenuTerabyte();
				switch (respTerabyte) {
					case 1: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Bits.", Dados, TERABYTEpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Kilobits.", Dados, TERABYTEpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Kibibits.", Dados, TERABYTEpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Megabits.", Dados, TERABYTEpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Mebibits.", Dados, TERABYTEpMebibit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Gigabits.", Dados, TERABYTEpGigabit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Gibibits.", Dados, TERABYTEpGibibit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Terabits.", Dados, TERABYTEpTerabit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Tebibits.", Dados, TERABYTEpTebibit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Petabits.", Dados, TERABYTEpPetabit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Pebibits.", Dados, TERABYTEpPebibit(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Bytes.", Dados, TERABYTEpByte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Kilobytes.", Dados, TERABYTEpKilobyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Kibibytes.", Dados, TERABYTEpKibibyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Megabytes.", Dados, TERABYTEpMegabyte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g MebiBytes.", Dados, TERABYTEpMebiByte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Gigabytes.", Dados, TERABYTEpGigabyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Gibibytes.", Dados, TERABYTEpGibibyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g TebiBytes.", Dados, TERABYTEpTebibyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Petabytes.", Dados, TERABYTEpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Terabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Terabytes equivalem a %g Pebibytes.", Dados, TERABYTEpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 20: {
				int respTebibyte = MenuTebibyte();
				switch (respTebibyte) {
					case 1: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Bits.", Dados, TEBIBYTEpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Kilobits.", Dados, TEBIBYTEpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Kibibits.", Dados, TEBIBYTEpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Megabits.", Dados, TEBIBYTEpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Mebibits.", Dados, TEBIBYTEpMebibit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Gigabits.", Dados, TEBIBYTEpGigabit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Gibibits.", Dados, TEBIBYTEpGibibit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Terabits.", Dados, TEBIBYTEpTerabit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Tebibits.", Dados, TEBIBYTEpTebibit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Petabits.", Dados, TEBIBYTEpPetabit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Pebibits.", Dados, TEBIBYTEpPebibit(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Bytes.", Dados, TEBIBYTEpByte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Kilobytes.", Dados, TEBIBYTEpKilobyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Kibibytes.", Dados, TEBIBYTEpKibibyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Megabytes.", Dados, TEBIBYTEpMegabyte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g MebiBytes.", Dados, TEBIBYTEpMebiByte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Gigabytes.", Dados, TEBIBYTEpGigabyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Gibibyte equivalem a %g Gibibytes.", Dados, TEBIBYTEpGibibyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g TeraBytes.", Dados, TEBIBYTEpTerabyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Petabytes.", Dados, TEBIBYTEpPetabyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Tebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Tebibytes equivalem a %g Pebibytes.", Dados, TEBIBYTEpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 21: {
				int respPetabyte = MenuPetabyte();
				switch (respPetabyte) {
					case 1: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Bits.", Dados, PETABYTEpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Kilobits.", Dados, PETABYTEpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Kibibits.", Dados, PETABYTEpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Megabits.", Dados, PETABYTEpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Mebibits.", Dados, PETABYTEpMebibit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Gigabits.", Dados, PETABYTEpGigabit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Gibibits.", Dados, PETABYTEpGibibit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Terabits.", Dados, PETABYTEpTerabit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Tebibits.", Dados, PETABYTEpTebibit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Petabits.", Dados, PETABYTEpPetabit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Pebibits.", Dados, PETABYTEpPebibit(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Bytes.", Dados, PETABYTEpByte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Kilobytes.", Dados, PETABYTEpKilobyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Kibibytes.", Dados, PETABYTEpKibibyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Megabytes.", Dados, PETABYTEpMegabyte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g MebiBytes.", Dados, PETABYTEpMebiByte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Gigabytes.", Dados, PETABYTEpGigabyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Gibibytes.", Dados, PETABYTEpGibibyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Terabytes.", Dados, PETABYTEpTerabyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g TebiBytes.", Dados, PETABYTEpTebibyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Petabyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Petabytes equivalem a %g Pebibytes.", Dados, PETABYTEpPebibyte(Dados));
					break;
					}
				}
			break;
			}
			case 22: {
				int respPebibyte = MenuPebibyte();
				switch (respPebibyte) {
					case 1: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Bits.", Dados, PEBIBYTEpBit(Dados));
					break;
					}
					case 2: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Kilobits.", Dados, PEBIBYTEpKilobit(Dados));
					break;
					}
					case 3: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Kibibits.", Dados, PEBIBYTEpKibibit(Dados));
					break;
					}
					case 4: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Megabits.", Dados, PEBIBYTEpMegabit(Dados));
					break;
					}
					case 5: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Mebibits.", Dados, PEBIBYTEpMebibit(Dados));
					break;
					}
					case 6: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Gigabits.", Dados, PEBIBYTEpGigabit(Dados));
					break;
					}
					case 7: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Gibibits.", Dados, PEBIBYTEpGibibit(Dados));
					break;
					}
					case 8: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Terabits.", Dados, PEBIBYTEpTerabit(Dados));
					break;
					}
					case 9: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Tebibits.", Dados, PEBIBYTEpTebibit(Dados));
					break;
					}
					case 10: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Petabits.", Dados, PEBIBYTEpPetabit(Dados));
					break;
					}
					case 11: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Pebibits.", Dados, PEBIBYTEpPebibit(Dados));
					break;
					}
					case 12: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Bytes.", Dados, PEBIBYTEpByte(Dados));
					break;
					}
					case 13: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Kilobytes.", Dados, PEBIBYTEpKilobyte(Dados));
					break;
					}
					case 14: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Kibibytes.", Dados, PEBIBYTEpKibibyte(Dados));
					break;
					}
					case 15: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibyte equivalem a %g Megabytes.", Dados, PEBIBYTEpMegabyte(Dados));
					break;
					}
					case 16: {
						printf(" Valor em Pebibytes a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g MebiBytes.", Dados, PEBIBYTEpMebiByte(Dados));
					break;
					}
					case 17: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Gigabytes.", Dados, PEBIBYTEpGigabyte(Dados));
					break;
					}
					case 18: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Gibibytes.", Dados, PEBIBYTEpGibibyte(Dados));
					break;
					}
					case 19: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Terabytes.", Dados, PEBIBYTEpTerabyte(Dados));
					break;
					}
					case 20: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g TebiBytes.", Dados, PEBIBYTEpTebibyte(Dados));
					break;
					}
					case 21: {
						printf(" Valor em Pebibyte a ser convertido: ");
						scanf("%f", &Dados);
						printf(" %g Pebibytes equivalem a %g Petabytes.", Dados, PEBIBYTEpPetabyte(Dados));
					break;
					}
				}
			break;
			}
		}
		printf("\n\n Deseja sair ?? [S/N]: ");
		scanf("%s", &respContinuar);
	break;
	}
	
	// Augusto Liberato (COMPRIMENTO)
	Quarto:
	case 4: {
		float comp;
		int respComp = categoriaComprimento();
		float lenght;
		switch (respComp){
			case 1:{
				printf("Digite um valor em quilômetros: ");
				scanf("%f",&lenght);
				printf("%g quilômetro equivale a %g metros ",lenght,KMpM(lenght));
			break;
			}
			case 2:{
				printf("Digite um valor em quilômetro: ");
				scanf("%f",&lenght);
				printf("%g quilomêtro equivale a %g centímetros ",lenght,KMpCM(lenght));
			break;
			}
			case 3:{
				printf("Digite um valor em quilomêtro: ");
				scanf("%f",&lenght);
				printf("%g quilomêtro equivale a %g milímetros ",lenght,KMpMM(lenght));
			break;
			}
			case 4:{
				printf("Digite um valor em quilomêtro: ");
				scanf("%f",&lenght);
				printf("%g quilomêtro equivale a %g micrômetros ",lenght,KMpMC(lenght));
			break;
			}
			case 5:{
				printf("Digite um valor em quilomêtro: ");
				scanf("%f",&lenght);
				printf("%g quilomêtro equivale a %g nanômetros ",lenght,KMpNN(lenght));
			break;
			}
			case 6:{
				printf("Digite um valor em quilomêtro: ");
				scanf("%f",&lenght);
				printf("%g quilomêtro equivale a %g milhas ",lenght,KMpML(lenght));
			break;
			}
			case 7:{
				printf("Digite um valor em quilomêtro: ");
				scanf("%f",&lenght);
				printf("%g quilomêtro equivale a %g jardas ",lenght,KMpJ(lenght));
			break;
			}
			case 8:{
				printf("Digite um valor em quilomêtro: ");
				scanf("%f",&lenght);
				printf("%g quilomêtro equivale a %g pés ",lenght,KMpP(lenght));
			break;
			}
			case 9:{
				printf("Digite um valor em quilomêtro: ");
				scanf("%f",&lenght);
				printf("%g quilomêtro equivale a %g polegadas ",lenght,KMpPL(lenght));
			break;
			}
			case 10:{
				printf("Digite um valor em quilomêtro: ");
				scanf("%f",&lenght);
				printf("%g quilomêtro equivale a %g milha náuticas ",lenght,KMpMN(lenght));
			break;
			}
		
		
		
			case 11:{
				printf("Digite um valor em metro: ");
				scanf("%f",&lenght);
				printf("%g metro equivale a %g quilômetros ",lenght,MpKM(lenght));
			break;
			}
			case 12:{
				printf("Digite um valor em metro: ");
				scanf("%f",&lenght);
				printf("%g metro equivale a %g centímetros ",lenght,MpCM(lenght));
			break;
			}
			case 13:{
				printf("Digite um valor em metro: ");
				scanf("%f",&lenght);
				printf("%g metro equivale a %g milímetros ",lenght,MpMM(lenght));
			break;
			}
			case 14:{
				printf("Digite um valor em metro: ");
				scanf("%f",&lenght);
				printf("%g metro equivale a %g micrômetros ",lenght,MpMC(lenght));
			break;
			}
			case 15:{
				printf("Digite um valor em metro: ");
				scanf("%f",&lenght);
				printf("%g metro equivale a %g nanômetros ",lenght,MpNN(lenght));
			break;
			}
			case 16:{
				printf("Digite um valor em metro: ");
				scanf("%f",&lenght);
				printf("%g metro equivale a %g milhas ",lenght,MpML(lenght));
			break;
			}
			case 17:{
				printf("Digite um valor em metro: ");
				scanf("%f",&lenght);
				printf("%g metro equivale a %g jardas ",lenght,MpJ(lenght));
			break;
			}
			case 18:{
				printf("Digite um valor em metro: ");
				scanf("%f",&lenght);
				printf("%g metro equivale a %g pés ",lenght,MpP(lenght));
			break;
			}
			case 19:{
				printf("Digite um valor em metro: ");
				scanf("%f",&lenght);
				printf("%g metro equivale a %g polegadas ",lenght,MpPL(lenght));
			break;
			}
			case 20:{
				printf("Digite um valor em metro: ");
				scanf("%f",&lenght);
				printf("%g metro equivale a %g milha náuticas ",lenght,MpMN(lenght));
			break;
			}
		
		
		
			case 21:{
				printf("Digite um valor em centímetro: ");
				scanf("%f",&lenght);
				printf("%g centímetro equivale a %g quilômetros ",lenght,CMpKM(lenght));
			break;
			}
			case 22:{
				printf("Digite um valor em centímetro: ");
				scanf("%f",&lenght);
				printf("%g centímetro equivale a %g metros ",lenght,CMpM(lenght));
			break;
			}
			case 23:{
				printf("Digite um valor em centímetro: ");
				scanf("%f",&lenght);
				printf("%g centímetro equivale a %g milímetros ",lenght,CMpMM(lenght));
			break;
			}
			case 24:{
				printf("Digite um valor em centímetro: ");
				scanf("%f",&lenght);
				printf("%g centímetro equivale a %g micrômetros ",lenght,CMpMC(lenght));
			break;
			}
			case 25:{
				printf("Digite um valor em centímetro: ");
				scanf("%f",&lenght);
				printf("%g centímetro equivale a %g nanômetros ",lenght,CMpNN(lenght));
			break;
			}
			case 26:{
				printf("Digite um valor em centímetro: ");
				scanf("%f",&lenght);
				printf("%g centímetro equivale a %g milhas ",lenght,CMpML(lenght));
			break;
			}
			case 27:{
				printf("Digite um valor em centímetro: ");
				scanf("%f",&lenght);
				printf("%g centímetro equivale a %g jardas ",lenght,CMpJ(lenght));
			break;
			}
			case 28:{
				printf("Digite um valor em centímetro: ");
				scanf("%f",&lenght);
				printf("%g centímetro equivale a %g pés ",lenght,CMpP(lenght));
			break;
			}
			case 29:{
				printf("Digite um valor em centímetro: ");
				scanf("%f",&lenght);
				printf("%g centímetro equivale a %g polegadas ",lenght,CMpPL(lenght));
			break;
			}
			case 30:{
				printf("Digite um valor em centímetro: ");
				scanf("%f",&lenght);
				printf("%g centímetro equivale a %g milha náuticas ",lenght,CMpML(lenght));
			break;
			}
		
		
		
			case 31:{
				printf("Digite um valor em milímetro: ");
				scanf("%f",&lenght);
				printf("%g milímetro equivale a %g quilômetros ",lenght,MMpKM(lenght));
			break;
			}
			case 32:{
				printf("Digite um valor em milímetro: ");
				scanf("%f",&lenght);
				printf("%g milímetro equivale a %g metros ",lenght,MMpM(lenght));
			break;
			}
			case 33:{
				printf("Digite um valor em milímetro: ");
				scanf("%f",&lenght);
				printf("%g milímetro equivale a %g centímetros ",lenght,MMpCM(lenght));
			break;
			}
			case 34:{
				printf("Digite um valor em milímetro: ");
				scanf("%f",&lenght);
				printf("%g milímetro equivale a %g micrômetros ",lenght,MMpMC(lenght));
			break;
			}
			case 35:{
				printf("Digite um valor em milímetro: ");
				scanf("%f",&lenght);
				printf("%g milímetro equivale a %g nanômetros ",lenght,MMpNN(lenght));
			break;
			}
			case 36:{
				printf("Digite um valor em milímetro: ");
				scanf("%f",&lenght);
				printf("%g milímetro equivale a %g milhas ",lenght,MMpML(lenght));
			break;
			}
			case 37:{
				printf("Digite um valor em milímetro: ");
				scanf("%f",&lenght);
				printf("%g milímetro equivale a %g jardas ",lenght,MMpJ(lenght));
			break;
			}
			case 38:{
				printf("Digite um valor em milímetro: ");
				scanf("%f",&lenght);
				printf("%g milímetro equivale a %g pés ",lenght,MMpP(lenght));
			break;
			}
			case 39:{
				printf("Digite um valor em milímetro: ");
				scanf("%f",&lenght);
				printf("%g milímetro equivale a %g polegadas ",lenght,MMpPL(lenght));
			break;
			}
			case 40:{
				printf("Digite um valor em milímetro: ");
				scanf("%f",&lenght);
				printf("%g milímetro equivale a %g milha náuticas ",lenght,MMpMN(lenght));
			break;
			}
		
		
		
			case 41:{
				printf("Digite um valor em micrômetro: ");
				scanf("%f",&lenght);
				printf("%g micrômetro equivale a %g quilômetros ",lenght,MCpKM(lenght));
			break;
			}
			case 42:{
				printf("Digite um valor em micrômetro: ");
				scanf("%f",&lenght);
				printf("%g micrômetro equivale a %g metros ",lenght,MCpM(lenght));
			break;
			}
			case 43:{
				printf("Digite um valor em micrômetro: ");
				scanf("%f",&lenght);
				printf("%g micrômetro equivale a %g centímetros ",lenght,MCpCM(lenght));
			break;
			}
			case 44:{
				printf("Digite um valor em micrômetro: ");
				scanf("%f",&lenght);
				printf("%g micrômetro equivale a %g milímetros ",lenght,MCpMM(lenght));
			break;
			}	
			case 45:{
				printf("Digite um valor em micrômetro: ");
				scanf("%f",&lenght);
				printf("%g micrômetro equivale a %g nanômetros ",lenght,MCpNN(lenght));
			break;
			}
			case 46:{
				printf("Digite um valor em micrômetro: ");
				scanf("%f",&lenght);
				printf("%g micrômetro equivale a %g milhas ",lenght,MCpML(lenght));
			break;
			}
			case 47:{
				printf("Digite um valor em micrômetro: ");
				scanf("%f",&lenght);
				printf("%g micrômetro equivale a %g jardas ",lenght,MCpJ(lenght));
			break;
			}
			case 48:{
				printf("Digite um valor em micrômetro: ");
				scanf("%f",&lenght);
				printf("%g micrômetro equivale a %g pés ",lenght,MCpP(lenght));
			break;
			}
			case 49:{
				printf("Digite um valor em micrômetro: ");
				scanf("%f",&lenght);
				printf("%g micrômetro equivale a %g polegadas ",lenght,MCpPL(lenght));
			break;
			}
			case 50:{
				printf("Digite um valor em micrômetro: ");
				scanf("%f",&lenght);
				printf("%g micrômetro equivale a %g milha náuticas ",lenght,MCpMN(lenght));
			break;
			}
		
		
		
			case 51:{
				printf("Digite um valor em nanômetro: ");
				scanf("%f",&lenght);
				printf("%g nanômetro equivale a %g quilômetros ",lenght,NNpKM(lenght));
			break;
			}
			case 52:{
			printf("Digite um valor em nanômetro: ");
				scanf("%f",&lenght);
				printf("%g nanômetro equivale a %g metros ",lenght,NNpM(lenght));
			break;
			}
			case 53:{
				printf("Digite um valor em nanômetro: ");
				scanf("%f",&lenght);
				printf("%g nanômetro equivale a %g centímetros ",lenght,NNpCM(lenght));
			break;
			}
			case 54:{
				printf("Digite um valor em nanômetro: ");
				scanf("%f",&lenght);
				printf("%g nanômetro equivale a %g milímetros ",lenght,NNpMM(lenght));
			break;
			}
			case 55:{
				printf("Digite um valor em nanômetro: ");
				scanf("%f",&lenght);
				printf("%g nanômetro equivale a %g micrômetros ",lenght,NNpMC(lenght));
			break;
			}
			case 56:{
				printf("Digite um valor em nanômetro: ");
				scanf("%f",&lenght);
				printf("%g nanômetro equivale a %g milhas ",lenght,NNpML(lenght));
			break;
			}
			case 57:{
				printf("Digite um valor em nanômetro: ");
				scanf("%f",&lenght);
				printf("%g nanômetro equivale a %g jardas ",lenght,NNpJ(lenght));
			break;
			}
			case 58:{
				printf("Digite um valor em nanômetro: ");
				scanf("%f",&lenght);
				printf("%g nanômetro equivale a %g pés ",lenght,NNpP(lenght));
			break;
			}
			case 59:{
				printf("Digite um valor em nanômetro: ");
				scanf("%f",&lenght);
				printf("%g nanômetro equivale a %g polegadas ",lenght,NNpPL(lenght));
			break;
			}
			case 60:{
				printf("Digite um valor em nanômetro: ");
				scanf("%f",&lenght);
				printf("%g nanômetro equivale a %g milha náuticas ",lenght,NNpMN(lenght));
			break;
			}
		
		
		
			case 61:{
				printf("Digite um valor em milha: ");
				scanf("%f",&lenght);
				printf("%g milha equivale a %g quilômetros ",lenght,MLpKM(lenght));
			break;
			}
			case 62:{
				printf("Digite um valor em milha: ");
				scanf("%f",&lenght);
				printf("%g milha equivale a %g metros ",lenght,MLpM(lenght));
			break;
			}
			case 63:{
				printf("Digite um valor em milha: ");
				scanf("%f",&lenght);
				printf("%g milha equivale a %g centímetros ",lenght,MLpCM(lenght));
			break;
			}
			case 64:{
				printf("Digite um valor em milha: ");
				scanf("%f",&lenght);
				printf("%g milha nanômetro equivale a %g milímetros ",lenght,MLpMM(lenght));
			break;
			}
			case 65:{
				printf("Digite um valor em milha: ");
				scanf("%f",&lenght);
				printf("%g milha equivale a %g micrômetros ",lenght,MLpMC(lenght));
			break;
			}
			case 66:{
				printf("Digite um valor em milha: ");
				scanf("%f",&lenght);
				printf("%g milha equivale a %g nanômetros ",lenght,MLpNN(lenght));
			break;
			}
			case 67:{
				printf("Digite um valor em milha: ");
				scanf("%f",&lenght);
				printf("%g milha equivale a %g jardas ",lenght,MLpJ(lenght));
			break;
			}
			case 68:{
				printf("Digite um valor em milha: ");
				scanf("%f",&lenght);
				printf("%g milha equivale a %g pés ",lenght,MLpP(lenght));
			break;
			}
			case 69:{
				printf("Digite um valor em milha: ");
				scanf("%f",&lenght);
				printf("%g milha equivale a %g polegadas ",lenght,MLpPL(lenght));
			break;
			}
			case 70:{
				printf("Digite um valor em milha: ");
				scanf("%f",&lenght);
				printf("%g milha equivale a %g milha náuticas ",lenght,MLpMN(lenght));
			break;
			}
		
		
		
			case 71:{
				printf("Digite um valor em jarda: ");
				scanf("%f",&lenght);
				printf("%g jarda equivale a %g quilômetros ",lenght,JpKM(lenght));
			break;
			}
			case 72:{
				printf("Digite um valor em jarda: ");
				scanf("%f",&lenght);
				printf("%g jarda equivale a %g metros ",lenght,JpM(lenght));
			break;
			}
			case 73:{
				printf("Digite um valor em jarda: ");
				scanf("%f",&lenght);
				printf("%g jarda equivale a %g centímetros ",lenght,JpCM(lenght));
			break;
			}
			case 74:{
				printf("Digite um valor em jarda: ");
				scanf("%f",&lenght);
				printf("%g jarda equivale a %g milímetros ",lenght,JpMM(lenght));
			break;
			}
			case 75:{
				printf("Digite um valor em jarda: ");
				scanf("%f",&lenght);
				printf("%g jarda equivale a %g micrômetros ",lenght,JpMC(lenght));
			break;
			}
			case 76:{
				printf("Digite um valor em jarda: ");
				scanf("%f",&lenght);
				printf("%g jarda equivale a %g nanômetros ",lenght,JpNN(lenght));
			break;
			}
			case 77:{
				printf("Digite um valor em jarda: ");
				scanf("%f",&lenght);
				printf("%g jarda equivale a %g milhas ",lenght,JpML(lenght));
			break;
			}
			case 78:{
				printf("Digite um valor em jarda: ");
				scanf("%f",&lenght);
				printf("%g jarda equivale a %g pés ",lenght,JpP(lenght));
			break;
			}
			case 79:{
				printf("Digite um valor em jarda: ");
				scanf("%f",&lenght);
				printf("%g jarda equivale a %g polegadas ",lenght,JpPL(lenght));
			break;
			}
			case 80:{
				printf("Digite um valor em jarda: ");
				scanf("%f",&lenght);
				printf("%g jarda equivale a %g milha náuticas ",lenght,JpMN(lenght));
			break;
			}
			
			
						
			case 81:{
				printf("Digite um valor em pé: ");
				scanf("%f",&lenght);
				printf("%g pé equivale a %g quilômetros ",lenght,PpKM(lenght));
			break;
			}
			case 82:{
				printf("Digite um valor em pé: ");
				scanf("%f",&lenght);
				printf("%g pé equivale a %g metros ",lenght,PpM(lenght));
			break;
			}
			case 83:{
				printf("Digite um valor em pé: ");
				scanf("%f",&lenght);
				printf("%g pé equivale a %g centímetros ",lenght,PpCM(lenght));
			break;
			}
			case 84:{
				printf("Digite um valor em pé: ");
				scanf("%f",&lenght);
				printf("%g pé equivale a %g milímetros ",lenght,PpMM(lenght));
			break;
			}
			case 85:{
				printf("Digite um valor em pé: ");
				scanf("%f",&lenght);
				printf("%g pé equivale a %g micrômetros ",lenght,PpMC(lenght));
			break;
			}
			case 86:{
				printf("Digite um valor em pé: ");
				scanf("%f",&lenght);
				printf("%g pé equivale a %g nanômetros ",lenght,PpNN(lenght));
			break;
			}
			case 87:{
				printf("Digite um valor em pé: ");
				scanf("%f",&lenght);
				printf("%g pé equivale a %g milhas ",lenght,PpML(lenght));
			break;
			}
			case 88:{
				printf("Digite um valor em pé: ");
				scanf("%f",&lenght);
				printf("%g pé equivale a %g jardas ",lenght,PpJ(lenght));
			break;
			}
			case 89:{
				printf("Digite um valor em pé: ");
				scanf("%f",&lenght);
				printf("%g pé equivale a %g polegadas ",lenght,PpPL(lenght));
			break;
			}
			case 90:{
				printf("Digite um valor em pé: ");
				scanf("%f",&lenght);
				printf("%g pé equivale a %g milha náuticas ",lenght,PpMN(lenght));
			break;
			}
		
		
		
			case 91:{
				printf("Digite um valor em polegada: ");
				scanf("%f",&lenght);
				printf("%g polegada equivale a %g quilômetros ",lenght,PLpKM(lenght));
			break;
			}
			case 92:{
				printf("Digite um valor em polegada: ");
				scanf("%f",&lenght);
				printf("%g polegada equivale a %g metros ",lenght,PLpM(lenght));
			break;
			}
			case 93:{
				printf("Digite um valor em polegada: ");
				scanf("%f",&lenght);
				printf("%g polegada equivale a %g centímetros ",lenght,PLpCM(lenght));
			break;
			}
			case 94:{
				printf("Digite um valor em polegada: ");
				scanf("%f",&lenght);
				printf("%g polegada equivale a %g milímetros ",lenght,PLpMM(lenght));
			break;
			}
			case 95:{
				printf("Digite um valor em polegada: ");
				scanf("%f",&lenght);
				printf("%g polegada equivale a %g micrômetros ",lenght,PLpMC(lenght));
			break;
			}
			case 96:{
				printf("Digite um valor em polegada: ");
				scanf("%f",&lenght);
				printf("%g polegada equivale a %g nanômetros ",lenght,PLpNN(lenght));
			break;
			}
			case 97:{
				printf("Digite um valor em polegada: ");
				scanf("%f",&lenght);
				printf("%g polegada equivale a %g milhas ",lenght,PLpML(lenght));
			break;
			}
			case 98:{
				printf("Digite um valor em polegada: ");
				scanf("%f",&lenght);
				printf("%g polegada equivale a %g jardas ",lenght,PLpJ(lenght));
			break;
			}
			case 99:{
				printf("Digite um valor em polegada: ");
				scanf("%f",&lenght);
				printf("%g polegada equivale a %g pés ",lenght,PLpP(lenght));
			break;
			}
			case 100:{
				printf("Digite um valor em polegada: ");
				scanf("%f",&lenght);
				printf("%g polegada equivale a %g milha náuticas ",lenght,PLpMN(lenght));
			break;
			}
		
		
		
			case 101:{
				printf("Digite um valor em milha náutica: ");
				scanf("%f",&lenght);
				printf("%g milha náutica equivale a %g quilômetros ",lenght,MNpKM(lenght));
			break;
			}
			case 102:{
				printf("Digite um valor em milha náutica: ");
				scanf("%f",&lenght);
			printf("	%g milha náutica equivale a %g metros ",lenght,MNpM(lenght));
			break;
			}
			case 103:{
				printf("Digite um valor em milha náutica: ");
				scanf("%f",&lenght);
				printf("%g milha náutica equivale a %g centímetros ",lenght,MNpCM(lenght));
			break;
			}
			case 104:{
				printf("Digite um valor em milha náutica: ");
				scanf("%f",&lenght);
				printf("%g milha náutica equivale a %g milímetros ",lenght,MNpMM(lenght));
			break;
			}
			case 105:{
				printf("Digite um valor em milha náutica: ");
				scanf("%f",&lenght);
				printf("%g milha náutica equivale a %g micrômetros ",lenght,MNpMC(lenght));
			break;
			}
			case 106:{
				printf("Digite um valor em milha náutica: ");
				scanf("%f",&lenght);
				printf("%g milha náutica equivale a %g nanômetros ",lenght,MNpNN(lenght));
			break;
			}
			case 107:{
				printf("Digite um valor em milha náutica: ");
				scanf("%f",&lenght);
				printf("%g milha náutica equivale a %g milhas ",lenght,MNpML(lenght));
			break;
			}
			case 108:{
				printf("Digite um valor em milha náutica: ");
				scanf("%f",&lenght);
				printf("%g milha náutica equivale a %g jardas ",lenght,MNpJ(lenght));
			break;
			}
			case 109:{
				printf("Digite um valor em milha náutica: ");
				scanf("%f",&lenght);
				printf("%g milha náutica equivale a %g pés ",lenght,MNpP(lenght));
			break;
			}
			case 110:{
				printf("Digite um valor em milha náutica: ");
				scanf("%f",&lenght);
				printf("%g milha náutica equivale a %g polegadas ",lenght,MNpPL(lenght));
			break;
			}
		}
		printf("\n\n Deseja sair ?? [S/N]: ");
		scanf("%s", &respContinuar);
	break;
	}
	
	// Luan Matheus (COMBUSTIVEL)
	Quinto:
	case 5: {
		float consumo;
		int resp20 = MenuCombustivel();
		switch (resp20) {
			case 1: {
				printf("\n Informe quantos quilometros por litro o veículo consome: ");
				scanf ("%f", &consumo);
				printf("\n %g Quilometros por litro equivale: ", consumo);
				printf("\n %g Milhas por galão Americano", KmLMpGa(consumo));
				printf("\n %g Milhas por galao Imperial", KmLMpGi(consumo));
				printf("\n %g Litros por 100 quilometros", KmLCkMl(consumo));
			break;
			}
			case 2: {
				printf ("\n Informe quantas milhas por galão americano o veículo consome: ");
				scanf ("%f", &consumo);
				printf("\n %g Milhas por galão americano equivale: ", consumo);
				printf("\n %g Quilometros por litro", MpGaKmL(consumo));
				printf("\n %g Milhas por galão Imperial",MpGaMpGi(consumo));
				printf("\n %g Litros por 100 quilometros", CkMLMpGa (consumo));
			break;
			}
			case 3: {
				printf ("\n Informe quantas milhas por galão imperial o veiculo consome: ");
				scanf ("%f", &consumo);
				printf ("\n %g Milhas por galão imperial equivale: ", consumo);
				printf ("\n %g Quilometros por litro",MpGiKmL(consumo));
				printf ("\n %g Milhas por galão Americano",MpGiMpGa(consumo));
				printf ("\n %g Litros por 100 quilometros",CkmLMpGi (consumo));
			break;
			}
			case 4: {
				printf ("\n Informe quantos litros por 100 Quilometros o veiculo consome: ");
				scanf ("%f", &consumo);
				printf ("\n %g Litros por 100 quilometros equivale: ", consumo);
				printf ("\n %g Milhas por galao americano", CkMLMpGa(consumo));
				printf ("\n %g Milhas por galao imperial", CkmLMpGi(consumo));
				printf ("\n %g Quilometros por litro", KmLCkMl(consumo));
			break;
			}
		}
		printf("\n\n Deseja sair ?? [S/N]: ");
		scanf("%s", &respContinuar);
	break;
	}
	
	Sexto:
	case 6:
	{
	CAPTERMOLAR();
	printf("\n\n Deseja sair? [S/N]: ");
    scanf("%s", &respContinuar);	
		break;
	}

	// Suzana Vieira (FREQUENCIA)
	Setimo:
	case 7: {
		float hertz;
		int respfreq=menuFrequencia();
		switch(respfreq){
			case 1:{
				printf("Infome um valor em nanohertz: ");
				scanf("%f",&hertz);
				printf("\nEsse valor em microhertz é %g",div10e4(hertz));
				printf("\nEsse valor em milihertz  é %g",div10e7(hertz));
				printf("\nEsse valor em hertz      é %g",div10e10(hertz));
				printf("\nEsse valor em decahertz  é %g",div10e11(hertz));
				printf("\nEsse valor em hectohertz é %g",div10e12(hertz));
				printf("\nEsse valor em quilohertz é %g",div10e13(hertz));
				printf("\nEsse valor em megahertz  é %g",div10e16(hertz));
				printf("\nEsse valor em gigahertz  é %g",div10e19(hertz));
				printf("\nEsse valor em terahertz  é %g",div10e22(hertz));
				printf("\nEsse valor em petahertz  é %g",div10e25(hertz));
				printf("\nEsse valor em exahertz   é %g",div10e28(hertz));
				printf("\nEsse valor em zetahertz  é %g",div10e31(hertz));
				printf("\nEsse valor em yotahertz  é %g",div10e34(hertz));
			break;
			}
			case 2:{
				printf("Infome um valor em microhertz: ");
				scanf("%f",&hertz);
				printf("\nEsse valor em nanohertz  é %g",mul10e2(hertz));
				printf("\nEsse valor em milihertz  é %g",div10e4(hertz));
				printf("\nEsse valor em hertz      é %g",div10e7(hertz));
				printf("\nEsse valor em decahertz  é %g",div10e8(hertz));
				printf("\nEsse valor em hectohertz é %g",div10e9(hertz));
				printf("\nEsse valor em quilohertz é %g",div10e10(hertz));
				printf("\nEsse valor em megahertz  é %g",div10e13(hertz));
				printf("\nEsse valor em gigahertz  é %g",div10e16(hertz));
				printf("\nEsse valor em terahertz  é %g",div10e19(hertz));
				printf("\nEsse valor em petahertz  é %g",div10e22(hertz));
				printf("\nEsse valor em exahertz   é %g",div10e25(hertz));
				printf("\nEsse valor em zetahertz  é %g",div10e28(hertz));
				printf("\nEsse valor em yotahertz  é %g",div10e31(hertz));
			break;
			}
			case 3:{
				printf("Infome um valor em milihertz: ");
				scanf("%f",&hertz);
				printf("\nEsse valor em nanohertz  é %g",mul10e5(hertz));
				printf("\nEsse valor em microhertz é %g",mul10e2(hertz));
				printf("\nEsse valor em hertz      é %g",div10e4(hertz));
				printf("\nEsse valor em decahertz  é %g",div10e5(hertz));
				printf("\nEsse valor em hectohertz é %g",div10e6(hertz));
				printf("\nEsse valor em quilohertz é %g",div10e7(hertz));
				printf("\nEsse valor em megahertz  é %g",div10e10(hertz));
				printf("\nEsse valor em gigahertz  é %g",div10e13(hertz));
				printf("\nEsse valor em terahertz  é %g",div10e16(hertz));
				printf("\nEsse valor em petahertz  é %g",div10e19(hertz));
				printf("\nEsse valor em exahertz   é %g",div10e22(hertz));
				printf("\nEsse valor em zetahertz  é %g",div10e25(hertz));
				printf("\nEsse valor em yotahertz  é %g",div10e28(hertz));	
			break;
			}
			case 4:{
				printf("Infome um valor hertz: ");
				scanf("%f",&hertz);
				printf("\nEsse valor em nanohertz  é %g",mul10e8(hertz));
				printf("\nEsse valor em microhertz é %g",mul10e5(hertz));
				printf("\nEsse valor em milihertz  é %g",mul10e2(hertz));
				printf("\nEsse valor em decahertz  é %g",div10e2(hertz));
				printf("\nEsse valor em hectohertz é %g",div10e3(hertz));
				printf("\nEsse valor em quilohertz é %g",div10e4(hertz));
				printf("\nEsse valor em megahertz  é %g",div10e7(hertz));
				printf("\nEsse valor em gigahertz  é %g",div10e10(hertz));
				printf("\nEsse valor em terahertz  é %g",div10e13(hertz));
				printf("\nEsse valor em petahertz  é %g",div10e16(hertz));
				printf("\nEsse valor em exahertz   é %g",div10e19(hertz));
				printf("\nEsse valor em zetahertz  é %g",div10e22(hertz));
				printf("\nEsse valor em yotahertz  é %g",div10e25(hertz));	
			break;
			}
			case 5:{
				printf("Infome um valor decahertz: ");
				scanf("%f",&hertz);
				printf("\nEsse valor em nanohertz  é %g",mul10e9(hertz));
				printf("\nEsse valor em microhertz é %g",mul10e6(hertz));
				printf("\nEsse valor em milihertz  é %g",mul10e3(hertz));
				printf("\nEsse valor em hertz      é %g",mul10(hertz));
				printf("\nEsse valor em hectohertz é %g",div10e2(hertz));
				printf("\nEsse valor em quilohertz é %g",div10e3(hertz));
				printf("\nEsse valor em megahertz  é %g",div10e6(hertz));
				printf("\nEsse valor em gigahertz  é %g",div10e9(hertz));
				printf("\nEsse valor em terahertz  é %g",div10e12(hertz));
				printf("\nEsse valor em petahertz  é %g",div10e15(hertz));
				printf("\nEsse valor em exahertz   é %g",div10e18(hertz));
				printf("\nEsse valor em zetahertz  é %g",div10e21(hertz));
				printf("\nEsse valor em yotahertz  é %g",div10e24(hertz));	
			break;
			}
			case 6:{
				printf("Infome um valor hectohertz: ");
				scanf("%f",&hertz);
				printf("\nEsse valor em nanohertz  é %g",mul10e10(hertz));
				printf("\nEsse valor em microhertz é %g",mul10e7(hertz));
				printf("\nEsse valor em milihertz  é %g",mul10e4(hertz));
				printf("\nEsse valor em hertz      é %g",mul10e1(hertz));
				printf("\nEsse valor em decahertz  é %g",mul10(hertz));
				printf("\nEsse valor em quilohertz é %g",div10e2(hertz));
				printf("\nEsse valor em megahertz  é %g",div10e5(hertz));
				printf("\nEsse valor em gigahertz  é %g",div10e8(hertz));
				printf("\nEsse valor em terahertz  é %g",div10e11(hertz));
				printf("\nEsse valor em petahertz  é %g",div10e14(hertz));
				printf("\nEsse valor em exahertz   é %g",div10e17(hertz));
				printf("\nEsse valor em zetahertz  é %g",div10e20(hertz));
				printf("\nEsse valor em yotahertz  é %g",div10e23(hertz));	
			break;
			}
			case 7:{
				printf("Infome um valor quilohertz: ");
				scanf("%f",&hertz);
				printf("\nEsse valor em nanohertz  é %g",mul10e11(hertz));
				printf("\nEsse valor em microhertz é %g",mul10e8(hertz));
				printf("\nEsse valor em milihertz  é %g",mul10e5(hertz));
				printf("\nEsse valor em hertz      é %g",mul10e2(hertz));
				printf("\nEsse valor em decahertz  é %g",mul10e1(hertz));
				printf("\nEsse valor em hectohertz é %g",mul10(hertz));
				printf("\nEsse valor em megahertz  é %g",div10e4(hertz));
				printf("\nEsse valor em gigahertz  é %g",div10e7(hertz));
				printf("\nEsse valor em terahertz  é %g",div10e10(hertz));
				printf("\nEsse valor em petahertz  é %g",div10e13(hertz));
				printf("\nEsse valor em exahertz   é %g",div10e16(hertz));
				printf("\nEsse valor em zetahertz  é %g",div10e19(hertz));
				printf("\nEsse valor em yotahertz  é %g",div10e22(hertz));	
			break;
			}
			case 8:{
				printf("Infome um valor megahertz: ");
				scanf("%f",&hertz);
				printf("\nEsse valor em nanohertz  é %g",mul10e14(hertz));
				printf("\nEsse valor em microhertz é %g",mul10e11(hertz));
				printf("\nEsse valor em milihertz  é %g",mul10e8(hertz));
				printf("\nEsse valor em hertz      é %g",mul10e5(hertz));
				printf("\nEsse valor em decahertz  é %g",mul10e4(hertz));
				printf("\nEsse valor em hectohertz é %g",mul10e3(hertz));
				printf("\nEsse valor em quilohertz é %g",mul10e2(hertz));
				printf("\nEsse valor em gigahertz  é %g",div10e4(hertz));
				printf("\nEsse valor em terahertz  é %g",div10e7(hertz));
				printf("\nEsse valor em petahertz  é %g",div10e10(hertz));
				printf("\nEsse valor em exahertz   é %g",div10e13(hertz));
				printf("\nEsse valor em zetahertz  é %g",div10e16(hertz));
				printf("\nEsse valor em yotahertz  é %g",div10e19(hertz));	
			break;
			}
			case 9:{
				printf("Infome um valor em gigahertz: ");
				scanf("%f",&hertz);
				printf("\nEsse valor em nanohertz  é %g",mul10e17(hertz));
				printf("\nEsse valor em microhertz é %g",mul10e14(hertz));
				printf("\nEsse valor em milihertz  é %g",mul10e11(hertz));
				printf("\nEsse valor em hertz      é %g",mul10e8(hertz));
				printf("\nEsse valor em decahertz  é %g",mul10e7(hertz));
				printf("\nEsse valor em hectohertz é %g",mul10e6(hertz));
				printf("\nEsse valor em quilohertz é %g",mul10e5(hertz));
				printf("\nEsse valor em megahertz  é %g",mul10e2(hertz));
				printf("\nEsse valor em terahertz  é %g",div10e4(hertz));
				printf("\nEsse valor em petahertz  é %g",div10e7(hertz));
				printf("\nEsse valor em exahertz   é %g",div10e10(hertz));
				printf("\nEsse valor em zetahertz  é %g",div10e13(hertz));
				printf("\nEsse valor em yotahertz  é %g",div10e16(hertz));	
			break;
			}
			case 10:{
				printf("Infome um valor em terahertz: ");
				scanf("%f",&hertz);
				printf("\nEsse valor em nanohertz  é %g",mul10e20(hertz));
				printf("\nEsse valor em microhertz é %g",mul10e17(hertz));
				printf("\nEsse valor em milihertz  é %g",mul10e14(hertz));
				printf("\nEsse valor em hertz      é %g",mul10e11(hertz));
				printf("\nEsse valor em decahertz  é %g",mul10e10(hertz));
				printf("\nEsse valor em hectohertz é %g",mul10e9(hertz));
				printf("\nEsse valor em quilohertz é %g",mul10e8(hertz));
				printf("\nEsse valor em megahertz  é %g",mul10e5(hertz));
				printf("\nEsse valor em gigahertz  é %g",mul10e2(hertz));
				printf("\nEsse valor em petahertz  é %g",div10e4(hertz));
				printf("\nEsse valor em exahertz   é %g",div10e7(hertz));
				printf("\nEsse valor em zetahertz  é %g",div10e10(hertz));
				printf("\nEsse valor em yotahertz  é %g",div10e13(hertz));	
			break;
			}
			case 11:{
				printf("Infome um valor em petahertz: ");
				scanf("%f",&hertz);
				printf("\nEsse valor em nanohertz  é %g",mul10e23(hertz));
				printf("\nEsse valor em microhertz é %g",mul10e20(hertz));
				printf("\nEsse valor em milihertz  é %g",mul10e17(hertz));
				printf("\nEsse valor em hertz      é %g",mul10e14(hertz));
				printf("\nEsse valor em decahertz  é %g",mul10e13(hertz));
				printf("\nEsse valor em hectohertz é %g",mul10e12(hertz));
				printf("\nEsse valor em quilohertz é %g",mul10e11(hertz));
				printf("\nEsse valor em megahertz  é %g",mul10e8(hertz));
				printf("\nEsse valor em gigahertz  é %g",mul10e5(hertz));
				printf("\nEsse valor em terahertz  é %g",mul10e2(hertz));
				printf("\nEsse valor em exahertz   é %g",div10e4(hertz));
				printf("\nEsse valor em zetahertz  é %g",div10e7(hertz));
				printf("\nEsse valor em yotahertz  é %g",div10e10(hertz));	
			break;
			}
			case 12:{
				printf("Infome um valor em exahertz: ");
				scanf("%f",&hertz);
				printf("\nEsse valor em nanohertz  é %g",mul10e26(hertz));
				printf("\nEsse valor em microhertz é %g",mul10e23(hertz));
				printf("\nEsse valor em milihertz  é %g",mul10e20(hertz));
				printf("\nEsse valor em hertz      é %g",mul10e17(hertz));
				printf("\nEsse valor em decahertz  é %g",mul10e16(hertz));
				printf("\nEsse valor em hectohertz é %g",mul10e15(hertz));
				printf("\nEsse valor em quilohertz é %g",mul10e14(hertz));
				printf("\nEsse valor em megahertz  é %g",mul10e11(hertz));
				printf("\nEsse valor em gigahertz  é %g",mul10e8(hertz));
				printf("\nEsse valor em terahertz  é %g",mul10e5(hertz));
				printf("\nEsse valor em petahertz  é %g",mul10e2(hertz));
				printf("\nEsse valor em zetahertz  é %g",div10e4(hertz));
				printf("\nEsse valor em yotahertz  é %g",div10e7(hertz));
			break;
			}
			case 13:{
				printf("Infome um valor em zetahertz: ");
				scanf("%f",&hertz);
				printf("\nEsse valor em nanohertz  é %g",mul10e29(hertz));
				printf("\nEsse valor em microhertz é %g",mul10e26(hertz));
				printf("\nEsse valor em milihertz  é %g",mul10e23(hertz));
				printf("\nEsse valor em hertz      é %g",mul10e20(hertz));
				printf("\nEsse valor em decahertz  é %g",mul10e19(hertz));
				printf("\nEsse valor em hectohertz é %g",mul10e18(hertz));
				printf("\nEsse valor em quilohertz é %g",mul10e17(hertz));
				printf("\nEsse valor em megahertz  é %g",mul10e14(hertz));
				printf("\nEsse valor em gigahertz  é %g",mul10e11(hertz));
				printf("\nEsse valor em terahertz  é %g",mul10e8(hertz));
				printf("\nEsse valor em petahertz  é %g",mul10e5(hertz));
				printf("\nEsse valor em exahertz   é %g",mul10e2(hertz));
				printf("\nEsse valor em yotahertz  é %g",div10e4(hertz));	
			break;
			}
			case 14:{
				printf("Infome um valor em yotahertz: ");
				scanf("%f",&hertz);
				printf("\nEsse valor em nanohertz  é %g",mul10e32(hertz));
				printf("\nEsse valor em microhertz é %g",mul10e29(hertz));
				printf("\nEsse valor em milihertz  é %g",mul10e26(hertz));
				printf("\nEsse valor em hertz      é %g",mul10e23(hertz));
				printf("\nEsse valor em decahertz  é %g",mul10e22(hertz));
				printf("\nEsse valor em hectohertz é %g",mul10e21(hertz));
				printf("\nEsse valor em quilohertz é %g",mul10e20(hertz));
				printf("\nEsse valor em megahertz  é %g",mul10e17(hertz));
				printf("\nEsse valor em gigahertz  é %g",mul10e14(hertz));
				printf("\nEsse valor em terahertz  é %g",mul10e11(hertz));
				printf("\nEsse valor em petahertz  é %g",mul10e8(hertz));
				printf("\nEsse valor em exahertz   é %g",mul10e5(hertz));
				printf("\nEsse valor em zetahertz  é %g",mul10e2(hertz));
			break;
			}
			case 15:{
				printf("Infome um valor em 1/s: ");
				scanf("%f",&hertz);
				printf("\nEsse valor em nanohertz  é %g",mul10e8(hertz));
				printf("\nEsse valor em microhertz é %g",mul10e5(hertz));
				printf("\nEsse valor em milihertz  é %g",mul10e2(hertz));
				printf("\nEsse valor em hertz      é %g",hertz);
				printf("\nEsse valor em decahertz  é %g",div10e2(hertz));
				printf("\nEsse valor em hectohertz é %g",div10e3(hertz));
				printf("\nEsse valor em quilohertz é %g",div10e4(hertz));
				printf("\nEsse valor em megahertz  é %g",div10e7(hertz));
				printf("\nEsse valor em gigahertz  é %g",div10e10(hertz));
				printf("\nEsse valor em terahertz  é %g",div10e13(hertz));
				printf("\nEsse valor em petahertz  é %g",div10e16(hertz));
				printf("\nEsse valor em exahertz   é %g",div10e19(hertz));
				printf("\nEsse valor em zetahertz  é %g",div10e22(hertz));
				printf("\nEsse valor em yotahertz  é %g",div10e25(hertz));
				printf("\nEsse valor em 1/min      é %g",hertz*60);
				printf("\nEsse valor em 1/h        é %g",hertz*3600);
			break;
			}
			case 16:{
				printf("Infome um valor em 1/min: ");
				scanf("%f",&hertz);
				printf("\nEsse valor em nanohertz  é %g",mul10e8(hertz)/60);
				printf("\nEsse valor em microhertz é %g",mul10e5(hertz)/60);
				printf("\nEsse valor em milihertz  é %g",mul10e2(hertz)/60);
				printf("\nEsse valor em hertz      é %g",hertz/60);
				printf("\nEsse valor em decahertz  é %g",div10e2(hertz)/60);
				printf("\nEsse valor em hectohertz é %g",div10e3(hertz)/60);
				printf("\nEsse valor em quilohertz é %g",div10e4(hertz)/60);
				printf("\nEsse valor em megahertz  é %g",div10e7(hertz)/60);
				printf("\nEsse valor em gigahertz  é %g",div10e10(hertz)/60);
				printf("\nEsse valor em terahertz  é %g",div10e13(hertz)/60);
				printf("\nEsse valor em petahertz  é %g",div10e16(hertz)/60);
				printf("\nEsse valor em exahertz   é %g",div10e19(hertz)/60);
				printf("\nEsse valor em zetahertz  é %g",div10e22(hertz)/60);
				printf("\nEsse valor em yotahertz  é %g",div10e25(hertz)/60);
				printf("\nEsse valor em 1/s        é %g",hertz/60);
				printf("\nEsse valor em 1/h        é %g",hertz*60);
			break;
			}
			case 17:{
				printf("Infome um valor em 1/h: ");
				scanf("%f",&hertz);
				printf("\nEsse valor em nanohertz  é %g",mul10e8(hertz)/3600);
				printf("\nEsse valor em microhertz é %g",mul10e5(hertz)/3600);
				printf("\nEsse valor em milihertz  é %g",mul10e2(hertz)/3600);
				printf("\nEsse valor em hertz      é %g",hertz/3600);
				printf("\nEsse valor em decahertz  é %g",div10e2(hertz)/3600);
				printf("\nEsse valor em hectohertz é %g",div10e3(hertz)/3600);
				printf("\nEsse valor em quilohertz é %g",div10e4(hertz)/3600);
				printf("\nEsse valor em megahertz  é %g",div10e7(hertz)/3600);
				printf("\nEsse valor em gigahertz  é %g",div10e10(hertz)/3600);
				printf("\nEsse valor em terahertz  é %g",div10e13(hertz)/3600);
				printf("\nEsse valor em petahertz  é %g",div10e16(hertz)/3600);
				printf("\nEsse valor em exahertz   é %g",div10e19(hertz)/3600);
				printf("\nEsse valor em zetahertz  é %g",div10e22(hertz)/3600);
				printf("\nEsse valor em yotahertz  é %g",div10e25(hertz)/3600);
				printf("\nEsse valor em 1/s        é %g",hertz/3600);
				printf("\nEsse valor em 1/min      é %g",hertz/60);
			break;
			}
		}
		printf("\n\n Deseja sair ?? [S/N]: ");
		scanf("%s", &respContinuar);
	break;
	}
	
	// Daniel Rodrigues (MASSA)
	Oitavo:
	case 8: {
		float Massa;
		int respMassa = menuMassa();
		switch (respMassa) {
			case 1: {
				int respTonelada = MenuTonelada();
				switch (respTonelada) {
					case 1: {
						printf(" Valor em Tonelada a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas equivalem a %g Quilogramas.", Massa, TNLpQuilograma(Massa));
					break;
					}
					case 2: {
						printf(" Valor em Tonelada a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas equivalem a %g Gramas.", Massa, TNLpGrama(Massa));
					break;
					}
					case 3: {
						printf(" Valor em Tonelada a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas equivalem a %g Miligramas.", Massa, TNLpMiligrama(Massa));
					break;
					}
					case 4: {
						printf(" Valor em Tonelada a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas equivalem a %g Microgramas.", Massa, TNLpMicrograma(Massa));
					break;
					}
					case 5: {
						printf(" Valor em Tonelada a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas equivalem a %g Toneladas de Deslocamento.", Massa, TNLpToneladaDesloc(Massa));
					break;
					}
					case 6: {
						printf(" Valor em Tonelada a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas equivalem a %g Toneladas Curtas.", Massa, TNLpToneladaCurta(Massa));
					break;
					}
					case 7: {
						printf(" Valor em Tonelada a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas equivalem a %g Stones.", Massa, TNLpStone(Massa));
					break;
					}
					case 8: {
						printf(" Valor em Tonelada a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas equivalem a %g Libras.", Massa, TNLpLibra(Massa));
					break;
					}
					case 9: {
						printf(" Valor em Tonelada a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas equivalem a %g Onças.", Massa, TNLpOnca(Massa));
					break;
					}
				}
			break;
			}
			case 2: {
				int respQuilograma = MenuQuilograma();
				switch (respQuilograma) {
					case 1: {
						printf(" Valor em Quilograma a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Quilogramas equivalem a %g Toneladas de Deslocamento.", Massa, QLGMpTonelada(Massa));
					break;
					}
					case 2: {
						printf(" Valor em Quilograma a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Quilogramas equivalem a %g Gramas.", Massa, QLGMpGrama(Massa));
					break;
					}
					case 3: {
						printf(" Valor em Quilograma a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Quilogramas equivalem a %g Miligramas.", Massa, QLGMpMiligrama(Massa));
					break;
					}
					case 4: {
						printf(" Valor em Quilograma a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Quilogramas equivalem a %g Microgramas.", Massa, QLGMpMicrograma(Massa));
					break;
					}
					case 5: {
						printf(" Valor em Quilograma a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Quilogramas equivalem a %g Toneladas de Deslocamento.", Massa, QLGMpToneladaDesloc(Massa));
					break;
					}
					case 6: {
						printf(" Valor em Quilograma a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Quilogramas equivalem a %g Toneladas Curtas.", Massa, QLGMpToneladaCurta(Massa));
					break;
					}
					case 7: {
						printf(" Valor em Quilograma a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Quilogramas equivalem a %g Stones.", Massa, QLGMpStone(Massa));
					break;
					}
					case 8: {
						printf(" Valor em Quilogramas a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Quilogramas equivalem a %g Libras.", Massa, QLGMpLibra(Massa));
					break;
					}
					case 9: {
						printf(" Valor em Quilograma a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Quilogramas equivalem a %g Onças.", Massa, QLGMpOnca(Massa));
					break;
					}
				}
			break;
			}
			case 3: {
				int respGrama = MenuGrama();
				switch (respGrama) {
					case 1: {
						printf(" Valor em Grama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Gramas equivalem a %g Toneladas.", Massa, GRAMApTonelada(Massa));
					break;
					}
					case 2: {
						printf(" Valor em Grama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Gramas equivalem a %g Quilogramas.", Massa, GRAMApQuilograma(Massa));
					break;
					}
					case 3: {
						printf(" Valor em Grama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Gramas equivalem a %g Miligramas.", Massa, GRAMApMiligrama(Massa));
					break;
					}
					case 4: {
						printf(" Valor em Grama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Gramas equivalem a %g Microgramas.", Massa, GRAMApMicrograma(Massa));
					break;
					}
					case 5: {
						printf(" Valor em Grama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Gramas equivalem a %g Toneladas de Deslocamento.", Massa, GRAMApToneladaDesloc(Massa));
					break;
					}
					case 6: {
						printf(" Valor em Grama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Gramas equivalem a %g Toneladas Curtas.", Massa, GRAMApToneladaCurta(Massa));
					break;
					}
					case 7: {
						printf(" Valor em Grama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Gramas equivalem a %g Stones.", Massa, GRAMApStone(Massa));
					break;
					}
					case 8: {
						printf(" Valor em Grama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Gramas equivalem a %g Libras.", Massa, GRAMApLibra(Massa));
					break;
					}
					case 9: {
						printf(" Valor em Grama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Gramas equivalem a %g Onças.", Massa, GRAMApOnca(Massa));
					break;
					}
				}
			break;
			}
			case 4: {
				int respMiligrama = MenuMiligrama();
				switch (respMiligrama) {
					case 1: {
						printf(" Valor em Miligrama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Miligramasequivalem a %g Toneladas.", Massa, MLGMpTonelada(Massa));
					break;
					}
					case 2: {
						printf(" Valor em Miligrama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Miligramas equivalem a %g Quilogramas.", Massa, MLGMpQuilograma(Massa));
					break;
					}
					case 3: {
						printf(" Valor em Miligrama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Miligramas equivalem a %g Gramas.", Massa, MLGMpGrama(Massa));
					break;
					}
					case 4: {
						printf(" Valor em Miligrama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Miligramas equivalem a %g Microgramas.", Massa, MLGMpMicrograma(Massa));
					break;
					}
					case 5: {
						printf(" Valor em Miligrama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Miligramas equivalem a %g Toneladas de Deslocamento.", Massa, MLGMpToneladaDesloc(Massa));
					break;
					}
					case 6: {
						printf(" Valor em Miligrama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Miligramas equivalem a %g Toneladas Curtas.", Massa, MLGMpToneladaCurta(Massa));
					break;
					}
					case 7: {
						printf(" Valor em Miligrama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Miligramas equivalem a %g Stones.", Massa, MLGMpStone(Massa));
					break;
					}
					case 8: {
						printf(" Valor em Miligrama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Miligramas equivalem a %g Libras.", Massa, MLGMpLibra(Massa));
					break;
					}
					case 9: {
						printf(" Valor em Miligrama a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Miligramas equivalem a %g Onças.", Massa, MLGMpOnca(Massa));
					break;
					}
				}
			break;
			}
			case 5: {
				int respMicrograma = MenuMicrograma();
				switch (respMicrograma) {
					case 1: {
						printf(" Valor em Micrograma a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Microgramas equivalem a %g Toneladas.", Massa, MCGMpTonelada(Massa));
					break;
					}
					case 2: {
						printf(" Valor em Micrograma a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Microgramas equivalem a %g Quilogramas.", Massa, MCGMpQuilograma(Massa));
					break;
					}
					case 3: {
						printf(" Valor em Micrograma a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Microgramas equivalem a %g Gramas.", Massa, MCGMpGrama(Massa));
					break;
					}
					case 4: {
						printf(" Valor em Micrograma a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Microgramas equivalem a %g Miligramas.", Massa, MCGMpMiligrama(Massa));
					break;
					}
					case 5: {
						printf(" Valor em Micrograma a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Microgramas equivalem a %g Toneladas de Deslocamentos.", Massa, MCGMpToneladaDesloc(Massa));
					break;
					}
					case 6: {
						printf(" Valor em Micrograma a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Microgramas equivalem a %g Toneladas Curtas.", Massa, MCGMpToneladaCurta(Massa));
					break;
					}
					case 7: {
						printf(" Valor em Micrograma a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Microgramas equivalem a %g Stones.", Massa, MCGMpStone(Massa));
					break;
					}
					case 8: {
						printf(" Valor em Micrograma a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Microgramas equivalem a %g Libras.", Massa, MCGMpLibra(Massa));
					break;
					}
					case 9: {
						printf(" Valor em Micrograma a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Microgramas equivalem a %g Onças.", Massa, MCGMpOnca(Massa));
					break;
					}
				}
			break;
			}
			case 6: {
				int respToneladaDesloc = MenuToneladaDesloc();
				switch (respToneladaDesloc) {
					case 1: {
						printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas de Deslocamento equivalem a %g Toneladas.", Massa, TNLDSLpTonelada(Massa));
					break;
					}
					case 2: {
						printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas de Deslocamento equivalem a %g Quilogramas.", Massa, TNLDSLpQuilograma(Massa));
					break;
					}
					case 3: {
						printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas de Deslocamento equivalem a %g Gramas.", Massa, TNLDSLpGrama(Massa));
					break;
					}
					case 4: {
						printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas de Deslocamento equivalem a %g Miligramas.", Massa, TNLDSLpMiligrama(Massa));
					break;
					}
					case 5: {
						printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas de Deslocamento equivalem a %g Microgramas.", Massa, TNLDSLpMicrograma(Massa));
					break;
					}
					case 6: {
						printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas de Deslocamento equivalem a %g Toneladas Curtas.", Massa, TNLDSLpToneladaCurta(Massa));
					break;
					}
					case 7: {
						printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas de Deslocamento equivalem a %g Stones.", Massa, TNLDSLpStone(Massa));
					break;
					}
					case 8: {
						printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas de Deslocamento equivalem a %g Libras.", Massa, TNLDSLpLibra(Massa));
					break;
					}
					case 9: {
						printf(" Valor em Tonelada de Deslocamento a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas de Deslocamento equivalem a %g Onças.", Massa, TNLDSLpOnca(Massa));
					break;
					}
				}
			break;
			}
			case 7: {
				int respToneladaCurta = MenuToneladaCurta();
				switch (respToneladaCurta) {
					case 1: {
						printf(" Valor em Tonelada Curta a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas Curta equivalem a %g Toneladas.", Massa, TNLCTpTonelada(Massa));
					break;
					}
					case 2: {
						printf(" Valor em Tonelada Curta a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas Curtas equivalem a %g Quilogramas.", Massa, TNLCTpQuilograma(Massa));
					break;
					}
					case 3: {
						printf(" Valor em Tonelada Curta a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas Curtas equivalem a %g Gramas.", Massa, TNLCTpGrama(Massa));
					break;
					}
					case 4: {
						printf(" Valor em Tonelada Curta a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas Curtas equivalem a %g Miligramas.", Massa, TNLCTpMiligrama(Massa));
					break;
					}
					case 5: {
						printf(" Valor em Tonelada Curta a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas Curtas equivalem a %g Microgramas.", Massa, TNLCTpMicrograma(Massa));
					break;
					}
					case 6: {
						printf(" Valor em Tonelada Curta a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas Curtas equivalem a %g Toneladas de Deslocamentos.", Massa, TNLCTpToneladaDesloc(Massa));
					break;
					}
					case 7: {
						printf(" Valor em Tonelada Curta a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas Curtas equivalem a %g Stones.", Massa, TNLCTpStone(Massa));
					break;
					}
					case 8: {
						printf(" Valor em Tonelada Curta a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas Curtas equivalem a %g Libras.", Massa, TNLCTpLibra(Massa));
					break;
					}
					case 9: {
						printf(" Valor em Tonelada Curta a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Toneladas Curtas equivalem a %g Onças.", Massa, TNLCTpOnca(Massa));
					break;
					}
				}
			break;
			}
			case 8: {
				int respStone = MenuStone();
				switch (respStone) {
					case 1: {
						printf(" Valor em Stone a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Stones equivalem a %g Toneladas.", Massa, STONEpTonelada(Massa));
					break;
					}
					case 2: {
						printf(" Valor em Stone a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Stones equivalem a %g Quilogramas.", Massa, STONEpQuilograma(Massa));
					break;
					}
					case 3: {
						printf(" Valor em Stone a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Stones equivalem a %g Gramas.", Massa, STONEpGrama(Massa));
					break;
					}
					case 4: {
						printf(" Valor em Stone a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Stones equivalem a %g Miligramas.", Massa, STONEpMiligrama(Massa));
					break;
					}
					case 5: {
						printf(" Valor em Stone a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Stones equivalem a %g Microgramas.", Massa, STONEpMicrograma(Massa));
					break;
					}
					case 6: {
						printf(" Valor em Stone a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Stones equivalem a %g Toneladas de Deslocamentos.", Massa, STONEpToneladaDesloc(Massa));
					break;
					}
					case 7: {
						printf(" Valor em Stone a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Stones equivalem a %g Toneladas Curtas.", Massa, STONEpToneladaCurta(Massa));
					break;
					}
					case 8: {
						printf(" Valor em Stone a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Stones equivalem a %g Libras.", Massa, STONEpLibra(Massa));
					break;
					}
					case 9: {
						printf(" Valor em Stone a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Stones equivalem a %g Onças.", Massa, STONEpOnca(Massa));
					break;
					}
				}
			break;
			}
			case 9: {
				int respLibra = MenuLibra();
				switch (respLibra) {
					case 1: {
						printf(" Valor em Libra a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Libras equivalem a %g Toneladas.", Massa, LIBRApTonelada(Massa));
					break;
					}
					case 2: {
						printf(" Valor em Libra a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Libras equivalem a %g Quilogramas.", Massa, LIBRApQuilograma(Massa));
					break;
					}
					case 3: {
						printf(" Valor em Libra a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Libras equivalem a %g Gramas.", Massa, LIBRApGrama(Massa));
					break;
					}
					case 4: {
						printf(" Valor em Libra a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Libras equivalem a %g Miligramas.", Massa, LIBRApMiligrama(Massa));
					break;
					}
					case 5: {
						printf(" Valor em Libra a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Libras equivalem a %g Microgramas.", Massa, LIBRApMicrograma(Massa));
					break;
					}
					case 6: {
						printf(" Valor em Libra a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Libras equivalem a %g Toneladas de Deslocamentos.", Massa, LIBRApToneladaDesloc(Massa));
					break;
					}
					case 7: {
						printf(" Valor em Libra a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Libras equivalem a %g Toneladas Curtas.", Massa, LIBRApToneladaCurta(Massa));
					break;
					}
					case 8: {
						printf(" Valor em Libra a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Libras equivalem a %g Stones.", Massa, LIBRApStone(Massa));
					break;
					}
					case 9: {
						printf(" Valor em Libra a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Libras equivalem a %g Onças.", Massa, LIBRApOnca(Massa));
					break;
					}
				}
			break;
			}
			case 10: {
				int respOnca = MenuOnca();
				switch (respOnca) {
					case 1: {
						printf(" Valor em Onça a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Onças equivalem a %g Toneladas.", Massa, ONCApTonelada(Massa));
					break;
					}
					case 2: {
						printf(" Valor em Onça a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Onças equivalem a %g Quilogramas.", Massa, ONCApQuilograma(Massa));
					break;
					}
					case 3: {
						printf(" Valor em Onça a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Onças equivalem a %g Gramas.", Massa, ONCApGrama(Massa));
					break;
					}
					case 4: {
						printf(" Valor em Onça a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Onças equivalem a %g Miligramas.", Massa, ONCApMiligrama(Massa));
					break;
					}
					case 5: {
						printf(" Valor em Onça a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Onças equivalem a %g Microgramas.", Massa, ONCApMicrograma(Massa));
						break;
					}
					case 6: {
						printf(" Valor em Onça a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Onças equivalem a %g Toneladas de Deslocamentos.", Massa, ONCApToneladaDesloc(Massa));
					break;
					}
					case 7: {
						printf(" Valor em Onça a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Onças equivalem a %g Toneladas Curtas.", Massa, ONCApToneladaCurta(Massa));
					break;
					}
					case 8: {
						printf(" Valor em Onça a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Onças equivalem a %g Stones.", Massa, ONCApStone(Massa));
					break;
					}
					case 9: {
						printf(" Valor em Onça a ser convertido: ");
						scanf("%f", &Massa);
						printf(" %g Onças equivalem a %g Libras.", Massa, ONCApLibra(Massa));
					break;
					}
				}
			break;
			}
		}
		printf("\n\n Deseja sair ?? [S/N]: ");
		scanf("%s", &respContinuar);
	break;
	}
	
	// Zandor Duarte (PRESSAO)
	Nono:
	case 9: {
		float Pressao;
		int respPressao = MenuPressao();
		switch (respPressao) {
			case 1: {
				int respATMPD = MenuATMPD();
				switch (respATMPD) {
					case 1: {
						printf(" Valor em Atmosfera Padrão a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Atmosferas Padrão equivalem a %g Bars.", Pressao, ATMPDpBar(Pressao));
					break;
					}
					case 2: {
						printf(" Valor em Atmosfera Padrão a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Atmosferas Padrão equivalem a %g Pascals.", Pressao, ATMPDpPascal(Pressao));
					break;
					}
					case 3: {
						printf(" Valor em Atmosfera Padrão a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Atmosferas Padrão equivalem a %g Psis.", Pressao, ATMPDpPsi(Pressao));
					break;
					}
					case 4: {
						printf(" Valor em Atmosfera Padrão a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Atmosferas Padrão equivalem a %g Torrs.", Pressao, ATMPDpTorr(Pressao));
					break;
					}
				}
			break;
			}
			case 2: {
				int respBar = MenuBar();
				switch (respBar) {
					case 1: {
						printf(" Valor em Bar a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Bars equivalem a %g Atmosferas Padrãos.", Pressao, BARpAtmpd(Pressao));
					break;
					}
					case 2: {
						printf(" Valor em Bar a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Bars equivalem a %g Pascals.", Pressao, BARpPascal(Pressao));
					break;
					}
					case 3: {
						printf(" Valor em Bar a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Bars equivalem a %g Psis.", Pressao, BARpPsi(Pressao));
					break;
					}
					case 4: {
						printf(" Valor em Bar a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Bars equivalem a %g Torrs.", Pressao, BARpTorr(Pressao));
					break;
					}
				}
			break;
			}
			case 3: {
				int respPascal = MenuPascal();
				switch (respPascal) {
					case 1: {
						printf(" Valor em Pascal a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Pascals equivalem a %g Atmosferas Padrãos.", Pressao, PASCALpAtmpd(Pressao));
					break;
					}
					case 2: {
						printf(" Valor em Pascal a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Pascals equivalem a %g Bars.", Pressao, PASCALpBar(Pressao));
					break;
					}
					case 3: {
						printf(" Valor em Pascal a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Pascals equivalem a %g Psis.", Pressao, PASCALpPsi(Pressao));
					break;
					}
					case 4: {
						printf(" Valor em Pascal a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Pascals equivalem a %g Torrs.", Pressao, PASCALpTorr(Pressao));
					break;
					}
				}
			break;
			}
			case 4: {
				int respPsi = MenuPsi();
				switch (respPsi) {
					case 1: {
						printf(" Valor em Psi a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Psis equivalem a %g Atmosferas Padrãos.", Pressao, PSIpAtmpd(Pressao));
					break;
					}
					case 2: {
						printf(" Valor em Psi a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Psis equivalem a %g Bars.", Pressao, PSIpBar(Pressao));
					break;
					}
					case 3: {
						printf(" Valor em Psi a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Psis equivalem a %g Pascals.", Pressao, PSIpPascal(Pressao));
					break;
					}
					case 4: {
						printf(" Valor em Psi a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Psis equivalem a %g Torrs.", Pressao, PSIpTorr(Pressao));
					break;
					}
				}
			break;
			}
			case 5: {
				int respTorr = MenuTorr();
				switch (respTorr) {
					case 1: {
						printf(" Valor em Torr a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Torrs equivalem a %g Atmosferas Padrãos.", Pressao, TORRpAtmpd(Pressao));
					break;
					}
					case 2: {
						printf(" Valor em Torr a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Torrs equivalem a %g Bars.", Pressao, TORRpBar(Pressao));
					break;
					}
					case 3: {
						printf(" Valor em Torr a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Torrs equivalem a %g Pascals.", Pressao, TORRpPascal(Pressao));
					break;
					}
					case 4: {
						printf(" Valor em Torr a ser convertido: ");
						scanf("%f", &Pressao);
						printf(" %g Torrs equivalem a %g Psis.", Pressao, TORRpPsi(Pressao));
					break;
					}
				}
			break;
			}
		}
		printf("\n\n Deseja sair ?? [S/N]: ");
		scanf("%s", &respContinuar);
	break;
	}
	
	// Pedro Fellipe (TEMPERATURA)
	Decimo:
	case 10: {
		float Temperatura;
		int resp = MenuTemperaturas();
		switch (resp) {
  			case 1: {
				printf(" Informe a temperatura em graus Celsius: ");
				scanf("%f", &Temperatura);
				printf(" %gC equivale a %gF", Temperatura, CpF(Temperatura));
		    break;
		    }
		    case 2: {
		    	printf(" Informe a temperatura em graus Fahrenheit: ");
		    	scanf("%f", &Temperatura);
		    	printf(" %gF equivale a %gC", Temperatura, FpC(Temperatura));
			break;
			}
			case 3: {
		    	printf(" Informe a temperatura em graus Celsius: ");
		    	scanf("%f", &Temperatura);
		    	printf(" %gC equivale a %gK", Temperatura, CpKK(Temperatura));
			break;
			}
			case 4: {
		    	printf(" Informe a temperatura em graus Kelvin: ");
		    	scanf("%f", &Temperatura);
		    	printf(" %gK equivale a %gC", Temperatura, KpC(Temperatura));
			break;
			
			}
			case 5: {
		    	printf(" Informe a temperatura em graus Fahrenheit: ");
		    	scanf("%f", &Temperatura);
		    	printf(" %gF equivale a %gK", Temperatura, FpK(Temperatura));
			break;
			}
			case 6: {
		    	printf(" Informe a temperatura em graus Kelvin: ");
		    	scanf("%f", &Temperatura);
		    	printf(" %gK equivale a %gF", Temperatura, KpF(Temperatura));
			break;
			}
		}
		printf("\n\n Deseja sair ?? [S/N]: ");
		scanf("%s", &respContinuar);
	break;	
	}
	
	// João Victor Costa (TEMPO)
	DecimoP:
	case 11: {
		float tempo;
		int resp3 = MenuTempo();
		switch (resp3) {
			//Nanosegundo
			case 1: {
				int resp4 = MenuNanoseg();
				switch (resp4){
					case 1: {
						printf("\nInforme o tempo em nanosegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g µs. ",tempo,NspMicroS(tempo));
					break;
					}	
					case 2: {
						printf("\nInforme o tempo em nanosegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g ms. ",tempo,NspMiliS(tempo));
					break;
					}	
					case 3: {
						printf("\nInforme o tempo em nanosegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g segundo. ",tempo,NspS(tempo));
					break;
					}
					case 4: {
						printf("\nInforme o tempo em nanosegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g minuto. ",tempo,NspM(tempo));
					break;
					}
					case 5: {
						printf("\nInforme o tempo em nanosegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g horas. ",tempo,NspH(tempo));
					break;
					}
					case 6: {
						printf("\nInforme o tempo em nanosegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g dia. ",tempo,NspDia(tempo));
					break;
					}
					case 7: {
						printf("\nInforme o tempo em nanosegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g semanas. ",tempo,NspSem(tempo));
					break;
					}
					case 8: {
						printf("\nInforme o tempo em nanosegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g mês. ",tempo,NspMes(tempo));
					break;
					}
					case 9: {
						printf("\nInforme o tempo em nanosegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g anos. ",tempo,NspAno(tempo));
					break;
					}
					case 10: {
						printf("\nInforme o tempo em nanosegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g décadas. ",tempo,NspDec(tempo));
					break;
					}
					case 11: {
						printf("\nInforme o tempo em nanosegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g séculos. ",tempo,NspSec(tempo));
					break;
					}	
				}
			break;
			}
			//Microsegundo
			case 2: {
				int resp5 = MenuMicroseg();
				switch (resp5) {
					case 1: {
						printf("\nInforme o tempo em microsegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g ns. ",tempo,MicrosegpNs(tempo));
					break;
					}
					case 2: {
						printf("\nInforme o tempo em microsegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g ms. ",tempo,MicrosegpMs(tempo));
					break;
					}
					case 3: {
						printf("\nInforme o tempo em microsegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g segundos. ",tempo,MicrosegpS(tempo));
					break;
					}
					case 4: {
						printf("\nInforme o tempo em microsegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g minutos. ",tempo,MicrosegpM(tempo));
					break;
					}
					case 5: {
						printf("\nInforme o tempo em microsegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g horas. ",tempo,MicrosegpH(tempo));
					break;
					}
					case 6: {
						printf("\nInforme o tempo em microsegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g dias. ",tempo,MicrosegpD(tempo));
					break;
					}
					case 7: {
						printf("\nInforme o tempo em microsegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g semanas. ",tempo,MicrosegpSem(tempo));
					break;
					}
					case 8: {
						printf("\nInforme o tempo em microsegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g mês. ",tempo,MicrosegpMes(tempo));
					break;
					}
					case 9: {
						printf("\nInforme o tempo em microsegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g anos. ",tempo,MicrosegpAno(tempo));
					break;
					}
					case 10: {
						printf("\nInforme o tempo em microsegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g décadas. ",tempo,MicrosegpDec(tempo));
					break;
					}
					case 11: {
						printf("\nInforme o tempo em microsegundos:");
						scanf("%f",&tempo);
						printf("%g ns equivale a %g séculos. ",tempo,MicrosegpSec(tempo));
					break;
					}	
				}
			break;
			}
			//Milisegundo
			case 3: {
				int resp6 = MenuMiliseg();
				switch(resp6) {
					case 1: {
						printf("\nInforme o tempo em milisegundo:");
						scanf("%f",&tempo);
						printf("%g ms equivale a %g ns. ",tempo,MilisegpNs(tempo));
					break;
					}
					case 2: {
						printf("\nInforme o tempo em milisegundo:");
						scanf("%f",&tempo);
						printf("%g ms equivale a %g mic. ",tempo,MilisegpMic(tempo));
					break;
					}
					case 3: {
						printf("\nInforme o tempo em milisegundo:");
						scanf("%f",&tempo);
						printf("%g ms equivale a %g segundos. ",tempo,MilisegpS(tempo));
					break;
					}
					case 4: {
						printf("\nInforme o tempo em milisegundo:");
						scanf("%f",&tempo);
						printf("%g ms equivale a %g minutos. ",tempo,MilisegpM(tempo));
					break;
					}
					case 5: {
						printf("\nInforme o tempo em milisegundo:");
						scanf("%f",&tempo);
						printf("%g ms equivale a %g horas. ",tempo,MilisegpH(tempo));
					break;
					}
					case 6: {
						printf("\nInforme o tempo em milisegundo:");
						scanf("%f",&tempo);
						printf("%g ms equivale a %g dias. ",tempo,MilisegpD(tempo));
					break;
					}
					case 7: {
						printf("\nInforme o tempo em milisegundo:");
						scanf("%f",&tempo);
						printf("%g ms equivale a %g semanas. ",tempo,MilisegpSem(tempo));
					break;
					}
					case 8: {
						printf("\nInforme o tempo em milisegundo:");
						scanf("%f",&tempo);
						printf("%g ms equivale a %g mês. ",tempo,MilisegpMes(tempo));
					break;
					}
					case 9: {
						printf("\nInforme o tempo em milisegundo:");
						scanf("%f",&tempo);
						printf("%g ms equivale a %g anos. ",tempo,MilisegpAno(tempo));
					break;
					}
					case 10: {
						printf("\nInforme o tempo em milisegundo:");
						scanf("%f",&tempo);
						printf("%g ms equivale a %g décadas. ",tempo,MilisegpDec(tempo));
					break;
					}
					case 11: {
						printf("\nInforme o tempo em milisegundo:");
						scanf("%f",&tempo);
						printf("%g ms equivale a %g séculos. ",tempo,MilisegpSec(tempo));
					break;
					}
				}
			break;
			}
			//Segundo
			case 4: {
				int resp7 = MenuSeg();
				switch (resp7){
					case 1: {
						printf("\nInforme o tempo em segundos:");
						scanf("%f",&tempo);
						printf("%g segundos equivale a %g ns. ",tempo,SegpNs(tempo));
					break;
					}
					case 2: {
						printf("\nInforme o tempo em segundos:");
						scanf("%f",&tempo);
						printf("%g segundos equivale a %g mic. ",tempo,SegpMic(tempo));
					break;
					}
					case 3: {
						printf("\nInforme o tempo em segundos:");
						scanf("%f",&tempo);
						printf("%g segundos equivale a %g ms. ",tempo,SegpMil(tempo));
					break;
					}
					case 4: {
						printf("\nInforme o tempo em segundos:");
						scanf("%f",&tempo);
						printf("%g segundos equivale a %g minutos. ",tempo,SegpM(tempo));
					break;
					}
					case 5: {
						printf("\nInforme o tempo em segundos:");
						scanf("%f",&tempo);
						printf("%g segundos equivale a %g horas. ",tempo,SegpH(tempo));
					break;
					}
					case 6: {
						printf("\nInforme o tempo em segundos:");
						scanf("%f",&tempo);
						printf("%g segundos equivale a %g dias. ",tempo,SegpD(tempo));
					break;
					}
					case 7: {
						printf("\nInforme o tempo em segundos:");
						scanf("%f",&tempo);
						printf("%g segundos equivale a %g semanas. ",tempo,SegpSem(tempo));
					break;
					}
					case 8: {
						printf("\nInforme o tempo em segundos:");
						scanf("%f",&tempo);
						printf("%g segundos equivale a %g mês. ",tempo,SegpMes(tempo));
					break;
					}
					case 9: {
						printf("\nInforme o tempo em segundos:");
						scanf("%f",&tempo);
						printf("%g segundos equivale a %g anos. ",tempo,SegpAno(tempo));
					break;
					}
					case 10: {
						printf("\nInforme o tempo em segundos:");
						scanf("%f",&tempo);
						printf("%g segundos equivale a %g décadas. ",tempo,SegpDec(tempo));
					break;
					}
					case 11: {
						printf("\nInforme o tempo em segundos:");
						scanf("%f",&tempo);
						printf("%g segundos equivale a %g séculos. ",tempo,SegpSec(tempo));
					break;
					}
				}
			break;
			}
			//Minuto
			case 5: {
				int resp8 = MenuMin();
				switch(resp8) {
					case 1: {
						printf("\nInforme o tempo em minutos:");
						scanf("%f",&tempo);
						printf("%g minutos equivale a %g ns. ",tempo,MinpNs(tempo));
					break;
					}
					case 2: {
						printf("\nInforme o tempo em minutos:");
						scanf("%f",&tempo);
						printf("%g minutos equivale a %g microsegundos. ",tempo,MinpMic(tempo));
					break;
					}
					case 3: {
						printf("\nInforme o tempo em minutos:");
						scanf("%f",&tempo);
						printf("%g minutos equivale a %g ms. ",tempo,MinpMil(tempo));
					break;
					}
					case 4: {
						printf("\nInforme o tempo em minutos:");
						scanf("%f",&tempo);
						printf("%g minutos equivale a %g segundos. ",tempo,MinpS(tempo));
					break;
					}
					case 5: {
						printf("\nInforme o tempo em minutos:");
						scanf("%f",&tempo);
						printf("%g minutos equivale a %g horas. ",tempo,MinpH(tempo));
					break;
					}
					case 6: {
						printf("\nInforme o tempo em minutos:");
						scanf("%f",&tempo);
						printf("%g minutos equivale a %g dias. ",tempo,MinpD(tempo));
					break;
					}
					case 7: {
						printf("\nInforme o tempo em minutos:");
						scanf("%f",&tempo);
						printf("%g minutos equivale a %g semanas. ",tempo,MinpSem(tempo));
					break;
					}
					
					case 8: {
						printf("\nInforme o tempo em minutos:");
						scanf("%f",&tempo);
						printf("%g minutos equivale a %g mês. ",tempo,MinpMes(tempo));
					break;
					}
					
					case 9: {
						printf("\nInforme o tempo em minutos:");
						scanf("%f",&tempo);
						printf("%g minutos equivale a %g anos. ",tempo,MinpAno(tempo));
					break;
					}
					
					case 10: {
						printf("\nInforme o tempo em minutos:");
						scanf("%f",&tempo);
						printf("%g minutos equivale a %g décadas. ",tempo,MinpDec(tempo));
					break;
					}
					
					case 11: {
						printf("\nInforme o tempo em minutos:");
						scanf("%f",&tempo);
						printf("%g minutos equivale a %g séculos. ",tempo,MinpSec(tempo));
					break;
					}
				}
			break;
			}
			//Hora		
			case 6: {
				int resp9 = MenuHora();
				switch(resp9){
					case 1: {
						printf("\nInforme o tempo em horas:");
						scanf("%f",&tempo);
						printf("%g horas equivale a %g ns. ",tempo,HorapNs(tempo));
					break;
					}
					case 2: {
						printf("\nInforme o tempo em horas:");
						scanf("%f",&tempo);
						printf("%g horas equivale a %g microsegundos. ",tempo,HorapMic(tempo));
					break;
					}
					case 3: {
						printf("\nInforme o tempo em horas:");
						scanf("%f",&tempo);
						printf("%g horas equivale a %g milisegundos. ",tempo,HorapMil(tempo));
					break;
					}
					case 4: {
						printf("\nInforme o tempo em horas:");
						scanf("%f",&tempo);
						printf("%g horas equivale a %g segundos. ",tempo,HorapS(tempo));
					break;
					}
					case 5: {
						printf("\nInforme o tempo em horas:");
						scanf("%f",&tempo);
						printf("%g horas equivale a %g minutos. ",tempo,HorapM(tempo));
					break;
					}
					case 6: {
						printf("\nInforme o tempo em horas:");
						scanf("%f",&tempo);
						printf("%g horas equivale a %g dias. ",tempo,HorapD(tempo));
					break;
					}
					case 7: {
						printf("\nInforme o tempo em horas:");
						scanf("%f",&tempo);
						printf("%g horas equivale a %g semanas. ",tempo,HorapSem(tempo));
					break;
					}
					case 8: {
						printf("\nInforme o tempo em horas:");
						scanf("%f",&tempo);
						printf("%g horas equivale a %g mês. ",tempo,HorapMes(tempo));
					break;
					}
					case 9: {
						printf("\nInforme o tempo em horas:");
						scanf("%f",&tempo);
						printf("%g horas equivale a %g anos. ",tempo,HorapAno(tempo));
					break;
					}
					case 10: {
						printf("\nInforme o tempo em horas:");
						scanf("%f",&tempo);
						printf("%g horas equivale a %g décadas. ",tempo,HorapDec(tempo));
					break;
					}
					case 11: {
						printf("\nInforme o tempo em horas:");
						scanf("%f",&tempo);
						printf("%g horas equivale a %g séculos. ",tempo,HorapSec(tempo));
					break;
					}
				}
			break;
			}
			//Dia	 
			case 7: {
				int resp10 = MenuDia();
				switch (resp10){
					case 1: {
						printf("\nInforme o tempo em dias:");
						scanf("%f",&tempo);
						printf("%g dias equivale a %g ns. ",tempo,DiapNs(tempo));
					break;
					}
					case 2: {
						printf("\nInforme o tempo em dias:");
						scanf("%f",&tempo);
						printf("%g dias equivale a %g microsegundos. ",tempo,DiapMic(tempo));
					break;
					}
					case 3: {
						printf("\nInforme o tempo em dias:");
						scanf("%f",&tempo);
						printf("%g dias equivale a %g milisegundos. ",tempo,DiapMil(tempo));
					break;
					}
					case 4: {
						printf("\nInforme o tempo em dias:");
						scanf("%f",&tempo);
						printf("%g dias equivale a %g segundos. ",tempo,DiapS(tempo));
					break;
					}
					case 5: {
						printf("\nInforme o tempo em dias:");
						scanf("%f",&tempo);
						printf("%g dias equivale a %g minutos. ",tempo,DiapM(tempo));
					break;
					}
					case 6: {
						printf("\nInforme o tempo em dias:");
						scanf("%f",&tempo);
						printf("%g dias equivale a %g horas. ",tempo,DiapH(tempo));
					break;
					}
					case 7: {
						printf("\nInforme o tempo em dias:");
						scanf("%f",&tempo);
						printf("%g dias equivale a %g semanas. ",tempo,DiapSem(tempo));
					break;
					}
					case 8: {
						printf("\nInforme o tempo em dias:");
						scanf("%f",&tempo);
						printf("%g dias equivale a %g meses. ",tempo,DiapMes(tempo));
					break;
					}
					case 9: {
						printf("\nInforme o tempo em dias:");
						scanf("%f",&tempo);
						printf("%g dias equivale a %g anos. ",tempo,DiapAno(tempo));
					break;
					}
					case 10: {
						printf("\nInforme o tempo em dias:");
						scanf("%f",&tempo);
						printf("%g dias equivale a %g décadas. ",tempo,DiapDec(tempo));
					break;
					}
					case 11: {
						printf("\nInforme o tempo em dias:");
						scanf("%f",&tempo);
						printf("%g dias equivale a %g séculos. ",tempo,DiapSec(tempo));
					break;
					}
				}
			break;
			}
			//Semana
			case 8: {
				int resp11 = MenuSem();
				switch (resp11){
					case 1: {
						printf("\nInforme o tempo em semanas:");
						scanf("%f",&tempo);
						printf("%g semanas equivale a %g ns. ",tempo,SempNs(tempo));
					break;
					}
					case 2: {
						printf("\nInforme o tempo em semana:");
						scanf("%f",&tempo);
						printf("%g semanas equivale a %g microsegundos. ",tempo,SempMic(tempo));
					break;
					}
					case 3: {
						printf("\nInforme o tempo em semanas:");
						scanf("%f",&tempo);
						printf("%g semanas equivale a %g milisegundos. ",tempo,SempMil(tempo));
					break;
					}
					case 4: {
						printf("\nInforme o tempo em dias:");
						scanf("%f",&tempo);
						printf("%g semanas equivale a %g segundos. ",tempo,SempS(tempo));
					break;
					}
					case 5: {
						printf("\nInforme o tempo em semanas:");
						scanf("%f",&tempo);
						printf("%g semanas equivale a %g minutos. ",tempo,SempM(tempo));
					break;
					}
					case 6: {
						printf("\nInforme o tempo em semanas:");
						scanf("%f",&tempo);
						printf("%g semanas equivale a %g horas. ",tempo,SempH(tempo));
					break;
					}
					case 7: {
						printf("\nInforme o tempo em semanas:");
						scanf("%f",&tempo);
						printf("%g semanas equivale a %g dias. ",tempo,SempD(tempo));
					break;
					}
					case 8: {
						printf("\nInforme o tempo em semanas:");
						scanf("%f",&tempo);
						printf("%g semanas equivale a %g mês. ",tempo,SempMes(tempo));
					break;
					}
					case 9: {
						printf("\nInforme o tempo em semanas:");
						scanf("%f",&tempo);
						printf("%g semanas equivale a %g anos. ",tempo,SempAno(tempo));
					break;
					}
					case 10: {
						printf("\nInforme o tempo em semanas:");
						scanf("%f",&tempo);
						printf("%g semanas equivale a %g décadas. ",tempo,SempDec(tempo));
					break;
					}
					case 11: {
						printf("\nInforme o tempo em semanas:");
						scanf("%f",&tempo);
						printf("%g semanas equivale a %g séculos. ",tempo,SempSec(tempo));
					break;
					}
				}
			break;
			}
			//Mês
			case 9: {
				int resp12 = MenuMes();
				switch (resp12){
					case 1: {
						printf("\nInforme o tempo em meses:");
						scanf("%f",&tempo);
						printf("%g meses equivale a %g ns. ",tempo,MespNs(tempo));
					break;
					}
					case 2: {
						printf("\nInforme o tempo em meses:");
						scanf("%f",&tempo);
						printf("%g meses equivale a %g microsegundos. ",tempo,MespMic(tempo));
					break;
					}
					case 3: {
						printf("\nInforme o tempo em meses:");
						scanf("%f",&tempo);
						printf("%g meses equivale a %g milisegundos. ",tempo,MespMil(tempo));
					break;
					}
					case 4: {
						printf("\nInforme o tempo em meses:");
						scanf("%f",&tempo);
						printf("%g meses equivale a %g segundos. ",tempo,MespS(tempo));
					break;
					}
					case 5: {
						printf("\nInforme o tempo em meses:");
						scanf("%f",&tempo);
						printf("%g meses equivale a %g minutos. ",tempo,MespM(tempo));
					break;
					}
					case 6: {
						printf("\nInforme o tempo em meses:");
						scanf("%f",&tempo);
						printf("%g meses equivale a %g horas. ",tempo,MespH(tempo));
					break;
					}
					case 7: {
						printf("\nInforme o tempo em meses:");
						scanf("%f",&tempo);
						printf("%g meses equivale a %g dias. ",tempo,MespD(tempo));
					break;
					}
					case 8: {
						printf("\nInforme o tempo em meses:");
						scanf("%f",&tempo);
						printf("%g meses equivale a %g semanas. ",tempo,MespSem(tempo));
					break;
					}
					case 9: {
						printf("\nInforme o tempo em meses:");
						scanf("%f",&tempo);
						printf("%g meses equivale a %g anos. ",tempo,MespAno(tempo));
					break;
					}
					case 10: {
						printf("\nInforme o tempo em meses:");
						scanf("%f",&tempo);
						printf("%g meses equivale a %g décadas. ",tempo,MespDec(tempo));
					break;
					}
					case 11: {
						printf("\nInforme o tempo em meses:");
						scanf("%f",&tempo);
						printf("%g meses equivale a %g séculos. ",tempo,MespSec(tempo));
					break;
					}
				}
			break;
			}
			//Ano
			case 10: {
				int resp13 = MenuAno();
				switch (resp13){
					case 1: {
						printf("\nInforme o tempo em anos:");
						scanf("%f",&tempo);
						printf("%g anos equivale a %g ns. ",tempo,AnopNs(tempo));
					break;
					}
					case 2: {
						printf("\nInforme o tempo em anos:");
						scanf("%f",&tempo);
						printf("%g anos equivale a %g microsegundos. ",tempo,AnopMic(tempo));
					break;
					}
					case 3: {
						printf("\nInforme o tempo em anos:");
						scanf("%f",&tempo);
						printf("%g anos equivale a %g milisegundos. ",tempo,AnopMil(tempo));
					break;
					}
					case 4: {
						printf("\nInforme o tempo em anos:");
						scanf("%f",&tempo);
						printf("%g anos equivale a %g segundos. ",tempo,AnopS(tempo));
					break;
					}
					case 5: {
						printf("\nInforme o tempo em anos:");
						scanf("%f",&tempo);
						printf("%g anos equivale a %g minutos. ",tempo,AnopM(tempo));
					break;
					}
					case 6: {
						printf("\nInforme o tempo em anos:");
						scanf("%f",&tempo);
						printf("%g anos equivale a %g anos. ",tempo,AnopH(tempo));
					break;
					}
					case 7: {
						printf("\nInforme o tempo em anos:");
						scanf("%f",&tempo);
						printf("%g anos equivale a %g dias. ",tempo,AnopD(tempo));
					break;
					}
					case 8: {
						printf("\nInforme o tempo em anos:");
						scanf("%f",&tempo);
						printf("%g anos equivale a %g semanas. ",tempo,AnopSem(tempo));
					break;
					}
					case 9: {
						printf("\nInforme o tempo em anos:");
						scanf("%f",&tempo);
						printf("%g anos equivale a %g mês. ",tempo,AnopMes(tempo));
					break;
					}
					case 10: {
						printf("\nInforme o tempo em anos:");
						scanf("%f",&tempo);
						printf("%g anos equivale a %g décadas. ",tempo,AnopDec(tempo));
					break;
					}
					case 11: {
						printf("\nInforme o tempo em anos:");
						scanf("%f",&tempo);
						printf("%g anos equivale a %g séculos. ",tempo,AnopSec(tempo));
					break;
					}
				}
			break;
			}
			//Dec
			case 11: {
				int resp14 = MenuDec();
				switch (resp14){
					case 1: {
						printf("\nInforme o tempo em décadas:");
						scanf("%f",&tempo);
						printf("%g décadas equivale a %g ns. ",tempo,DecpNs(tempo));
					break;
					}
					case 2: {
						printf("\nInforme o tempo em décadas:");
						scanf("%f",&tempo);
						printf("%g décadas equivale a %g microsegundos. ",tempo,DecpMic(tempo));
					break;
					}
					case 3: {
						printf("\nInforme o tempo em décadas:");
						scanf("%f",&tempo);
						printf("%g décadas equivale a %g milisegundos. ",tempo,DecpMil(tempo));
					break;
					}
					case 4: {
						printf("\nInforme o tempo em décadas:");
						scanf("%f",&tempo);
						printf("%g décadas equivale a %g segundos. ",tempo,DecpS(tempo));
					break;
					}
					case 5: {
						printf("\nInforme o tempo em décadas:");
						scanf("%f",&tempo);
						printf("%g décadas equivale a %g minutos. ",tempo,DecpM(tempo));
					break;
					}
					case 6: {
						printf("\nInforme o tempo em décadas:");
						scanf("%f",&tempo);
						printf("%g décadas equivale a %g décadas. ",tempo,DecpH(tempo));
					break;
					}
					case 7: {
						printf("\nInforme o tempo em décadas:");
						scanf("%f",&tempo);
						printf("%g décadas equivale a %g dias. ",tempo,DecpD(tempo));
					break;
					}	
					case 8: {
						printf("\nInforme o tempo em décadas:");
						scanf("%f",&tempo);
						printf("%g décadas equivale a %g semanas. ",tempo,DecpSem(tempo));
					break;
					}
					case 9: {
						printf("\nInforme o tempo em décadas:");
						scanf("%f",&tempo);
						printf("%g décadas equivale a %g mês. ",tempo,DecpMes(tempo));
					break;
					}
					case 10: {
						printf("\nInforme o tempo em décadas:");
						scanf("%f",&tempo);
						printf("%g décadas equivale a %g anos. ",tempo,DecpAno(tempo));
					break;
					}
					case 11: {
						printf("\nInforme o tempo em décadas:");
						scanf("%f",&tempo);
						printf("%g décadas equivale a %g séculos. ",tempo,DecpSec(tempo));
					break;
					}
				}
			break;
			}
			//Sec
			case 12: {
				int resp15 = MenuSec();
				switch (resp15){
					case 1: {
						printf("\nInforme o tempo em séculos:");
						scanf("%f",&tempo);
						printf("%g séculos equivale a %g ns. ",tempo,SecpNs(tempo));
					break;
					}
					case 2: {
						printf("\nInforme o tempo em séculos:");
						scanf("%f",&tempo);
						printf("%g séculos equivale a %g microsegundos. ",tempo,SecpMic(tempo));
					break;
					}
					case 3: {
						printf("\nInforme o tempo em séculos:");
						scanf("%f",&tempo);
						printf("%g séculos equivale a %g milisegundos. ",tempo,SecpMil(tempo));
					break;
					}
					case 4: {
						printf("\nInforme o tempo em séculos:");
						scanf("%f",&tempo);
						printf("%g séculos equivale a %g segundos. ",tempo,SecpS(tempo));
					break;
					}
					case 5: {
						printf("\nInforme o tempo em séculos:");
						scanf("%f",&tempo);
						printf("%g séculos equivale a %g minutos. ",tempo,SecpM(tempo));
					break;
					}
					case 6: {
						printf("\nInforme o tempo em séculos:");
						scanf("%f",&tempo);
						printf("%g séculos equivale a %g séculos. ",tempo,SecpH(tempo));
					break;
					}
					case 7: {
						printf("\nInforme o tempo em séculos:");
						scanf("%f",&tempo);
						printf("%g séculos equivale a %g dias. ",tempo,HorapD(tempo));
					break;
					}
					case 8: {
						printf("\nInforme o tempo em séculos:");
						scanf("%f",&tempo);
						printf("%g séculos equivale a %g semanas. ",tempo,SecpSem(tempo));
					break;
					}
					case 9: {
						printf("\nInforme o tempo em séculos:");
						scanf("%f",&tempo);
						printf("%g séculos equivale a %g mês. ",tempo,SecpMes(tempo));
					break;
					}
					case 10: {
						printf("\nInforme o tempo em séculos:");
						scanf("%f",&tempo);
						printf("%g séculos equivale a %g anos. ",tempo,SecpAno(tempo));
					break;
					}
					case 11: {
						printf("\nInforme o tempo em séculos:");
						scanf("%f",&tempo);
						printf("%g séculos equivale a %g décadas. ",tempo,SecpDec(tempo));
					break;
					}
				}
			break;
			}
		}
		printf("\n\n Deseja sair ?? [S/N]: ");
		scanf("%s", &respContinuar);
	break;
	}
	
	DecimoS:
	case 12:
	{
	cozinha();	
	printf("\n\n Deseja sair? [S/N]: ");	
    scanf("%s", &respContinuar);	
		break;
	}
	
	// Yuri Noriki (VELOCIDADE)
	DecimoT:
	case 13: {


		float Velocidade;
		int respee=printmenu();
		int respee2;
		switch(respee){
			case 1: {
				printf("\n Informe a Velocidade em Km/h: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f km/h equivale a %.2f m/s\n", Velocidade, KpM(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 2:{
				printf("\n Informe a Velocidade em Km/h: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f km/h equivale a %.2f m/min\n", Velocidade, KpMmin(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 3:{
				printf("\n Informe a Velocidade em Km/h: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f km/h equivale a %.2f m/h\n", Velocidade, KpMh(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 4:{
				printf("\n Informe a Velocidade em Km/h:");
				scanf("%f", &Velocidade);
				printf("\n %.2f Km/h equivale a %.2f Km/min\n", Velocidade, KpKmin(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 5:{
				printf("\n Informe a Velocidade em Km/h:");
				scanf("%f", &Velocidade);
				printf("\n %.2f Km/h equivale a %.2f Km/s\n", Velocidade, KpKs(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 6:{
				printf("\n Informe a Velocidade em Km/min:");
				scanf("%f", &Velocidade);
				printf("\n %.2f km/min equivale a %.2f Km/s\n", Velocidade, KminpKs(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 7:{
				printf("\n Informe a Velocidade em m/s:");
				scanf("%f", &Velocidade);
				printf("\n %.2f m/s equivale a %.2f Km/h\n", Velocidade, MpK(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 8:{
				printf("\n Informe a Velocidade em m/s: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f m/s equivale a %.2f m/min\n", Velocidade, MpMmin(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 9:{
				printf("\n Informe a Velocidade em m/s: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f m/s equivale a %.2f m/h\n", Velocidade, MpMh(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 10:{
				printf("\n Informe a Velocidade em m/s: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f m/s equivale a %.2f cm/s\n", Velocidade, CpMa(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 11:{
				printf("\n Informe a Velocidade em C: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f em C equivale a %.2f em mach 1\n", Velocidade, CpMa(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 12:{
				printf("\n Informe a Velocidade em C: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f em C equivale a %.2f m/s\n", Velocidade, Cpm(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 13:{
				printf("\n Informe a Velocidade em C: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f em C equivale a %.2f Km/h\n", Velocidade, CpK(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 14:{
				printf("\n Informe a Velocidade em mach 1: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f em mach 1 equivale a %.12f C\n", Velocidade, MapC(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 15:{
				printf("\n Informe a Velocidade em mach 1: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f em mach 1 equivale a %.2f m/s\n", Velocidade, Mapm(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 16:{
				printf("\n Informe a Velocidade em mach 1: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f em mach 1 equivale a %.2f Km/h\n", Velocidade, MapK(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 17:{
				printf("\n Informe a Velocidade em mph: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f mph equivalem a %.2f mpm\n", Velocidade, mphpmpm(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 18:{
				printf("\n Informe a Velocidade em mph: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f mph equivalem a %.2f mps\n", Velocidade, mphpmps(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 19:{
				printf("\n Informe a Velocidade em mpm: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f mpm equivalem a %.2f mps\n", Velocidade, mpmpmps(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 20:{
				printf("\n Informe a Velocidade em mps: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f mps equivalem a %.2f mpm\n", Velocidade, mpspmpm(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 21:{
				printf("\n Informe a Velocidade em mps: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f mps equivalem a %.2f m/s\n", Velocidade, mpspm(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 22:{
				printf("\n Informe a Velocidade em mpm: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f mpm equivalem a %.2f m/min\n", Velocidade, mpmpmmin(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 23:{
				printf("\n Informe a Velocidade em mph: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f mph equivalem a %.2f Km/h\n", Velocidade, mphpK(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 24:{
				printf("\n Informe a Velocidade em cm/s: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f em cm/s equivale a %.2f m/s\n", Velocidade, Cpm(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
				break;
			}
			case 25:{
				printf("\n Informe a Velocidade em cm/s: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f em cm/s equivale a %.3f Km/h\n", Velocidade, cmpK(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 26:{
				printf("\n Informe a Velocidade em cm/s: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f em cm/s equivale a %.2f cm/min\n", Velocidade, cmpcmin(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 27:{
				printf("\n Informe a Velocidade em cm/h: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f em cm/h equivale a %.2f cm/min\n", Velocidade, cmhpcmin(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 28:{
				printf("\n Informe a Velocidade em cm/min: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f em cm/min equivale a %.2f cm/h\n", Velocidade, cminpcmh(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 29:{
				printf("\n Informe a Velocidade em fps: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f fps equivalem a %.2f fpm\n", Velocidade, fpspfpm(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 30:{
				printf("\n Informe a Velocidade em fpm: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f fpm equivalem a %.2f fph\n", Velocidade, fpmpfph(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 31:{
				printf("\n Informe a Velocidade em fph: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f fph equivalem a %.2f fps\n", Velocidade, fphpfps(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 32:{
				printf("\n Informe a Velocidade em fph: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f fph equivalem a %.3f Km/h\n", Velocidade, fphpK(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 33:{
				printf("\n Informe a Velocidade em fpm: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f fpm equivalem a %.2f m/min\n", Velocidade, fpmpmmin(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 34:{
				printf("\n Informe a Velocidade em fps: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f fps equivalem a %.2f m/s\n", Velocidade, fpspm(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 35:{
				printf("\n Informe a Velocidade em milhas nÃ¡uticas: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f nm/h equivalem a %.2f mph\n", Velocidade, nmpmph(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 36:{
				printf("\n Informe a Velocidade em milhas nÃ¡uticas: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f nm/h equivalem a %.2f Km/s\n", Velocidade, nmpK(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 37:{
				printf("\n Informe a Velocidade em milhas nÃ¡uticas: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f nm/h equivalem a %.2f m/s\n", Velocidade, nmpm(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 38:{
				printf("\n Informe a Velocidade em mph: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f mph equivalem a %.2f nm/h\n", Velocidade, mphpnm(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 39:{
				printf("\n Informe a Velocidade em Km/h: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f Km/h equivalem a %.2f nm/h\n", Velocidade, Kpnm(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 40:{
				printf("\n Informe a Velocidade em milhas nÃ¡uticas: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f nm/h equivalem a %.2f Kn\n", Velocidade, nmpKn(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 41:{
				printf("\n Informe a Velocidade em NÃ³s: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f Kn equivalem a %.2f Km/h\n", Velocidade, KnpK(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 42:{
				printf("\n Informe a Velocidade em NÃ³s: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f Kn equivalem a %.2f m/s\n", Velocidade, KnpK(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 43:{
				printf("\n Informe a Velocidade em NÃ³s: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f Kn equivalem a %.2f nm/h\n", Velocidade, Knpnm(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 44:{
				printf("\n Informe a Velocidade em NÃ³s: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f Kn equivalem a %.2f fps\n", Velocidade, Knpfps(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 45:{
				printf("\n Informe a Velocidade em polegadas por hora: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f iph equivalem a %.2f ipm\n", Velocidade, iphpipm(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 46:{
				printf("\n Informe a Velocidade em polegadas por minuto: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f ipm equivalem a %.2f ips\n", Velocidade, ipmpips(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 47:{
				printf("\n Informe a Velocidade em polegadas por segundo: ");
				scanf("%f", &Velocidade);
				printf("\n %.2f ips equivalem a %.2f iph\n", Velocidade, ipspiph(Velocidade));
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			case 48:{
				printf("\n\t *******");
				printf("\n\t\a * FIM *");
				printf("\n\t *******");
			break;
			}
			default: {
				printf("\n ************** \n");
				printf("\a Opção inválida.  ");
			break;
			}
		}
		while(respee!=48) {
			float Velocidade;
			while(respee2!=2) {
				printf("\n ***********************************");
			    printf("\n * Deseja fazer mais uma conversão?*");
				printf("\n *          SiM --> 1              *");
				printf("\n *          Não --> 2              *");
				printf("\n ***********************************");
				printf("\n");
				scanf("%d",&respee2);
		
				if(respee2==1){
					int respee=printmenu();
					switch(respee){
						case 1:{
							printf("\n Informe a Velocidade em Km/h: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f km/h equivale a %.2f m/s\n", Velocidade, KpM(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 2:{
							printf("\n Informe a Velocidade em Km/h: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f km/h equivale a %.2f m/min\n", Velocidade, KpMmin(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 3:{
							printf("\n Informe a Velocidade em Km/h: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f km/h equivale a %.2f m/h\n", Velocidade, KpMh(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 4:{
							printf("\n Informe a Velocidade em Km/h:");
							scanf("%f", &Velocidade);
							printf("\n %.2f Km/h equivale a %.2f Km/min\n", Velocidade, KpKmin(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 5:{
							printf("\n Informe a Velocidade em Km/h:");
							scanf("%f", &Velocidade);
							printf("\n %.2f Km/h equivale a %.2f Km/s\n", Velocidade, KpKs(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 6:{
							printf("\n Informe a Velocidade em Km/min:");
							scanf("%f", &Velocidade);
							printf("\n %.2f km/min equivale a %.2f Km/s\n", Velocidade, KminpKs(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 7:{
							printf("\n Informe a Velocidade em m/s:");
							scanf("%f", &Velocidade);
							printf("\n %.2f m/s equivale a %.2f Km/h\n", Velocidade, MpK(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 8:{
							printf("\n Informe a Velocidade em m/s: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f m/s equivale a %.2f m/min\n", Velocidade, MpMmin(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 9:{
							printf("\n Informe a Velocidade em m/s: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f m/s equivale a %.2f m/h\n", Velocidade, MpMh(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 10:{
							printf("\n Informe a Velocidade em m/s: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f m/s equivale a %.2f cm/s\n", Velocidade, CpMa(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 11:{
							printf("\n Informe a Velocidade em C: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f em C equivale a %.2f em mach 1\n", Velocidade, CpMa(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 12:{
							printf("\n Informe a Velocidade em C: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f em C equivale a %.2f m/s\n", Velocidade, Cpm(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;}
						case 13:{
							printf("\n Informe a Velocidade em C: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f em C equivale a %.2f Km/h\n", Velocidade, CpK(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;}
						case 14:{
							printf("\n Informe a Velocidade em mach 1: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f em mach 1 equivale a %.12f C\n", Velocidade, MapC(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;}
						case 15:{
							printf("\n Informe a Velocidade em mach 1: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f em mach 1 equivale a %.2f m/s\n", Velocidade, Mapm(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 16:{
							printf("\n Informe a Velocidade em mach 1: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f em mach 1 equivale a %.2f Km/h\n", Velocidade, MapK(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 17:{
							printf("\n Informe a Velocidade em mph: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f mph equivalem a %.2f mpm\n", Velocidade, mphpmpm(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 18:{
							printf("\n Informe a Velocidade em mph: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f mph equivalem a %.2f mps\n", Velocidade, mphpmps(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 19:{
							printf("\n Informe a Velocidade em mpm: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f mpm equivalem a %.2f mps\n", Velocidade, mpmpmps(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 20:{
							printf("\n Informe a Velocidade em mps: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f mps equivalem a %.2f mpm\n", Velocidade, mpspmpm(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 21:{
							printf("\n Informe a Velocidade em mps: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f mps equivalem a %.2f m/s\n", Velocidade, mpspm(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 22:{
							printf("\n Informe a Velocidade em mpm: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f mpm equivalem a %.2f m/min\n", Velocidade, mpmpmmin(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 23:{
							printf("\n Informe a Velocidade em mph: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f mph equivalem a %.2f Km/h\n", Velocidade, mphpK(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 24:{
							printf("\n Informe a Velocidade em cm/s: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f em cm/s equivale a %.2f m/s\n", Velocidade, Cpm(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 25:{
							printf("\n Informe a Velocidade em cm/s: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f em cm/s equivale a %.3f Km/h\n", Velocidade, cmpK(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 26:{
							printf("\n Informe a Velocidade em cm/s: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f em cm/s equivale a %.2f cm/min\n", Velocidade, cmpcmin(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 27:{
							printf("\n Informe a Velocidade em cm/h: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f em cm/h equivale a %.2f cm/min\n", Velocidade, cmhpcmin(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 28:{
							printf("\n Informe a Velocidade em cm/min: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f em cm/min equivale a %.2f cm/h\n", Velocidade, cminpcmh(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 29:{
							printf("\n Informe a Velocidade em fps: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f fps equivalem a %.2f fpm\n", Velocidade, fpspfpm(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 30:{
							printf("\n Informe a Velocidade em fpm: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f fpm equivalem a %.2f fph\n", Velocidade, fpmpfph(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 31:{
							printf("\n Informe a Velocidade em fph: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f fph equivalem a %.2f fps\n", Velocidade, fphpfps(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 32:{
							printf("\n Informe a Velocidade em fph: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f fph equivalem a %.3f Km/h\n", Velocidade, fphpK(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 33:{
							printf("\n Informe a Velocidade em fpm: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f fpm equivalem a %.2f m/min\n", Velocidade, fpmpmmin(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 34:{
							printf("\n Informe a Velocidade em fps: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f fps equivalem a %.2f m/s\n", Velocidade, fpspm(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 35:{
							printf("\n Informe a Velocidade em milhas nÃ¡uticas: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f nm/h equivalem a %.2f mph\n", Velocidade, nmpmph(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 36:{
							printf("\n Informe a Velocidade em milhas nÃ¡uticas: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f nm/h equivalem a %.2f Km/s\n", Velocidade, nmpK(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 37:{
							printf("\n Informe a Velocidade em milhas nÃ¡uticas: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f nm/h equivalem a %.2f m/s\n", Velocidade, nmpm(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 38:{
							printf("\n Informe a Velocidade em mph: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f mph equivalem a %.2f nm/h\n", Velocidade, mphpnm(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 39:{
							printf("\n Informe a Velocidade em Km/h: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f Km/h equivalem a %.2f nm/h\n", Velocidade, Kpnm(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 40:{
							printf("\n Informe a Velocidade em milhas nÃ¡uticas: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f nm/h equivalem a %.2f Kn\n", Velocidade, nmpKn(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 41:{
							printf("\n Informe a Velocidade em NÃ³s: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f Kn equivalem a %.2f Km/h\n", Velocidade, KnpK(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 42:{
							printf("\n Informe a Velocidade em NÃ³s: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f Kn equivalem a %.2f m/s\n", Velocidade, KnpK(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 43:{
							printf("\n Informe a Velocidade em NÃ³s: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f Kn equivalem a %.2f nm/h\n", Velocidade, Knpnm(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 44:{
							printf("\n Informe a Velocidade em NÃ³s: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f Kn equivalem a %.2f fps\n", Velocidade, Knpfps(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 45:{
							printf("\n Informe a Velocidade em polegadas por hora: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f iph equivalem a %.2f ipm\n", Velocidade, iphpipm(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 46:{
							printf("\n Informe a Velocidade em polegadas por minuto: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f ipm equivalem a %.2f ips\n", Velocidade, ipmpips(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 47:{
							printf("\n Informe a Velocidade em polegadas por segundo: ");
							scanf("%f", &Velocidade);
							printf("\n %.2f ips equivalem a %.2f iph\n", Velocidade, ipspiph(Velocidade));
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						case 48:{
							printf("\n\t *******");
							printf("\n\t\a * FIM *");
							printf("\n\t *******");
						break;
						}
						default:{
							printf("\n ************** \n");
							printf("\a Opção inválida.  ");
						break;
						}
					}
				}
				else {
					printf("\n\t *******");
					printf("\n\t\a * FIM *");
					printf("\n\t *******");
				}
			}
		goto Inicio;
		break;
		}
		//SetConsoleOutputCP(CPAGE_DEFAULT);
	break;
	}
	
	// Lucas Martins (Volume)
	DecimoQ:
	case 14: {
		float Volume;
	 	int respVolume = MenuVolume();
		switch (respVolume) {
			case 1:{
				printf(" Informe o volume em Litros: ");
				scanf("%f", &Volume);
				printf("%gl equivale a %gml", Volume, LpML(Volume));
			break;
			}
			case 2:{
				printf(" Informe o volume em litros: "); 
				scanf("%f", &Volume);
				printf("%gl equivale a %gmc", Volume, LpMC(Volume));
			break;
			}
			case 3:{
				printf(" Informe o volume em litros: ");
				scanf("%f", &Volume); 
				printf("%gl equivale a %gpc", Volume, LpPC(Volume));
			break;
			}
			case 4:{
				printf(" Informe o volume em litros: ");
				scanf("%f", &Volume);
				printf(" %gl equivale a %gpi", Volume, LpPI(Volume));
			break;
			}
			case 5:{
				printf(" Informe o volume em litros: ");
				scanf("%f", &Volume);
				printf(" %gl equivale a %gola", Volume, LpOLA(Volume));
			break;
			}
			case 6:{
				printf(" Informe o volume em mililitros: ");
				scanf("%f", &Volume);
				printf(" %gml equivale a %gl", Volume, MLLpL(Volume));
			break;
			}
			case 7:{
				printf(" Informe o volume em militros: ");
				scanf("%f", &Volume);
				printf(" %gml equivale a %gmc", Volume, MLLpMC(Volume));
			break;
			}
			case 8:{
				printf(" Informe o volume em mililitros: ");
				scanf("%f", &Volume);
				printf(" %gml equivale a %gpc", Volume, MLLpPC(Volume));
			break;
			}
			case 9:{
				printf(" Informe o volume em mililitros: ");
				scanf("%f", &Volume);
				printf(" %gml equivale a %gpi", Volume, MLLpPI(Volume));
			break;
			}
			case 10:{
				printf(" Informe o volume em mililitros: ");
				scanf("%f", &Volume);
				printf(" %gml equivale a %gola", Volume, MLLpOLA(Volume));
			break;
			}
			case 11:{
				printf(" Informe o volume em metros cubicos: ");
				scanf("%f", &Volume);
				printf(" %gmc equivale a %gl", Volume, MCCpL(Volume));
			break;
			}
			case 12:{
				printf(" Informe o volume em metros cubicos: ");
				scanf("%f", &Volume);
				printf(" %gmc equivale a %gml", Volume, MCCpML(Volume));
			break;
			}
			case 13:{
				printf(" Informe o volume em metros cubicos: ");
				scanf("%f", &Volume);
				printf(" %gmc equivale a %gpc", Volume, MCCpPC(Volume));
			break;
			}
			case 14:{
				printf(" Informe o volume em metros cubicos: ");
				scanf("%f", &Volume);
				printf(" %gmc equivale a %gpi", Volume, MCCpPI(Volume));
			break;
			}
			case 15:{
				printf(" Informe o volume em metros cubicos: ");
				scanf("%f", &Volume);
				printf(" %gmc equivale a %gola", Volume, MCCpOLA(Volume));
			break;
			}
			case 16:{
				printf(" Informe o volume em polegadas cubicas: ");
				scanf("%f", &Volume);
				printf(" %gpc equivale a %gl", Volume, PCpL(Volume));
			break;
			}
			case 17:{
				printf(" Informe o volume em polegadas cubicas: ");
				scanf("%f", &Volume);
				printf(" %gpc equivale a %gml", Volume, PCpML(Volume));
			break;
			}
			case 18:{
				printf(" Informe o volume em polegadas cubicas: ");
				scanf("%f", &Volume);
				printf(" %gpc equivale a %gmc", Volume, PCpMC(Volume));
			break;
			}
			case 19:{
				printf(" Informe o volume em polegadas cubicas: ");
				scanf("%f", &Volume);
				printf(" %gpc equivale a %gpi", Volume, PCpPI(Volume));
			break;
			}
			case 20:{
				printf(" Informe o volume em polegadas cubicas: ");
				scanf("%f", &Volume);
				printf(" %gpc equivale a %gola", Volume, PCpOLA(Volume));
			break;
			}
			case 21:{
				printf(" Informe o volume em pintos imperiais: ");
				scanf("%f", &Volume);
				printf(" %gpi equivale a %gl", Volume, PIpL(Volume));
			break;
			}
			case 22:{
				printf(" Informe o volume em pintos imperiais: ");
				scanf("%f", &Volume);
				printf(" %gpi equivale a %gml", Volume, PIpML(Volume));
			break;
			}
			case 23:{
				printf(" Informe o volume em pintos imperiais: ");
				scanf("%f", &Volume);
				printf(" %gpi equivale a %gmc", Volume, PIpMC(Volume));
			break;
			}
			case 24:{
				printf(" Informe o volume em pintos imperiais: ");
				scanf("%f", &Volume);
				printf(" %gpi equivale a %gpc", Volume, PIpPC(Volume));
			break;
			}
			case 25:{
				printf(" Informe o volume em pintos imperiais: ");
				scanf("%f", &Volume);
				printf(" %gpi equivale a %gola", Volume, PIpOLA(Volume));
			break;
			}
			case 26:{
				printf(" Informe o volume em oncas liquidas americanas: ");
				scanf("%f", &Volume);
				printf(" %gola equivale a %gl", Volume, OLApL(Volume));
			break;
			}
			case 27:{
				printf(" Informe o volume em oncas liquidas americanas: ");
				scanf("%f", &Volume);
				printf(" %gola equivale a %gml", Volume, OLApML(Volume));
			break;
			}
			case 28:{
				printf(" Informe o volume em oncas liquidas americanas: ");
				scanf("%f", &Volume);
				printf(" %gola equivale a %gmc", Volume, OLApMC(Volume));
			break;
			} 
			case 29:{
				printf(" Informe o volume em oncas liquidas americanas: ");
				scanf("%f", &Volume);
				printf(" %gola equivale a %gpc", Volume, OLApPC(Volume));
			break;
			}
			case 30:{
				printf(" Informe o volume em oncas liquidas americanas");
				scanf("%f", &Volume);
				printf(" %gola equivale a %gpi", Volume, OLApPI(Volume));
			break;
			}
			default: {
				printf(" Erro! Operacao inexistente. Escolha um número válido.");
			break;
			}
		break;
		}
		printf("\n\n Deseja sair ?? [S/N]: ");
		scanf("%s", &respContinuar);
	break;
	}
DecimoSex:
case 16: {
    float MassaMolar;
    int respMassMol = categoriaMassaMoloar();
    switch (respMassMol) {
        case 1:{
            printf("Informe o valor em Miligrama: ");
            scanf("%f", &MassaMolar);
            printf("%g miligramas equivalem a %g gramas", MassaMolar, MiliPGrama(MassaMolar));
            break;
        }
        case 2:{
            printf("Informe o valor em Miligrama: ");
            scanf("%f", &MassaMolar);
            printf("%g miligramas equivalem a %g quilogramas", MassaMolar, MiliPQuilo(MassaMolar));
            break;
        }
        case 3:{
            printf("Informe o valor em Grama: ");
            scanf("%f", &MassaMolar);
            printf("%g gramas equivalem a %g miligramas", MassaMolar, GramPMili(MassaMolar));
            break;
        }
        case 4:{
            printf("Informe o valor em Grama: ");
            scanf("%f", &MassaMolar);
            printf("%g gramas equivalem a %g quilogramas", MassaMolar, GramPQuilo(MassaMolar));
            break;
        }
        case 5:{
            printf("Informe em Quilo: ");
            scanf("%f", &MassaMolar);
            printf("%g quilogramas equivalem a %g miligramas", MassaMolar, QuilPMili(MassaMolar));
            break;
        }
        case 6:{
            printf("Informe em Quilo: ");
            scanf("%f", &MassaMolar);
            printf("%g quilogramas equivalem a %g gramas", MassaMolar, QuilPGrama(MassaMolar));
            break;
        }
        case 7:{
            printf("Informe em Grama: ");
            scanf("%f", &MassaMolar);
            printf("%g gramas equivalem a %g quilogramas", MassaMolar, GramPQuilo(MassaMolar));
            break;
        }
        case 8:{
            printf("Informe em Quilo: ");
            scanf("%f", &MassaMolar);
            printf("%g quilogramas equivalem a %g gramas", MassaMolar, QuilPGrama(MassaMolar));
            break;
        }
        case 9:{
            printf("Informe em Miligrama: ");
            scanf("%f", &MassaMolar);
            printf("%g miligramas equivalem a %g quilogramas", MassaMolar, MiliPQuilo(MassaMolar));
            break;
        }
        default: {
            printf("Erro! Operação inexistente. Escolha um número válido.");
            break;
        }
    }
    printf("\n\n Deseja sair? [S/N]: ");
    scanf("%s", &respContinuar);
    break;
}
	
	// Lucas Caraiba (TECIDO)
	DecimoQi:
	case 15: {
	float Tecido;
    int respPesoTecido = categoriaPesoTecido();
    switch (respPesoTecido) {
        case 1:{
            printf("Informe o valor em GSM: ");
            scanf("%f", &Tecido);
            printf("%g GSM's equivalem a %g Momme", Tecido, gsm_para_momme (Tecido));
            break;
        }
        case 2:{
            printf("Informe o valor em GSM: ");
            scanf("%f", &Tecido);
            printf("%g GSM's equivalem a %g Oz/Yd²", Tecido, gsm_para_oz (Tecido));
            break;
        }
        case 3:{
            printf("Informe o valor em Momme: ");
            scanf("%f", &Tecido);
            printf("%g Momme equivalem a %g GSM's", Tecido, momme_para_gsm(Tecido));
            break;
        }
        case 4:{
            printf("Informe o valor em Momme: ");
            scanf("%f", &Tecido);
            printf("%g Momme equivalem a %g Oz/Yd²", Tecido, momme_para_oz(Tecido));
            break;
        }
        case 5:{
            printf("Informe em Oz/Yd²: ");
            scanf("%f", &Tecido);
            printf("%g Oz/Yd² equivalem a %g GSM's", Tecido, oz_para_gsm(Tecido));
            break;
        }
        case 6:{
            printf("Informe em Oz/Yd²: ");
            scanf("%f", &Tecido);
            printf("%g Oz/Yd² equivalem a %g Momme", Tecido, oz_para_momme(Tecido));
            break;
        }
        default: {
            printf("Erro! Operação inexistente. Escolha um número válido.");
            break;
        }
    }
    printf("\n\n Deseja sair? [S/N]: ");
    scanf("%s", &respContinuar);
    break;
	}
	
	DecimoSet:
	case 17: {
	float ResTermica;
    int respResTermica = categoriaResTermica();
    switch (respResTermica) {
        case 1:{
            printf("Informe o valor em °C/W: ");
            scanf("%f", &ResTermica);
            printf("%g °C/W equivalem a %g °F·h/Btu", ResTermica, cwPbtu (ResTermica));
            break;
        }
        case 2:{
            printf("Informe o valor em °C/W: ");
            scanf("%f", &ResTermica);
            printf("%g °C/W equivalem a %g K/W", ResTermica, cwPkw (ResTermica));
            break;
        }
        case 3:{
            printf("Informe o valor em °F·h/Btu: ");
            scanf("%f", &ResTermica);
            printf("%g °F·h/Btu equivalem a %g °C/W", ResTermica, btuPcw (ResTermica));
            break;
        }
        case 4:{
            printf("Informe o valor em °F·h/Btu: ");
            scanf("%f", &ResTermica);
            printf("%g °F·h/Btu equivalem a %g K/W", ResTermica, btuPkw (ResTermica));
            break;
        }
        case 5:{
            printf("Informe em K/W: ");
            scanf("%f", &ResTermica);
            printf("%g K/W equivalem a %g °C/W", ResTermica, kwPcw (ResTermica));
            break;
        }
        case 6:{
            printf("Informe em K/W: ");
            scanf("%f", &ResTermica);
            printf("%g K/W equivalem a %g °F·h/Btu", ResTermica, kwPbtu (ResTermica));
            break;
        }
        default: {
            printf("Erro! Operação inexistente. Escolha um número válido.");
            break;
        }
    }
    printf("\n\n Deseja sair? [S/N]: ");
    scanf("%s", &respContinuar);
    break;
	}
	DecimoOit: //Volume molar - Weslley Wilker
	case 18:
	{
		RespVolumeMolar();	
	printf("\n\n Deseja sair? [S/N]: ");
    scanf("%s", &respContinuar);	
		break;
	}
	DecimoNon:
	case 19:
	{
	
	QuantLuz();	
	printf("\n\n Deseja sair? [S/N]: ");
    scanf("%s", &respContinuar);	
		break;
	}
	Vigesimo:
	case 20:
	{
	
	TaxaTransfDados();
	printf("\n\n Deseja sair? [S/N]: ");
    scanf("%s", &respContinuar);	
		break;
	}
	VigesimoP:
	case 21:
	{
	Impulso();
	printf("\n\n Deseja sair? [S/N]: ");
    scanf("%s", &respContinuar);	
		break;
	}
	VigesimoS:
	case 22:
	{
	TamLetra();
	printf("\n\n Deseja sair? [S/N]: ");
    scanf("%s", &respContinuar);	
		break;
	}
	VigesimoT:
	case 23:
	{
	ForcMag();
	printf("\n\n Deseja sair? [S/N]: ");	
    scanf("%s", &respContinuar);	
		break;
	}
	VigesimoQ:
	case 24:
	{
	aceleracao();
	printf("\n\n Deseja sair? [S/N]: ");	
    scanf("%s", &respContinuar);	
		break;
	}
	VigesimoQu:
	case 25:
	{
	CondTer();
	printf("\n\n Deseja sair? [S/N]: ");	
    scanf("%s", &respContinuar);	
		break;
	}
	VigesimoSex:
	case 26:
	{
	EmiCO2();
	printf("\n\n Deseja sair? [S/N]: ");	
    scanf("%s", &respContinuar);	
		break;
	}
	VigesimoSet:
	case 27:
	{
	CapTer();
	printf("\n\n Deseja sair? [S/N]: ");	
    scanf("%s", &respContinuar);	
		break;
	}
	VigesimoOi:
	case 28:
	{
	TensSup();
	printf("\n\n Deseja sair? [S/N]: ");	
    scanf("%s", &respContinuar);	
		break;
	}
	VigesimoN:
	case 29:
	{
	ConvBase();
	printf("\n\n Deseja sair? [S/N]: ");	
    scanf("%s", &respContinuar);	
		break;
	}
		
		
	
	
	
	// OPÇÃO SAIR
	case 30: {
		system ("cls");
		printf(" Tem certeza que deseja sair?\n [S/N]: ");
		scanf("%s", &respContinuar);
		
		if (respContinuar == 'S' || respContinuar == 's') {
			char campo[76];
			
		    printf("\n *******************************************************************************\n");
		   	printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Augusto Liberato Marques Ferreira")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Bruna Carvalho Silva")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Bruno de Alencar Ferreira")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Dimitri Rocha Monteiro")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Eduardo de Brito da Silva")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Felipe Monteiro Silveira")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Gabriel Rodrigues da Silva")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Gabrielly da Silva Oliveira")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Giovana de Freitas Moura Peixoto Costa")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Gustavo Emanuel Abreu Ribeiro")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Joao Victor Costa de Queiroz")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Joao Victor Vieira Matos")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Juan Farias Vaz")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Julio Cesar Teixeira Cassiano")); Sleep(500);		    
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Kauan Rodrigues Macedo")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Luan Matheus Barbosa")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Lucas Albuquerque Queiroz dos Santos")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Lucas Martins da Silva")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Lucas Pereira de Oliveira")); Sleep(500);		    
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Luis Eduardo Garcia")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Marcus Vinicius Araujo Moura")); Sleep(500);		    
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Pedro Fellipe do Carmo Baptista")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Poliana Vieira Macena")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Saulo Jose da Silva Oliveira")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Savio Guimaraes Saraiva")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Suzana Souza Araujo")); Sleep(500);		    
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Weslley Wilker Oliveira da Costa")); Sleep(500);
		    printf(" *_%s_*\n", centerAlignText(campo, sizeof campo, "Yuri Noriki Gomes Shinzato")); Sleep(500);
		    printf(" *******************************************************************************\n");
		}
	break;
	}
	
	// Qualquer outra opção == Volta ao 1º Menu e repete tudo de novo
	default: {
		system ("cls");
		for (int s=5; s>0; s--) {
			printf(" Hmmmm... Não achei esta unidade na minha memória!\n Por favor selecione outra unidade.\n\n O programa voltará em %ds.\n\n", s);
			Sleep(1000);
			system("cls");
		}
		goto Inicio;
	break;
	}
	
}// Esse é  do switch CategoriaUnidadeMenu

} while (respContinuar == 'N' || respContinuar == 'n');
}

