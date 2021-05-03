package com.runoob.ObserverPattern;

public abstract class Observer {
   protected Subject subject;
   public abstract void update();
}