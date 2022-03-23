#include <gui/screen1_screen/Screen1View.hpp>

#include "main.h"

	uint8_t dotPressed = 0;
	uint8_t switchPressed = 0;
	uint8_t freqReady = 0;
	uint8_t miReady = 0;

	float miScreenBuffer = 0.0;
	uint32_t freqScreenBuffer = 0;

	uint32_t miBuffer = 0;

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::fillBuffer(uint8_t foo)
{
	if(switchPressed == 1)
		{

			if(dotPressed == 0)
			{
				miScreenBuffer = (miScreenBuffer*10) + foo;
			}else
			{
				miScreenBuffer = miScreenBuffer + (foo/10.0);
			}

		miBuffer = (miBuffer*10) + foo;

		Unicode::snprintfFloat(textAreaMIBuffer, 4, "%1.2f", miScreenBuffer);
		textAreaMI.invalidate();

		}else
		{

		freqScreenBuffer = (freqScreenBuffer*10) + foo;

		Unicode::snprintf(textAreaFreqBuffer, 3, "%d", freqScreenBuffer);
		textAreaFreq.invalidate();

		}
}

void Screen1View::button9Clicked()
{
	fillBuffer(9);
}
void Screen1View::button8Clicked()
{
	fillBuffer(8);
}
void Screen1View::button0Clicked()
{
	fillBuffer(0);
}
void Screen1View::button3Clicked()
{
	fillBuffer(3);
}
void Screen1View::button2Clicked()
{
	fillBuffer(2);
}
void Screen1View::button1Clicked()
{
	fillBuffer(1);
}
void Screen1View::button6Clicked()
{
	fillBuffer(6);
}
void Screen1View::button5Clicked()
{
	fillBuffer(5);
}
void Screen1View::button4Clicked()
{
	fillBuffer(4);
}
void Screen1View::button7Clicked()
{
	fillBuffer(7);
}
void Screen1View::buttonSwitchClicked()
{
	switchPressed = !switchPressed;
	dotPressed = 0;
}
void Screen1View::buttonSendClicked()
{
    if(miReady == 1 && freqReady == 1) //togglelarÄ± tekrar off a cek
    {
 	   dotPressed = 0;

 	   miReady = 0;
 	   toggleButtonMI.forceState(0);
 	   toggleButtonMI.invalidate();

 	   freqReady = 0;
 	   toggleButtonFreq.forceState(0);
 	   toggleButtonFreq.invalidate();

 	   adjustMIAndFreq(freqScreenBuffer, miScreenBuffer);
    }
}
void Screen1View::buttonClearClicked()
{
	dotPressed = 0;
	freqReady = 0;
	miReady = 0;

	miBuffer = 0;
	miScreenBuffer = 0.0;
	freqScreenBuffer = 0;

	toggleButtonMI.forceState(0);
	toggleButtonMI.invalidate();
	toggleButtonFreq.forceState(0);
	toggleButtonFreq.invalidate();

	Unicode::snprintfFloat(textAreaMIBuffer, 4, "%3.2f", miScreenBuffer);
	Unicode::snprintf(textAreaFreqBuffer, 3, "%d", freqScreenBuffer);
	textAreaMI.invalidate();
	textAreaFreq.invalidate();
}
void Screen1View::buttonDotClicked()
{
	dotPressed = 1;
}
void Screen1View::buttonFreqToggled()
{
	freqReady = 1;
}
void Screen1View::buttonMIToggled()
{
	miReady = 1;
}
void Screen1View::buttonPowerClicked()
{
	buttonClearClicked();
	adjustMIAndFreq(freqScreenBuffer, 0.0);
}
void Screen1View::button2ManualClicked()
{
	//togglePiFlag(1);
}

