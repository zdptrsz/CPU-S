/*
 * INTEL CONFIDENTIAL
 * Copyright 2011 - 2013 Intel Corporation All Rights Reserved.
 *
 * The source code contained or described herein and all documents related
 * to the source code ("Material") are owned by Intel Corporation or its
 * suppliers or licensors. Title to the Material remains with Intel Corporation
 * or its suppliers and licensors. The Material may contain trade secrets and
 * proprietary and confidential information of Intel Corporation and its
 * suppliers and licensors, and is protected by worldwide copyright and trade
 * secret laws and treaty provisions. No part of the Material may be used,
 * copied, reproduced, modified, published, uploaded, posted, transmitted,
 * distributed, or disclosed in any way without Intel's prior express written
 * permission.
 *
 * No license under any patent, copyright, trade secret or other intellectual
 * property right is granted to or conferred upon you by disclosure or delivery
 * of the Materials, either expressly, by implication, inducement, estoppel or
 * otherwise. Any license under such intellectual property rights must be
 * express and approved by Intel in writing.
 *
 * Unless otherwise agreed by Intel in writing, you may not remove or alter
 * this notice or any other notice embedded in Materials by Intel or Intel's
 * suppliers or licensors in any way.
 */
 
#ifndef _EnergyLib
#define _EnergyLib

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define MSR_FUNC_FREQ  0
#define MSR_FUNC_POWER 1
#define MSR_FUNC_TEMP  2
#define MSR_FUNC_LIMIT 3

int IntelEnergyLibInitialize();
int GetNumNodes(int *nNodes);
int GetNumMsrs(int *nMsr);
int GetMsrName(int iMsr, char *szName);
int GetMsrFunc(int iMsr, int *pFuncID);
int GetIAFrequency(int iNode, int *freqInMHz);
int GetGTFrequency(int *freq);
int GetTDP(int iNode, double *TDP);
int GetMaxTemperature(int iNode, int *degreeC);
int GetTemperature(int iNode, int *degreeC);
int ReadSample();
int GetSysTime(void *pSysTime);
int GetRDTSC(uint64_t *pTSC);
int GetTimeInterval(double *pOffset);
int GetBaseFrequency(int iNode, double *pBaseFrequency);
int GetPowerData(int iNode, int iMSR, double *pResult, int *nResult);
int StartLog(char *szFileName);
int StopLog();
int IsGTAvailable();

#ifdef __cplusplus
}
#endif 

#endif