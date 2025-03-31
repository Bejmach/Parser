#ifndef PARSER_H
#define PARSER_H

#include <vector>
#include<StringDict.h>

struct OrderTree{
	OrderTree(Element _root = {"", ""}, OrderTree* _parent = nullptr);
	~OrderTree();

	OrderTree* parent;
	Element root;
	std::vector<OrderTree*> childs;
};

class Parser{
	private:
		
	public:
		static OrderTree* Parse(std::vector<Element> elements);
};

#endif
