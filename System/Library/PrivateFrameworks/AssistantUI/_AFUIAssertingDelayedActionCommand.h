//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, SAUIDelayedActionCommand;

__attribute__((visibility("hidden")))
@interface _AFUIAssertingDelayedActionCommand : NSObject
{
    SAUIDelayedActionCommand *_command;	// 8 = 0x8
    BKSProcessAssertion *_assertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000026043
@property(readonly, nonatomic) BKSProcessAssertion *assertion; // @synthesize assertion=_assertion;
@property(readonly, nonatomic) SAUIDelayedActionCommand *command; // @synthesize command=_command;
- (id)initWithCommand:(id)arg1 assertion:(id)arg2;	// IMP=0x0000000000025f96

@end

