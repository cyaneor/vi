#include <vi/version.h>
/* Дополнительные модули */
#include <vi/stringify.h>

const vi_str_raw_t
vi_version()
{
    return vi_stringify_args(VI_VERSION_MAJOR.VI_VERSION_MINOR.VI_VERSION_PATCH);
}

vi_return_t
vi_version_major()
{
    return VI_VERSION_MAJOR;
}

vi_return_t
vi_version_minor()
{
    return VI_VERSION_MINOR;
}

vi_return_t
vi_version_patch()
{
    return VI_VERSION_PATCH;
}