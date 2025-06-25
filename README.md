# tree-sitter-idl

![Crates.io Version](<https://img.shields.io/crates/v/tree-sitter-idl?label=tree-sitter-idl(crates.io)>)
![PyPI - Version](<https://img.shields.io/pypi/v/tree-sitter-idl?label=tree-sitter-idl(pypi)&color=blue>)
![NPM - Version](<https://img.shields.io/npm/v/tree-sitter-idl?label=tree-sitter-idl(npm)&color=blue>)

OMG IDL 4.2(with XTypes extension) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

- https://www.omg.org/spec/IDL/4.2/PDF
- https://www.omg.org/spec/DDS-XTypes/1.3/PDF

## current state

IDL v4.2:

- [x] 7.3 Preprocessing(partial)
- [x] 7.4.1 Building Block Core Data Types
- [x] 7.4.2 Building Block Any
- [x] 7.4.3 Building Block Interfaces – Basic
- [x] 7.4.4 Building Block Interfaces – Full
- [x] 7.4.5 Building Block Value Types
- [x] 7.4.6 Building Block CORBA-Specific – Interfaces
- [x] 7.4.7 Building Block CORBA-Specific – Value Types
- [x] 7.4.8 Building Block Components – Basic
- [x] 7.4.9 Building Block Components – Homes
- [x] 7.4.10 Building Block CCM-Specific
- [x] 7.4.11 Building Block Components – Ports and Connectors
- [x] 7.4.12 Building Block Template Modules
- [x] 7.4.13 Building Block Extended Data-Types
- [x] 7.4.14 Building Block Anonymous Types
- [x] 7.4.15 Building Block Annotations
- [x] 7.4.16 Relationships between the Building Blocks
- [x] 8 Standardized Annotations

DDS-XTypes v1.3:

- [x] 7.3.1.2.3 Alternative Annotation Syntax
- [x] 7.3.1.2.1 Built-in Annotations

DDS-RPC v1.0:

- [x] 7.3.1 Service Definition in IDL
- [x] 7.5.1.2.1 Annotations for the Enhanced Service Mapping
- [x] 7.4.2.2 Specifying Topic Names using Annotations

## extends

### allow merge case

```idl
union A switch(long) {
    case 1:
    case 2: //< allow
    case 3:
        u8 a;
};
```

### allow using simple_type_spec in template parameter

```idl
module MyTemplate <typename T, struct S, long m> {
                                      //  ^ allow
};
```

### allow `custom` prop appears in value_box_def

```idl
custom valuetype A a; // value_box_def
// ^ extend grammar
```

### allow omit param_attribute

```idl
interface A {
    void f(uint8 b);
};
```

### allow rust style oct number

```idl
const u8 A = 0o3;
```

### allow binary number

```idl
const u8 A = 0b010101;
```

### allow octet in typedef_spec

```idl
union A switch(octet) {};
//              ^ allow
```

### allow comma at last of enumator

```idl
enum A {
    A,
//   ^ allow
};

bitmask A {
    @position(0) a,
//                ^ allow
};
```

### allow ignore 'name='

```idl
@DDSRequestTopic("RobotRequestTopic")
//               ^ allow ignore `name=`
interface RobotControl {
    void command(Command com);
};
```

### allow ignore '=xx' in annotation

```idl
@derive(Debug, Clone)
//           ^allow ignore "="
struct Hello {};
```
