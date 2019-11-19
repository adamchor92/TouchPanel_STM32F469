#include <gui/screen_module3_signals_screen/Screen_Module3_SignalsView.hpp>
#include <gui/screen_module3_graph_screen/Screen_Module3_GraphView.hpp>
#include <gui/model/Model.hpp>

#define SINE_PERIOD_DEGREES 360

Screen_Module3_SignalsView::Screen_Module3_SignalsView()
{
#ifndef SIMULATOR     
	uint16_t parameterStringDisplay[CUSTOM_PARAMETER_NAME_COUNT][PAYLOAD_SIZE] = { 0 };

	for (int i = 0; i < CUSTOM_PARAMETER_NAME_COUNT; i++)
	{
		for (int character = 0; character < PAYLOAD_SIZE; character++)
		{
			parameterStringDisplay[i][character] = Model::m_InitParametersModule3[i + CUSTOM_PARAMETER_NAME_OFFSET][character];
		}
	}

	Unicode::snprintf(textArea_Parameter1NameBuffer, TEXTAREA_PARAMETER1NAME_SIZE, "%s", parameterStringDisplay[0]);
	textArea_Parameter1Name.invalidate();

	Unicode::snprintf(textArea_Parameter2NameBuffer, TEXTAREA_PARAMETER2NAME_SIZE, "%s", parameterStringDisplay[1]);
	textArea_Parameter2Name.invalidate();

	Unicode::snprintf(textArea_Parameter3NameBuffer, TEXTAREA_PARAMETER3NAME_SIZE, "%s", parameterStringDisplay[2]);
	textArea_Parameter3Name.invalidate();

	Unicode::snprintf(textArea_Parameter4NameBuffer, TEXTAREA_PARAMETER4NAME_SIZE, "%s", parameterStringDisplay[3]);
	textArea_Parameter4Name.invalidate();
#endif

	int bottom = Screen_Module3_GraphView::m_GraphRangeBottom; //make bottom value positive for sake of calculations

	if (bottom < 0)
	{
		bottom = bottom * (-1); //make bottom value positive for sake of calculations
		setSignMin(Sign::NEGATIVE);
	}
	else
	{
		setSignMin(Sign::POSITIVE);
	}

	int top = Screen_Module3_GraphView::m_GraphRangeTop;

	if (top < 0)
	{
		top = top * (-1); //make top value positive for sake of calculations
		setSignMax(Sign::NEGATIVE);
	}
	else
	{
		setSignMax(Sign::POSITIVE);
	}

	setMinScrollWheelValues(bottom);
	setMaxScrollWheelValues(top);

	initializeScrollWheels();
}

void Screen_Module3_SignalsView::setupScreen()
{
	/*Initialize buttons' states*/
	toggleButton_Parameter1.forceState(Screen_Module3_GraphView::m_Parameter1GraphEnabled);
	toggleButton_Parameter2.forceState(Screen_Module3_GraphView::m_Parameter2GraphEnabled);
	toggleButton_Parameter3.forceState(Screen_Module3_GraphView::m_Parameter3GraphEnabled);
	toggleButton_Parameter4.forceState(Screen_Module3_GraphView::m_Parameter4GraphEnabled);
	toggleButton_Auto_Y_Range.forceState(Screen_Module3_GraphView::m_AutoRangeEnabled);

	/*Initialize sliders' values */
	slider_TimeRange.setValue(Screen_Module3_GraphView::m_GraphRangeRight / SINE_PERIOD_DEGREES);
	Unicode::snprintf(textArea_TimeRangeBuffer, 6, "%d", Screen_Module3_GraphView::m_GraphRangeRight);
	textArea_TimeRange.invalidate();
}

void Screen_Module3_SignalsView::tearDownScreen()
{

}

