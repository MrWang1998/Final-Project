//
//  Header.h
//  Plant
//
//  Created by 周昱程 on 2019/5/13.
//  Copyright © 2019 周昱程. All rights reserved.
//

#ifndef Header_h
#define Header_h

class Plant{
private:
    int plantNumber;
    int plantEnergy;
    State state;
    static int count;
public:
    Plant(int pn, int pe) : plantNumber(pn), plantEnergy(pe){}
    Plant(Plant& p){
        plantNumber = p.plantNumber;
        plantEnergy = p.plantEnergy;
    }
    void setState();
    State getState();
    void grew();
    int getPlantNumber();
    int getPlantEnergy();
    static int showCount() { return count; }
    void showPlant();
};

#endif /* Header_h */
