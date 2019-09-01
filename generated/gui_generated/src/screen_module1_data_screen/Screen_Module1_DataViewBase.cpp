/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_module1_data_screen/Screen_Module1_DataViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Screen_Module1_DataViewBase::Screen_Module1_DataViewBase() :
    buttonCallback(this, &Screen_Module1_DataViewBase::buttonCallbackHandler)
{
    backgroundBox_Black.setPosition(0, 0, 800, 480);
    backgroundBox_Black.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    buttonWithLabel_GoToMainMenu.setXY(340, 421);
    buttonWithLabel_GoToMainMenu.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    buttonWithLabel_GoToMainMenu.setLabelText(TypedText(T_SINGLEUSEID66));
    buttonWithLabel_GoToMainMenu.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel_GoToMainMenu.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel_GoToMainMenu.setAction(buttonCallback);

    textArea_CPU_Usage.setPosition(618, 451, 182, 29);
    textArea_CPU_Usage.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_CPU_Usage.setLinespacing(0);
    Unicode::snprintf(textArea_CPU_UsageBuffer, TEXTAREA_CPU_USAGE_SIZE, "%s", TypedText(T_SINGLEUSEID70).getText());
    textArea_CPU_Usage.setWildcard(textArea_CPU_UsageBuffer);
    textArea_CPU_Usage.setTypedText(TypedText(T_SINGLEUSEID69));

    textArea_CRC.setPosition(0, 269, 350, 49);
    textArea_CRC.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_CRC.setLinespacing(0);
    Unicode::snprintf(textArea_CRCBuffer, TEXTAREA_CRC_SIZE, "%s", TypedText(T_SINGLEUSEID72).getText());
    textArea_CRC.setWildcard(textArea_CRCBuffer);
    textArea_CRC.setTypedText(TypedText(T_SINGLEUSEID71));

    textArea_Value.setPosition(0, 220, 350, 49);
    textArea_Value.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_Value.setLinespacing(0);
    Unicode::snprintf(textArea_ValueBuffer, TEXTAREA_VALUE_SIZE, "%s", TypedText(T_SINGLEUSEID74).getText());
    textArea_Value.setWildcard(textArea_ValueBuffer);
    textArea_Value.setTypedText(TypedText(T_SINGLEUSEID73));

    textArea_ParameterID.setPosition(0, 171, 351, 49);
    textArea_ParameterID.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_ParameterID.setLinespacing(0);
    Unicode::snprintf(textArea_ParameterIDBuffer, TEXTAREA_PARAMETERID_SIZE, "%s", TypedText(T_SINGLEUSEID76).getText());
    textArea_ParameterID.setWildcard(textArea_ParameterIDBuffer);
    textArea_ParameterID.setTypedText(TypedText(T_SINGLEUSEID75));

    textArea_ModuleID.setPosition(0, 122, 351, 49);
    textArea_ModuleID.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_ModuleID.setLinespacing(0);
    Unicode::snprintf(textArea_ModuleIDBuffer, TEXTAREA_MODULEID_SIZE, "%s", TypedText(T_SINGLEUSEID78).getText());
    textArea_ModuleID.setWildcard(textArea_ModuleIDBuffer);
    textArea_ModuleID.setTypedText(TypedText(T_SINGLEUSEID77));

    textArea_SourceID.setPosition(0, 74, 351, 49);
    textArea_SourceID.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_SourceID.setLinespacing(0);
    Unicode::snprintf(textArea_SourceIDBuffer, TEXTAREA_SOURCEID_SIZE, "%s", TypedText(T_SINGLEUSEID80).getText());
    textArea_SourceID.setWildcard(textArea_SourceIDBuffer);
    textArea_SourceID.setTypedText(TypedText(T_SINGLEUSEID79));

    textArea_Title.setXY(309, 0);
    textArea_Title.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_Title.setLinespacing(0);
    textArea_Title.setTypedText(TypedText(T_SINGLEUSEID63));

    buttonWithLabel_Settings.setXY(0, 421);
    buttonWithLabel_Settings.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    buttonWithLabel_Settings.setLabelText(TypedText(T_SINGLEUSEID141));
    buttonWithLabel_Settings.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel_Settings.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel_Settings.setAction(buttonCallback);

    buttonWithLabel_Graph.setXY(170, 421);
    buttonWithLabel_Graph.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    buttonWithLabel_Graph.setLabelText(TypedText(T_SINGLEUSEID165));
    buttonWithLabel_Graph.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel_Graph.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel_Graph.setAction(buttonCallback);

    add(backgroundBox_Black);
    add(buttonWithLabel_GoToMainMenu);
    add(textArea_CPU_Usage);
    add(textArea_CRC);
    add(textArea_Value);
    add(textArea_ParameterID);
    add(textArea_ModuleID);
    add(textArea_SourceID);
    add(textArea_Title);
    add(buttonWithLabel_Settings);
    add(buttonWithLabel_Graph);
}

void Screen_Module1_DataViewBase::setupScreen()
{

}

void Screen_Module1_DataViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithLabel_GoToMainMenu)
    {
        //Interaction_GoBackToMainMenu
        //When buttonWithLabel_GoToMainMenu clicked change screen to Screen_Main
        //Go to Screen_Main with no screen transition
        application().gotoScreen_MainScreenNoTransition();
    }
    else if (&src == &buttonWithLabel_Settings)
    {
        //Interaction_GoToSettingsScreen
        //When buttonWithLabel_Settings clicked change screen to Screen_Module1_Settings
        //Go to Screen_Module1_Settings with no screen transition
        application().gotoScreen_Module1_SettingsScreenNoTransition();
    }
    else if (&src == &buttonWithLabel_Graph)
    {
        //Interaction_GoToGraphScreen
        //When buttonWithLabel_Graph clicked change screen to Screen_Module1_Graph
        //Go to Screen_Module1_Graph with no screen transition
        application().gotoScreen_Module1_GraphScreenNoTransition();
    }
}
