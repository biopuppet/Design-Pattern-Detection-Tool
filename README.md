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
    The XMI file does not contain any behavoiral info inside a method.
    Only method signature and relations if set manually.
    
- Redefined Operation
  - Mannually alter UML or it is my job?

- One role, multiple characters?
  - Visitor pattern: ConcreteElement A, B, C, ... that would lead to recognition of CI. Plus, ObjectStructure is optional.

- Algorithm optimization
  - Full iteration through all sub-pattern instances is not always necessary. Once all the roles in specific pattern can be matched, we can just simply turn iteration to condition check. $O(n^k)$ to $O(n^{k-m}), m \ge 1$.