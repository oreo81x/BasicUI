#pragma once

#ifndef COLOR_HPP
#define COLOR_HPP

#include <Windows.h>
#include <iostream>

namespace text {

	// Codes
	static const int _black = 0;
	static const int _blue = 1;
	static const int _green = 2;
	static const int _cyan = 3;
	static const int _red = 4;
	static const int _purple = 5;
	static const int _yellow = 6;
	static const int _default = 7;
	static const int _grey = 8;
	static const int _light_blue = 9;
	static const int _light_green = 10;
	static const int _light_cyan = 11;
	static const int _light_red = 12;
	static const int _magenta = 13;
	static const int _light_yellow = 14;
	static const int _bright_white = 15;
	// front and background colors
	static const int _black_on_blue = 16;
	static const int _blue_on_blue = 17;
	static const int _green_on_blue = 18;
	static const int _cyan_on_blue = 19;
	static const int _red_on_blue = 20;
	static const int _purple_on_blue = 21;
	static const int _yellow_on_blue = 22;
	static const int _white_on_blue = 23;
	static const int _grey_on_blue = 24;
	static const int _light_blue_on_blue = 25;
	static const int _light_green_on_blue = 26;
	static const int _light_cyan_on_blue = 27;
	static const int _light_red_on_blue = 28;
	static const int _magenta_on_blue = 29;
	static const int _light_yellow_on_blue = 30;
	static const int _bright_white_on_blue = 31;

	static const int _black_on_green = 32;
	static const int _blue_on_green = 33;
	static const int _green_on_green = 34;
	static const int _cyan_on_green = 35;
	static const int _red_on_green = 36;
	static const int _purple_on_green = 37;
	static const int _yellow_on_green = 38;
	static const int _white_on_green = 39;
	static const int _grey_on_green = 40;
	static const int _light_blue_on_green = 41;
	static const int _light_green_on_green = 42;
	static const int _light_cyan_on_green = 43;
	static const int _light_red_on_green = 44;
	static const int _magenta_on_green = 45;
	static const int _light_yellow_on_green = 46;
	static const int _bright_white_on_green = 47;

	static const int _black_on_cyan = 48;
	static const int _blue_on_cyan = 49;
	static const int _green_on_cyan = 50;
	static const int _cyan_on_cyan = 51;
	static const int _red_on_cyan = 52;
	static const int _purple_on_cyan = 53;
	static const int _yellow_on_cyan = 54;
	static const int _white_on_cyan = 55;
	static const int _grey_on_cyan = 56;
	static const int _light_blue_on_cyan = 57;
	static const int _light_green_on_cyan = 58;
	static const int _light_cyan_on_cyan = 59;
	static const int _light_red_on_cyan = 60;
	static const int _magenta_on_cyan = 61;
	static const int _light_yellow_on_cyan = 62;
	static const int _bright_white_on_cyan = 63;

	static const int _black_on_red = 64;
	static const int _blue_on_red = 65;
	static const int _green_on_red = 66;
	static const int _cyan_on_red = 67;
	static const int _red_on_red = 68;
	static const int _purple_on_red = 69;
	static const int _yellow_on_red = 70;
	static const int _white_on_red = 71;
	static const int _grey_on_red = 72;
	static const int _light_blue_on_red = 73;
	static const int _light_green_on_red = 74;
	static const int _light_cyan_on_red = 75;
	static const int _light_red_on_red = 76;
	static const int _magenta_on_red = 77;
	static const int _light_yellow_on_red = 78;
	static const int _bright_white_on_red = 79;

	static const int _black_on_purple = 80;
	static const int _blue_on_purple = 81;
	static const int _green_on_purple = 82;
	static const int _cyan_on_purple = 83;
	static const int _red_on_purple = 84;
	static const int _purple_on_purple = 85;
	static const int _yellow_on_purple = 86;
	static const int _white_on_purple = 87;
	static const int _grey_on_purple = 88;
	static const int _light_blue_on_purple = 89;
	static const int _light_green_on_purple = 90;
	static const int _light_cyan_on_purple = 91;
	static const int _light_red_on_purple = 92;
	static const int _magenta_on_purple = 93;
	static const int _light_yellow_on_purple = 94;
	static const int _bright_white_on_purple = 95;

