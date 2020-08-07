/* ========================================================
 *   Copyright (C) 2014 All rights reserved.
 *   
 *   filename : kmeans.h
 *   author   : ***
 *   date     : 2014-09-19
 *   info     : implementation of kmeans++
 * ======================================================== */

#ifndef _KMEANS_H
#define _KMEANS_H

/* ------------------------------------------------
 * brief     : kmeans++
 * float * m : input data
 * int     n : number of rows   of input
 * int     f : number of column of input
 * int     k : cluster number
 * int   * c : cluster ID from 0 ~ k-1
 * int   ths : thread count for kmeans E step
 * double inithe: min value for instance to be a new cluster
 * return    : 0 success else failed
 * ------------------------------------------------ */
int kmeans(double* m, int n, int f, int k, int initk, double * cents, int * c, double * dis, int ths, int maxiter, double inithe);


#endif //KMEANS_H
