#pragma once
#include "rednose/helpers/ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_4183257568691477349);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_6202011604636892946);
void car_H_mod_fun(double *state, double *out_7191882656419069671);
void car_f_fun(double *state, double dt, double *out_349963705604043733);
void car_F_fun(double *state, double dt, double *out_4173618640550829783);
void car_h_25(double *state, double *unused, double *out_4778959352392894608);
void car_H_25(double *state, double *unused, double *out_8483616579272198048);
void car_h_24(double *state, double *unused, double *out_8752453011702918327);
void car_H_24(double *state, double *unused, double *out_5142805989781365305);
void car_h_30(double *state, double *unused, double *out_7826894776674380370);
void car_H_30(double *state, double *unused, double *out_8612955526415438118);
void car_h_26(double *state, double *unused, double *out_6136446941938699410);
void car_H_26(double *state, double *unused, double *out_7826762515161886144);
void car_h_27(double *state, double *unused, double *out_2223803351400171171);
void car_H_27(double *state, double *unused, double *out_7659025235493688587);
void car_h_29(double *state, double *unused, double *out_2078283527179516200);
void car_H_29(double *state, double *unused, double *out_8102724182101045934);
void car_h_28(double *state, double *unused, double *out_3002103864435153776);
void car_H_28(double *state, double *unused, double *out_5261620874538975108);
void car_h_31(double *state, double *unused, double *out_4936146020744023753);
void car_H_31(double *state, double *unused, double *out_8452970617395237620);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}