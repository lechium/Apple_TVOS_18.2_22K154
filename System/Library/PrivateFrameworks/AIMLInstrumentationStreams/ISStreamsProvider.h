//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISComponentIdentifier, MISSING_TYPE;

@interface ISStreamsProvider : NSObject
{
    MISSING_TYPE *provider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000096d0
- (id)init;	// IMP=0x0000000000009670
- (void)searchForEventGraphWithComponentIdentifier:(ISComponentIdentifier *)arg1 completionHandler:(void (^)(ISEventGraph *, NSError *))arg2;	// IMP=0x0000000000009260
- (void)searchForEventGraphWithComponentIdentifier:(ISComponentIdentifier *)arg1 windowLength:(double)arg2 completionHandler:(void (^)(ISEventGraph *, NSError *))arg3;	// IMP=0x0000000000008d60
- (id)siriConversations;	// IMP=0x0000000000008b50
- (id)siriTurns;	// IMP=0x00000000000089e0
- (id)connectedComponentGroupsWithWindowLength:(double)arg1;	// IMP=0x0000000000008870
- (id)eventGraphs;	// IMP=0x0000000000008700
- (id)eventGraphsWithWindowLength:(double)arg1;	// IMP=0x0000000000008590
- (id)events;	// IMP=0x00000000000083a0

@end

