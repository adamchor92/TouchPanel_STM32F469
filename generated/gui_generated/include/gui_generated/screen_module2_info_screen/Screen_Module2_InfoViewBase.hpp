/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN_MODULE2_INFOVIEWBASE_HPP
#define SCREEN_MODULE2_INFOVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen_module2_info_screen/Screen_Module2_InfoPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>

class Screen_Module2_InfoViewBase : public touchgfx::View<Screen_Module2_InfoPresenter>
{
public:
    Screen_Module2_InfoViewBase();
    virtual ~Screen_Module2_InfoViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box backgroundBox_Black;
    touchgfx::TextAreaWithOneWildcard textArea_InitParameter1Name;
    touchgfx::TextArea textArea_Info;
    touchgfx::TextAreaWithOneWildcard textArea_CPU_Usage;
    touchgfx::ButtonWithLabel buttonWithLabel_Back;
    touchgfx::TextAreaWithOneWildcard textArea_InitParameter2Name;
    touchgfx::TextAreaWithOneWildcard textArea_InitParameter3Name;
    touchgfx::TextAreaWithOneWildcard textArea_InitParameter4Name;
    touchgfx::TextAreaWithOneWildcard textArea_InitParameter5Name;
    touchgfx::TextAreaWithOneWildcard textArea_InitParameter1Value;
    touchgfx::TextAreaWithOneWildcard textArea_InitParameter2Value;
    touchgfx::TextAreaWithOneWildcard textArea_InitParameter3Value;
    touchgfx::TextAreaWithOneWildcard textArea_InitParameter4Value;
    touchgfx::TextAreaWithOneWildcard textArea_InitParameter5Value;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA_INITPARAMETER1NAME_SIZE = 11;
    touchgfx::Unicode::UnicodeChar textArea_InitParameter1NameBuffer[TEXTAREA_INITPARAMETER1NAME_SIZE];
    static const uint16_t TEXTAREA_CPU_USAGE_SIZE = 6;
    touchgfx::Unicode::UnicodeChar textArea_CPU_UsageBuffer[TEXTAREA_CPU_USAGE_SIZE];
    static const uint16_t TEXTAREA_INITPARAMETER2NAME_SIZE = 11;
    touchgfx::Unicode::UnicodeChar textArea_InitParameter2NameBuffer[TEXTAREA_INITPARAMETER2NAME_SIZE];
    static const uint16_t TEXTAREA_INITPARAMETER3NAME_SIZE = 11;
    touchgfx::Unicode::UnicodeChar textArea_InitParameter3NameBuffer[TEXTAREA_INITPARAMETER3NAME_SIZE];
    static const uint16_t TEXTAREA_INITPARAMETER4NAME_SIZE = 11;
    touchgfx::Unicode::UnicodeChar textArea_InitParameter4NameBuffer[TEXTAREA_INITPARAMETER4NAME_SIZE];
    static const uint16_t TEXTAREA_INITPARAMETER5NAME_SIZE = 11;
    touchgfx::Unicode::UnicodeChar textArea_InitParameter5NameBuffer[TEXTAREA_INITPARAMETER5NAME_SIZE];
    static const uint16_t TEXTAREA_INITPARAMETER1VALUE_SIZE = 11;
    touchgfx::Unicode::UnicodeChar textArea_InitParameter1ValueBuffer[TEXTAREA_INITPARAMETER1VALUE_SIZE];
    static const uint16_t TEXTAREA_INITPARAMETER2VALUE_SIZE = 11;
    touchgfx::Unicode::UnicodeChar textArea_InitParameter2ValueBuffer[TEXTAREA_INITPARAMETER2VALUE_SIZE];
    static const uint16_t TEXTAREA_INITPARAMETER3VALUE_SIZE = 11;
    touchgfx::Unicode::UnicodeChar textArea_InitParameter3ValueBuffer[TEXTAREA_INITPARAMETER3VALUE_SIZE];
    static const uint16_t TEXTAREA_INITPARAMETER4VALUE_SIZE = 11;
    touchgfx::Unicode::UnicodeChar textArea_InitParameter4ValueBuffer[TEXTAREA_INITPARAMETER4VALUE_SIZE];
    static const uint16_t TEXTAREA_INITPARAMETER5VALUE_SIZE = 11;
    touchgfx::Unicode::UnicodeChar textArea_InitParameter5ValueBuffer[TEXTAREA_INITPARAMETER5VALUE_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen_Module2_InfoViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREEN_MODULE2_INFOVIEWBASE_HPP
