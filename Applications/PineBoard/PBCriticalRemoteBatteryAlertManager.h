//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBCriticalAlertContext;

@interface PBCriticalRemoteBatteryAlertManager : NSObject
{
    PBCriticalAlertContext *_currentAlertContext;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000001dd899
- (void).cxx_destruct;	// IMP=0x00200000001ddee4
@property(retain, nonatomic) PBCriticalAlertContext *currentAlertContext; // @synthesize currentAlertContext=_currentAlertContext;
- (void)dismiss;	// IMP=0x00100000001dde41
- (void)presentIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001dd93d
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (id)_init;	// IMP=0x00100000001dd900

@end

