#ifndef ACCEL_DENSE_H
#define ACCEL_DENSE_H

#include <cstddef>
#include <hls_math.h>
#include "Debug.h"
#include "Typedefs.h"
#include "Accel.h"
#include "AccelSchedule.h"

/*void dense_layer_cpu(
    const Word* w,
    const float* k_data,
    const float* h_data,
    const Word* data_i,
    Word* data_o,
    const unsigned M,
    const unsigned N
);*/

void dense_layer(
    const Word* data_i,
    Word* data_o,
    unsigned layer_idx,
    const Address inputs_words,
    const Address outputs_words,
    AccelSchedule& s 
);


#endif