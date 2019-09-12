/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_module1_graph_screen/Screen_Module1_GraphViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include "BitmapDatabase.hpp"

Screen_Module1_GraphViewBase::Screen_Module1_GraphViewBase() :
    buttonCallback(this, &Screen_Module1_GraphViewBase::buttonCallbackHandler)
{
    CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    backgroundBox_Black.setPosition(0, 0, 800, 480);
    backgroundBox_Black.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    textArea_CPU_Usage.setPosition(618, 451, 182, 29);
    textArea_CPU_Usage.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea_CPU_Usage.setLinespacing(0);
    Unicode::snprintf(textArea_CPU_UsageBuffer, TEXTAREA_CPU_USAGE_SIZE, "%s", TypedText(T_SINGLEUSEID145).getText());
    textArea_CPU_Usage.setWildcard(textArea_CPU_UsageBuffer);
    textArea_CPU_Usage.setTypedText(TypedText(T_SINGLEUSEID144));

    buttonWithLabel_Back.setXY(315, 421);
    buttonWithLabel_Back.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    buttonWithLabel_Back.setLabelText(TypedText(T_SINGLEUSEID179));
    buttonWithLabel_Back.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel_Back.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel_Back.setAction(buttonCallback);

    add(backgroundBox_Black);
    add(textArea_CPU_Usage);
    add(buttonWithLabel_Back);
}

void Screen_Module1_GraphViewBase::setupScreen()
{

}

void Screen_Module1_GraphViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithLabel_Back)
    {
        //Interaction_GoBack
        //When buttonWithLabel_Back clicked change screen to Screen_Module1_Data
        //Go to Screen_Module1_Data with no screen transition
        application().gotoScreen_Module1_DataScreenNoTransition();
    }
}
