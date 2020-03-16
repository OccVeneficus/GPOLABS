﻿#pragma once
#include <string>

using namespace std;

struct Flight
{
	string Departure;
	string Arrival;
	int MinutesTimeOfFlight; //TODO: FlightTimeMinutes - предлогов of или артиклей the/a не надо. См. образование родительного падежа в англ.
};

Flight* MakeFlight(string departure, string arrival, int minutesTimeOfFlight); //TODO: не забыть переименовать здесь
Flight* CopyFlight(Flight* flight);