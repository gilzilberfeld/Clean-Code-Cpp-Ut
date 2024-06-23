#include "gtest/gtest.h"
#include "../ApprovalTests.v.10.13.0.hpp"
using namespace ApprovalTests;

#include <string>
#include <vector>
using namespace std;


#include "../../Code/GildedRose/Item.h"
#include "../../Code/GildedRose/GildedRose.h"
#include <ostream>

ostream& operator<<(ostream& os, const Item& obj)
{
	return os
		<< "name: " << obj.name
		<< ", sellIn: " << obj.sellIn
		<< ", quality: " << obj.quality;
}

TEST(GildedRose_ApprovalTests, DISABLED_Shop)
{
	vector<Item> items;
	items.push_back(Item("+5 Dexterity Vest", 10, 20));
	items.push_back(Item("Aged Brie", 2, 0));
	items.push_back(Item("Elixir of the Mongoose", 5, 7));
	items.push_back(Item("Sulfuras, Hand of Ragnaros", 0, 80));
	items.push_back(Item("Sulfuras, Hand of Ragnaros", -1, 80));
	items.push_back(Item("Backstage passes to a TAFKAL80ETC concert", 15, 20));
	items.push_back(Item("Backstage passes to a TAFKAL80ETC concert", 10, 49));
	items.push_back(Item("Backstage passes to a TAFKAL80ETC concert", 5, 49));

	GildedRose store(items);
	stringstream output;
	for (int day = 0; day <= 30; day++)
	{
		output << "-------- day " << day << " --------" << endl;
		for (vector<Item>::iterator i = items.begin(); i != items.end(); i++)
		{
			output << *i << endl;
		}
		output << endl;

		store.UpdateQuality();
	}

	Approvals::verify(output.str());
}