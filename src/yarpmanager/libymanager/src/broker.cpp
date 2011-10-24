/*
 *  Yarp Modules Manager
 *  Copyright: 2011 (C) Robotics, Brain and Cognitive Sciences - Italian Institute of Technology (IIT)
 *  Authors: Ali Paikan <ali.paikan@iit.it>
 * 
 *  Copy Policy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 *
 */


#include "broker.h"

unsigned int Broker::UNIQUEID = 0;

Broker::Broker()
{
}

Broker::~Broker()
{
}

unsigned int Broker::generateID(void) 
{ 
	return Broker::UNIQUEID++; 
}
