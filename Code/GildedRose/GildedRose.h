#pragma once
class GildedRose
{
public:
	vector<Item> &items;
	GildedRose(vector<Item> & items);
	void UpdateQuality();
};