	static const int _black_on_yellow = 96;
	static const int _blue_on_yellow = 97;
	static const int _green_on_yellow = 98;
	static const int _cyan_on_yellow = 99;
	static const int _red_on_yellow = 100;
	static const int _purple_on_yellow = 101;
	static const int _yellow_on_yellow = 102;
	static const int _white_on_yellow = 103;
	static const int _grey_on_yellow = 104;
	static const int _light_blue_on_yellow = 105;
	static const int _light_green_on_yellow = 106;
	static const int _light_cyan_on_yellow = 107;
	static const int _light_red_on_yellow = 108;
	static const int _magenta_on_yellow = 109;
	static const int _light_yellow_on_yellow = 110;
	static const int _bright_white_on_yellow = 111;

	static const int _black_on_white = 112;
	static const int _blue_on_white = 113;
	static const int _green_on_white = 114;
	static const int _cyan_on_white = 115;
	static const int _red_on_white = 116;
	static const int _purple_on_white = 117;
	static const int _yellow_on_white = 118;
	static const int _white_on_white = 119;
	static const int _grey_on_white = 120;
	static const int _light_blue_on_white = 121;
	static const int _light_green_on_white = 122;
	static const int _light_cyan_on_white = 123;
	static const int _light_red_on_white = 124;
	static const int _magenta_on_white = 125;
	static const int _light_yellow_on_white = 126;
	static const int _bright_white_on_white = 127;

	static const int _black_on_grey = 128;
	static const int _blue_on_grey = 129;
	static const int _green_on_grey = 130;
	static const int _cyan_on_grey = 131;
	static const int _red_on_grey = 132;
	static const int _purple_on_grey = 133;
	static const int _yellow_on_grey = 134;
	static const int _white_on_grey = 135;
	static const int _grey_on_grey = 136;
	static const int _light_blue_on_grey = 137;
	static const int _light_green_on_grey = 138;
	static const int _light_cyan_on_grey = 139;
	static const int _light_red_on_grey = 140;
	static const int _magenta_on_grey = 141;
	static const int _light_yellow_on_grey = 142;
	static const int _bright_white_on_grey = 143;

	static const int _black_on_light_blue = 144;
	static const int _blue_on_light_blue = 145;
	static const int _green_on_light_blue = 146;
	static const int _cyan_on_light_blue = 147;
	static const int _red_on_light_blue = 148;
	static const int _purple_on_light_blue = 149;
	static const int _yellow_on_light_blue = 150;
	static const int _white_on_light_blue = 151;
	static const int _grey_on_light_blue = 152;
	static const int _light_blue_on_light_blue = 153;
	static const int _light_green_on_light_blue = 154;
	static const int _light_cyan_on_light_blue = 155;
	static const int _light_red_on_light_blue = 156;
	static const int _magenta_on_light_blue = 157;
	static const int _light_yellow_on_light_blue = 158;
	static const int _bright_white_on_light_blue = 159;

	static const int _black_on_light_green = 160;
	static const int _blue_on_light_green = 161;
	static const int _green_on_light_green = 162;
	static const int _cyan_on_light_green = 163;
	static const int _red_on_light_green = 164;
	static const int _purple_on_light_green = 165;
	static const int _yellow_on_light_green = 166;
	static const int _white_on_light_green = 167;
	static const int _grey_on_light_green = 168;
	static const int _light_blue_on_light_green = 169;
	static const int _light_green_on_light_green = 170;
	static const int _light_cyan_on_light_green = 171;
	static const int _light_red_on_light_green = 172;
	static const int _magenta_on_light_green = 173;
	static const int _light_yellow_on_light_green = 174;
	static const int _bright_white_on_light_green = 175;

	static const int _black_on_light_cyan = 176;
	static const int _blue_on_light_cyan = 177;
	static const int _green_on_light_cyan = 178;
	static const int _cyan_on_light_cyan = 179;
	static const int _red_on_light_cyan = 180;
	static const int _purple_on_light_cyan = 181;
	static const int _yellow_on_light_cyan = 182;
	static const int _white_on_light_cyan = 183;
	static const int _grey_on_light_cyan = 184;
	static const int _light_blue_on_light_cyan = 185;
	static const int _light_green_on_light_cyan = 186;
	static const int _light_cyan_on_light_cyan = 187;
	static const int _light_red_on_light_cyan = 188;
	static const int _magenta_on_light_cyan = 189;
	static const int _light_yellow_on_light_cyan = 190;
	static const int _bright_white_on_light_cyan = 191;

