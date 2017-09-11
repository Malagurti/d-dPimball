#include "SevSeg.h"

// Definição pinos dos sensores e atuadores.
#define mestre_dos_magos_pin 22
#define diana_pin 23
#define sheila_pin 24
#define presto_pin 25
#define start_pin 26
#define hanck_pin 27
#define sombra_pin 28
#define tiamat_pin 29
#define uni_pin 30
#define bob_pin 31
#define diana_2_pin 32
#define borrachao_pin 33
#define sensor_passagem1_pin 34
#define sensor_passagem2_pin 35
#define sensor_passagem3_pin 36
#define sensor_passagem4_pin 37
#define sensor_decremento_pin 38

// Definição Pinos utilizados pelos displays de led
#define digito1 39
#define digito2 40
#define digito3 41
#define digito4 42
#define segA_pin 43
#define segB_pin 44
#define segC_pin 45
#define segD_pin 46
#define segE_pin 47
#define segF_pin 48
#define segG_pin 49
#define segDP_pin 50


void setup() {
	// pinos de entrada dos sensores.
	pinMode(mestre_dos_magos_pin, INPUT);
	pinMode(diana_pin, INPUT);
	pinMode(sheila_pin, INPUT);
	pinMode(presto_pin, INPUT);
	pinMode(start_pin, INPUT);
	pinMode(hanck_pin, INPUT);
	pinMode(uni_pin, INPUT);
	pinMode(bob_pin, INPUT);
	pinMode(diana_2_pin, INPUT);
	pinMode(borrachao_pin, INPUT);
	pinMode(sensor_passagem1_pin, INPUT);
	pinMode(sensor_passagem2_pin, INPUT);
	pinMode(sensor_passagem3_pin, INPUT);
	pinMode(sensor_passagem4_pin, INPUT);
	pinMode(sensor_decremento_pin, INPUT);

	// Pinos de atuadores.
	pinMode(tiamat_pin, OUTPUT);
	pinMode(sombra_pin, OUTPUT);

	// Configuração dos Displays 7 Segmentos
	int displayType = COMMON_ANODE;
	int digit1 = digito1;
	int digit2 = digito2;
	int digit3 = digito3;
	int digit4 = digito4;
	int segA = segA_pin;
	int segB = segB_pin;
	int segC = segC_pin;
	int segD = segD_pin;
	int segE = segE_pin;
	int segF = segF_pin;
	int segG = segG_pin;
	int segH = segDP_pin;

	int numeroDigitos = 4;

	//Inicializa o Display de 7segmentos e instancia os parametros pre-definidos
	display7seg.Begin(displayType, numeroDigitos, digit1, digit2, digit3, digit4, segA, segB, segC, segD, segE, segF, segG, segH);
	
	// Configura o brilho e tempo de atualização do sensor.
	display7seg.SetBrightness(50);
	timer = millis();
}


void loop() {
  
}
