//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary;

@interface GKNetworkRequestInfo : NSObject
{
    NSMutableDictionary *_currentTasks;	// 8 = 0x8
    MISSING_TYPE *_pendingRequests;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000c6a3e
@property(retain, nonatomic) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) NSMutableDictionary *currentTasks; // @synthesize currentTasks=_currentTasks;
- (id)description;	// IMP=0x00100000000c6975
- (id)init;	// IMP=0x00100000000c6900

@end

