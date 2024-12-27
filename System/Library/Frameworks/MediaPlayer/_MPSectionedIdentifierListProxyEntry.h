//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPSectionedIdentifierListProxyEntry : NSObject
{
    long long _entryType;	// 8 = 0x8
}

+ (id)endEntry;	// IMP=0x0010000000066157
+ (id)startEntry;	// IMP=0x0010000000066136
@property(readonly, nonatomic) long long entryType; // @synthesize entryType=_entryType;
@property(readonly, nonatomic) long long branchDepth;
- (id)trackingEntryResult;	// IMP=0x000000000006611c
- (id)itemResult;	// IMP=0x0000000000066114
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

