# Design Pattern Detection System
written in C++11, using ANTLR4 for source parsing.

## Desgin Patterns

### Adapter

### Proxy
![](res/proxy-01.png)
- Proxy (ImageProxy)
  - maintains a reference that lets the proxy access the real subject. Proxy may refer to a Subject if the RealSubject and Subject interfaces are the same.
  - provides an interface identical to Subject’s so that a proxy can by substituted for the real subject.
  - controls access to the real subject and may be responsible for creating and deleting it.
  - other responsibilities depend on the kind of proxy:
    - remote proxies are responsible for encoding a request and its arguments and for sending the encoded request to the real subject in a different address space.
    - virtual proxies may cache additional information about the real subject so that they can postpone accessing it. For example, the ImageProxy from the Motivation caches the real image’s extent.
  - protection proxies check that the caller has the access permissions required to perform a request.

- Subject (Graphic)
  - defines the common interface for RealSubject and Proxy so that a Proxy can be used anywhere a RealSubject is expected.

- RealSubject (Image)
  - defines the real object that the proxy represents.

### Composite
![](res/composite-01.png)
![](res/composite-02.png)
- Component (Graphic)
  - declares the interface for objects in the composition.
  - implements default behavior for the interface common to all classes, as appropriate.
  - declares an interface for accessing and managing its child components.
  - (optional) defines an interface for accessing a component’s parent in the recursive structure, and implements it if that’s appropriate.

- Leaf (Rectangle, Line, Text, etc.)
  - represents leaf objects in the composition. A leaf has no children.
  - defines behavior for primitive objects in the composition.

- Composite (Picture)
  - defines behavior for components having children.
  - stores child components.
  - implements child-related operations in the Component interface.

- Client
  - manipulates objects in the composition through the Component interface.

### Bridge
![](res/bridge-01.png)
- Abstraction (Window)
  - defines the abstraction’s interface.
  - maintains a reference to an object of type Implementor.

- RefmedAbstraction (IconWindow)
  - Extends the interface defined by Abstraction.

- Implementor (WindowImp)
  - defines the interface for implementation classes. This interface doesn’t have to correspond exactly to Abstraction’s interface; in fact the two interfaces can be quite different. Typically the Implementor interface provides only primitive operations, and Abstraction defines higher-level operations based on these primitives.

- ConcreteImplementor (XWindowImp, PMWindowImp)
  - implements the Implementor interface and defines its concrete implementation.

### Strategy
![](res/strategy-01.png)
- Strategy (Compositor)
  - declares an interface common to all supported algorithms. Context uses this interface to call the algorithm defined by a ConcreteStrategy.

- ConcreteStrategy (SimpleCompositor, TeXCompositor, ArrayCompositor)
  - implements the algorithm using the Strategy interface.

- Context (Composition)
  - is configured with a ConcreteStrategy object.
  - maintains a reference to a Strategy object.
  - may define an interface that lets Strategy access its data.

#### Collaborations
- Strategy and Context interact to implement the chosen algorithm. A context may pass all data required by the algorithm to the strategy when the algorithm is called. Alternatively, the context can pass itself as an argument to Strategy operations. That lets the strategy call back on the context as required.

- A context forwards requests from its clients to its strategy. Clients usually create and pass a ConcreteStrategy object to the context; thereafter, clients interact with the context exclusively. There is often a family of ConcreteStrategy classes for a client to choose from.

### Builder
![](res/builder-01.png)
#### Participants
- Builder (TextConverter)
  - specifies an abstract interface for creating parts of a Product object.

- ConcreteBuilder (ASCIIConverter, TeXConverter, TextWidgetConverter)
  - constructs and assembles parts of the product by implementing the Builder interface.
  - defines and keeps track of the representation it creates.
  - provides an interface for retrieving the product (e.g., GetASCIIText, Get-Text Widget).

- Director (RTFReader)
  - constructs an object using the Builder interface.

- Product (ASCIIText, TeXText, TextWidget)
  - represents the complex object under construction. ConcreteBuilder builds the product’s internal representation and defines the process by which it’s assembled.
  - includes classes that define the constituent parts, including interfaces for assembling the parts into the final result.

#### Collaborations
- The client creates the Director object and configures it with the desired Builder object.
- Director notifies the builder whenever a part of the product should be built.
- Builder handles requests from the director and adds parts to the product.
- The client retrieves the product from the builder.
The following interaction diagram illustrates how Builder and Director cooperate with a client.
![](res/builder-02.png)



## Q&A
- Association, aggregation and dependency usually share much similarities in specific code. How to separate them by an xmi file?
    - Solution 1: Mannually add the missing relations before exporting to an xmi file. This tool presumes that all relations are present in the xmi file.
    - Solution 2: Make it the job of this tool, which results in much more complicated XMI parsing and possibly decrease of accuracy.

- if (ClassSetSPi1 ∩ ClassSetSPi2) **⊆** or **=** (ClassSetSPa ∩ ClassSetSPb) ? 
    - Suppose {**1**, 2, 3} ∩ {**4**, 2, 3} ⊆ {1, 2, 3} ∩ {1, 2, 3}. The instance set cardinality is 4 instead of 3.

- Behavioral Analysis Limitations
    - How to detect polymorphisim?
    For example:
    ```c++
    class Proxy : public Subject {
        RealSubject *subject = new RealSubject();
        void request()
        {
            // what if here inserts `subject = new some_other_subject()`
            // This could lead to catastrophic complexity.
            subject->request();
        }
    }
    ```
    The XMI file doesn't have any behavioral info of a method except method signatures and relations.
    已完成XMI文件解析，并生成对应矩阵表示，根据预定义的子模式识别出所有15种子模式，随后识别出了子模式实例中的全部设计模式结构。
    根据行为模型（方法签名等）对识别出的设计模式实例进行行为分析并过滤，完善输入输出，并进行测试。最后设计展示方案。
    
- Redefined Operation
  - Mannually alter UML or it is my job?

- One role, multiple characters?
  - Visitor pattern: ConcreteElement A, B, C, ... that would lead to recognition of CI. Plus, ObjectStructure is optional.

- Algorithm optimization
  - Full iteration through all sub-pattern instances is not always necessary. Once all the roles in specific pattern can be matched, we can just simply turn iteration to condition check. $O(n^k)$ to $O(n^{k-m}), m \ge 1$.