#include "pch.h"
#include "Map.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

Map::Map()
{
	cur_H = 3;
	cur_V = 4;
	cur_city = current_Map[cur_H][cur_V];
}


Map::~Map()
{
}

/*string Map::map_name(int i, int j) {
	int temp = current_Map[i][j];
	switch (temp) {
	case 0: {return "§ø²ø1"; break; }
	case 1: {return "§ø²ø2"; break; }
	case 2: {return "§ø²ø3"; break; }
	case 3: {return "§ø²ø4"; break; }
	case 4: {return "§ø²ø5"; break; }
	default:return"error";
	}
}*/

//current_Map[cur_H][cur_V+1]
//map_name(cur_H,cur_V +1)

void Map::show_map()
{
	cout << "0=°Ó©± , 1=¿ò¸ñ , 2 =¦a¤U«° , 3=¼o¼V , 4=¯ó­ì" << endl;
	if (cur_V == 0 && cur_H == 0) {
		cout <<
			"YOU" << "===" << current_Map[cur_H][cur_V + 1] << endl <<
			"||" << setw(5) << "||" << endl <<
			"||" << setw(5) << "||" << endl <<
			current_Map[cur_V + 1][cur_H] << "====" << current_Map[cur_H + 1][cur_V + 1] << endl;
	}
	else if (cur_H == 0 && cur_V == 4) {
		cout <<
			current_Map[cur_H][cur_V - 1] << "====" << current_Map[cur_H + 1][cur_V - 1] << endl <<
			"||" << setw(5) << "||" << endl <<
			"||" << setw(5) << "||" << endl <<
			"YOU" << "===" << current_Map[cur_H + 1][cur_V];
	}
	else if (cur_H == 4 && cur_V == 0) {
		cout <<
			 current_Map[cur_H - 1][cur_V] << "===" << "YOU" << endl <<
			"||" << setw(5) << "||" << endl <<
			"||" << setw(5) << "||" << endl <<
			current_Map[cur_H - 1][cur_V + 1] << "====" << current_Map[cur_H][cur_V + 1] << endl;
	}
	else if (cur_H == 4 && cur_V == 4) {
		cout <<
			current_Map[cur_H - 1][cur_V - 1] << "====" << current_Map[cur_V - 1][cur_H] << endl <<
			"||" << setw(5) << "||" << endl <<
			"||" << setw(5) << "||" << endl <<
			current_Map[cur_V][cur_H - 1] << "===" << "YOU" << endl;
	}
	else if (cur_V == 0) {
		cout <<
			current_Map[cur_H - 1][cur_V] << "====" << "YOU"<< "===" << current_Map[cur_H + 1][cur_V] << endl <<
			"||" << setw(5) << "||" << setw(5) << "||" << endl <<
			"||" << setw(5) << "||" << setw(5) << "||" << endl <<
			current_Map[cur_H - 1][cur_V + 1] << "====" << current_Map[cur_H][cur_V + 1] << "====" << current_Map[cur_H + 1][cur_V + 1];
	}
	else if (cur_V == 4) {
		cout <<
			current_Map[cur_H - 1][cur_V - 1] << "====" << current_Map[cur_H][cur_V - 1] << "====" << current_Map[cur_H + 1][cur_V - 1] << endl <<
			"||" << setw(5) << "||" << setw(5) << "||" << endl <<
			"||" << setw(5) << "||" << setw(5) << "||" << endl <<
			current_Map[cur_H - 1][cur_V] << "====" << "YOU" << "===" << current_Map[cur_H + 1][cur_V] << endl;
	}
}
