#ifdef MYDLLKA_EXPORTS
#define MYDLLKA_API __declspec(dllexport) 
#else
#define MYDLLKA_API __declspec(dllimport) 
#endif

MYDLLKA_API void Redag_Dovidka(char *_DOV);