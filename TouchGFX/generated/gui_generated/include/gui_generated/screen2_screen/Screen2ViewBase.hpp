/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN2VIEWBASE_HPP
#define SCREEN2VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class Screen2ViewBase : public touchgfx::View<Screen2Presenter>
{
public:
    Screen2ViewBase();
    virtual ~Screen2ViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void button7_p2Clicked()
    {
        // Override and implement this function in Screen2
    }

    virtual void button8_p2Clicked()
    {
        // Override and implement this function in Screen2
    }

    virtual void button9_p2Clicked()
    {
        // Override and implement this function in Screen2
    }

    virtual void button4_p2Clicked()
    {
        // Override and implement this function in Screen2
    }

    virtual void button5_p2Clicked()
    {
        // Override and implement this function in Screen2
    }

    virtual void button6_p2Clicked()
    {
        // Override and implement this function in Screen2
    }

    virtual void button1_p2Clicked()
    {
        // Override and implement this function in Screen2
    }

    virtual void button2_p2Clicked()
    {
        // Override and implement this function in Screen2
    }

    virtual void button3_p2Clicked()
    {
        // Override and implement this function in Screen2
    }

    virtual void buttonClear_p2Clicked()
    {
        // Override and implement this function in Screen2
    }

    virtual void button0_p2Clicked()
    {
        // Override and implement this function in Screen2
    }

    virtual void buttonSend_p2Clicked()
    {
        // Override and implement this function in Screen2
    }

    virtual void buttonPower_p2Clicked()
    {
        // Override and implement this function in Screen2
    }

    virtual void button2ManualClicked()
    {
        // Override and implement this function in Screen2
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::ButtonWithIcon button2Manual_p2;
    touchgfx::ButtonWithLabel button7_p2;
    touchgfx::ButtonWithLabel button8_p2;
    touchgfx::ButtonWithLabel button9_p2;
    touchgfx::ButtonWithLabel button4_p2;
    touchgfx::ButtonWithLabel button5_p2;
    touchgfx::ButtonWithLabel button6_p2;
    touchgfx::ButtonWithLabel button1_p2;
    touchgfx::ButtonWithLabel button2_p2;
    touchgfx::ButtonWithLabel button3_p2;
    touchgfx::ButtonWithLabel buttonClear_p2;
    touchgfx::ButtonWithLabel button0_p2;
    touchgfx::ButtonWithLabel buttonSend_p2;
    touchgfx::ScalableImage scalableImage1;
    touchgfx::BoxWithBorder boxWithBorder1_1;
    touchgfx::TextAreaWithOneWildcard textAreaSRPM;
    touchgfx::TextArea textAreasrpm;
    touchgfx::BoxWithBorder boxWithBorder1_1_1;
    touchgfx::TextAreaWithOneWildcard textAreaMRPM;
    touchgfx::TextArea textAreamrpm;
    touchgfx::ButtonWithIcon buttonPower_p2;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREASRPM_SIZE = 5;
    touchgfx::Unicode::UnicodeChar textAreaSRPMBuffer[TEXTAREASRPM_SIZE];
    static const uint16_t TEXTAREAMRPM_SIZE = 5;
    touchgfx::Unicode::UnicodeChar textAreaMRPMBuffer[TEXTAREAMRPM_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen2ViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREEN2VIEWBASE_HPP