//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol RBCoalitionKernelAdapting
- (unsigned long long)coalitionLevelForID:(unsigned long long)arg1;
- (long long)applyCoalitionWithID:(unsigned long long)arg1 coalitionLevel:(unsigned long long)arg2;
- (long long)coalitionInfoForPID:(int)arg1 outCoalitionInfo:(out struct coalition_info *)arg2;
@end

