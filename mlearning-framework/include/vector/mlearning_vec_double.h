#ifndef __M__LEARNING__VEC__DOUBLE__
#define __M__LEARNING__VEC__DOUBLE__
struct __mlearning_column_vec_double;
struct __mlearning_row_vec_double;
typedef struct __mlearning_column_vec_double mlearning_column_vec_double;
typedef struct __mlearning_row_vec_double mlearning_row_vec_double;

//column functions
mlearning_column_vec_double*mlearning_column_vec_double_create_new(dimension_t size);
void mlearning_column_vec_double_destroy(mlearning_column_vec_double*vector);
double mlearning_column_vec_double_get(mlearning_column_vec_double*vector,index_t index);

void mlearning_column_vec_double_set(mlearning_column_vec_double*vector,index_t index,double value);

mlearning_column_vec_double*mlearning_column_vec_double_create_new_filled(dimension_t size,double value,mlearning_column_vec_double*vector);
mlearning_row_vec_double*mlearning_column_vec_double_transpose(mlearning_column_vec_double*vector,mlearning_row_vec_double*transposed_vector);
dimension_t mlearning_column_vec_double_get_size(mlearning_column_vec_double*vector);
double mlearning_column_vec_double_get_mean(mlearning_column_vec_double*vector);
void mlearning_column_vec_double_to_csv(mlearning_column_vec_double*vector,char*csv_file,mlearning_row_vec_string*header);
mlearning_column_vec_double * mlearning_column_vec_double_from_csv(char*csv_file,mlearning_column_vec_double*vector,mlearning_row_vec_string**header);



//row functions
mlearning_row_vec_double*mlearning_row_vec_double_create_new(dimension_t size);
void mlearning_row_vec_double_destroy(mlearning_row_vec_double*vector);
double mlearning_row_vec_double_get(mlearning_row_vec_double*vector,index_t index);

void mlearning_row_vec_double_set(mlearning_row_vec_double*vector,index_t index,double value);

mlearning_row_vec_double*mlearning_row_vec_double_create_new_filled(dimension_t size,double value,mlearning_row_vec_double*vector);
mlearning_column_vec_double*mlearning_row_vec_double_transpose(mlearning_row_vec_double*vector,mlearning_column_vec_double*transposed_vector);
dimension_t mlearning_row_vec_double_get_size(mlearning_row_vec_double*vector);
double mlearning_row_vec_double_get_mean(mlearning_row_vec_double*vector);
void mlearning_row_vec_double_to_csv(mlearning_row_vec_double*vector,char*csv_file,mlearning_row_vec_string*header);
mlearning_row_vec_double * mlearning_row_vec_double_from_csv(char*csv_file,mlearning_row_vec_double*vector,mlearning_row_vec_string**header);

#endif
