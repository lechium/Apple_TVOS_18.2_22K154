//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface _UIActiveViewServiceSessionTracker : NSObject
{
    NSMutableDictionary *_sortedActivityRecordsByIdiom;	// 8 = 0x8
    id <BSInvalidatable> _stateCaptureToken;	// 16 = 0x10
}

+ (id)sharedTracker;	// IMP=0x00100000002cac12
- (void).cxx_destruct;	// IMP=0x00000000002cc495
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000002cbf0a
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000002cbeba
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000002cbe6a
- (id)succinctDescriptionBuilder;	// IMP=0x00000000002cbe4e
- (id)succinctDescription;	// IMP=0x00000000002cbdfe
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000002cae1c
- (id)init;	// IMP=0x00000000002cad1d

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

