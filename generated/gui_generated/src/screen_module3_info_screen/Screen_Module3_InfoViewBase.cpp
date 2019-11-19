/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_module3_info_screen/Screen_Module3_InfoViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include "BitmapDatabase.hpp"

Screen_Module3_InfoViewBase::Screen_Module3_InfoViewBase() :
    buttonCallback(this, &Screen_Module3_InfoViewBase::buttonCallbackHandler)
{
    backgroundBox_Black.setPosition(0, 0, 800, 480);
    backgroundBox_Black.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    textArea_InitParameter1Name.setPosition(0, 90, 301, 49);
    textArea_InitParameter1Name.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_InitParameter1Name.setLinespacing(0);
    Unicode::snprintf(textArea_InitParameter1NameBuffer, TEXTAREA_INITPARAMETER1NAME_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID4462).getText());
    textArea_InitParameter1Name.setWildcard(textArea_InitParameter1NameBuffer);
    textArea_InitParameter1Name.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4461));

    textArea_Info.setXY(262, 0);
    textArea_Info.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_Info.setLinespacing(0);
    textArea_Info.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4463));

    textArea_CPU_Usage.setPosition(618, 451, 182, 29);
    textArea_CPU_Usage.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_CPU_Usage.setLinespacing(0);
    Unicode::snprintf(textArea_CPU_UsageBuffer, TEXTAREA_CPU_USAGE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID4465).getText());
    textArea_CPU_Usage.setWildcard(textArea_CPU_UsageBuffer);
    textArea_CPU_Usage.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4464));

    buttonWithLabel_Back.setXY(315, 421);
    buttonWithLabel_Back.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    buttonWithLabel_Back.setLabelText(touchgfx::TypedText(T_SINGLEUSEID4466));
    buttonWithLabel_Back.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel_Back.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel_Back.setAction(buttonCallback);

    textArea_InitParameter2Name.setPosition(0, 140, 301, 49);
    textArea_InitParameter2Name.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_InitParameter2Name.setLinespacing(0);
    Unicode::snprintf(textArea_InitParameter2NameBuffer, TEXTAREA_INITPARAMETER2NAME_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID4468).getText());
    textArea_InitParameter2Name.setWildcard(textArea_InitParameter2NameBuffer);
    textArea_InitParameter2Name.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4467));

    textArea_InitParameter3Name.setPosition(0, 190, 301, 49);
    textArea_InitParameter3Name.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_InitParameter3Name.setLinespacing(0);
    Unicode::snprintf(textArea_InitParameter3NameBuffer, TEXTAREA_INITPARAMETER3NAME_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID4470).getText());
    textArea_InitParameter3Name.setWildcard(textArea_InitParameter3NameBuffer);
    textArea_InitParameter3Name.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4469));

    textArea_InitParameter4Name.setPosition(0, 240, 301, 49);
    textArea_InitParameter4Name.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_InitParameter4Name.setLinespacing(0);
    Unicode::snprintf(textArea_InitParameter4NameBuffer, TEXTAREA_INITPARAMETER4NAME_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID4472).getText());
    textArea_InitParameter4Name.setWildcard(textArea_InitParameter4NameBuffer);
    textArea_InitParameter4Name.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4471));

    textArea_InitParameter5Name.setPosition(0, 290, 301, 49);
    textArea_InitParameter5Name.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_InitParameter5Name.setLinespacing(0);
    Unicode::snprintf(textArea_InitParameter5NameBuffer, TEXTAREA_INITPARAMETER5NAME_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID4474).getText());
    textArea_InitParameter5Name.setWildcard(textArea_InitParameter5NameBuffer);
    textArea_InitParameter5Name.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4473));

    textArea_InitParameter1Value.setPosition(301, 90, 250, 49);
    textArea_InitParameter1Value.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_InitParameter1Value.setLinespacing(0);
    Unicode::snprintf(textArea_InitParameter1ValueBuffer, TEXTAREA_INITPARAMETER1VALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID4476).getText());
    textArea_InitParameter1Value.setWildcard(textArea_InitParameter1ValueBuffer);
    textArea_InitParameter1Value.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4475));

    textArea_InitParameter2Value.setPosition(301, 140, 250, 49);
    textArea_InitParameter2Value.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_InitParameter2Value.setLinespacing(0);
    Unicode::snprintf(textArea_InitParameter2ValueBuffer, TEXTAREA_INITPARAMETER2VALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID4478).getText());
    textArea_InitParameter2Value.setWildcard(textArea_InitParameter2ValueBuffer);
    textArea_InitParameter2Value.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4477));

    textArea_InitParameter3Value.setPosition(301, 190, 250, 49);
    textArea_InitParameter3Value.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_InitParameter3Value.setLinespacing(0);
    Unicode::snprintf(textArea_InitParameter3ValueBuffer, TEXTAREA_INITPARAMETER3VALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID4480).getText());
    textArea_InitParameter3Value.setWildcard(textArea_InitParameter3ValueBuffer);
    textArea_InitParameter3Value.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4479));

    textArea_InitParameter4Value.setPosition(301, 240, 250, 49);
    textArea_InitParameter4Value.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_InitParameter4Value.setLinespacing(0);
    Unicode::snprintf(textArea_InitParameter4ValueBuffer, TEXTAREA_INITPARAMETER4VALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID4482).getText());
    textArea_InitParameter4Value.setWildcard(textArea_InitParameter4ValueBuffer);
    textArea_InitParameter4Value.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4481));

    textArea_InitParameter5Value.setPosition(301, 290, 250, 49);
    textArea_InitParameter5Value.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_InitParameter5Value.setLinespacing(0);
    Unicode::snprintf(textArea_InitParameter5ValueBuffer, TEXTAREA_INITPARAMETER5VALUE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID4484).getText());
    textArea_InitParameter5Value.setWildcard(textArea_InitParameter5ValueBuffer);
    textArea_InitParameter5Value.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4483));

    add(backgroundBox_Black);
    add(textArea_InitParameter1Name);
    add(textArea_Info);
    add(textArea_CPU_Usage);
    add(buttonWithLabel_Back);
    add(textArea_InitParameter2Name);
    add(textArea_InitParameter3Name);
    add(textArea_InitParameter4Name);
    add(textArea_InitParameter5Name);
    add(textArea_InitParameter1Value);
    add(textArea_InitParameter2Value);
    add(textArea_InitParameter3Value);
    add(textArea_InitParameter4Value);
    add(textArea_InitParameter5Value);
}

void Screen_Module3_InfoViewBase::setupScreen()
{

}

void Screen_Module3_InfoViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithLabel_Back)
    {
        //Interaction_GoBack
        //When buttonWithLabel_Back clicked change screen to Screen_Module3_Data
        //Go to Screen_Module3_Data with no screen transition
        application().gotoScreen_Module3_DataScreenNoTransition();
    }
}
