//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/CXCallSourceUpdates-Protocol.h>

@class CXAction, CXCallSource;

@protocol CXCallSourceDelegate <CXCallSourceUpdates>
- (void)callSourceInvalidated:(CXCallSource *)arg1;
- (void)callSourceConnectionEnded:(CXCallSource *)arg1;
- (void)callSourceConnectionStarted:(CXCallSource *)arg1;
- (void)callSource:(CXCallSource *)arg1 actionCompleted:(CXAction *)arg2;
@end

