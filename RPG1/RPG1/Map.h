#pragma once
class Map
{
public:
	Map();
	~Map();
	int current_Map[5][5] = { {0,1,2,3,4},
							  {1,2,3,4,0},
							  {2,3,4,0,1},
							  {3,4,0,1,3},
							  {4,0,1,2,3} };
	int cur_H;
	int cur_V;
	int cur_city;
	//string map_name(int i, int j);
	void show_map();
};

