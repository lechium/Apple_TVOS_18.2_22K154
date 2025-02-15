//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface GEOAPShowUploadInfoHandler : NSObject
{
    NSXPCConnection *_xpcConn;	// 8 = 0x8
    CDUnknownBlockType _historyVisitorBlock;	// 16 = 0x10
    CDUnknownBlockType _inflightVisitorBlock;	// 24 = 0x18
    CDUnknownBlockType _completionBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000aa550
- (void)endInflightData;	// IMP=0x00000000000aa517
- (void)inflightBatchUUID:(id)arg1 createTime:(id)arg2 analyticSessionType:(int)arg3 eventCount:(unsigned int)arg4 uploadSize:(unsigned int)arg5 urlSessionType:(int)arg6 stageNumber:(unsigned int)arg7;	// IMP=0x00000000000aa4e7
- (void)showInflight;	// IMP=0x00000000000aa40b
- (id)initWithInflightVisitorBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000aa330
- (void)endHistoricalData;	// IMP=0x00000000000aa2f7
- (void)uploadHistoryForBatchUUID:(id)arg1 endDate:(id)arg2 uploadLatency:(unsigned int)arg3 analyticSessionType:(int)arg4 eventCount:(unsigned int)arg5 uploadSize:(unsigned int)arg6 urlSessionType:(int)arg7 stageNumber:(unsigned int)arg8;	// IMP=0x00000000000aa2bc
- (void)showHistoryOfAge:(unsigned int)arg1;	// IMP=0x00000000000aa1d6
- (id)initWithHistoryVisitorBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000aa0fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