	static const int _black_on_light_red = 192;
	static const int _blue_on_light_red = 193;
	static const int _green_on_light_red = 194;
	static const int _cyan_on_light_red = 195;
	static const int _red_on_light_red = 196;
	static const int _purple_on_light_red = 197;
	static const int _yellow_on_light_red = 198;
	static const int _white_on_light_red = 199;
	static const int _grey_on_light_red = 200;
	static const int _light_blue_on_light_red = 201;
	static const int _light_green_on_light_red = 202;
	static const int _light_cyan_on_light_red = 203;
	static const int _light_red_on_light_red = 204;
	static const int _magenta_on_light_red = 205;
	static const int _light_yellow_on_light_red = 206;
	static const int _bright_white_on_light_red = 207;

	static const int _black_on_magenta = 208;
	static const int _blue_on_magenta = 209;
	static const int _green_on_magenta = 210;
	static const int _cyan_on_magenta = 211;
	static const int _red_on_magenta = 212;
	static const int _purple_on_magenta = 213;
	static const int _yellow_on_magenta = 214;
	static const int _white_on_magenta = 215;
	static const int _grey_on_magenta = 216;
	static const int _light_blue_on_magenta = 217;
	static const int _light_green_on_magenta = 218;
	static const int _light_cyan_on_magenta = 219;
	static const int _light_red_on_magenta = 220;
	static const int _magenta_on_magenta = 221;
	static const int _light_yellow_on_magenta = 222;
	static const int _bright_white_on_magenta = 223;

	static const int _black_on_light_yellow = 224;
	static const int _blue_on_light_yellow = 225;
	static const int _green_on_light_yellow = 226;
	static const int _cyan_on_light_yellow = 227;
	static const int _red_on_light_yellow = 228;
	static const int _purple_on_light_yellow = 229;
	static const int _yellow_on_light_yellow = 230;
	static const int _white_on_light_yellow = 231;
	static const int _grey_on_light_yellow = 232;
	static const int _light_blue_on_light_yellow = 233;
	static const int _light_green_on_light_yellow = 234;
	static const int _light_cyan_on_light_yellow = 235;
	static const int _light_red_on_light_yellow = 236;
	static const int _magenta_on_light_yellow = 237;
	static const int _light_yellow_on_light_yellow = 238;
	static const int _bright_white_on_light_yellow = 239;

	static const int _black_on_bright_white = 240;
	static const int _blue_on_bright_white = 241;
	static const int _green_on_bright_white = 242;
	static const int _cyan_on_bright_white = 243;
	static const int _red_on_bright_white = 244;
	static const int _purple_on_bright_white = 245;
	static const int _yellow_on_bright_white = 246;
	static const int _white_on_bright_white = 247;
	static const int _grey_on_bright_white = 248;
	static const int _light_blue_on_bright_white = 249;
	static const int _light_green_on_bright_white = 250;
	static const int _light_cyan_on_bright_white = 251;
	static const int _light_red_on_bright_white = 252;
	static const int _magenta_on_bright_white = 253;
	static const int _light_yellow_on_bright_white = 254;
	static const int _bright_white_on_bright_white = 255;
	// End

	// setColor()
	// to change text
	void setColor(int _code) {
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(handle, _code);
	}

	void getBack();

	template < typename Auto >
	void black(Auto _text) { setColor(_black); std::cout << _text; getBack(); }

