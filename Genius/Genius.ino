/**
   Arduino GENIUS
   @author Professor José de Assis
   https://www.youtube.com/playlist?list=PLbEOwbQR9lqzta3bQTkwDWtkne6I8LOBg
*/

/***************** variáveis globais *******************/

int sequencia[32] = {};
int botoes[4] = {7, 6, 5, 4};
int leds[4] = {8, 9, 10, 11};
int tons[4] = {262, 294, 330, 349};
int rodada = 0;
int passo = 0;
bool game_over = false;

void setup() {
  // Leds
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  // Botões
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  pinMode(5, INPUT);
  pinMode(4, INPUT);
}

void loop() {
  proximaRodada();
  reproduzirSequencia();
  aguardarJogador();
  // estrutura usada para reiniciar todas as variáveis (novo jogo)
  if (game_over == true) {
    sequencia[32] = {};
    rodada = 0;
    passo = 0;
    game_over = false;
  }
  delay(1000);
}

/************************* Funções **************************/

void proximaRodada() {
  randomSeed(analogRead(A0));
  int sorteio = random(4);
  sequencia[rodada] = sorteio;
  rodada = rodada + 1;
  //Serial.print(sorteio);
}

void reproduzirSequencia() {
  for (int i = 0; i < rodada; i++) {

        if(leds[sequencia[i]] == leds[0]){// 8 é o pino 
            digitalWrite(leds[0], HIGH);
            delay(500);
            digitalWrite(leds[0], LOW);
            delay(100);
          }

      else  if(leds[sequencia[i]] == leds[1]){
          digitalWrite(leds[1], HIGH);
          delay(500);
          digitalWrite(leds[1], LOW);
          delay(100);
        }  

      else  if(leds[sequencia[i]] == leds[2]){
      digitalWrite(leds[2], HIGH);
      delay(500);
      digitalWrite(leds[2], LOW);
      delay(100);
    }  

      else  if(leds[sequencia[i]] == leds[3]){
          digitalWrite(leds[3], HIGH);
          delay(500);
          digitalWrite(leds[3], LOW);
          delay(100);
        }  

      
  }
}

void aguardarJogador() {
  int botao_pressionado = 0;
  for (int i = 0; i < rodada; i++) {
    bool jogada_efetuada = false;
    while (!jogada_efetuada) {
      for (int i = 0; i <= 3; i++) {
         if (digitalRead(botoes[0]) == HIGH) {
          botao_pressionado = 0;

          digitalWrite(leds[0], HIGH);
          delay(300);
          digitalWrite(leds[0], LOW);

          jogada_efetuada = true;
        }

        else if (digitalRead(botoes[1]) == HIGH) {
          botao_pressionado = 1;

          digitalWrite(leds[1], HIGH);
          delay(300);
          digitalWrite(leds[1], LOW);

          jogada_efetuada = true;
        }

        else if (digitalRead(botoes[2]) == HIGH) {
          botao_pressionado = 2;

          digitalWrite(leds[2], HIGH);
          delay(300);
          digitalWrite(leds[2], LOW);

          jogada_efetuada = true;
        }

        else if (digitalRead(botoes[3]) == HIGH) {
          botao_pressionado = 3;

          digitalWrite(leds[3], HIGH);
          delay(300);
          digitalWrite(leds[3], LOW);

          jogada_efetuada = true;
        }


      }
    }
    //verificar a jogada
    if (sequencia[passo] != botao_pressionado) {
      //efeito luminoso/sonoro indicando que o jogador perdeu
      for (int i = 0; i <= 3; i++) {


            if(i == 0){
              digitalWrite(leds[0], HIGH);
              delay(100);
              digitalWrite(leds[0], LOW);
              }
    
            else if(i == 1){
              digitalWrite(leds[1], HIGH);
              delay(100);
              digitalWrite(leds[1], LOW);
              }
    
            else if(i == 2){
              digitalWrite(leds[2], HIGH);
              delay(100);
              digitalWrite(leds[2], LOW);
              }
    
            else if(i == 3){
              digitalWrite(leds[3], HIGH);
              delay(100);
              digitalWrite(leds[3], LOW);
          }
              
  

      }
      game_over = true;
      break;
    }
    passo = passo + 1;
  }
  passo = 0;
}
