#pragma once
#include "rednose/helpers/ekf.h"
extern "C" {
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_35(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_33(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_6205070406300130898);
void live_err_fun(double *nom_x, double *delta_x, double *out_5957469220389869935);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_299340672292740379);
void live_H_mod_fun(double *state, double *out_1430967006122356882);
void live_f_fun(double *state, double dt, double *out_2072141370447749105);
void live_F_fun(double *state, double dt, double *out_1319245241326118670);
void live_h_4(double *state, double *unused, double *out_3991502446721311034);
void live_H_4(double *state, double *unused, double *out_5055025497885333012);
void live_h_9(double *state, double *unused, double *out_8713402624539862666);
void live_H_9(double *state, double *unused, double *out_2232193437379114458);
void live_h_10(double *state, double *unused, double *out_1585530232908739700);
void live_H_10(double *state, double *unused, double *out_6253078100919733272);
void live_h_12(double *state, double *unused, double *out_585525772009571204);
void live_H_12(double *state, double *unused, double *out_7010460198781485608);
void live_h_35(double *state, double *unused, double *out_7102552502524167431);
void live_H_35(double *state, double *unused, double *out_1688363440512725636);
void live_h_32(double *state, double *unused, double *out_8369551405886268210);
void live_H_32(double *state, double *unused, double *out_7287773853379807869);
void live_h_13(double *state, double *unused, double *out_2011964399576628187);
void live_H_13(double *state, double *unused, double *out_7475756452684609359);
void live_h_14(double *state, double *unused, double *out_8713402624539862666);
void live_H_14(double *state, double *unused, double *out_2232193437379114458);
void live_h_33(double *state, double *unused, double *out_8138782813319406848);
void live_H_33(double *state, double *unused, double *out_8508222852760988793);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}