//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface PrivilegedTasks : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)removeIAPProductAtPath:(id)arg1;	// IMP=0x004000000008e38b
+ (id)installReceiptData:(id)arg1 atBundlePath:(id)arg2;	// IMP=0x001000000008e2ef
+ (id)copyIAPProductAtPath:(id)arg1 toPath:(id)arg2;	// IMP=0x001000000008e25f
+ (id)sharedInstance;	// IMP=0x001000000008e1bd
- (void).cxx_destruct;	// IMP=0x002000000008e9f3
- (id)_removeIAPProductAtPath:(id)arg1;	// IMP=0x001000000008e84d
- (id)_installReceiptData:(id)arg1 atBundlePath:(id)arg2;	// IMP=0x001000000008e690
- (id)_copyIAPProductAtPath:(id)arg1 toPath:(id)arg2;	// IMP=0x001000000008e4b2
- (id)_serviceConnection;	// IMP=0x001000000008e405

@end