void Screen_Module3_SignalsView::setRanges()
{
	int minRangeValues[PAYLOAD_SIZE] = { 0 };
	int maxRangeValues[PAYLOAD_SIZE] = { 0 };

	getScrollWheelMinValues(minRangeValues);
	getScrollWheelMaxValues(maxRangeValues);

	translateScrollWheelValues(minRangeValues);
	translateScrollWheelValues(maxRangeValues);

	int minRangeValue = processScrollWheelValues(minRangeValues);
	int maxRangeValue = processScrollWheelValues(maxRangeValues);

	if (getSignMin() == Sign::NEGATIVE)
	{
		minRangeValue = minRangeValue * (-1);
	}

	if (getSignMax() == Sign::NEGATIVE)
	{
		maxRangeValue = maxRangeValue * (-1);
	}

	if (minRangeValue >= maxRangeValue)
	{
		return;
	}
	else
	{
		Screen_Module3_GraphView::setGraphRanges(minRangeValue, maxRangeValue, slider_TimeRange.getValue() * SINE_PERIOD_DEGREES);
	}
}

void Screen_Module3_SignalsView::initializeScrollWheels()
{
	scrollWheel_MinDigit1.initialize();
	scrollWheel_MinDigit2.initialize();
	scrollWheel_MinDigit3.initialize();
	scrollWheel_MinDigit4.initialize();
	scrollWheel_MinDigit5.initialize();
	scrollWheel_MinDigit6.initialize();
	scrollWheel_MinDigit7.initialize();
	scrollWheel_MinDigit8.initialize();
	scrollWheel_MinDigit9.initialize();
	scrollWheel_MinDigit10.initialize();

	scrollWheel_MaxDigit1.initialize();
	scrollWheel_MaxDigit2.initialize();
	scrollWheel_MaxDigit3.initialize();
	scrollWheel_MaxDigit4.initialize();
	scrollWheel_MaxDigit5.initialize();
	scrollWheel_MaxDigit6.initialize();
	scrollWheel_MaxDigit7.initialize();
	scrollWheel_MaxDigit8.initialize();
	scrollWheel_MaxDigit9.initialize();
	scrollWheel_MaxDigit10.initialize();
}

void Screen_Module3_SignalsView::setMinScrollWheelValues(int bottom)
{
	int rest = 0;

	rest = bottom % 10;
	scrollWheel_MinDigit1.animateToItem(rest);
	bottom = bottom / 10;

	rest = bottom % 10;
	scrollWheel_MinDigit2.animateToItem(rest);
	bottom = bottom / 10;

	rest = bottom % 10;
	scrollWheel_MinDigit3.animateToItem(rest);
	bottom = bottom / 10;

	rest = bottom % 10;
	scrollWheel_MinDigit4.animateToItem(rest);
	bottom = bottom / 10;

	rest = bottom % 10;
	scrollWheel_MinDigit5.animateToItem(rest);
	bottom = bottom / 10;

	rest = bottom % 10;
	scrollWheel_MinDigit6.animateToItem(rest);
	bottom = bottom / 10;

	rest = bottom % 10;
	scrollWheel_MinDigit7.animateToItem(rest);
	bottom = bottom / 10;

	rest = bottom % 10;
	scrollWheel_MinDigit8.animateToItem(rest);
	bottom = bottom / 10;

	rest = bottom % 10;
	scrollWheel_MinDigit9.animateToItem(rest);
	bottom = bottom / 10;

	rest = bottom % 10;
	scrollWheel_MinDigit10.animateToItem(rest);
}

void Screen_Module3_SignalsView::setMaxScrollWheelValues(int top)
{
	int rest = 0;

	rest = top % 10;
	scrollWheel_MaxDigit1.animateToItem(rest);
	top = top / 10;

	rest = top % 10;
	scrollWheel_MaxDigit2.animateToItem(rest);
	top = top / 10;

	rest = top % 10;
	scrollWheel_MaxDigit3.animateToItem(rest);
	top = top / 10;

	rest = top % 10;
	scrollWheel_MaxDigit4.animateToItem(rest);
	top = top / 10;

	rest = top % 10;
	scrollWheel_MaxDigit5.animateToItem(rest);
	top = top / 10;

	rest = top % 10;
	scrollWheel_MaxDigit6.animateToItem(rest);
	top = top / 10;

	rest = top % 10;
	scrollWheel_MaxDigit7.animateToItem(rest);
	top = top / 10;

	rest = top % 10;
	scrollWheel_MaxDigit8.animateToItem(rest);
	top = top / 10;

	rest = top % 10;
	scrollWheel_MaxDigit9.animateToItem(rest);
	top = top / 10;

	rest = top % 10;
	scrollWheel_MaxDigit10.animateToItem(rest);
}

