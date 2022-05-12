#ifndef ENGINE_T
#define ENGINE_T

struct engine_t;

// allocate memory
struct engine_t* engine_new();

// construct
void engine_ctor(struct engine_t*);

// destruct
void engine_dtor(struct engine_t*);

// behaviour functions
void engine_on(struct engine_t*);
void engine_off(struct engine_t*);
double engine_get_temperature(struct engine_t*);

#endif