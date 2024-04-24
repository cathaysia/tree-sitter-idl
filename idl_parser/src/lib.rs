use core::panic;

use tree_sitter::TreeCursor;

struct Parser {
    parser: tree_sitter::Parser,
}

impl Parser {
    fn new() -> Self {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&tree_sitter_idl::language())
            .expect("load idl grammar failed");

        Self { parser }
    }
}

trait IdlParser: Sized {
    fn parse(cursor: &mut TreeCursor) -> Result<Self, ParserError>;
}

#[derive(Debug)]
pub struct Specification {
    pub children: Vec<Node>,
}

impl IdlParser for Specification {
    fn parse(cursor: &mut TreeCursor) -> Result<Specification, ParserError> {
        let mut v = Self { children: vec![] };

        let node = cursor.node();
        for i in node.children(cursor) {
            v.children.push(match i.kind() {
                "struct_def" => {
                    let mut cursor = i.walk();
                    Node::StructDef(StructDef::parse(&mut cursor)?)
                }
                v => {
                    println!("skip node: {v}");
                    continue;
                }
            });
        }
        todo!()
    }
}

#[derive(Debug)]
pub enum Node {
    Specification(Specification),
    StructDef(StructDef),
}

impl IdlParser for Node {
    fn parse(cursor: &mut TreeCursor) -> Result<Node, ParserError> {
        let node = cursor.node();
        Ok(match node.kind() {
            "specification" => {
                let mut cursor = node.walk();
                Self::Specification(Specification::parse(&mut cursor)?)
            }
            var => {
                panic!("unknown node: {var}")
            }
        })
    }
}

#[derive(Debug)]
pub struct StructDef {
    pub members: Vec<Member>,
}

impl IdlParser for StructDef {
    fn parse(cursor: &mut TreeCursor) -> Result<Self, ParserError> {
        // println!("{:?}", cursor.node());
        for i in cursor.node().children(cursor) {
            println!("{i:?}");
        }
        todo!()
    }
}

#[derive(Debug)]
pub struct Member {}

impl IdlParser for Member {
    fn parse(cursor: &mut TreeCursor) -> Result<Self, ParserError> {
        todo!()
    }
}

#[derive(Debug)]
pub enum ParserError {
    BadNode,
}

pub fn parse(txt: &str) -> Result<Specification, ParserError> {
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(&tree_sitter_idl::language())
        .expect("load idl grammar failed");
    let tree = parser.parse(txt, None).unwrap();
    let mut cursor = tree.walk();
    let node = Node::parse(&mut cursor).unwrap();
    // println!("{:?}", cursor.node());
    // while cursor.goto_first_child() {
    //     println!("{:?}", cursor.node());
    // }

    todo!()
}

#[cfg(test)]
mod test {
    use super::*;

    #[test]
    fn test_parse_struct() {
        let idl = r#"
struct Data1mb {
    sequence<string, 1024000> data;
};
"#;
        let _ = parse(idl);
    }
}
