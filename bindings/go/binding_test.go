package tree_sitter_eraserdiagram_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-eraserdiagram"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_eraserdiagram.Language())
	if language == nil {
		t.Errorf("Error loading Eraserdiagram grammar")
	}
}
