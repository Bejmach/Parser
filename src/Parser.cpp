#include <Parser.h>

OrderTree Parser::Parse(std::vector<Element> elements){
	OrderTree tree;
	tree.parent = nullptr;
	tree.root = {"root", "root"};
	OrderTree* currentRoot = &tree;
	for(int i=0; i<elements.size(); i++){
		if(elements[i].value == "type"){
			OrderTree typeTree;
			typeTree.parent = currentRoot;
			typeTree.root = elements[i];
			currentRoot->childs.push_back(typeTree);
			currentRoot = &typeTree;
		}
		if(elements[i].value == "eot"){
			currentRoot = currentRoot->parent;
		}
	}
}
