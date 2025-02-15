//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;

__attribute__((visibility("hidden")))
@interface TVPPlaybackInterruptionGroup : NSObject
{
    NSHashTable *_interruptables;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a5900
@property(retain, nonatomic) NSHashTable *interruptables; // @synthesize interruptables=_interruptables;
- (void)removeInterruptable:(id)arg1;	// IMP=0x00000000000a587c
- (void)addInterruptable:(id)arg1;	// IMP=0x00000000000a5813
- (void)interruptionDidEnd;	// IMP=0x00000000000a57fe
- (void)interruptionWillEnd;	// IMP=0x00000000000a57e9
- (void)interruptionDidBegin;	// IMP=0x00000000000a57d4
- (void)interruptionWillBegin;	// IMP=0x00000000000a57bf
- (void)addInterruptablesFromGroup:(id)arg1;	// IMP=0x00000000000a5733
- (_Bool)containsInterruptable:(id)arg1;	// IMP=0x00000000000a56c5
- (void)_performInterruptionSelector:(SEL)arg1;	// IMP=0x00000000000a55df
- (id)init;	// IMP=0x00000000000a5579

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

