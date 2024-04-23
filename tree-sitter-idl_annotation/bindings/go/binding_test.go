package tree_sitter_idl_annotation_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-idl_annotation"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_idl_annotation.Language())
	if language == nil {
		t.Errorf("Error loading IdlAnnotation grammar")
	}
}
