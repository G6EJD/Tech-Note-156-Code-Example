void setup(){
  Serial.begin(115200);
}

void loop(){
  float squareroot = nthRoot(2,2);
  Serial.print("2nd Root of 2,  Answer = "); Serial.println(squareroot,6); // 1.41421356
  float fifthroot = nthRoot(25,5);
  Serial.print("5th Root of 25, Answer = "); Serial.println(fifthroot,6); // 1.903653945
  delay(10000); // wait 10-secs
}

float nthRoot (float number, float root){
  return pow(number, 1.0 / root);
}
