//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (BaseBoard)
+ (id)bs_errorWithDomain:(id)arg1 code:(long long)arg2 configuration:(CDUnknownBlockType)arg3;	// IMP=0x00100000000583dd
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000058a9f
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000058a3b
- (id)succinctDescriptionBuilder;	// IMP=0x00100000000586ef
- (id)succinctDescription;	// IMP=0x001000000005868b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

