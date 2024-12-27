//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVOutputDeviceFrecentsWriter : NSObject
{
    NSString *_frecentsFilePath;	// 8 = 0x8
    NSMutableDictionary *_frecents;	// 16 = 0x10
}

- (_Bool)persistToDiskReturningError:(id *)arg1;	// IMP=0x00000000000ea233
- (void)removeFrecencyInfoForDeviceID:(id)arg1;	// IMP=0x00000000000ea21d
@property(readonly, nonatomic) long long numberOfKeysToBeSet;
- (void)setFrecencyInfo:(id)arg1 forDeviceID:(id)arg2;	// IMP=0x00000000000ea1f1
- (void)dealloc;	// IMP=0x00000000000ea1a7
- (id)initWithFrecentsFilePath:(id)arg1;	// IMP=0x00000000000ea121
- (id)init;	// IMP=0x00000000000ea10d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

