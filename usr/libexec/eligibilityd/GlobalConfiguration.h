//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface GlobalConfiguration : NSObject
{
    _Bool _testModeEnabled;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_testModeQueue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x002000000000fd92
- (void).cxx_destruct;	// IMP=0x002000000000fcac
@property(nonatomic) _Bool testModeEnabled; // @synthesize testModeEnabled=_testModeEnabled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *testModeQueue; // @synthesize testModeQueue=_testModeQueue;
- (id)debugDescription;	// IMP=0x001000000000fc00
@property(readonly, nonatomic) _Bool testMode;
- (_Bool)setTestMode:(_Bool)arg1 withError:(id *)arg2;	// IMP=0x001000000000f9c6
@property(readonly, nonatomic) NSString *currentUsername;
@property(readonly, nonatomic) _Bool isMemoryConstrainedDevice;
@property(readonly, nonatomic) _Bool hasInternalContent;
- (id)init;	// IMP=0x001000000000f8cc

@end

