
/**
 * libemulation
 * ROM
 * (C) 2010 by Marc S. Ressl (mressl@umich.edu)
 * Released under the GPL
 *
 * Controls read only memory
 */

#include "OEComponent.h"

class ROM : public OEComponent
{
public:
	ROM();
	~ROM();
	
	bool setData(string name, OEData *data);
	
	bool init();
	
	OEUInt8 read(OEAddress address);
	
private:
	int size;
	int mask;
	OEData *data;
	OEUInt8 *datap;
};
