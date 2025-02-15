//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersistentContainer, NSString;

@interface RMXPCListenerDelegate : NSObject
{
    _Bool _allowedToRun;	// 8 = 0x8
    NSPersistentContainer *_persistentContainer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000a8e80
@property(readonly, nonatomic) _Bool allowedToRun; // @synthesize allowedToRun=_allowedToRun;
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000a8c64
- (id)initWithPersistentContainer:(id)arg1 allowedToRun:(_Bool)arg2;	// IMP=0x00100000000a8bee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

