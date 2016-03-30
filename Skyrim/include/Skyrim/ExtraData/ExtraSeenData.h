#pragma once

#include "BSExtraData.h"

/*==============================================================================
class ExtraSeenData +0000 (_vtbl=01078FB4)
0000: class ExtraSeenData
0000: |   class BSExtraData
==============================================================================*/
// 0C
class ExtraSeenData : public BSExtraData
{
public:
	enum { kExtraTypeID = (UInt32)ExtraDataType::SeenData };

	virtual ~ExtraSeenData();							// 0040A320

	// @override
	virtual UInt32	GetType(void) const override;		// 005DF220 { return 0x00000005; }

	// @members
	UInt32	* unk08;
};
