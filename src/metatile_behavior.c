#include "global.h"
#include "metatile_behavior.h"
#include "constants/metatile_behaviors.h"

bool8 MetatileBehavior_UnusedReturnTrue(u8 metatileBehavior)
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

bool8 MetatileBehavior_ReturnFalse(u8 metatileBehavior)
{
  return FALSE;
}

extern u8 sTileBitAttributes[];

bool8 MetatileBehavior_IsSurfable(u8 metatileBehavior)
{
  if(sTileBitAttributes[metatileBehavior] & 1)
    return TRUE;
  else
    return FALSE;
}

bool8 sub_8059CC8(u8 metatileBehavior)
{
  if(metatileBehavior == MB_SEMI_DEEP_WATER)
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

bool8 MetatileBehavior_IsIce_2(u8 metatileBehavior)
{
  if(metatileBehavior == MB_ICE)
    return TRUE;
  else
    return FALSE;
}

bool8 sub_8059DC0(u8 metatileBehavior)
{
  if(metatileBehavior == MB_UNKNOWN_MOVEMENT_48)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsWalkNorth(u8 metatileBehavior)
{
  if(metatileBehavior == MB_WALK_NORTH)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsWalkSouth(u8 metatileBehavior)
{
  if(metatileBehavior == MB_WALK_SOUTH)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsWalkWest(u8 metatileBehavior)
{
  if(metatileBehavior == MB_WALK_WEST)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsWalkEast(u8 metatileBehavior)
{
  if(metatileBehavior == MB_WALK_EAST)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsNorthwardCurrent(u8 metatileBehavior)
{
  if(metatileBehavior == MB_NORTHWARD_CURRENT)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsSouthwardCurrent(u8 metatileBehavior)
{
  if(metatileBehavior == MB_SOUTHWARD_CURRENT)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsWestwardCurrent(u8 metatileBehavior)
{
  if(metatileBehavior == MB_WESTWARD_CURRENT)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsEastwardCurrent(u8 metatileBehavior)
{
  if(metatileBehavior == MB_EASTWARD_CURRENT)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsSlideNorth(u8 metatileBehavior)
{
  if(metatileBehavior == MB_SLIDE_NORTH)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsSlideSouth(u8 metatileBehavior)
{
  if(metatileBehavior == MB_SLIDE_SOUTH)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsSlideWest(u8 metatileBehavior)
{
  if(metatileBehavior == MB_SLIDE_WEST)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsSlideEast(u8 metatileBehavior)
{
  if(metatileBehavior == MB_SLIDE_EAST)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsCounter(u8 metatileBehavior)
{
  if(metatileBehavior == MB_COUNTER)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsPlayerFacingTVScreen(u8 metatileBehavior, u8 playerDirection)
{
  if(playerDirection != DIR_NORTH)
    return FALSE;
  else if(metatileBehavior == MB_TELEVISION)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsPC(u8 metatileBehavior)
{
  if(metatileBehavior == MB_PC)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsPondWaterOrPuddle(u8 metatileBehavior)
{
  if(metatileBehavior == MB_POND_WATER || metatileBehavior == MB_PUDDLE)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsPuddle(u8 metatileBehavior)
{
  if(metatileBehavior == MB_PUDDLE)
    return TRUE;
  else
    return FALSE;
}

bool8 sub_8059F34(u8 metatileBehavior)
{
  if(metatileBehavior == MB_TALL_GRASS || metatileBehavior == MB_D1)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_ReturnFalse_2(u8 metatileBehavior)
{
  return FALSE;
}

bool8 MetatileBehavior_ReturnFalse_3(u8 metatileBehavior)
{
  return FALSE;
}

bool8 MetatileBehavior_ReturnFalse_4(u8 metatileBehavior)
{
  return FALSE;
}

bool8 MetatileBehavior_ReturnFalse_5(u8 metatileBehavior)
{
  return FALSE;
}

bool8 MetatileBehavior_ReturnFalse_6(u8 metatileBehavior)
{
  return FALSE;
}

bool8 sub_8059F60(u8 metatileBehavior)
{
  if(metatileBehavior == MB_01)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_UnusedIsTallGrass(u8 metatileBehavior)
{
  if(metatileBehavior == MB_TALL_GRASS)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsMB_0B(u8 metatileBehavior)
{
  if(metatileBehavior == MB_0B)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsMountain(u8 metatileBehavior)
{
  if(metatileBehavior == MB_MOUNTAIN_TOP)
    return TRUE;
  else
    return FALSE;
}

bool8 sub_8059FB0(u8 metatileBehavior)
{
  if(metatileBehavior >= MB_SEMI_DEEP_WATER && metatileBehavior <= MB_DEEP_WATER)
    return TRUE;
  else
    return FALSE;
}

bool8 sub_8059FCC(u8 metatileBehavior)
{
  if(metatileBehavior == 0x19)
    return TRUE;
  else
    return FALSE;
}

bool8 sub_8059FE0(u8 metatileBehavior)
{
  if(metatileBehavior == 0x17)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsThinIce(u8 metatileBehavior)
{
  if(metatileBehavior == MB_THIN_ICE)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsCrackedIce(u8 metatileBehavior)
{
  if(metatileBehavior == MB_CRACKED_ICE)
    return TRUE;
  else
    return FALSE;
}

bool8 sub_805A01C(u8 metatileBehavior)
{
  if((metatileBehavior >= MB_SEMI_DEEP_WATER && metatileBehavior <= MB_DEEP_WATER)
    || metatileBehavior == MB_OCEAN_WATER)
    return TRUE;
  else
    return FALSE;
}

bool8 sub_805A03C(u8 metatileBehavior)
{
  if(metatileBehavior == MB_1A)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsSurfableAndNotWaterfall(u8 metatileBehavior)
{
  if(MetatileBehavior_IsSurfable(metatileBehavior)
    && !MetatileBehavior_IsWaterfall(metatileBehavior))
      return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsEastBlocked(u8 metatileBehavior)
{
  if(metatileBehavior == MB_IMPASSABLE_EAST
    || metatileBehavior == MB_IMPASSABLE_NORTHEAST
    || metatileBehavior == MB_IMPASSABLE_SOUTHEAST)
      return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsWestBlocked(u8 metatileBehavior)
{
  if(metatileBehavior == MB_IMPASSABLE_WEST
    || metatileBehavior == MB_IMPASSABLE_NORTHWEST
    || metatileBehavior == MB_IMPASSABLE_SOUTHWEST)
      return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsNorthBlocked(u8 metatileBehavior)
{
  if(metatileBehavior == MB_IMPASSABLE_NORTH
    || metatileBehavior == MB_IMPASSABLE_NORTHEAST
    || metatileBehavior == MB_IMPASSABLE_NORTHWEST)
      return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsSouthBlocked(u8 metatileBehavior)
{
  if(metatileBehavior == MB_IMPASSABLE_SOUTH
    || metatileBehavior == MB_IMPASSABLE_SOUTHEAST
    || metatileBehavior == MB_IMPASSABLE_SOUTHWEST)
      return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_ReturnFalse_7(u8 metatileBehavior)
{
  return FALSE;
}

bool8 MetatileBehavior_IsHotSprings(u8 metatileBehavior)
{
  if(metatileBehavior == 0x28)
    return TRUE;
  else
    return FALSE;
}

bool8 MetatileBehavior_IsWaterfall(u8 metatileBehavior)
{
  if(metatileBehavior == MB_WATERFALL)
    return TRUE;
  else
    return FALSE;
}
