//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIResponder;

__attribute__((visibility("hidden")))
@interface _UIEventComponentForwardingRecipient : NSObject
{
    UIResponder *fromResponder;	// 8 = 0x8
    UIResponder *responder;	// 16 = 0x10
    long long recordedPhase;	// 24 = 0x18
    long long autocompletedPhase;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001470a9a
@property(nonatomic) __weak UIResponder *responder; // @synthesize responder;
- (id)description;	// IMP=0x0000000001470945

@end

