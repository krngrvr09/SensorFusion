#ifndef SENSOR_EVENT_H
#define SENSOR_EVENT_H
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define endll "\n";

namespace android{
	class SensorEvent{
	public:
		string type;
		vector<double> data;
		double timestamp;
		SensorEvent(string type, vector<double> data, double timestamp){
			this->type = type;
			this->data=data;
			this->timestamp = timestamp;
		}
	};
};
#endif