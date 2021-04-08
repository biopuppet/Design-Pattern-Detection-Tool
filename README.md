# Design Pattern Detection System
written in C++11.

## Q&A
- Association, aggregation and dependency usually share much similarities in specific code. How to separate them by an xmi file?
    - Solution 1: Mannually add the missing relations before exporting to an xmi file. This tool presumes that all relations are present in the xmi file.
    - Solution 2: Make it the job of this tool, which results in much more complicated XMI parsing and possibly decrease of accuracy.

- 