void Screen_Module3_SignalsView::getScrollWheelMinValues(int values[])
{
	values[9] = scrollWheel_MinDigit1.getSelectedItem();
	values[8] = scrollWheel_MinDigit2.getSelectedItem();
	values[7] = scrollWheel_MinDigit3.getSelectedItem();
	values[6] = scrollWheel_MinDigit4.getSelectedItem();
	values[5] = scrollWheel_MinDigit5.getSelectedItem();
	values[4] = scrollWheel_MinDigit6.getSelectedItem();
	values[3] = scrollWheel_MinDigit7.getSelectedItem();
	values[2] = scrollWheel_MinDigit8.getSelectedItem();
	values[1] = scrollWheel_MinDigit9.getSelectedItem();
	values[0] = scrollWheel_MinDigit10.getSelectedItem();
}

void Screen_Module3_SignalsView::getScrollWheelMaxValues(int values[])
{
	values[9] = scrollWheel_MaxDigit1.getSelectedItem();
	values[8] = scrollWheel_MaxDigit2.getSelectedItem();
	values[7] = scrollWheel_MaxDigit3.getSelectedItem();
	values[6] = scrollWheel_MaxDigit4.getSelectedItem();
	values[5] = scrollWheel_MaxDigit5.getSelectedItem();
	values[4] = scrollWheel_MaxDigit6.getSelectedItem();
	values[3] = scrollWheel_MaxDigit7.getSelectedItem();
	values[2] = scrollWheel_MaxDigit8.getSelectedItem();
	values[1] = scrollWheel_MaxDigit9.getSelectedItem();
	values[0] = scrollWheel_MaxDigit10.getSelectedItem();
}

void Screen_Module3_SignalsView::translateScrollWheelValues(int values[])
{
	for (int i = 0; i < PAYLOAD_SIZE; i++)
	{
		switch (values[i])
		{
		case 0:
			values[i] = '0';
			break;
		case 1:
			values[i] = '1';
			break;
		case 2:
			values[i] = '2';
			break;
		case 3:
			values[i] = '3';
			break;
		case 4:
			values[i] = '4';
			break;
		case 5:
			values[i] = '5';
			break;
		case 6:
			values[i] = '6';
			break;
		case 7:
			values[i] = '7';
			break;
		case 8:
			values[i] = '8';
			break;
		case 9:
			values[i] = '9';
			break;
		}
	}
}

int Screen_Module3_SignalsView::processScrollWheelValues(const int values[])
{
	char asciiScrollWheelValues[PAYLOAD_SIZE + 1];

	for (int i = 0; i < PAYLOAD_SIZE; i++)
	{
		asciiScrollWheelValues[i] = values[i];
	}

	asciiScrollWheelValues[PAYLOAD_SIZE] = '\0';

	return atoi(asciiScrollWheelValues);
}

void Screen_Module3_SignalsView::setParameter1GraphVisible()
{
	if (toggleButton_Parameter1.getState() == true)
	{
		Screen_Module3_GraphView::m_Parameter1GraphEnabled = true;
	}
	else
	{
		Screen_Module3_GraphView::m_Parameter1GraphEnabled = false;
	}
}

void Screen_Module3_SignalsView::setParameter2GraphVisible()
{
	if (toggleButton_Parameter2.getState() == true)
	{
		Screen_Module3_GraphView::m_Parameter2GraphEnabled = true;
	}
	else
	{
		Screen_Module3_GraphView::m_Parameter2GraphEnabled = false;
	}
}

void Screen_Module3_SignalsView::setParameter3GraphVisible()
{
	if (toggleButton_Parameter3.getState() == true)
	{
		Screen_Module3_GraphView::m_Parameter3GraphEnabled = true;
	}
	else
	{
		Screen_Module3_GraphView::m_Parameter3GraphEnabled = false;
	}
}

