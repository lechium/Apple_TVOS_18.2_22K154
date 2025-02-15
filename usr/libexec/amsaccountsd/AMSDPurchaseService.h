//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface AMSDPurchaseService : NSObject
{
}

+ (id)_odiSessionCacheAccessQueue;	// IMP=0x002000000003b90f
+ (id)_odiSessionCache;	// IMP=0x001000000003b8a5
+ (id)_fdsResultCacheAccessQueue;	// IMP=0x001000000003b824
+ (id)_fdsResultCache;	// IMP=0x001000000003b7cf
+ (id)_fdsEvaluatorCacheAccessQueue;	// IMP=0x001000000003b74e
+ (id)_fdsEvaluatorCache;	// IMP=0x001000000003b6e4
+ (id)_fdsConsumedCacheAccessQueue;	// IMP=0x001000000003b663
+ (id)_fdsConsumedCache;	// IMP=0x001000000003b5f9
+ (_Bool)isConnectionEntitled:(id)arg1;	// IMP=0x001000000003a475
- (id)_serverEndpointIdentifierForFDSAction:(unsigned long long)arg1;	// IMP=0x002000000003b5df
- (void)_generateLegacyFDSWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b5d9
- (void)_generateODIFDSWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b56f
- (void)_createODISessionWithSessionIdentifier:(id)arg1 cacheIdentifier:(id)arg2 accountType:(unsigned long long)arg3 bundleIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000003b3e5
- (void)updateODIWithAttributes:(id)arg1 forSessionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003b274
- (void)provideFeedbackOnPayloadOutcome:(unsigned long long)arg1 sessionIdentifier:(id)arg2 clearCache:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003b103
- (void)getODIAssessmentForSessionIdentifier:(id)arg1 clearCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003af90
- (void)createODISessionWithSessionIdentifier:(id)arg1 accountType:(unsigned long long)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003af66
- (void)partialFDSAssessmentForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003aed8
- (MISSING_TYPE *)generateFDSWithRequest:completion: /* Error: Ran out of types for this method. */;	// IMP=0x001000000003ae4a
- (void)didConsumeFDSForPurchaseIdentifier:(id)arg1 logKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003abe8
- (void)cacheFDS:(id)arg1 forPurchaseIdentifier:(id)arg2 logKey:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003a8f9
- (void)cachedFDSForPurchaseIdentifier:(id)arg1 logKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003a4ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

