#include "stdint.h"

//
//  Font data for Arial 8pt
//

// Character bitmaps for Arial 8pt
const uint8_t arial_8ptBitmaps[] =
{
	// @0 '(' (11 pixels wide)
	//       #
	//      #
	//     #
	//     #
	//     #
	//     #
	//     #
	//     #
	//      #
	//       #
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111100, 0b00000010, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000010, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @22 ')' (11 pixels wide)
	//     #
	//      #
	//       #
	//       #
	//       #
	//       #
	//       #
	//       #
	//      #
	//     #
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000010, 0b11111100, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000010, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @44 '+' (11 pixels wide)
	//
	//
	//      #
	//      #
	//    #####
	//      #
	//      #
	//
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b00010000, 0b00010000, 0b01111100, 0b00010000, 0b00010000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @66 ',' (11 pixels wide)
	//
	//
	//
	//
	//
	//
	//
	//      #
	//      #
	//      #
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b10000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @88 '-' (11 pixels wide)
	//
	//
	//
	//
	//
	//     ###
	//
	//
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00100000, 0b00100000, 0b00100000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @110 '.' (11 pixels wide)
	//
	//
	//
	//
	//
	//
	//
	//      #
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b10000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @132 '0' (11 pixels wide)
	//    ###
	//   #   #
	//   #   #
	//   #   #
	//   #   #
	//   #   #
	//   #   #
	//    ###
	//
	//
	0b00000000, 0b00000000, 0b01111110, 0b10000001, 0b10000001, 0b10000001, 0b01111110, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @154 '1' (11 pixels wide)
	//     #
	//    ##
	//   # #
	//     #
	//     #
	//     #
	//     #
	//     #
	//
	//
	0b00000000, 0b00000000, 0b00000100, 0b00000010, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @176 '2' (11 pixels wide)
	//    ###
	//   #   #
	//       #
	//       #
	//      #
	//     #
	//    #
	//   #####
	//
	//
	0b00000000, 0b00000000, 0b10000010, 0b11000001, 0b10100001, 0b10010001, 0b10001110, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @198 '3' (11 pixels wide)
	//    ###
	//   #   #
	//       #
	//     ##
	//       #
	//       #
	//   #   #
	//    ###
	//
	//
	0b00000000, 0b00000000, 0b01000010, 0b10000001, 0b10001001, 0b10001001, 0b01110110, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @220 '4' (11 pixels wide)
	//      #
	//     ##
	//    # #
	//    # #
	//   #  #
	//   #####
	//      #
	//      #
	//
	//
	0b00000000, 0b00000000, 0b00110000, 0b00101100, 0b00100010, 0b11111111, 0b00100000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @242 '5' (11 pixels wide)
	//    ####
	//    #
	//   #
	//   ####
	//       #
	//       #
	//   #   #
	//    ###
	//
	//
	0b00000000, 0b00000000, 0b01001100, 0b10001011, 0b10001001, 0b10001001, 0b01110001, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @264 '6' (11 pixels wide)
	//    ###
	//   #   #
	//   #
	//   ####
	//   #   #
	//   #   #
	//   #   #
	//    ###
	//
	//
	0b00000000, 0b00000000, 0b01111110, 0b10001001, 0b10001001, 0b10001001, 0b01110010, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @286 '7' (11 pixels wide)
	//   #####
	//      #
	//      #
	//     #
	//     #
	//    #
	//    #
	//    #
	//
	//
	0b00000000, 0b00000000, 0b00000001, 0b11100001, 0b00011001, 0b00000111, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @308 '8' (11 pixels wide)
	//    ###
	//   #   #
	//   #   #
	//    ###
	//   #   #
	//   #   #
	//   #   #
	//    ###
	//
	//
	0b00000000, 0b00000000, 0b01110110, 0b10001001, 0b10001001, 0b10001001, 0b01110110, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @330 '9' (11 pixels wide)
	//    ###
	//   #   #
	//   #   #
	//   #   #
	//    ####
	//       #
	//   #   #
	//    ###
	//
	//
	0b00000000, 0b00000000, 0b01001110, 0b10010001, 0b10010001, 0b10010001, 0b01111110, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @352 '=' (11 pixels wide)
	//
	//
	//
	//    #####
	//
	//    #####
	//
	//
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b00101000, 0b00101000, 0b00101000, 0b00101000, 0b00101000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @374 'A' (11 pixels wide)
	//      #
	//     # #
	//     # #
	//     # #
	//    #   #
	//    #####
	//   #     #
	//   #     #
	//
	//
	0b00000000, 0b00000000, 0b11000000, 0b00110000, 0b00101110, 0b00100001, 0b00101110, 0b00110000, 0b11000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @396 'B' (11 pixels wide)
	//   #####
	//   #    #
	//   #    #
	//   ######
	//   #    #
	//   #    #
	//   #    #
	//   #####
	//
	//
	0b00000000, 0b00000000, 0b11111111, 0b10001001, 0b10001001, 0b10001001, 0b10001001, 0b01111110, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @418 'C' (11 pixels wide)
	//     ###
	//    #   #
	//   #
	//   #
	//   #
	//   #
	//    #   #
	//     ###
	//
	//
	0b00000000, 0b00000000, 0b00111100, 0b01000010, 0b10000001, 0b10000001, 0b10000001, 0b01000010, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @440 'D' (11 pixels wide)
	//   ####
	//   #   #
	//   #    #
	//   #    #
	//   #    #
	//   #    #
	//   #   #
	//   ####
	//
	//
	0b00000000, 0b00000000, 0b11111111, 0b10000001, 0b10000001, 0b10000001, 0b01000010, 0b00111100, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @462 'E' (11 pixels wide)
	//    #####
	//    #
	//    #
	//    #####
	//    #
	//    #
	//    #
	//    #####
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b10001001, 0b10001001, 0b10001001, 0b10001001, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @484 'F' (11 pixels wide)
	//    #####
	//    #
	//    #
	//    ####
	//    #
	//    #
	//    #
	//    #
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b00001001, 0b00001001, 0b00001001, 0b00000001, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @506 'G' (11 pixels wide)
	//     ###
	//    #   #
	//   #     #
	//   #
	//   #   ###
	//   #     #
	//    #   #
	//     ###
	//
	//
	0b00000000, 0b00000000, 0b00111100, 0b01000010, 0b10000001, 0b10000001, 0b10010001, 0b01010010, 0b00110100, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @528 'H' (11 pixels wide)
	//   #    #
	//   #    #
	//   #    #
	//   ######
	//   #    #
	//   #    #
	//   #    #
	//   #    #
	//
	//
	0b00000000, 0b00000000, 0b11111111, 0b00001000, 0b00001000, 0b00001000, 0b00001000, 0b11111111, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @550 'I' (11 pixels wide)
	//     #
	//     #
	//     #
	//     #
	//     #
	//     #
	//     #
	//     #
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @572 'J' (11 pixels wide)
	//       #
	//       #
	//       #
	//       #
	//       #
	//    #  #
	//    #  #
	//     ##
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b01100000, 0b10000000, 0b10000000, 0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @594 'K' (11 pixels wide)
	//   #    #
	//   #   #
	//   #  #
	//   # ##
	//   ## #
	//   #   #
	//   #   #
	//   #    #
	//
	//
	0b00000000, 0b00000000, 0b11111111, 0b00010000, 0b00001000, 0b00011100, 0b01100010, 0b10000001, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @616 'L' (11 pixels wide)
	//   #
	//   #
	//   #
	//   #
	//   #
	//   #
	//   #
	//   #####
	//
	//
	0b00000000, 0b00000000, 0b11111111, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @638 'M' (11 pixels wide)
	//  #     #
	//  ##   ##
	//  ##   ##
	//  # # # #
	//  # # # #
	//  # # # #
	//  #  #  #
	//  #  #  #
	//
	//
	0b00000000, 0b11111111, 0b00000110, 0b00111000, 0b11000000, 0b00111000, 0b00000110, 0b11111111, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @660 'N' (11 pixels wide)
	//   #    #
	//   ##   #
	//   # #  #
	//   # #  #
	//   #  # #
	//   #  # #
	//   #   ##
	//   #    #
	//
	//
	0b00000000, 0b00000000, 0b11111111, 0b00000010, 0b00001100, 0b00110000, 0b01000000, 0b11111111, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @682 'O' (11 pixels wide)
	//     ###
	//    #   #
	//   #     #
	//   #     #
	//   #     #
	//   #     #
	//    #   #
	//     ###
	//
	//
	0b00000000, 0b00000000, 0b00111100, 0b01000010, 0b10000001, 0b10000001, 0b10000001, 0b01000010, 0b00111100, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @704 'P' (11 pixels wide)
	//    ####
	//    #   #
	//    #   #
	//    #   #
	//    ####
	//    #
	//    #
	//    #
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b00010001, 0b00010001, 0b00010001, 0b00001110, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @726 'Q' (11 pixels wide)
	//     ###
	//    #   #
	//   #     #
	//   #     #
	//   #     #
	//   #  ## #
	//    #   #
	//     ### #
	//
	//
	0b00000000, 0b00000000, 0b00111100, 0b01000010, 0b10000001, 0b10100001, 0b10100001, 0b01000010, 0b10111100, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @748 'R' (11 pixels wide)
	//   #####
	//   #    #
	//   #    #
	//   #####
	//   #  #
	//   #   #
	//   #   #
	//   #    #
	//
	//
	0b00000000, 0b00000000, 0b11111111, 0b00001001, 0b00001001, 0b00011001, 0b01101001, 0b10000110, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @770 'S' (11 pixels wide)
	//    ####
	//   #    #
	//   #
	//    ##
	//      ##
	//        #
	//   #    #
	//    ####
	//
	//
	0b00000000, 0b00000000, 0b01000110, 0b10001001, 0b10001001, 0b10010001, 0b10010001, 0b01100010, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @792 'T' (11 pixels wide)
	//    #####
	//      #
	//      #
	//      #
	//      #
	//      #
	//      #
	//      #
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000001, 0b11111111, 0b00000001, 0b00000001, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @814 'U' (11 pixels wide)
	//   #    #
	//   #    #
	//   #    #
	//   #    #
	//   #    #
	//   #    #
	//   #    #
	//    ####
	//
	//
	0b00000000, 0b00000000, 0b01111111, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b01111111, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @836 'V' (11 pixels wide)
	//   #     #
	//   #     #
	//    #   #
	//    #   #
	//     # #
	//     # #
	//      #
	//      #
	//
	//
	0b00000000, 0b00000000, 0b00000011, 0b00001100, 0b00110000, 0b11000000, 0b00110000, 0b00001100, 0b00000011, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @858 'W' (11 pixels wide)
	// #    #    #
	// #   # #   #
	//  #  # #  #
	//  #  # #  #
	//  # #   # #
	//  # #   # #
	//   #     #
	//   #     #
	//
	//
	0b00000011, 0b00111100, 0b11000000, 0b00110000, 0b00001110, 0b00000001, 0b00001110, 0b00110000, 0b11000000, 0b00111100, 0b00000011,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @880 'X' (11 pixels wide)
	//   #    #
	//    #  #
	//    #  #
	//     ##
	//     ##
	//    #  #
	//    #  #
	//   #    #
	//
	//
	0b00000000, 0b00000000, 0b10000001, 0b01100110, 0b00011000, 0b00011000, 0b01100110, 0b10000001, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @902 'Y' (11 pixels wide)
	//   #     #
	//    #   #
	//    #   #
	//     # #
	//      #
	//      #
	//      #
	//      #
	//
	//
	0b00000000, 0b00000000, 0b00000001, 0b00000110, 0b00001000, 0b11110000, 0b00001000, 0b00000110, 0b00000001, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @924 'Z' (11 pixels wide)
	//    #####
	//       #
	//      #
	//      #
	//     #
	//     #
	//    #
	//   ######
	//
	//
	0b00000000, 0b00000000, 0b10000000, 0b11000001, 0b10110001, 0b10001101, 0b10000011, 0b10000001, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @946 '[' (11 pixels wide)
	//     ##
	//     #
	//     #
	//     #
	//     #
	//     #
	//     #
	//     #
	//     #
	//     ##
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b00000010, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @968 ']' (11 pixels wide)
	//     ##
	//      #
	//      #
	//      #
	//      #
	//      #
	//      #
	//      #
	//      #
	//     ##
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000010, 0b00000011, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @990 'a' (11 pixels wide)
	//
	//
	//    ###
	//   #   #
	//    ####
	//   #   #
	//   #  ##
	//    ## #
	//
	//
	0b00000000, 0b00000000, 0b01101000, 0b10010100, 0b10010100, 0b01010100, 0b11111000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1012 'b' (11 pixels wide)
	//   #
	//   #
	//   # ##
	//   ##  #
	//   #   #
	//   #   #
	//   ##  #
	//   # ##
	//
	//
	0b00000000, 0b00000000, 0b11111111, 0b01001000, 0b10000100, 0b10000100, 0b01111000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1034 'c' (11 pixels wide)
	//
	//
	//     ###
	//    #   #
	//    #
	//    #
	//    #   #
	//     ###
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b01111000, 0b10000100, 0b10000100, 0b10000100, 0b01001000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1056 'd' (11 pixels wide)
	//       #
	//       #
	//    ## #
	//   #  ##
	//   #   #
	//   #   #
	//   #  ##
	//    ## #
	//
	//
	0b00000000, 0b00000000, 0b01111000, 0b10000100, 0b10000100, 0b01001000, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1078 'e' (11 pixels wide)
	//
	//
	//    ###
	//   #   #
	//   #####
	//   #
	//   #   #
	//    ###
	//
	//
	0b00000000, 0b00000000, 0b01111000, 0b10010100, 0b10010100, 0b10010100, 0b01011000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1100 'f' (11 pixels wide)
	//       #
	//      #
	//     ###
	//      #
	//      #
	//      #
	//      #
	//      #
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000100, 0b11111110, 0b00000101, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1122 'g' (11 pixels wide)
	//
	//
	//    ## #
	//   #  ##
	//   #   #
	//   #   #
	//   #  ##
	//    ## #
	//       #
	//   ####
	0b00000000, 0b00000000, 0b01111000, 0b10000100, 0b10000100, 0b01001000, 0b11111100, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000010, 0b00000010, 0b00000010, 0b00000010, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1144 'h' (11 pixels wide)
	//   #
	//   #
	//   # ##
	//   ##  #
	//   #   #
	//   #   #
	//   #   #
	//   #   #
	//
	//
	0b00000000, 0b00000000, 0b11111111, 0b00001000, 0b00000100, 0b00000100, 0b11111000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1166 'i' (11 pixels wide)
	//      #
	//
	//      #
	//      #
	//      #
	//      #
	//      #
	//      #
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111101, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1188 'j' (11 pixels wide)
	//      #
	//
	//      #
	//      #
	//      #
	//      #
	//      #
	//      #
	//      #
	//     #
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111101, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000010, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1210 'k' (11 pixels wide)
	//    #
	//    #
	//    #  #
	//    # #
	//    ##
	//    # #
	//    # #
	//    #  #
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b00010000, 0b01101000, 0b10000100, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1232 'l' (11 pixels wide)
	//      #
	//      #
	//      #
	//      #
	//      #
	//      #
	//      #
	//      #
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1254 'm' (11 pixels wide)
	//
	//
	//  # ####
	//  ## #  #
	//  #  #  #
	//  #  #  #
	//  #  #  #
	//  #  #  #
	//
	//
	0b00000000, 0b11111100, 0b00001000, 0b00000100, 0b11111100, 0b00000100, 0b00000100, 0b11111000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1276 'n' (11 pixels wide)
	//
	//
	//   ####
	//   #   #
	//   #   #
	//   #   #
	//   #   #
	//   #   #
	//
	//
	0b00000000, 0b00000000, 0b11111100, 0b00000100, 0b00000100, 0b00000100, 0b11111000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1298 'o' (11 pixels wide)
	//
	//
	//    ###
	//   #   #
	//   #   #
	//   #   #
	//   #   #
	//    ###
	//
	//
	0b00000000, 0b00000000, 0b01111000, 0b10000100, 0b10000100, 0b10000100, 0b01111000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1320 'p' (11 pixels wide)
	//
	//
	//   # ##
	//   ##  #
	//   #   #
	//   #   #
	//   ##  #
	//   # ##
	//   #
	//   #
	0b00000000, 0b00000000, 0b11111100, 0b01001000, 0b10000100, 0b10000100, 0b01111000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000011, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1342 'q' (11 pixels wide)
	//
	//
	//    ## #
	//   #  ##
	//   #   #
	//   #   #
	//   #  ##
	//    ## #
	//       #
	//       #
	0b00000000, 0b00000000, 0b01111000, 0b10000100, 0b10000100, 0b01001000, 0b11111100, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1364 'r' (11 pixels wide)
	//
	//
	//     # #
	//     ##
	//     #
	//     #
	//     #
	//     #
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111100, 0b00001000, 0b00000100, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1386 's' (11 pixels wide)
	//
	//
	//     ###
	//    #   #
	//     ##
	//       #
	//    #   #
	//     ###
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b01001000, 0b10010100, 0b10010100, 0b10100100, 0b01001000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1408 't' (11 pixels wide)
	//     #
	//     #
	//    ###
	//     #
	//     #
	//     #
	//     #
	//     ##
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b00000100, 0b11111111, 0b10000100, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1430 'u' (11 pixels wide)
	//
	//
	//   #   #
	//   #   #
	//   #   #
	//   #   #
	//   #  ##
	//    ## #
	//
	//
	0b00000000, 0b00000000, 0b01111100, 0b10000000, 0b10000000, 0b01000000, 0b11111100, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1452 'v' (11 pixels wide)
	//
	//
	//    #   #
	//    #   #
	//     # #
	//     # #
	//      #
	//      #
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b00001100, 0b00110000, 0b11000000, 0b00110000, 0b00001100, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1474 'w' (11 pixels wide)
	//
	//
	//  #   #   #
	//  #  # #  #
	//   # # # #
	//   # # # #
	//    #   #
	//    #   #
	//
	//
	0b00000000, 0b00001100, 0b00110000, 0b11000000, 0b00111000, 0b00000100, 0b00111000, 0b11000000, 0b00110000, 0b00001100, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1496 'x' (11 pixels wide)
	//
	//
	//    #   #
	//     # #
	//      #
	//      #
	//     # #
	//    #   #
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b10000100, 0b01001000, 0b00110000, 0b01001000, 0b10000100, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1518 'y' (11 pixels wide)
	//
	//
	//    #   #
	//    #   #
	//     # #
	//     # #
	//      #
	//      #
	//      #
	//     #
	0b00000000, 0b00000000, 0b00000000, 0b00001100, 0b00110000, 0b11000000, 0b00110000, 0b00001100, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000010, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,

	// @1540 'z' (11 pixels wide)
	//
	//
	//    #####
	//       #
	//      #
	//      #
	//     #
	//    #####
	//
	//
	0b00000000, 0b00000000, 0b00000000, 0b10000100, 0b11000100, 0b10110100, 0b10001100, 0b10000100, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
};

