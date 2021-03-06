#pragma once
#include "stdafx.h"

#define INVENTORY_SLOT_BAG 0x1
#define INVENTORY_SLOT_CHEST 0x2
#define INVENTORY_SLOT_LWEAP 0x3
#define INVENTORY_SLOT_RWEAP 0x4
#define INVENTORY_SLOT_HEAD 0x5	
#define INVENTORY_SLOT_NECK 0x6
#define INVENTORY_SLOT_LEFTRING 0x7
#define INVENTORY_SLOT_RIGHTRING 0x8
#define INVENTORY_SLOT_GLOVES 0x9
#define INVENTORY_SLOT_BOOTS 0xa
#define INVENTORY_SLOT_BELT 0xb
#define INVENTORY_SLOT_POTIONS 0xc
#define INVENTORY_SLOT_LWEAP_ALT 0xf
#define INVENTORY_SLOT_RWEAP_ALT 0x10


std::wstring slotToString(DWORD slot);