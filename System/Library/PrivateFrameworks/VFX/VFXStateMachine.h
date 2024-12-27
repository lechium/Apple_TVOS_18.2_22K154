//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, VFXStateManager;

@interface VFXStateMachine : NSObject
{
    VFXStateManager *_manager;	// 8 = 0x8
    NSMutableArray *_transitions;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000018f770
- (void).cxx_destruct;	// IMP=0x000000000018f7b0
@property(retain, nonatomic) NSArray *transitions; // @synthesize transitions=_transitions;
@property(nonatomic) __weak VFXStateManager *manager; // @synthesize manager=_manager;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018f74d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018f6cb
- (id)transitionsFrom:(id)arg1;	// IMP=0x000000000018f564
- (void)removeTransitionFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000018f3ec
- (void)addTransition:(id)arg1;	// IMP=0x000000000018f389
- (void)switchToState:(id)arg1;	// IMP=0x000000000018f1ba
- (void)dealloc;	// IMP=0x000000000018f168
- (id)initWithStateManager:(id)arg1;	// IMP=0x000000000018f106

@end

