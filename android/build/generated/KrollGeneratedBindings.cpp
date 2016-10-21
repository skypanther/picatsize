/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/td/gwtt93_563d0h5204_vr8w700000gn/T/timpoulsen/picatsize-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/td/gwtt93_563d0h5204_vr8w700000gn/T/timpoulsen/picatsize-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.skypanther.picatsize.PicatsizeModule.h"


#line 13 "/private/var/folders/td/gwtt93_563d0h5204_vr8w700000gn/T/timpoulsen/picatsize-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 1, duplicates = 0 */

class PicatsizeBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
PicatsizeBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
PicatsizeBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 1,
      MIN_WORD_LENGTH = 40,
      MAX_WORD_LENGTH = 40,
      MIN_HASH_VALUE = 40,
      MAX_HASH_VALUE = 40
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 15 "/private/var/folders/td/gwtt93_563d0h5204_vr8w700000gn/T/timpoulsen/picatsize-generated/KrollGeneratedBindings.gperf"
      {"com.skypanther.picatsize.PicatsizeModule", ::com::skypanther::picatsize::PicatsizeModule::bindProxy, ::com::skypanther::picatsize::PicatsizeModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 16 "/private/var/folders/td/gwtt93_563d0h5204_vr8w700000gn/T/timpoulsen/picatsize-generated/KrollGeneratedBindings.gperf"

