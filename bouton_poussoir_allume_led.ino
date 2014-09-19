/*
 Commander une LED avec un bouton poussoir

 Allume une LED connectée sur la broche 13 en sortie
 lorsque l'on appuie sur un bouton poussoir connecté
 sur une broche en entrée.


 Le montage :
 * LED connectée entre la broche 13 et la masse
 * Bouton poussoir entre la broche 2 et le 0V
 * Une résistance de 10Ko connectée entre la broche 2 et 0V

 créé en 2005
 par DojoDave <http://www.0j0.org>
 modifié 17 Juin 2009
 par Tom Igoe

 Cet exemple de code est dans le domaine public
 Traduction française par X.HINAULT - www.mon-club-elec.fr

 http://www.arduino.cc/en/Tutorial/Button
 */

// Les constantes ne changent pas durant le programme.
// Utilisée ici pour définir le numéro de la broche :

const int buttonPin = 2;     // crée un identifiant pour la broche utilisée avec le BP
const int ledPin =  13;      // crée un identifiant pour la broche utilisée avec la LED

// Les variables sont modifiées au cours du programme
int buttonState = 0;         // variable pour mémoriser l'état du bouton

void setup() {
  // configure la broche numérique en SORTIE
  pinMode(ledPin, OUTPUT);      
  // configure la broche numérique en SORTIE
  pinMode(buttonPin, INPUT);    
}

void loop(){
  // lit la valeur de l'état du bouton et la mémorise dans la variable
  buttonState = digitalRead(buttonPin);

  // Teste si le bouton est appuyé
  // c'est à dire si la variable buttonState est à 1
  // NB : ne pas confondre = et == !
  if (buttonState == HIGH) {    
    // allume la LED  
    digitalWrite(ledPin, HIGH);  
  }
  else { // sinon
    // éteint la LED
    digitalWrite(ledPin, LOW);
  }
}
