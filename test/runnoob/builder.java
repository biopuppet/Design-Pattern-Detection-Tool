public abstract class Computer {
    protected String mBoard;
    protected String mDisplay;
    protected String mOs;
 
    protected Computer(){
    }
 
    public void setBoard(String board){
        mBoard=board;
    }
 
    public void setDisplay(String display) {
        this.mDisplay = display;
    }
 
    public abstract void setOs() ;
 
    @Override
    public String toString() {
        return "Computer{" +
                "mBoard='" + mBoard + '\'' +
                ", mDisplay='" + mDisplay + '\'' +
                ", mOs='" + mOs + '\'' +
                '}';
    }
}

public class MacBook extends Computer{
 
 
    protected MacBook() {
    }
 
    @Override
    public void setOs() {
        mOs="Mac OS X 12";
    }
}

public abstract class Builder {
 
    abstract void buildBoard(String board);
    abstract void buildDisplay(String display);
    abstract void buildOs();
    abstract Computer build();
 
}

public class MacBookBuilder extends Builder {
    private Computer mComputer=new MacBook();
    @Override
    void buildBoard(String board) {
        mComputer.setBoard(board);
    }
 
    @Override
    void buildDisplay(String display) {
        mComputer.setDisplay(display);
    }
 
    @Override
    void buildOs() {
        mComputer.setOs();
    }
 
    @Override
    Computer build() {
        return mComputer;
    }
}

public class Director {
    Builder mBuilser=null;
 
    public Director(Builder builer) {
        this.mBuilser = builer;
    }
 
    public void construct(String board,String display){
        mBuilser.buildDisplay(display);
        mBuilser.buildBoard(board);
        mBuilser.buildOs();
    }
}

public class Test {
    public static void main(String[] args){
        Builder builder=new MacBookBuilder();
        Director pcDirector=new Director(builder);
        pcDirector.construct("英特尔主板","Retina显示器");
 
        Computer computer = builder.build();
        System.out.println(computer.toString());
    }
}