//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAProgressReporter, MISSING_TYPE, PGGraphUpdate;

@interface PGGraphUpdater : NSObject
{
    MISSING_TYPE *graphManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001eabb0
- (id)init;	// IMP=0x00000000001eab50
- (void)applyChangesFrom:(PGGraphUpdate *)arg1 progressReporter:(MAProgressReporter *)arg2 completionHandler:(void (^)(NSError *))arg3;	// IMP=0x00000000001ea190
- (id)initWith:(id)arg1;	// IMP=0x00000000001e9b90

@end

