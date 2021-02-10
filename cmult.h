#ifdef _WIN32
#ifdef _MSC_VER
#ifdef __cplusplus
#define EXPORT_SYMBOL extern "C" __declspec(dllexport)
#else
#define EXPORT_SYMBOL __declspec(dllexport)
#endif
#else
#ifdef __cplusplus
#define EXPORT_SYMBOL extern "C" __declspec(dllexport)
#else
#define EXPORT_SYMBOL __declspec(dllexport)
#endif
#endif
#endif

EXPORT_SYMBOL float cmult(int int_param, float float_param);
EXPORT_SYMBOL float cppmult(int int_param, float float_param);