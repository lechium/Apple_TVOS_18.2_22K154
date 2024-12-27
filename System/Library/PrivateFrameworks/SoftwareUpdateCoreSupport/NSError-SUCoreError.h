//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (SUCoreError)
+ (id)_buildCheckedErrorForDomain:(id)arg1 withCode:(long long)arg2 safeUnderlying:(id)arg3 description:(id)arg4;	// IMP=0x00500000000209f8
+ (long long)_checkedDepthCount:(id)arg1;	// IMP=0x00500000000208ed
+ (_Bool)_checkedIsSafeUserInfo:(id)arg1;	// IMP=0x005000000001fea3
+ (id)buildCheckedError:(id)arg1;	// IMP=0x005000000001fc2e
+ (id)buildAndLogCheckedSUCoreError:(long long)arg1 underlying:(id)arg2 description:(id)arg3;	// IMP=0x005000000001fb2c
+ (id)buildCheckedSUCoreError:(long long)arg1 underlying:(id)arg2 description:(id)arg3;	// IMP=0x005000000001fa92
- (id)_errorInStackOfLayer:(long long)arg1;	// IMP=0x001000000001fa50
- (long long)_errorInStackLayer;	// IMP=0x001000000001fa34
- (long long)_checkedIndicationsMatching:(long long)arg1;	// IMP=0x001000000001f85e
- (id)_deepestWithLayer;	// IMP=0x001000000001f785
- (id)_checkedStackErrorAtDepth:(long long)arg1;	// IMP=0x001000000001f65a
- (_Bool)_checkedIsSafe:(_Bool)arg1;	// IMP=0x001000000001f52a
- (id)checkedDescription;	// IMP=0x001000000001f0db
- (id)checkedSummary;	// IMP=0x001000000001ecd8
- (id)checkedNameForCode;	// IMP=0x001000000001ec35
- (id)checkedForDepthIndex:(long long)arg1;	// IMP=0x001000000001eade
- (long long)checkedDepthCount;	// IMP=0x001000000001e9e2
- (id)checkedIndicationsDescription;	// IMP=0x001000000001e8b0
- (id)checkedIndicationsSummary;	// IMP=0x001000000001e753
- (long long)checkedIndicationsMatchingMask:(long long)arg1;	// IMP=0x001000000001e57d
- (long long)checkedIndications;	// IMP=0x001000000001e3ad
- (_Bool)shouldFallbackToCustomerScan;	// IMP=0x001000000001e394
- (unsigned long long)checkedSystemPartitionSize;	// IMP=0x001000000001e30f
- (id)checkedUserInfo;	// IMP=0x001000000001e2b6
- (id)checkedDomain;	// IMP=0x001000000001e25d
- (long long)checkedCode;	// IMP=0x001000000001e20c
- (id)checkedOfLayer:(long long)arg1;	// IMP=0x001000000001e144
- (long long)checkedLayer;	// IMP=0x001000000001e0f4
@end

