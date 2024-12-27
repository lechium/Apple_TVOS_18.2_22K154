//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface MADAutoAssetTimed : NSObject
{
    _Bool _timerInvalidated;	// 8 = 0x8
    id _requestBeingTimed;	// 16 = 0x10
    long long _timeoutSecs;	// 24 = 0x18
    NSString *_timerUUID;	// 32 = 0x20
    NSTimer *_timerInstance;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000023596d
- (void).cxx_destruct;	// IMP=0x0000000000235b02
@property(nonatomic) _Bool timerInvalidated; // @synthesize timerInvalidated=_timerInvalidated;
@property(retain, nonatomic) NSTimer *timerInstance; // @synthesize timerInstance=_timerInstance;
@property(readonly, retain, nonatomic) NSString *timerUUID; // @synthesize timerUUID=_timerUUID;
@property(readonly, nonatomic) long long timeoutSecs; // @synthesize timeoutSecs=_timeoutSecs;
@property(readonly, retain, nonatomic) id requestBeingTimed; // @synthesize requestBeingTimed=_requestBeingTimed;
- (id)summary;	// IMP=0x0000000000235987
- (id)description;	// IMP=0x0000000000235975
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002358ac
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002357be
- (id)initForRequest:(id)arg1 withTimeout:(long long)arg2;	// IMP=0x00000000002356e4

@end

