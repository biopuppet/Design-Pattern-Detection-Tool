package designpattern.behavioral.visitor;

/**
 * 客户端
 *
 * @author yangll
 *
 */
public class VisitorClient {

    public static void main(String[] args) {
        ObjectStructure o = new ObjectStructure();
        ConcreteVisitor1 visitor1 = new ConcreteVisitor1();
        ConcreteVisitor2 visitor2 = new ConcreteVisitor2();

        o.accept(visitor1);
        o.accept(visitor2);
    }
}
