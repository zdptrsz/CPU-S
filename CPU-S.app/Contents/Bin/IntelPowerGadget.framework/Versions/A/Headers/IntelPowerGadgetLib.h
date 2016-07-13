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

#include <stdint.h>
#include <string>

#define MSR_FUNC_FREQ  0
#define MSR_FUNC_POWER 1
#define MSR_FUNC_TEMP  2
#define MSR_FUNC_LIMIT 3

class CIntelPowerGadgetLib
{
public:
	CIntelPowerGadgetLib(void);
	~CIntelPowerGadgetLib(void);

	bool IntelEnergyLibInitialize(void);
	bool GetNumNodes(int * nNodes);
	bool GetNumMsrs(int *nMsr);
	bool GetMsrName(int iMsr, char *szName);
	bool GetMsrFunc(int iMsr, int *funcID);
	bool GetIAFrequency(int iNode, int *freqInMHz);
	bool GetGTFrequency(int *freq);
	bool GetTDP(int iNode, double *TDP);
	bool GetMaxTemperature(int iNode, int *degreeC);
	bool GetTemperature(int iNode, int *degreeC);
	bool ReadSample();
	bool GetSysTime(void *sysTime);
	bool GetRDTSC(uint64_t *TSC);
	bool GetTimeInterval(double *offset);
	bool GetBaseFrequency(int iNode, double *baseFrequency);
	bool GetPowerData(int iNode, int iMSR, double *result, int *nResult);
	bool StartLog(char *szFileName);
	bool StopLog();
	bool IsGTAvailable();
	std::string GetLastError();

};
