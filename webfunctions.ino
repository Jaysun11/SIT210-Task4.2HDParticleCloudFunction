const pin_t RED_LED = D6;
const pin_t BLUE_LED = D5;
const pin_t GREEN_LED = D4;

int triggerLights(String colour);

void setup() {

    pinMode(RED_LED, OUTPUT);
    pinMode(BLUE_LED, OUTPUT);
    pinMode(GREEN_LED, OUTPUT);
    
    Particle.function("triggerLights", triggerLights);

}

void loop() {


}

int triggerLights(String colour){
    
    if (colour == "red"){
        digitalWrite(RED_LED, HIGH);
        digitalWrite(GREEN_LED, LOW); 
        digitalWrite(BLUE_LED, LOW);
        return 1;
        
    } else if (colour == "green"){
        digitalWrite(GREEN_LED, HIGH);
        digitalWrite(BLUE_LED, LOW); 
        digitalWrite(RED_LED, LOW);
        return 1;
        
    } else if (colour == "blue"){
        digitalWrite(BLUE_LED, HIGH); 
        digitalWrite(RED_LED, LOW);
        digitalWrite(GREEN_LED, LOW); 
        return 1;
        
    }
    
    return -1;
    
}