// ******** Déclaration des constatnts ********//
const int LED_1 = 2;
const int LED_2 = 4;
const int BUTTON_1 = 12;
const int BUTTON_2 = 13;

// ******** Fonction SETUP = Code d'initialisation ********//
// -- La fonction setup() est exécutée en premier et 1 seul fois au démarrage du programme 
void setup(){  
  pinMode(LED_1, INPUT); // met la broche 2 en entrée
  pinMode(LED_2, INPUT); // met la broche 4 en entrée
  pinMode(BUTTON_1, OUTPUT); // met la broche 12 en sortie
  pinMode(BUTTON_2, OUTPUT); // met la broche 13 en sortie
}

void loop(){
  int b = 1;
  int d = 1;
  int a = digitalRead(2); // lit la valeur de la broche 2
  int c = digitalRead(4); // lit la valeur de la broche 4

  if(a==b) // test si la valeur de a est égale à 1 (soit est ce que le bouton 1 est enfoncé ?)
  {digitalWrite(13,HIGH); // si oui alors on alimente la broche 12 => LED_1 allumée
  }else
  digitalWrite(13, LOW); // si non alors on n'alimente pas la broche 12 => LED_1 éteinte
  
  if(c==d) // test si la valeur de c est égale à 1 (soit est ce que le bouton 2 est enfoncé ?)
  {digitalWrite(12,HIGH); // si oui alors on alimente la broche 13 => LED_2 allumée
  }else
  digitalWrite(12, LOW); // si oui alors on n'alimente pas la broche 13 => LED_2 allumée
}  
