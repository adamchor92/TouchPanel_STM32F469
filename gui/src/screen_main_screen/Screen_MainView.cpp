#include <gui/screen_main_screen/Screen_MainView.hpp>
#include <cstring>

#ifndef SIMULATOR
#include "stm32469i_discovery.h" //for LED driving
#endif

Screen_MainView::Screen_MainView()
{

}

void Screen_MainView::setupScreen()
{
#ifndef SIMULATOR
  /*Restart UART RX*/
  extern uint8_t UART_ReceivedFrame[FRAME_SIZE];
  
  HAL_UART_DeInit(Model::m_pHuart6);
  HAL_UART_Init(Model::m_pHuart6);
  
  NVIC_EnableIRQ(USART6_IRQn);
  
  HAL_UART_Receive_IT(Model::m_pHuart6, UART_ReceivedFrame, FRAME_SIZE);
  
  char activeModuleString[10] = {0};
  
  /*Activate Module buttons of active modules*/
  if(Model::isModuleActive(1) == true)
  {
    buttonWithLabel_Module1.setAlpha(255);
    buttonWithLabel_Module1.setTouchable(true);
    
    strcat(activeModuleString, "1 ");
  }
  else
  {
    buttonWithLabel_Module1.setAlpha(100);
    buttonWithLabel_Module1.setTouchable(false);
  }
  
  if(Model::isModuleActive(2) == true)
  {
    buttonWithLabel_Module2.setAlpha(255);
    buttonWithLabel_Module2.setTouchable(true);
    
    strcat(activeModuleString, "2 ");
  }
  else
  {
    buttonWithLabel_Module2.setAlpha(100);
    buttonWithLabel_Module2.setTouchable(false);
  }
  
  if(Model::isModuleActive(3) == true)
  {
    buttonWithLabel_Module3.setAlpha(255);
    buttonWithLabel_Module3.setTouchable(true);
    
    strcat(activeModuleString, "3 ");
  }
  else
  {
    buttonWithLabel_Module3.setAlpha(100);
    buttonWithLabel_Module3.setTouchable(false);
  }
  
  /*If no modules active*/
  if(Model::isModuleActive(1) == false && Model::isModuleActive(2) == false && Model::isModuleActive(3) == false)
  {
    Unicode::strncpy(textArea_ActiveModuleBuffer,"None", 10);
  }
  
  strcat(activeModuleString, "\n");
  
  Unicode::strncpy(textArea_ActiveModuleBuffer, activeModuleString, 10);
  
  buttonWithLabel_Module1.invalidate();
  buttonWithLabel_Module2.invalidate();
  buttonWithLabel_Module3.invalidate();
  textArea_ActiveModule.invalidate();
#endif
}

void Screen_MainView::tearDownScreen()
{
  
}

void Screen_MainView::clearLeds()
{
#ifndef SIMULATOR
  BSP_LED_Off(LED1);
  BSP_LED_Off(LED2);
  BSP_LED_Off(LED3); 
  BSP_LED_Off(LED4);
#endif
}

void Screen_MainView::processInitFrame(UARTFrameStruct_t & s_UARTFrame)
{
#ifndef SIMULATOR
  printf("Processing init frame\n");
  
  switch(s_UARTFrame.module)
  {
  case '1':
    buttonWithLabel_Module1.setAlpha(255);
    buttonWithLabel_Module1.setTouchable(true);
    
    Model::activateModule(1);
    printf("Active module 1\n");
    break;
    
  case '2':
    buttonWithLabel_Module2.setAlpha(255);
    buttonWithLabel_Module2.setTouchable(true);
    
    Model::activateModule(2);
    printf("Active module 2\n");
    break;
    
  case '3':
    buttonWithLabel_Module3.setAlpha(255);
    buttonWithLabel_Module3.setTouchable(true);
    
    Model::activateModule(3);
    printf("Active module 3\n");
    break;
  }
  
  buttonWithLabel_Module1.invalidate();
  buttonWithLabel_Module2.invalidate();
  buttonWithLabel_Module3.invalidate();
  textArea_ActiveModule.invalidate();
  
  printf("Init frame processed\n");
  
  setupScreen();
#endif
}

void Screen_MainView::updateCpuUsage(uint8_t value)
{  
  Unicode::snprintf(textArea_CPU_UsageBuffer,4,"%d",value);
  textArea_CPU_Usage.invalidate();
}