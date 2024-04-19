void minmax1() {

  //this is to find the min and max values in the temperature matrix
  for (int i = 0; i < (sizeof(pixels) / sizeof(pixels[0])); i++) {
      maxVal = max(pixels[i],maxVal);
      minVal = min(pixels[i],minVal);
   }//for

    Serial.print("the highest temperature in the array is:   ");
    Serial.println(maxVal);
    Serial.print("the lowest temperature in the array is:   ");
    Serial.println(minVal);
    Serial.println();
    
    delay(1000);
}

void minmax2() {
  //reset the variables
  maxVal = pixels[0];
  minVal = pixels[0];
}

void serialprint(){
  Serial.print("[");
  for(int i=1; i<=AMG88xx_PIXEL_ARRAY_SIZE; i++){
    Serial.print(pixels[i-1]);
    Serial.print(", ");
    if( i%8 == 0 ) Serial.println();
  }
  Serial.println("]");
  Serial.println();

  delay(1000);

}

