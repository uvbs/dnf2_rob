/* soapStub.h
   Generated by gSOAP 2.7.15 from IFlowControl.h
   Copyright(C) 2000-2009, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"

/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


#ifndef SOAP_TYPE_fc__AuthResult
#define SOAP_TYPE_fc__AuthResult (9)
/* fc:AuthResult */
enum fc__AuthResult {AUTH_OK = 0, AUTH_FAILED = 1, AUTH_EXCEPTION = 2, AUTH_UNKNOWN = 3};
#endif

#ifndef SOAP_TYPE_fc__CheckResult
#define SOAP_TYPE_fc__CheckResult (10)
/* fc:CheckResult */
enum fc__CheckResult {CHECK_OK = 0, CHECK_NO = 1, CHECK_INVALIDPARM = 2, CHECK_EXCEPTION = 3, CHECK_DUPLICATE = 4, CHECK_NORECORD = 5, CHECK_UNKNOWN = 6};
#endif

/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not redeclare here */

#endif

#ifndef SOAP_TYPE_fc__CmAuthByUserResponse
#define SOAP_TYPE_fc__CmAuthByUserResponse (13)
/* fc:CmAuthByUserResponse */
struct fc__CmAuthByUserResponse
{
public:
	enum fc__AuthResult *outResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type fc:AuthResult */
};
#endif

#ifndef SOAP_TYPE_fc__CmAuthByUser
#define SOAP_TYPE_fc__CmAuthByUser (14)
/* fc:CmAuthByUser */
struct fc__CmAuthByUser
{
public:
	int inGroupID;	/* required element of type xsd:int */
	int inServiceID;	/* required element of type xsd:int */
	char *inAuthString;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_fc__CmAuthByQQResponse
#define SOAP_TYPE_fc__CmAuthByQQResponse (17)
/* fc:CmAuthByQQResponse */
struct fc__CmAuthByQQResponse
{
public:
	enum fc__AuthResult *outResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type fc:AuthResult */
};
#endif

#ifndef SOAP_TYPE_fc__CmAuthByQQ
#define SOAP_TYPE_fc__CmAuthByQQ (18)
/* fc:CmAuthByQQ */
struct fc__CmAuthByQQ
{
public:
	ULONG64 inQQ;	/* required element of type xsd:unsignedLong */
	int inGroupID;	/* required element of type xsd:int */
	char *inAuthString;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_fc__CheckMoneySendResponse
#define SOAP_TYPE_fc__CheckMoneySendResponse (21)
/* fc:CheckMoneySendResponse */
struct fc__CheckMoneySendResponse
{
public:
	enum fc__CheckResult *outResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type fc:CheckResult */
};
#endif

#ifndef SOAP_TYPE_fc__CheckMoneySend
#define SOAP_TYPE_fc__CheckMoneySend (22)
/* fc:CheckMoneySend */
struct fc__CheckMoneySend
{
public:
	char *inUser;	/* optional element of type xsd:string */
	int inGroupID;	/* required element of type xsd:int */
	int inWorldID;	/* required element of type xsd:int */
	int inSendValue;	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_fc__CheckItemSendResponse
#define SOAP_TYPE_fc__CheckItemSendResponse (24)
/* fc:CheckItemSendResponse */
struct fc__CheckItemSendResponse
{
public:
	enum fc__CheckResult *outResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type fc:CheckResult */
};
#endif

#ifndef SOAP_TYPE_fc__CheckItemSend
#define SOAP_TYPE_fc__CheckItemSend (25)
/* fc:CheckItemSend */
struct fc__CheckItemSend
{
public:
	char *inUser;	/* optional element of type xsd:string */
	int inGroupID;	/* required element of type xsd:int */
	int inWorldID;	/* required element of type xsd:int */
	char *inItemID;	/* optional element of type xsd:string */
	int inSendValue;	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_fc__CheckBatchMoneySendResponse
#define SOAP_TYPE_fc__CheckBatchMoneySendResponse (27)
/* fc:CheckBatchMoneySendResponse */
struct fc__CheckBatchMoneySendResponse
{
public:
	enum fc__CheckResult *outResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type fc:CheckResult */
};
#endif

#ifndef SOAP_TYPE_fc__CheckBatchMoneySend
#define SOAP_TYPE_fc__CheckBatchMoneySend (28)
/* fc:CheckBatchMoneySend */
struct fc__CheckBatchMoneySend
{
public:
	char *inUser;	/* optional element of type xsd:string */
	int inGroupID;	/* required element of type xsd:int */
	int inWorldID;	/* required element of type xsd:int */
	int inSendValue;	/* required element of type xsd:int */
	char *inTaskID;	/* optional element of type xsd:string */
	char *inApprovalCode;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_fc__CheckBatchItemSendResponse
#define SOAP_TYPE_fc__CheckBatchItemSendResponse (30)
/* fc:CheckBatchItemSendResponse */
struct fc__CheckBatchItemSendResponse
{
public:
	enum fc__CheckResult *outResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type fc:CheckResult */
};
#endif

#ifndef SOAP_TYPE_fc__CheckBatchItemSend
#define SOAP_TYPE_fc__CheckBatchItemSend (31)
/* fc:CheckBatchItemSend */
struct fc__CheckBatchItemSend
{
public:
	char *inUser;	/* optional element of type xsd:string */
	int inGroupID;	/* required element of type xsd:int */
	int inWorldID;	/* required element of type xsd:int */
	char *inItemID;	/* optional element of type xsd:string */
	int inSendValue;	/* required element of type xsd:int */
	char *inTaskID;	/* optional element of type xsd:string */
	char *inApprovalCode;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_fc__GetOANameResponse
#define SOAP_TYPE_fc__GetOANameResponse (34)
/* fc:GetOANameResponse */
struct fc__GetOANameResponse
{
public:
	char **opname;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_fc__GetOAName
#define SOAP_TYPE_fc__GetOAName (35)
/* fc:GetOAName */
struct fc__GetOAName
{
public:
	char *inAuthString;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (36)
/* SOAP Header: */
struct SOAP_ENV__Header
{
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (37)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (39)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
	char *__any;
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (42)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (43)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
};
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif

#ifndef SOAP_TYPE_xsd__string
#define SOAP_TYPE_xsd__string (7)
typedef char *xsd__string;
#endif

#ifndef SOAP_TYPE_xsd__int
#define SOAP_TYPE_xsd__int (8)
typedef int xsd__int;
#endif


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


#endif

/* End of soapStub.h */