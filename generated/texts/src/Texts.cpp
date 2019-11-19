/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <stdarg.h>
#include <touchgfx/Texts.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/TypedText.hpp>
#include <texts/TypedTextDatabase.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <touchgfx/TextProvider.hpp>

touchgfx::Font::StringWidthFunctionPointer touchgfx::Font::getStringWidthFunction = &touchgfx::Font::getStringWidthLTR;
touchgfx::LCD::DrawStringFunctionPointer touchgfx::LCD::drawStringFunction = &touchgfx::LCD::drawStringLTR;
touchgfx::TextProvider::UnicodeConverterInitFunctionPointer touchgfx::TextProvider::unicodeConverterInitFunction = static_cast<touchgfx::TextProvider::UnicodeConverterInitFunctionPointer>(0);
touchgfx::TextProvider::UnicodeConverterFunctionPointer touchgfx::TextProvider::unicodeConverterFunction = static_cast<touchgfx::TextProvider::UnicodeConverterFunctionPointer>(0);

//Default typed text database
extern const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[];

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const touchgfx::Unicode::UnicodeChar texts_all_languages[] TEXT_LOCATION_FLASH_ATTRIBUTE =
{
    0x56, 0x61, 0x6c, 0x75, 0x65, 0x3a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2, 0x0, // @0 "Value:             <>"
    0x43, 0x75, 0x72, 0x72, 0x65, 0x6e, 0x74, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2, 0x0, // @21 "Current           <>"
    0x50, 0x6f, 0x77, 0x65, 0x72, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2, 0x0, // @41 "Power             <>"
    0x54, 0x79, 0x70, 0x65, 0x20, 0x49, 0x44, 0x3a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2, 0x0, // @61 "Type ID:          <>"
    0x53, 0x69, 0x67, 0x6e, 0x49, 0x44, 0x3a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2, 0x0, // @81 "SignID:           <>"
    0x56, 0x6f, 0x6c, 0x74, 0x61, 0x67, 0x65, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2, 0x0, // @101 "Voltage           <>"
    0x50, 0x61, 0x72, 0x61, 0x6d, 0x32, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2, 0x0, // @121 "Param2           <>"
    0x50, 0x61, 0x72, 0x61, 0x6d, 0x31, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2, 0x0, // @140 "Param1           <>"
    0x46, 0x72, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x63, 0x79, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2, 0x0, // @159 "Frequency       <>"
    0x4d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x20, 0x49, 0x44, 0x3a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2, 0x0, // @177 "Module ID:      <>"
    0x53, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x20, 0x49, 0x44, 0x3a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2, 0x0, // @195 "Source ID:      <>"
    0x41, 0x63, 0x74, 0x69, 0x76, 0x65, 0x20, 0x6d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x3a, 0x20, 0x2, 0x0, // @213 "Active module: <>"
    0x50, 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, 0x65, 0x72, 0x20, 0x49, 0x44, 0x3a, 0x20, 0x20, 0x2, 0x0, // @230 "Parameter ID:  <>"
    0x43, 0x50, 0x55, 0x20, 0x55, 0x73, 0x61, 0x67, 0x65, 0x3a, 0x20, 0x2, 0x25, 0x0, // @247 "CPU Usage: <>%"
    0x54, 0x69, 0x6d, 0x65, 0x20, 0x72, 0x61, 0x6e, 0x67, 0x65, 0x3a, 0x2, 0x0, // @261 "Time range:<>"
    0x4d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x20, 0x32, 0x20, 0x53, 0x65, 0x74, 0x74, 0x69, 0x6e, 0x67, 0x73, 0x0, // @274 "Module 2 Settings"
    0x44, 0x69, 0x73, 0x61, 0x62, 0x6c, 0x65, 0x20, 0x50, 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, 0x65, 0x72, 0x0, // @292 "Disable Parameter"
    0x4d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x20, 0x31, 0x20, 0x53, 0x65, 0x74, 0x74, 0x69, 0x6e, 0x67, 0x73, 0x0, // @310 "Module 1 Settings"
    0x4d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x20, 0x33, 0x20, 0x53, 0x65, 0x74, 0x74, 0x69, 0x6e, 0x67, 0x73, 0x0, // @328 "Module 3 Settings"
    0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x20, 0x50, 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, 0x65, 0x72, 0x0, // @346 "Enable Parameter"
    0x55, 0x41, 0x52, 0x54, 0x20, 0x52, 0x58, 0x20, 0x44, 0x65, 0x62, 0x75, 0x67, 0x0, // @363 "UART RX Debug"
    0x4d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x20, 0x31, 0x20, 0x49, 0x6e, 0x66, 0x6f, 0x0, // @377 "Module 1 Info"
    0x4d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x20, 0x33, 0x20, 0x49, 0x6e, 0x66, 0x6f, 0x0, // @391 "Module 3 Info"
    0x4d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x20, 0x32, 0x20, 0x49, 0x6e, 0x66, 0x6f, 0x0, // @405 "Module 2 Info"
    0x41, 0x75, 0x74, 0x6f, 0x20, 0x59, 0x20, 0x72, 0x61, 0x6e, 0x67, 0x65, 0x0, // @419 "Auto Y range"
    0x59, 0x2d, 0x61, 0x78, 0x69, 0x73, 0x20, 0x6d, 0x61, 0x78, 0x0, // @432 "Y-axis max"
    0x43, 0x6c, 0x65, 0x61, 0x72, 0x20, 0x4c, 0x45, 0x44, 0x73, 0x0, // @443 "Clear LEDs"
    0x53, 0x65, 0x74, 0x20, 0x72, 0x61, 0x6e, 0x67, 0x65, 0x73, 0x0, // @454 "Set ranges"
    0x59, 0x2d, 0x61, 0x78, 0x69, 0x73, 0x20, 0x6d, 0x69, 0x6e, 0x0, // @465 "Y-axis min"
    0x55, 0x41, 0x52, 0x54, 0x5f, 0x44, 0x65, 0x62, 0x75, 0x67, 0x0, // @476 "UART_Debug"
    0x4d, 0x61, 0x69, 0x6e, 0x20, 0x4d, 0x65, 0x6e, 0x75, 0x0, // @487 "Main Menu"
    0x53, 0x65, 0x74, 0x20, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x0, // @497 "Set value"
    0x4e, 0x65, 0x77, 0x20, 0x54, 0x65, 0x78, 0x74, 0x0, // @507 "New Text"
    0x4d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x20, 0x33, 0x0, // @516 "Module 3"
    0x4d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x20, 0x32, 0x0, // @525 "Module 2"
    0x4d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x20, 0x31, 0x0, // @534 "Module 1"
    0x53, 0x69, 0x67, 0x6e, 0x61, 0x6c, 0x73, 0x0, // @543 "Signals"
    0x2d, 0x31, 0x30, 0x30, 0x30, 0x0, // @551 "-1000"
    0x56, 0x61, 0x6c, 0x75, 0x65, 0x0, // @557 "Value"
    0x47, 0x72, 0x61, 0x70, 0x68, 0x0, // @563 "Graph"
    0x4e, 0x6f, 0x6e, 0x65, 0x0, // @569 "None"
    0x42, 0x61, 0x63, 0x6b, 0x0, // @574 "Back"
    0x37, 0x32, 0x30, 0x0, // @579 "720"
    0x2b, 0x0, // @583 "+"
    0x2d, 0x0 // @585 "-"
};
extern uint32_t const indicesGb[];

