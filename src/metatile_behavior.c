#include "global.h"
#include "metatile_behavior.h"
#include "constants/metatile_behaviors.h"

bool8 sub_8059AF0(u8 metatileBehavior)
{
  return TRUE;
}

bool8 MetatileBehavior_IsJumpEast(u8 metatileBehavior)
{
  if(metatileBehavior == MB_JUMP_EAST)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsJumpWest(u8 metatileBehavior)
{
  if(metatileBehavior == MB_JUMP_WEST)
      return TRUE;
    else
      return FALSE;
}

bool8 MetatileBehavior_IsJumpNorth(u8 metatileBehavior)
{
  if(metatileBehavior == MB_JUMP_NORTH)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsJumpSouth(u8 metatileBehavior)
{
  if(metatileBehavior == MB_JUMP_SOUTH)
    return TRUE;
  else
    return FALSE;
}

bool8 sub_8059B44(u8 metatileBehavior)
{
  if(metatileBehavior == MB_TALL_GRASS)
    return TRUE;
  else if(metatileBehavior != MB_D1)
    return FALSE;
  else
    return TRUE;
}

bool8 sub_8059B5C(u8 metatileBehavior)
{
  if(metatileBehavior == MB_21)
    return TRUE;
  else if(metatileBehavior != MB_2B)
    return FALSE;
  else
    return TRUE;
}

bool8 sub_8059B74(u8 metatileBehavior)
{
  if(metatileBehavior == MB_21)
    return TRUE;
  else if(metatileBehavior != MB_17)
    return FALSE;
  else
    return TRUE;
}

bool8 sub_8059B8C(u8 metatileBehavior)
{
  return FALSE;
}

bool8 sub_8059B90(u8 metatileBehavior)
{
  if(metatileBehavior == MB_POND_WATER
    || metatileBehavior == MB_PUDDLE
    || metatileBehavior == MB_1A
    || metatileBehavior == MB_1B
    || metatileBehavior == MB_ICE)
    return TRUE;
  else
    return FALSE;
}

// TODO: Confirm that this is accurate
bool8 MetatileBehavior_IsIce(u8 metatileBehavior)
{
  if(metatileBehavior == MB_ICE)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsWarpDoor(u8 metatileBehavior)
{
  if(metatileBehavior == MB_WARP_DOOR)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsProbablyStillWarpDoor(u8 metatileBehavior)
{
  if(metatileBehavior == MB_WARP_DOOR)
    return TRUE;
  else
    return FALSE;
}