void Screen_Module3_SignalsView::setParameter4GraphVisible()
{
	if (toggleButton_Parameter4.getState() == true)
	{
		Screen_Module3_GraphView::m_Parameter4GraphEnabled = true;
	}
	else
	{
		Screen_Module3_GraphView::m_Parameter4GraphEnabled = false;
	}
}

void Screen_Module3_SignalsView::pressedAutoRangeToggleButton()
{
	if (toggleButton_Auto_Y_Range.getState() == true)
	{
		Screen_Module3_GraphView::m_AutoRangeEnabled = true;
		hideManualRangeSettings();
	}
	else
	{
		Screen_Module3_GraphView::m_AutoRangeEnabled = false;
		showManualRangeSettings();
	}
}

void Screen_Module3_SignalsView::hideManualRangeSettings()
{
	textArea_Y_AxisMin.setVisible(false);
	textArea_Y_AxisMax.setVisible(false);

	toggleButton_SignMin.setVisible(false);
	toggleButton_SignMax.setVisible(false);

	scrollWheel_MinDigit1.setVisible(false);
	scrollWheel_MinDigit2.setVisible(false);
	scrollWheel_MinDigit3.setVisible(false);
	scrollWheel_MinDigit4.setVisible(false);
	scrollWheel_MinDigit5.setVisible(false);
	scrollWheel_MinDigit6.setVisible(false);
	scrollWheel_MinDigit7.setVisible(false);
	scrollWheel_MinDigit8.setVisible(false);
	scrollWheel_MinDigit9.setVisible(false);
	scrollWheel_MinDigit10.setVisible(false);

	scrollWheel_MaxDigit1.setVisible(false);
	scrollWheel_MaxDigit2.setVisible(false);
	scrollWheel_MaxDigit3.setVisible(false);
	scrollWheel_MaxDigit4.setVisible(false);
	scrollWheel_MaxDigit5.setVisible(false);
	scrollWheel_MaxDigit6.setVisible(false);
	scrollWheel_MaxDigit7.setVisible(false);
	scrollWheel_MaxDigit8.setVisible(false);
	scrollWheel_MaxDigit9.setVisible(false);
	scrollWheel_MaxDigit10.setVisible(false);

	textArea_Y_AxisMin.invalidate();
	textArea_Y_AxisMax.invalidate();

	toggleButton_SignMin.invalidate();
	toggleButton_SignMax.invalidate();

	scrollWheel_MinDigit1.invalidate();
	scrollWheel_MinDigit2.invalidate();
	scrollWheel_MinDigit3.invalidate();
	scrollWheel_MinDigit4.invalidate();
	scrollWheel_MinDigit5.invalidate();
	scrollWheel_MinDigit6.invalidate();
	scrollWheel_MinDigit7.invalidate();
	scrollWheel_MinDigit8.invalidate();
	scrollWheel_MinDigit9.invalidate();
	scrollWheel_MinDigit10.invalidate();

	scrollWheel_MaxDigit1.invalidate();
	scrollWheel_MaxDigit2.invalidate();
	scrollWheel_MaxDigit3.invalidate();
	scrollWheel_MaxDigit4.invalidate();
	scrollWheel_MaxDigit5.invalidate();
	scrollWheel_MaxDigit6.invalidate();
	scrollWheel_MaxDigit7.invalidate();
	scrollWheel_MaxDigit8.invalidate();
	scrollWheel_MaxDigit9.invalidate();
	scrollWheel_MaxDigit10.invalidate();
}

