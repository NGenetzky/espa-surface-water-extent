
#ifndef DSWE_INPUT_H
#define DSWE_INPUT_H

#include "espa_metadata.h"

#include "dswe_const.h"


/* Structure for the 'input' data */
typedef struct {
    int lines;
    int samples;
    char *band_name[MAX_INPUT_BANDS]; /* Name of the input image files */
    FILE *band_fd[MAX_INPUT_BANDS];
} Input_Data_t;


Input_Data_t *open_input
(
    Espa_internal_meta_t *metadata, /* I: input metadata */
    bool use_toa_flag,              /* I: use TOA or SR data */
    char *dem_filename              /* I: input DEM filename */
);


bool close_input
(
    Input_Data_t *input_data        /* I: updated with information from XML */
);


#endif /* DSWE_INPUT_H */
