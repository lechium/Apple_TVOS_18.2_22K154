//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BKSystemShellDescriptor : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_bundlePath;	// 16 = 0x10
    NSString *_jobLabel;	// 24 = 0x18
    int _pid;	// 32 = 0x20
    double _systemIdleSleepInterval;	// 40 = 0x28
    long long _watchdogType;	// 48 = 0x30
}

+ (id)new;	// IMP=0x002000000005c8fe
+ (id)build:(CDUnknownBlockType)arg1;	// IMP=0x001000000005c88c
- (void).cxx_destruct;	// IMP=0x002000000005c5d1
@property(readonly, nonatomic) long long watchdogType;
@property(readonly, nonatomic) double systemIdleSleepInterval;
@property(readonly, nonatomic) int pid;
@property(readonly, copy, nonatomic) NSString *jobLabel;
@property(readonly, copy, nonatomic) NSString *bundlePath;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (void)appendDescriptionToStream:(id)arg1;	// IMP=0x001000000005c41d
- (id)succinctDescription;	// IMP=0x001000000005c3ae
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005c2fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005c2d7
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000005c214
@property(readonly) unsigned long long hash;
- (id)init;	// IMP=0x001000000005bfa4

// Remaining properties
@property(readonly) Class superclass;

@end

