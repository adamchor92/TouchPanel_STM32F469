#ifndef SCREEN_MODULE1_SETTINGS_PRESENTER_HPP
#define SCREEN_MODULE1_SETTINGS_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen_Module1_SettingsView;

class Screen_Module1_SettingsPresenter : public Presenter, public ModelListener
{
public:
    Screen_Module1_SettingsPresenter(Screen_Module1_SettingsView& v);
    
    virtual void notifyNewValueToSet(UartPacket & uartPacket);
    void notifyNewCpuUsageValue(uint8_t value);

    virtual ~Screen_Module1_SettingsPresenter() {};

private:
    Screen_Module1_SettingsPresenter();

    Screen_Module1_SettingsView& view;
};

#endif
