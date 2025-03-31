#include "StringDict.h"
#include <Parser.h>

OrderTree::OrderTree(Element _root, OrderTree* _parent){
	root = _root;
	parent = _parent;
}

OrderTree* Parser::Parse(std::vector<Element> elements){
	OrderTree* tree = new OrderTree();
	tree->parent = nullptr;
	tree->root = {"root", "root"};
	OrderTree* currentRoot = tree;
	for(int i=0; i<elements.size(); i++){
		if(elements[i].value == "type"){
			OrderTree* typeTree = new OrderTree();
			typeTree->parent = currentRoot;
			typeTree->root = elements[i];
			currentRoot->childs.push_back(typeTree);
			currentRoot = typeTree;
		}
		if(elements[i].value == "eot"){
			currentRoot = currentRoot->parent;
		}
	}

	return tree;
}
