//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TVSSSleepTimerController;

@interface TVSSSleepTimerContent : NSObject
{
    TVSSSleepTimerController *_sleepTimerController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000024e50
@property(readonly, nonatomic) TVSSSleepTimerController *sleepTimerController; // @synthesize sleepTimerController=_sleepTimerController;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000024d70
- (Class)preferredVisualizerViewClass;	// IMP=0x0010000000024d40
- (id)initWithSleepTimerController:(id)arg1;	// IMP=0x0010000000024c80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

