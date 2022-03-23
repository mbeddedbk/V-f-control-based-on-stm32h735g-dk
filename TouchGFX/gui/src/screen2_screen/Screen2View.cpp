#include <gui/screen2_screen/Screen2View.hpp>

#include "main.h"

uint32_t rpmScreenBuffer = 0;

Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

void Screen2View::fillBuffer(uint8_t foo)
{
	rpmScreenBuffer = (rpmScreenBuffer * 10) + foo;
	Unicode::snprintf(textAreaSRPMBuffer, 5, "%d", rpmScreenBuffer);
	textAreaSRPM.invalidate();
}

void Screen2View::button7_p2Clicked()
{
	fillBuffer(7);
}
void Screen2View::button8_p2Clicked()
{
	fillBuffer(8);
}
void Screen2View::button9_p2Clicked()
{
	fillBuffer(9);
}
void Screen2View::button4_p2Clicked()
{
	fillBuffer(4);
}
void Screen2View::button5_p2Clicked()
{
	fillBuffer(5);
}
void Screen2View::button6_p2Clicked()
{
	fillBuffer(6);
}
void Screen2View::button1_p2Clicked()
{
	fillBuffer(1);
}
void Screen2View::button2_p2Clicked()
{
	fillBuffer(2);
}
void Screen2View::button3_p2Clicked()
{
	fillBuffer(3);
}

void Screen2View::button0_p2Clicked()
{
	fillBuffer(0);
}

void Screen2View::buttonClear_p2Clicked()
{
	rpmScreenBuffer = 0;
	Unicode::snprintf(textAreaSRPMBuffer, TEXTAREASRPM_SIZE, "%d", rpmScreenBuffer);
	textAreaSRPM.invalidate();

}

void Screen2View::buttonSend_p2Clicked()
{
	togglePiFlag(1);
	//((rpmScreenBuffer - 50) < 0) ? (rpmScreenBuffer = rpmScreenBuffer) : (rpmScreenBuffer-=50);
	adjustRPM(rpmScreenBuffer);

}
void Screen2View::buttonPower_p2Clicked()
{
	buttonClear_p2Clicked();
	adjustRPM(0);
	adjustMIAndFreq(0, 0.0);
}
void Screen2View::button2DirectClicked()
{
	togglePiFlag(0);
}
void Screen2View::handleTickEvent()
{
	count++;
	if (count>10){

		count = 0;
		Unicode::snprintf(textAreaMRPMBuffer, TEXTAREAMRPM_SIZE, "%d", newAvgRpm);
		textAreaMRPM.invalidate();
	}
}




