//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class THAButton;

__attribute__((visibility("hidden")))
@interface THAButtonEvent : NSObject
{
    THAButton *_button;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000009b5bc6
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) THAButton *button; // @synthesize button=_button;
- (id)serialize;	// IMP=0x00000000009b5b79

@end

