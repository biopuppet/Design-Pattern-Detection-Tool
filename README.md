# Design Pattern Detection System
written in C++11.

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