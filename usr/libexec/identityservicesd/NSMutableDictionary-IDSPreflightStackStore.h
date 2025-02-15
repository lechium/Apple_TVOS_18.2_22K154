//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@class NSString;

@interface NSMutableDictionary (IDSPreflightStackStore)
- (void)clearAllPreflightStacks;	// IMP=0x00200000001b2869
- (void)setPreflightStack:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000001b2841
- (id)preflightStackForIdentifier:(id)arg1;	// IMP=0x00100000001b282f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

