//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLCellTilesManagerAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x0020000000db619e
+ (id)getSilo;	// IMP=0x0010000000db5f89
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000db5f70
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000db5f13
- (void)requestCellTileDownloadByType:(int)arg1 lat:(double)arg2 lon:(double)arg3 seckey:(unsigned long long)arg4;	// IMP=0x0020000000db632f
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000db6176
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000db6149
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000db6121
- (void *)adaptee;	// IMP=0x0010000000db60ee
- (void)endService;	// IMP=0x0010000000db60d3
- (void)beginService;	// IMP=0x0010000000db6022
- (id)init;	// IMP=0x0010000000db5fe5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

