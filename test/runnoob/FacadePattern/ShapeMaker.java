package com.runoob.FacadePattern;

public class ShapeMaker {
  // Shitty code.. should be typed more specifically.
  // That's why it's not a canonical Facade pattern.
   private Shape circle;
   private Shape rectangle;
   private Shape square;
 
   public ShapeMaker() {
      circle = new Circle();
      rectangle = new Rectangle();
      square = new Square();
   }
 
   public void drawCircle(){
      circle.draw();
   }
   public void drawRectangle(){
      rectangle.draw();
   }
   public void drawSquare(){
      square.draw();
   }
}