void Screen_Module3_SignalsView::showManualRangeSettings()
{
	textArea_Y_AxisMin.setVisible(true);
	textArea_Y_AxisMax.setVisible(true);

	toggleButton_SignMin.setVisible(true);
	toggleButton_SignMax.setVisible(true);

	scrollWheel_MinDigit1.setVisible(true);
	scrollWheel_MinDigit2.setVisible(true);
	scrollWheel_MinDigit3.setVisible(true);
	scrollWheel_MinDigit4.setVisible(true);
	scrollWheel_MinDigit5.setVisible(true);
	scrollWheel_MinDigit6.setVisible(true);
	scrollWheel_MinDigit7.setVisible(true);
	scrollWheel_MinDigit8.setVisible(true);
	scrollWheel_MinDigit9.setVisible(true);
	scrollWheel_MinDigit10.setVisible(true);

	scrollWheel_MaxDigit1.setVisible(true);
	scrollWheel_MaxDigit2.setVisible(true);
	scrollWheel_MaxDigit3.setVisible(true);
	scrollWheel_MaxDigit4.setVisible(true);
	scrollWheel_MaxDigit5.setVisible(true);
	scrollWheel_MaxDigit6.setVisible(true);
	scrollWheel_MaxDigit7.setVisible(true);
	scrollWheel_MaxDigit8.setVisible(true);
	scrollWheel_MaxDigit9.setVisible(true);
	scrollWheel_MaxDigit10.setVisible(true);

	textArea_Y_AxisMin.invalidate();
	textArea_Y_AxisMax.invalidate();

	toggleButton_SignMin.invalidate();
	toggleButton_SignMax.invalidate();

	scrollWheel_MinDigit1.invalidate();
	scrollWheel_MinDigit2.invalidate();
	scrollWheel_MinDigit3.invalidate();
	scrollWheel_MinDigit4.invalidate();
	scrollWheel_MinDigit5.invalidate();
	scrollWheel_MinDigit6.invalidate();
	scrollWheel_MinDigit7.invalidate();
	scrollWheel_MinDigit8.invalidate();
	scrollWheel_MinDigit9.invalidate();
	scrollWheel_MinDigit10.invalidate();

	scrollWheel_MaxDigit1.invalidate();
	scrollWheel_MaxDigit2.invalidate();
	scrollWheel_MaxDigit3.invalidate();
	scrollWheel_MaxDigit4.invalidate();
	scrollWheel_MaxDigit5.invalidate();
	scrollWheel_MaxDigit6.invalidate();
	scrollWheel_MaxDigit7.invalidate();
	scrollWheel_MaxDigit8.invalidate();
	scrollWheel_MaxDigit9.invalidate();
	scrollWheel_MaxDigit10.invalidate();
}

void Screen_Module3_SignalsView::setSignMin(Sign sign)
{
	if (sign == Sign::POSITIVE)
	{
		toggleButton_SignMin.forceState(true);
	}
	else if (sign == Sign::NEGATIVE)
	{
		toggleButton_SignMin.forceState(false);
	}
}

void Screen_Module3_SignalsView::setSignMax(Sign sign)
{
	if (sign == Sign::POSITIVE)
	{
		toggleButton_SignMax.forceState(true);
	}
	else if (sign == Sign::NEGATIVE)
	{
		toggleButton_SignMax.forceState(false);
	}
}

Screen_Module3_SignalsView::Sign Screen_Module3_SignalsView::getSignMin()
{
	if (toggleButton_SignMin.getState() == true)
	{
		return Sign::POSITIVE;
	}
	else
	{
		return Sign::NEGATIVE;
	}
}

Screen_Module3_SignalsView::Sign Screen_Module3_SignalsView::getSignMax()
{
	if (toggleButton_SignMax.getState() == true)
	{
		return Sign::POSITIVE;
	}
	else
	{
		return Sign::NEGATIVE;
	}
}

void Screen_Module3_SignalsView::updateCpuUsage(uint8_t value)
{
	Unicode::snprintf(textArea_CPU_UsageBuffer, 4, "%d", value);
	textArea_CPU_Usage.invalidate();
}

void Screen_Module3_SignalsView::scrollWheel_MinDigit1UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MinDigit2UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MinDigit3UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MinDigit4UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MinDigit5UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MinDigit6UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MinDigit7UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MinDigit8UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MinDigit9UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MinDigit10UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MaxDigit1UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MaxDigit2UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MaxDigit3UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MaxDigit4UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MaxDigit5UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MaxDigit6UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MaxDigit7UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MaxDigit8UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MaxDigit9UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}

void Screen_Module3_SignalsView::scrollWheel_MaxDigit10UpdateItem(DigitTemplate & item, int16_t itemIndex)
{
	item.setDigitWithoutComma(itemIndex);
}