// Character descriptors for Arial 8pt
// { [Char width in bits], [Char height in bits], [Offset into arial_8ptCharBitmaps in bytes] }
const uint16_t arial_8ptDescriptors[][3] =
{
	{11, 10, 0}, 		// (
	{11, 10, 22}, 		// )
	{0, 0, 0}, 		// *
	{11, 10, 44}, 		// +
	{11, 10, 66}, 		// ,
	{11, 10, 88}, 		// -
	{11, 10, 110}, 		// .
	{0, 0, 0}, 		// /
	{11, 10, 132}, 		// 0
	{11, 10, 154}, 		// 1
	{11, 10, 176}, 		// 2
	{11, 10, 198}, 		// 3
	{11, 10, 220}, 		// 4
	{11, 10, 242}, 		// 5
	{11, 10, 264}, 		// 6
	{11, 10, 286}, 		// 7
	{11, 10, 308}, 		// 8
	{11, 10, 330}, 		// 9
	{0, 0, 0}, 		// :
	{0, 0, 0}, 		// ;
	{0, 0, 0}, 		// <
	{11, 10, 352}, 		// =
	{0, 0, 0}, 		// >
	{0, 0, 0}, 		// ?
	{0, 0, 0}, 		// @
	{11, 10, 374}, 		// A
	{11, 10, 396}, 		// B
	{11, 10, 418}, 		// C
	{11, 10, 440}, 		// D
	{11, 10, 462}, 		// E
	{11, 10, 484}, 		// F
	{11, 10, 506}, 		// G
	{11, 10, 528}, 		// H
	{11, 10, 550}, 		// I
	{11, 10, 572}, 		// J
	{11, 10, 594}, 		// K
	{11, 10, 616}, 		// L
	{11, 10, 638}, 		// M
	{11, 10, 660}, 		// N
	{11, 10, 682}, 		// O
	{11, 10, 704}, 		// P
	{11, 10, 726}, 		// Q
	{11, 10, 748}, 		// R
	{11, 10, 770}, 		// S
	{11, 10, 792}, 		// T
	{11, 10, 814}, 		// U
	{11, 10, 836}, 		// V
	{11, 10, 858}, 		// W
	{11, 10, 880}, 		// X
	{11, 10, 902}, 		// Y
	{11, 10, 924}, 		// Z
	{11, 10, 946}, 		// [
	{0, 0, 0}, 		//
	{11, 10, 968}, 		// ]
	{0, 0, 0}, 		// ^
	{0, 0, 0}, 		// _
	{0, 0, 0}, 		// `
	{11, 10, 990}, 		// a
	{11, 10, 1012}, 		// b
	{11, 10, 1034}, 		// c
	{11, 10, 1056}, 		// d
	{11, 10, 1078}, 		// e
	{11, 10, 1100}, 		// f
	{11, 10, 1122}, 		// g
	{11, 10, 1144}, 		// h
	{11, 10, 1166}, 		// i
	{11, 10, 1188}, 		// j
	{11, 10, 1210}, 		// k
	{11, 10, 1232}, 		// l
	{11, 10, 1254}, 		// m
	{11, 10, 1276}, 		// n
	{11, 10, 1298}, 		// o
	{11, 10, 1320}, 		// p
	{11, 10, 1342}, 		// q
	{11, 10, 1364}, 		// r
	{11, 10, 1386}, 		// s
	{11, 10, 1408}, 		// t
	{11, 10, 1430}, 		// u
	{11, 10, 1452}, 		// v
	{11, 10, 1474}, 		// w
	{11, 10, 1496}, 		// x
	{11, 10, 1518}, 		// y
	{11, 10, 1540}, 		// z
};
