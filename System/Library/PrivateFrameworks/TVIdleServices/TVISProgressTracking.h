//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSProgress;

__attribute__((visibility("hidden")))
@interface TVISProgressTracking : NSObject
{
    NSProgress *_progress;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000fd320
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void)cancel;	// IMP=0x00000000000fd2b0
@property(readonly, nonatomic) _Bool isCancelled;
@property(readonly, nonatomic) _Bool isExecuting;
- (id)initWithChildExecutionUnits:(long long)arg1;	// IMP=0x00000000000fd0e0

@end

