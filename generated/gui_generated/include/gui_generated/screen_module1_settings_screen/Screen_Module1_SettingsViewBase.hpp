/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN_MODULE1_SETTINGS_VIEW_BASE_HPP
#define SCREEN_MODULE1_SETTINGS_VIEW_BASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen_module1_settings_screen/Screen_Module1_SettingsPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/containers/Slider.hpp>
#include <touchgfx/widgets/RadioButton.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/canvas/Line.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/RadioButtonGroup.hpp>

class Screen_Module1_SettingsViewBase : public touchgfx::View<Screen_Module1_SettingsPresenter>
{
public:
    Screen_Module1_SettingsViewBase();
    virtual ~Screen_Module1_SettingsViewBase() {}

    virtual void setupScreen();

    /*
     * Custom Action Handlers
     */
    virtual void setNewValue()
    {
        // Override and implement this function in Screen_Module1_SettingsView
    }

    virtual void updateValueToSet(int value)
    {
        // Override and implement this function in Screen_Module1_SettingsView
    }

    virtual void enableParameterButtonPushed()
    {
        // Override and implement this function in Screen_Module1_SettingsView
    }

    virtual void disableParameterButtonPushed()
    {
        // Override and implement this function in Screen_Module1_SettingsView
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box backgroundBox_Black;
    touchgfx::ButtonWithLabel buttonWithLabel_SetValue;
    touchgfx::Slider slider_Value;
    touchgfx::RadioButton radioButtonParameter2;
    touchgfx::TextArea textArea_Parameter2;
    touchgfx::RadioButton radioButtonParameter1;
    touchgfx::TextArea textArea_Parameter1;
    touchgfx::TextAreaWithOneWildcard textArea_ValueToSet;
    touchgfx::TextArea textArea_ParameterToSet;
    touchgfx::TextArea textArea_Title;
    touchgfx::TextArea textArea_Parameter3;
    touchgfx::TextArea textArea_Parameter4;
    touchgfx::RadioButton radioButtonParameter3;
    touchgfx::RadioButton radioButtonParameter4;
    touchgfx::ButtonWithLabel buttonWithLabel_Back;
    touchgfx::TextAreaWithOneWildcard textArea_CPU_Usage;
    touchgfx::TextArea textArea_Parameter5;
    touchgfx::TextArea textArea_Parameter6;
    touchgfx::TextArea textArea_Parameter7;
    touchgfx::TextArea textArea_Parameter8;
    touchgfx::RadioButton radioButtonParameter5;
    touchgfx::RadioButton radioButtonParameter6;
    touchgfx::RadioButton radioButtonParameter7;
    touchgfx::RadioButton radioButtonParameter8;
    touchgfx::Line line1;
    touchgfx::PainterRGB565 line1Painter;
    touchgfx::ButtonWithLabel buttonWithLabel_EnableParameter;
    touchgfx::TextArea textArea_Parameter9;
    touchgfx::TextArea textArea_Parameter10;
    touchgfx::RadioButton radioButtonParameter9;
    touchgfx::RadioButton radioButtonParameter10;
    touchgfx::ButtonWithLabel buttonWithLabel_DisableParameter;
    touchgfx::RadioButtonGroup<10> radioButtonGroup;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA_VALUETOSET_SIZE = 12;
    touchgfx::Unicode::UnicodeChar textArea_ValueToSetBuffer[TEXTAREA_VALUETOSET_SIZE];
    static const uint16_t TEXTAREA_CPU_USAGE_SIZE = 6;
    touchgfx::Unicode::UnicodeChar textArea_CPU_UsageBuffer[TEXTAREA_CPU_USAGE_SIZE];

private:

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value);

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen_Module1_SettingsViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<Screen_Module1_SettingsViewBase, const touchgfx::Slider&, int> sliderValueChangedCallback;

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 12000;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

};

#endif // SCREEN_MODULE1_SETTINGS_VIEW_BASE_HPP