#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void button9Clicked();
    virtual void button8Clicked();
    virtual void buttonSwitchClicked();
    virtual void buttonSendClicked();
    virtual void button0Clicked();
    virtual void buttonClearClicked();
    virtual void button3Clicked();
    virtual void button2Clicked();
    virtual void button1Clicked();
    virtual void button6Clicked();
    virtual void button5Clicked();
    virtual void button4Clicked();
    virtual void button7Clicked();
    virtual void buttonDotClicked();
    virtual void buttonFreqToggled();
    virtual void buttonMIToggled();
    virtual void buttonPowerClicked();

    void fillBuffer(uint8_t);

protected:
};

#endif // SCREEN1VIEW_HPP