	template < typename Auto >
	void blue(Auto _text) { setColor(_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void green(Auto _text) { setColor(_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void cyan(Auto _text) { setColor(_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void red(Auto _text) { setColor(_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void purple(Auto _text) { setColor(_purple); std::cout << _text; getBack(); }

	template < typename Auto >
	void yellow(Auto _text) { setColor(_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void Default(Auto _text) { setColor(_default); std::cout << _text; getBack(); }

	template < typename Auto >
	void grey(Auto _text) { setColor(_grey); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_blue(Auto _text) { setColor(_light_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_green(Auto _text) { setColor(_light_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_cyan(Auto _text) { setColor(_light_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_red(Auto _text) { setColor(_light_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void magenta(Auto _text) { setColor(_magenta); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_yellow(Auto _text) { setColor(_light_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void bright_white(Auto _text) { setColor(_bright_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void black_on_blue(Auto _text) { setColor(_black_on_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void blue_on_blue(Auto _text) { setColor(_blue_on_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void green_on_blue(Auto _text) { setColor(_green_on_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void cyan_on_blue(Auto _text) { setColor(_cyan_on_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void red_on_blue(Auto _text) { setColor(_red_on_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void purple_on_blue(Auto _text) { setColor(_purple_on_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void yellow_on_blue(Auto _text) { setColor(_yellow_on_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void white_on_blue(Auto _text) { setColor(_white_on_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void grey_on_blue(Auto _text) { setColor(_grey_on_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_blue_on_blue(Auto _text) { setColor(_light_blue_on_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_green_on_blue(Auto _text) { setColor(_light_green_on_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_cyan_on_blue(Auto _text) { setColor(_light_cyan_on_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_red_on_blue(Auto _text) { setColor(_light_red_on_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void magenta_on_blue(Auto _text) { setColor(_magenta_on_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_yellow_on_blue(Auto _text) { setColor(_light_yellow_on_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void bright_white_on_blue(Auto _text) { setColor(_bright_white_on_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void black_on_green(Auto _text) { setColor(_black_on_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void blue_on_green(Auto _text) { setColor(_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void green_on_green(Auto _text) { setColor(_green_on_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void cyan_on_green(Auto _text) { setColor(_cyan_on_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void red_on_green(Auto _text) { setColor(_red_on_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void purple_on_green(Auto _text) { setColor(_purple_on_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void yellow_on_green(Auto _text) { setColor(_yellow_on_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void white_on_green(Auto _text) { setColor(_white_on_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void grey_on_green(Auto _text) { setColor(_grey_on_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_blue_on_green(Auto _text) { setColor(_light_blue_on_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_green_on_green(Auto _text) { setColor(_light_green_on_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_cyan_on_green(Auto _text) { setColor(_light_cyan_on_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_red_on_green(Auto _text) { setColor(_light_red_on_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void magenta_on_green(Auto _text) { setColor(_magenta_on_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_yellow_on_green(Auto _text) { setColor(_light_yellow_on_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void bright_white_on_green(Auto _text) { setColor(_bright_white_on_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void black_on_cyan(Auto _text) { setColor(_black_on_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void blue_on_cyan(Auto _text) { setColor(_blue_on_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void green_on_cyan(Auto _text) { setColor(_green_on_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void cyan_on_cyan(Auto _text) { setColor(_cyan_on_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void red_on_cyan(Auto _text) { setColor(_red_on_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void purple_on_cyan(Auto _text) { setColor(_purple_on_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void yellow_on_cyan(Auto _text) { setColor(_yellow_on_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void white_on_cyan(Auto _text) { setColor(_white_on_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void grey_on_cyan(Auto _text) { setColor(_grey_on_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_blue_on_cyan(Auto _text) { setColor(_light_blue_on_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_green_on_cyan(Auto _text) { setColor(_light_green_on_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_cyan_on_cyan(Auto _text) { setColor(_light_cyan_on_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_red_on_cyan(Auto _text) { setColor(_light_red_on_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void magenta_on_cyan(Auto _text) { setColor(_magenta_on_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_yellow_on_cyan(Auto _text) { setColor(_light_yellow_on_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void bright_white_on_cyan(Auto _text) { setColor(_bright_white_on_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void black_on_red(Auto _text) { setColor(_black_on_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void blue_on_red(Auto _text) { setColor(_blue_on_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void green_on_red(Auto _text) { setColor(_green_on_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void cyan_on_red(Auto _text) { setColor(_cyan_on_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void red_on_red(Auto _text) { setColor(_red_on_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void purple_on_red(Auto _text) { setColor(_purple_on_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void yellow_on_red(Auto _text) { setColor(_yellow_on_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void white_on_red(Auto _text) { setColor(_white_on_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void grey_on_red(Auto _text) { setColor(_grey_on_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_blue_on_red(Auto _text) { setColor(_light_blue_on_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_green_on_red(Auto _text) { setColor(_light_green_on_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_cyan_on_red(Auto _text) { setColor(_light_cyan_on_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_red_on_red(Auto _text) { setColor(_light_red_on_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void magenta_on_red(Auto _text) { setColor(_magenta_on_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_yellow_on_red(Auto _text) { setColor(_light_yellow_on_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void bright_white_on_red(Auto _text) { setColor(_bright_white_on_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void black_on_purple(Auto _text) { setColor(_black_on_purple); std::cout << _text; getBack(); }

	template < typename Auto >
	void blue_on_purple(Auto _text) { setColor(_blue_on_purple); std::cout << _text; getBack(); }

	template < typename Auto >
	void green_on_purple(Auto _text) { setColor(_green_on_purple); std::cout << _text; getBack(); }

	template < typename Auto >
	void cyan_on_purple(Auto _text) { setColor(_cyan_on_purple); std::cout << _text; getBack(); }

	template < typename Auto >
	void red_on_purple(Auto _text) { setColor(_red_on_purple); std::cout << _text; getBack(); }

	template < typename Auto >
	void purple_on_purple(Auto _text) { setColor(_purple_on_purple); std::cout << _text; getBack(); }

	template < typename Auto >
	void yellow_on_purple(Auto _text) { setColor(_yellow_on_purple); std::cout << _text; getBack(); }

	template < typename Auto >
	void white_on_purple(Auto _text) { setColor(_white_on_purple); std::cout << _text; getBack(); }

	template < typename Auto >
	void grey_on_purple(Auto _text) { setColor(_grey_on_purple); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_blue_on_purple(Auto _text) { setColor(_light_blue_on_purple); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_green_on_purple(Auto _text) { setColor(_light_green_on_purple); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_cyan_on_purple(Auto _text) { setColor(_light_cyan_on_purple); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_red_on_purple(Auto _text) { setColor(_light_red_on_purple); std::cout << _text; getBack(); }

	template < typename Auto >
	void magenta_on_purple(Auto _text) { setColor(_magenta_on_purple); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_yellow_on_purple(Auto _text) { setColor(_light_yellow_on_purple); std::cout << _text; getBack(); }

	template < typename Auto >
	void bright_white_on_purple(Auto _text) { setColor(_bright_white_on_purple); std::cout << _text; getBack(); }
	
	template < typename Auto >
	void black_on_yellow(Auto _text) { setColor(_black_on_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void blue_on_yellow(Auto _text) { setColor(_blue_on_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void green_on_yellow(Auto _text) { setColor(_green_on_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void cyan_on_yellow(Auto _text) { setColor(_cyan_on_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void red_on_yellow(Auto _text) { setColor(_red_on_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void purple_on_yellow(Auto _text) { setColor(_purple_on_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void yellow_on_yellow(Auto _text) { setColor(_yellow_on_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void white_on_yellow(Auto _text) { setColor(_white_on_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void grey_on_yellow(Auto _text) { setColor(_grey_on_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_blue_on_yellow(Auto _text) { setColor(_light_blue_on_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_green_on_yellow(Auto _text) { setColor(_light_green_on_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_cyan_on_yellow(Auto _text) { setColor(_light_cyan_on_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_red_on_yellow(Auto _text) { setColor(_light_red_on_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void magenta_on_yellow(Auto _text) { setColor(_magenta_on_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_yellow_on_yellow(Auto _text) { setColor(_light_yellow_on_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void bright_white_on_yellow(Auto _text) { setColor(_bright_white_on_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void black_on_white(Auto _text) { setColor(_black_on_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void blue_on_white(Auto _text) { setColor(_blue_on_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void green_on_white(Auto _text) { setColor(_green_on_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void cyan_on_white(Auto _text) { setColor(_cyan_on_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void red_on_white(Auto _text) { setColor(_red_on_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void purple_on_white(Auto _text) { setColor(_purple_on_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void yellow_on_white(Auto _text) { setColor(_yellow_on_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void white_on_white(Auto _text) { setColor(_white_on_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void grey_on_white(Auto _text) { setColor(_grey_on_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_blue_on_white(Auto _text) { setColor(_light_blue_on_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_green_on_white(Auto _text) { setColor(_light_green_on_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_cyan_on_white(Auto _text) { setColor(_light_cyan_on_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_red_on_white(Auto _text) { setColor(_light_red_on_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void magenta_on_white(Auto _text) { setColor(_magenta_on_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_yellow_on_white(Auto _text) { setColor(_light_yellow_on_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void bright_white_on_white(Auto _text) { setColor(_bright_white_on_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void black_on_grey(Auto _text) { setColor(_black_on_grey); std::cout << _text; getBack(); }

	template < typename Auto >
	void blue_on_grey(Auto _text) { setColor(_blue_on_grey); std::cout << _text; getBack(); }

	template < typename Auto >
	void green_on_grey(Auto _text) { setColor(_green_on_grey); std::cout << _text; getBack(); }

	template < typename Auto >
	void cyan_on_grey(Auto _text) { setColor(_cyan_on_grey); std::cout << _text; getBack(); }

	template < typename Auto >
	void red_on_grey(Auto _text) { setColor(_red_on_grey); std::cout << _text; getBack(); }

	template < typename Auto >
	void purple_on_grey(Auto _text) { setColor(_purple_on_grey); std::cout << _text; getBack(); }

	template < typename Auto >
	void yellow_on_grey(Auto _text) { setColor(_yellow_on_grey); std::cout << _text; getBack(); }

	template < typename Auto >
	void white_on_grey(Auto _text) { setColor(_white_on_grey); std::cout << _text; getBack(); }

	template < typename Auto >
	void grey_on_grey(Auto _text) { setColor(_grey_on_grey); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_blue_on_grey(Auto _text) { setColor(_light_blue_on_grey); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_green_on_grey(Auto _text) { setColor(_light_green_on_grey); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_cyan_on_grey(Auto _text) { setColor(_light_cyan_on_grey); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_red_on_grey(Auto _text) { setColor(_light_red_on_grey); std::cout << _text; getBack(); }

	template < typename Auto >
	void magenta_on_grey(Auto _text) { setColor(_magenta_on_grey); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_yellow_on_grey(Auto _text) { setColor(_light_yellow_on_grey); std::cout << _text; getBack(); }

	template < typename Auto >
	void bright_white_on_grey(Auto _text) { setColor(_bright_white_on_grey); std::cout << _text; getBack(); }

	template < typename Auto >
	void black_light_blue(Auto _text) { setColor(_black_on_light_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void blue_on_light_blue(Auto _text) { setColor(_blue_on_light_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void green_on_light_blue(Auto _text) { setColor(_green_on_light_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void cyan_on_light_blue(Auto _text) { setColor(_cyan_on_light_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void red_on_light_blue(Auto _text) { setColor(_red_on_light_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void purple_on_light_blue(Auto _text) { setColor(_purple_on_light_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void yellow_on_light_blue(Auto _text) { setColor(_yellow_on_light_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void white_on_light_blue(Auto _text) { setColor(_white_on_light_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void grey_on_light_blue(Auto _text) { setColor(_grey_on_light_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_blue_on_light_blue(Auto _text) { setColor(_light_blue_on_light_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_green_on_light_blue(Auto _text) { setColor(_light_green_on_light_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_cyan_on_light_blue(Auto _text) { setColor(_light_cyan_on_light_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_red_on_light_blue(Auto _text) { setColor(_light_red_on_light_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void magenta_on_light_blue(Auto _text) { setColor(_magenta_on_light_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_yellow_on_light_blue(Auto _text) { setColor(_light_yellow_on_light_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void bright_white_on_light_blue(Auto _text) { setColor(_bright_white_on_light_blue); std::cout << _text; getBack(); }

	template < typename Auto >
	void black_on_light_green(Auto _text) { setColor(_black_on_light_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void blue_on_light_green(Auto _text) { setColor(_blue_on_light_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void green_on_light_green(Auto _text) { setColor(_green_on_light_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void cyan_on_light_green(Auto _text) { setColor(_cyan_on_light_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void red_on_light_green(Auto _text) { setColor(_red_on_light_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void purple_on_light_green(Auto _text) { setColor(_purple_on_light_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void yellow_on_light_green(Auto _text) { setColor(_yellow_on_light_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void white_on_light_green(Auto _text) { setColor(_white_on_light_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void grey_on_light_green(Auto _text) { setColor(_grey_on_light_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_blue_on_light_green(Auto _text) { setColor(_light_blue_on_light_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_green_on_light_green(Auto _text) { setColor(_light_green_on_light_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_cyan_on_light_green(Auto _text) { setColor(_light_cyan_on_light_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_red_on_light_green(Auto _text) { setColor(_light_red_on_light_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void magenta_on_light_green(Auto _text) { setColor(_magenta_on_light_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_yellow_on_light_green(Auto _text) { setColor(_light_yellow_on_light_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void bright_white_on_light_green(Auto _text) { setColor(_bright_white_on_light_green); std::cout << _text; getBack(); }

	template < typename Auto >
	void black_on_light_cyan (Auto _text) { setColor(_black_on_light_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void blue_on_light_cyan(Auto _text) { setColor(_blue_on_light_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void green_on_light_cyan(Auto _text) { setColor(_green_on_light_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void cyan_on_light_cyan(Auto _text) { setColor(_cyan_on_light_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void red_on_light_cyan(Auto _text) { setColor(_red_on_light_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void purple_on_light_cyan(Auto _text) { setColor(_purple_on_light_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void yellow_on_light_cyan(Auto _text) { setColor(_yellow_on_light_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void white_on_light_cyan(Auto _text) { setColor(_white_on_light_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void grey_on_light_cyan(Auto _text) { setColor(_grey_on_light_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_blue_on_light_cyan(Auto _text) { setColor(_light_blue_on_light_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_green_on_light_cyan(Auto _text) { setColor(_light_green_on_light_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_cyan_on_light_cyan(Auto _text) { setColor(_light_cyan_on_light_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_red_on_light_cyan(Auto _text) { setColor(_light_red_on_light_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void magenta_on_light_cyan(Auto _text) { setColor(_magenta_on_light_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_yellow_on_light_cyan(Auto _text) { setColor(_light_yellow_on_light_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void bright_white_on_light_cyan(Auto _text) { setColor(_bright_white_on_light_cyan); std::cout << _text; getBack(); }

	template < typename Auto >
	void black_on_light_red(Auto _text) { setColor(_black_on_light_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void blue_on_light_red(Auto _text) { setColor(_blue_on_light_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void green_on_light_red(Auto _text) { setColor(_green_on_light_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void cyan_on_light_red(Auto _text) { setColor(_cyan_on_light_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void red_on_light_red(Auto _text) { setColor(_red_on_light_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void purple_on_light_red(Auto _text) { setColor(_purple_on_light_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void yellow_on_light_red(Auto _text) { setColor(_yellow_on_light_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void white_on_light_red(Auto _text) { setColor(_white_on_light_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void grey_on_light_red(Auto _text) { setColor(_grey_on_light_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_blue_on_light_red(Auto _text) { setColor(_light_blue_on_light_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_green_on_light_red(Auto _text) { setColor(_light_green_on_light_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_cyan_on_light_red(Auto _text) { setColor(_light_cyan_on_light_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_red_on_light_red(Auto _text) { setColor(_light_red_on_light_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void magenta_on_light_red(Auto _text) { setColor(_magenta_on_light_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_yellow_on_light_red(Auto _text) { setColor(_light_yellow_on_light_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void bright_white_on_light_red(Auto _text) { setColor(_bright_white_on_light_red); std::cout << _text; getBack(); }

	template < typename Auto >
	void black_on_magenta(Auto _text) { setColor(_black_on_magenta); std::cout << _text; getBack(); }

	template < typename Auto >
	void blue_on_magenta(Auto _text) { setColor(_blue_on_magenta); std::cout << _text; getBack(); }

	template < typename Auto >
	void green_on_magenta(Auto _text) { setColor(_green_on_magenta); std::cout << _text; getBack(); }

	template < typename Auto >
	void cyan_on_magenta(Auto _text) { setColor(_cyan_on_magenta); std::cout << _text; getBack(); }

	template < typename Auto >
	void red_on_magenta(Auto _text) { setColor(_red_on_magenta); std::cout << _text; getBack(); }

	template < typename Auto >
	void purple_on_magenta(Auto _text) { setColor(_purple_on_magenta); std::cout << _text; getBack(); }

	template < typename Auto >
	void yellow_on_magenta(Auto _text) { setColor(_yellow_on_magenta); std::cout << _text; getBack(); }

	template < typename Auto >
	void white_on_magenta(Auto _text) { setColor(_white_on_magenta); std::cout << _text; getBack(); }

	template < typename Auto >
	void grey_on_magenta(Auto _text) { setColor(_grey_on_magenta); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_blue_on_magenta(Auto _text) { setColor(_light_blue_on_magenta); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_green_on_magenta(Auto _text) { setColor(_light_green_on_magenta); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_cyan_on_magenta(Auto _text) { setColor(_light_cyan_on_magenta); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_red_on_magenta(Auto _text) { setColor(_light_red_on_magenta); std::cout << _text; getBack(); }

	template < typename Auto >
	void magenta_on_magenta(Auto _text) { setColor(_magenta_on_magenta); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_yellow_on_magenta(Auto _text) { setColor(_light_yellow_on_magenta); std::cout << _text; getBack(); }

	template < typename Auto >
	void bright_white_on_magenta(Auto _text) { setColor(_bright_white_on_magenta); std::cout << _text; getBack(); }

	template < typename Auto >
	void black_on_light_yellow(Auto _text) { setColor(_black_on_light_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void blue_on_light_yellow(Auto _text) { setColor(_blue_on_light_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void green_on_light_yellow(Auto _text) { setColor(_green_on_light_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void cyan_on_light_yellow(Auto _text) { setColor(_cyan_on_light_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void red_on_light_yellow(Auto _text) { setColor(_red_on_light_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void purple_on_light_yellow(Auto _text) { setColor(_purple_on_light_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void yellow_on_light_yellow(Auto _text) { setColor(_yellow_on_light_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void white_on_light_yellow(Auto _text) { setColor(_white_on_light_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void grey_on_light_yellow(Auto _text) { setColor(_grey_on_light_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_blue_on_light_yellow(Auto _text) { setColor(_light_blue_on_light_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_green_on_light_yellow(Auto _text) { setColor(_light_green_on_light_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_cyan_on_light_yellow(Auto _text) { setColor(_light_cyan_on_light_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_red_on_light_yellow(Auto _text) { setColor(_light_red_on_light_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void magenta_on_light_yellow(Auto _text) { setColor(_magenta_on_light_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_yellow_on_light_yellow(Auto _text) { setColor(_light_yellow_on_light_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void bright_white_on_light_yellow(Auto _text) { setColor(_bright_white_on_light_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void black_on_bright_white(Auto _text) { setColor(_black_on_bright_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void blue_on_bright_white(Auto _text) { setColor(_blue_on_bright_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void green_on_bright_white(Auto _text) { setColor(_green_on_bright_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void cyan_on_bright_white(Auto _text) { setColor(_cyan_on_bright_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void red_on_bright_white(Auto _text) { setColor(_red_on_bright_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void purple_on_bright_white(Auto _text) { setColor(_purple_on_bright_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void yellow_on_bright_white(Auto _text) { setColor(_yellow); std::cout << _text; getBack(); }

	template < typename Auto >
	void white_on_bright_white(Auto _text) { setColor(_white_on_bright_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void grey_on_bright_white(Auto _text) { setColor(_grey_on_bright_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_blue_on_bright_white(Auto _text) { setColor(_light_blue_on_bright_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_green_on_bright_white(Auto _text) { setColor(_light_green_on_bright_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_cyan_on_bright_white(Auto _text) { setColor(_light_cyan_on_bright_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_red_on_bright_white(Auto _text) { setColor(_light_red_on_bright_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void magenta_on_bright_white(Auto _text) { setColor(_magenta_on_bright_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void light_yellow_on_bright_white(Auto _text) { setColor(_light_yellow_on_bright_white); std::cout << _text; getBack(); }

	template < typename Auto >
	void bright_white_on_bright_white(Auto _text) { setColor(_bright_white_on_bright_white); std::cout << _text; getBack(); }

	// getBack()
	// return the default color
	void getBack() { setColor(_default); }

}

#endif // COLOR_HPP
