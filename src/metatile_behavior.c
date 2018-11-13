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

bool8 sub_8059BF0(u8 metatileBehavior)
{
  u8 result = metatileBehavior - 0x6A;

  if(result > 1)
      result = FALSE;
  else
      result = TRUE;

  return result;
}

bool8 sub_8059C0C(u8 metatileBehavior)
{
  u8 result = FALSE;

  if(metatileBehavior == MB_6C)
    result = TRUE;

  return result;
}

bool8 sub_8059C20(u8 metatileBehavior)
{
  u8 result = FALSE;

  if(metatileBehavior == MB_6D)
    result = TRUE;

  return result;
}

bool8 sub_8059C34(u8 metatileBehavior)
{
  u8 result = FALSE;

  if(metatileBehavior == MB_6E)
    result = TRUE;

  return result;
}

bool8 sub_8059C48(u8 metatileBehavior)
{
  u8 result = FALSE;

  if(metatileBehavior == MB_6F)
    result = TRUE;

  return result;
}

bool8 sub_8059C5C(u8 metatileBehavior)
{
  u8 result = FALSE;
  u8 result2 = metatileBehavior - MB_6C;

  if(result2 < 4)
    result = TRUE;

  return result;
}

bool8 sub_8059C78(u8 metatileBehavior)
{
  if(metatileBehavior == MB_61)
    return TRUE;
  else
    return FALSE;
}

bool8 sub_8059C8C(u8 metatileBehavior)
{
  if(metatileBehavior == MB_60)
    return TRUE;
  else
    return FALSE;
}

bool8 sub_8059CA0(u8 metatileBehavior)
{
  return FALSE;
}

extern u8 sTileBitAttributes[];

bool8 sub_8059CA4(u8 metatileBehavior)
{
  if(sTileBitAttributes[metatileBehavior] & 1)
    return TRUE;
  else
    return FALSE;
}

bool8 sub_8059CC8(u8 metatileBehavior)
{
  if(metatileBehavior == MB_11)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsEastArrowWarp(u8 metatileBehavior)
{
  if(metatileBehavior == MB_EAST_ARROW_WARP)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsWestArrowWarp(u8 metatileBehavior)
{
  if(metatileBehavior == MB_WEST_ARROW_WARP)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsNorthArrowWarp(u8 metatileBehavior)
{
  if(metatileBehavior == MB_NORTH_ARROW_WARP)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsSouthArrowWarp(u8 metatileBehavior)
{
  if(metatileBehavior == MB_SOUTH_ARROW_WARP)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_UnusedIsArrowWarp(u8 metatileBehavior)
{
  u8 result = FALSE;

  if(MetatileBehavior_IsEastArrowWarp(metatileBehavior)
  || MetatileBehavior_IsWestArrowWarp(metatileBehavior)
  || MetatileBehavior_IsNorthArrowWarp(metatileBehavior)
  || MetatileBehavior_IsSouthArrowWarp(metatileBehavior))
    result = TRUE;

  return result;
}

bool8 MetatileBehavior_IsForcedMovementTile(u8 metatileBehavior)
{
  if((metatileBehavior >= MB_WALK_EAST && metatileBehavior <= MB_UNKNOWN_MOVEMENT_48)
    ||(metatileBehavior >= MB_EASTWARD_CURRENT && metatileBehavior <= MB_SOUTHWARD_CURRENT)
    || metatileBehavior == MB_WATERFALL
    || metatileBehavior == MB_ICE
    || (metatileBehavior >= MB_UNKNOWN_MOVEMENT_54 && metatileBehavior <= MB_UNKNOWN_MOVEMENT_57))
      return TRUE;
  else
    return FALSE;
}
