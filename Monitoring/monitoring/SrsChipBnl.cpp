//
//  SrsChipBnl.cpp
//  mmdaq3-server
//
//  Created by Marcin Byszewski on 18/06/2012.
//  Copyright (c) 2012 CERN - PH/ADE. All rights reserved.
//

#include "SrsChipBnl.h"
#include "SrsChannelVmmArizona.h"

#include <TFile.h>

#include <iostream>

using namespace online::display;


CSrsChipBnl::CSrsChipBnl(const CSrsChipId& chip_id, const std::string& name) :
CSrsChip(chip_id, name)
{
   
}

CSrsChipBnl::~CSrsChipBnl()
{
   
}

