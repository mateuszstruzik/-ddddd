#pragma once
#ifndef data_collect_h
#define data_collect_h

//#include "graph_data_prepare.h"
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<ctime>
#include<cstdlib>


using namespace std;


class data_collect
{
private:
	int n; //ilosc wierzcholkow
	//const char *data_type = { "time.txt" "0" "cost.txt" "0" "distance" "0"};
	//string data_type[3] = { "time.txt", "cost.txt", "distance.txt" };
	double calcWt, calcWc, calcWd;
	//friend graph_data_prepare;

public:
	
	double Wt = 0.4, Wc = 0.4, Wd = 0.2;
	data_collect(int vertex);
	void time_data_read_from_file(); //sluzy do odczytania danych z pliku i wstawienia ich dotablicy
	void cost_data_read_from_file();
	void distance_data_read_from_file();
	void weight_data_read_from_file();

	void weight_data_write_to_file();

	void weight_calculate();

	vector<vector<int>> time_data;
	vector<vector<int>> cost_data;
	vector<vector<int>> distance_data;
	vector<vector<double>> weight_data;

	
};
#endif // !data_h
