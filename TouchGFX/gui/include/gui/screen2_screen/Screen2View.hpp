#ifndef SCREEN2VIEW_HPP
#define SCREEN2VIEW_HPP

#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>

class Screen2View : public Screen2ViewBase
{
public:
    Screen2View();
    virtual ~Screen2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void button7_p2Clicked();
    virtual void button8_p2Clicked();
    virtual void button9_p2Clicked();
    virtual void button4_p2Clicked();
    virtual void button5_p2Clicked();
    virtual void button6_p2Clicked();
    virtual void button1_p2Clicked();
    virtual void button2_p2Clicked();
    virtual void button3_p2Clicked();
    virtual void buttonClear_p2Clicked();
    virtual void button0_p2Clicked();
    virtual void buttonSend_p2Clicked();
    virtual void buttonPower_p2Clicked();
    virtual void button2DirectClicked();

    void fillBuffer(uint8_t);
    void handleTickEvent();

protected:

    uint32_t count = 0;
};

#endif // SCREEN2VIEW_HPP
