/*You are given a sack which can hold grain of weight w. You have grains of n different varieties, each weighing weighti kg and having a value of ₹ moneyi. What is the maximum worth of grain the sack can be filled with?*/
#include<iostream>
#include<vector>
using namespace std;
//This is the Grain class definition
class Grain {
public:
    int weight, value;
    Grain(int weight, int value) {
        this->weight = weight;
        this->value = value;
    }
};

bool compare(Grain *g1,Grain *g2)
{
	double ratio1=g1->value/(1.0 * g1->weight),ratio2=g2->value/(1.0 * g2->weight);
	return ratio1 < ratio2;
}
double maxSackValue(vector<Grain*> &grains, int w) {
    // add your logic here

	vector<double> ratio(grains.size());
	double total_val=0.00,r;
	int curr_wt=0,s;
	for(int i=0;i<grains.size();++i)
	{
		ratio[i]=grains[i]->value/(1.0 * grains[i]->weight);
		
	}
	
	sort(grains.begin(),grains.end(),compare);
	int i=grains.size()-1,j;
	while(i>=0 && curr_wt<=w)
	{
		s=curr_wt;
		r=grains[i]->value/(1.0 * grains[i]->weight);
		curr_wt+=grains[i]->weight;
		if(curr_wt<=w)
			total_val+=grains[i]->value;
		else
			break;
		i--;
		
	}
	
	
	if((curr_wt-w)>0)
	{
		float net=w-s;
		
		total_val+=r * net;
	}
	return total_val;
		
	
}