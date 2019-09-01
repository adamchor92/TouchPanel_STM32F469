/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN_MODULE2_GRAPH_VIEW_BASE_HPP
#define SCREEN_MODULE2_GRAPH_VIEW_BASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen_module2_graph_screen/Screen_Module2_GraphPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>

class Screen_Module2_GraphViewBase : public touchgfx::View<Screen_Module2_GraphPresenter>
{
public:
    Screen_Module2_GraphViewBase();
    virtual ~Screen_Module2_GraphViewBase() {}

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
    touchgfx::Callback<Screen_Module2_GraphViewBase, const touchgfx::AbstractButton&> buttonCallback;

};

#endif // SCREEN_MODULE2_GRAPH_VIEW_BASE_HPP
