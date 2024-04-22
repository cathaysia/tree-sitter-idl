package tree_sitter_idl_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-idl"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_idl.Language())
	if language == nil {
		t.Errorf("Error loading Idl grammar")
	}
}
