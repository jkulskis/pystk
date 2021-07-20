// Copyright (C) 2002-2012 Nikolaus Gebhardt
// This file is part of the "Irrlicht Engine".
// For conditions of distribution and use, see copyright notice in irrlicht.h

#ifndef __C_OS_OPERATOR_H_INCLUDED__
#define __C_OS_OPERATOR_H_INCLUDED__

#include "IOSOperator.h"

namespace irr
{

class IrrlichtDevice;

//! The Operating system operator provides operation system specific methods and informations.
class COSOperator : public IOSOperator
{
public:

	// constructor
	COSOperator(const core::stringc& osversion, IrrlichtDevice* device);
 	COSOperator(const core::stringc& osversion);

    IrrlichtDevice* IrrDevice;

};

} // end namespace

#endif

