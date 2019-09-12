/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN_MODULE1_GRAPH_VIEW_BASE_HPP
#define SCREEN_MODULE1_GRAPH_VIEW_BASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen_module1_graph_screen/Screen_Module1_GraphPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>

class Screen_Module1_GraphViewBase : public touchgfx::View<Screen_Module1_GraphPresenter>
{
public:
    Screen_Module1_GraphViewBase();
    virtual ~Screen_Module1_GraphViewBase() {}

    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box backgroundBox_Black;
    touchgfx::TextAreaWithOneWildcard textArea_CPU_Usage;
    touchgfx::ButtonWithLabel buttonWithLabel_Back;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA_CPU_USAGE_SIZE = 6;
    touchgfx::Unicode::UnicodeChar textArea_CPU_UsageBuffer[TEXTAREA_CPU_USAGE_SIZE];

private:

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen_Module1_GraphViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 12000;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

};

#endif // SCREEN_MODULE1_GRAPH_VIEW_BASE_HPP
