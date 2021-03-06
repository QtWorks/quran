#ifndef GLOBALCONSTANTS_H
#define GLOBALCONSTANTS_H

// SETTINGS
#define SETTINGS_ORGANIZATION               "fpermana"
#define SETTINGS_DOMAIN                     "fpermana.id"
#define SETTINGS_APPLICATION                "Quran"
#define DB_NAME                             "quran.db"

#define CURRENT_PAGE_KEY                    "current_page"
#define FONT_SIZE_KEY                       "font_size"
#define TRANSLATION_FONT_SIZE_KEY           "translation_font_size"
#define FONT_NAME_KEY                       "font_name"
#define FONT_COLOR_KEY                      "font_color"
#define BACKGROUND_COLOR_KEY                "background_color"
#define USE_BACKGROUND_KEY                  "use_background"
#define TEXT_TYPE_KEY                       "text_type"
#define TRANSLATION_KEY                     "translation"
#define TRANSLATION_LOCALE_KEY              "translation_locale"
#define USE_TRANSLATION_KEY                 "use_translation"
#define DB_VERSION_KEY                      "db_version"

#define DEFAULT_TEXT_TYPE_KEY               "quran_text_original"
#define DEFAULT_TRANSLATION_KEY             "id_indonesian"
#ifdef WIN32
#define DEFAULT_FONT_COLOR_KEY              "#000000"
#else
#define DEFAULT_FONT_COLOR_KEY              "#ffffff"
#endif
#define DEFAULT_BACKGROUND_COLOR_KEY        "#ffffff"
#define DEFAULT_USE_BACKGROUND_KEY          0
#define DEFAULT_USE_TRANSLATION_KEY         0

#define MIN_MAJOR_VERSION                   0
#define MIN_MINOR_VERSION                   0
#define MAX_MINOR_VERSION                   99

#define CURRENT_APP_VERSION                 "1.0"
#define FIRST_RELEASE_APP_VERSION           "0.1"

#define CURRENT_DB_VERSION                 "1"
#define FIRST_RELEASE_DB_VERSION           "0"

#endif // GLOBALCONSTANTS_H
