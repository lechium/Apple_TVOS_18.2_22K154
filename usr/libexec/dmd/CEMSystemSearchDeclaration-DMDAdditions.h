//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMSystemSearchDeclaration.h>

@class NSString;

@interface CEMSystemSearchDeclaration (DMDAdditions)
- (id)dmf_statusForResult:(id)arg1 context:(id)arg2;	// IMP=0x00200000000087d5
- (id)dmf_removeRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000087c0
- (id)dmf_replaceRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000087ae
- (id)dmf_installRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000008747

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

