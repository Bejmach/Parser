#ifndef PARSER_H
#define PARSER_H

#include <vector>
#include<StringDict.h>

struct OrderTree{
	OrderTree* parent;
	Element root;
	std::vector<OrderTree> childs;
};

class Parser{
	private:
		
	public:
		static OrderTree Parse(std::vector<Element> elements);
};

#endif
