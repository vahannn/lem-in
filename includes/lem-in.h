#ifndef LEM_IN
#define LEM_IN

enum input_state{
    number_of_ants,
    the_rooms,
    the_links
};


typedef struct s_general_data {
    size_t n_ants;
    size_t max_room;
    int start_room;
    int end_room;
} t_general_data;

typedef struct s_room {
    int index;
    int x;
    int y;
} t_room;

#endif
// 02703196