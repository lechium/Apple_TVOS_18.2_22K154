//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPFinder/NSObject-Protocol.h>

@protocol SPFinderStateManagement <NSObject>
@property(copy, nonatomic) CDUnknownBlockType stateInfoChangedBlock;
- (void)stateInfoWithCompletion:(void (^)(SPFinderStateInfo *, NSError *))arg1;
- (void)start;
@end