//array holding dynamically installed languages
struct TranslationHeader
{
    uint32_t offset_to_texts;
    uint32_t offset_to_indices;
    uint32_t offset_to_typedtext;
};
static const TranslationHeader* languagesArray[1] = { 0 };

//Compiled and linked in languages
static const uint32_t* const staticLanguageIndices[] =
{
    indicesGb
};

touchgfx::LanguageId touchgfx::Texts::currentLanguage = static_cast<touchgfx::LanguageId>(0);
static const touchgfx::Unicode::UnicodeChar* currentLanguagePtr = 0;
static const uint32_t* currentLanguageIndices = 0;

void touchgfx::Texts::setLanguage(touchgfx::LanguageId id)
{
    const touchgfx::TypedText::TypedTextData* currentLanguageTypedText = 0;
    if (id < 1)
    {
        if (languagesArray[id] != 0)
        {
            //dynamic translation is added
            const TranslationHeader* translation = languagesArray[id];
            currentLanguagePtr = (const touchgfx::Unicode::UnicodeChar*)(((const uint8_t*)translation) + translation->offset_to_texts);
            currentLanguageIndices = (const uint32_t*)(((const uint8_t*)translation) + translation->offset_to_indices);
            currentLanguageTypedText = (const touchgfx::TypedText::TypedTextData*)(((const uint8_t*)translation) + translation->offset_to_typedtext);
        }
        else
        {
            //compiled and linked in languages
            currentLanguagePtr = texts_all_languages;
            currentLanguageIndices = staticLanguageIndices[id];
            currentLanguageTypedText = typedTextDatabaseArray[id];
        }
    }

    if (currentLanguageTypedText)
    {
        currentLanguage = id;
        touchgfx::TypedText::registerTypedTextDatabase(currentLanguageTypedText,
                                                       TypedTextDatabase::getFonts(), TypedTextDatabase::getInstanceSize());
    }
}

void touchgfx::Texts::setTranslation(touchgfx::LanguageId id, const void* translation)
{
    languagesArray[id] = (const TranslationHeader*)translation;
}

const touchgfx::Unicode::UnicodeChar* touchgfx::Texts::getText(TypedTextId id) const
{
    return &currentLanguagePtr[currentLanguageIndices[id]];
}

