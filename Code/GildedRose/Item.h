#pragma once
class Item
{
public:
	string name;
	int sellIn;
	int quality;
	Item(string name, int sellIn, int quality) : name(name), sellIn(sellIn), quality(quality)
	{}
	
};

