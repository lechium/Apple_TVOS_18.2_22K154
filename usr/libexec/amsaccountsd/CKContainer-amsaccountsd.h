//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKContainer.h>

@class NSString;
@protocol AMSDCloudDataDatabase;

@interface CKContainer (amsaccountsd)
- (id)_fetchShareMetadataForURL:(id)arg1 withToken:(id)arg2;	// IMP=0x0020000000055af6
- (id)_acceptShareWithShareMetadata:(id)arg1;	// IMP=0x001000000005598d
- (id)status;	// IMP=0x0010000000055877
- (id)acceptShareURL:(id)arg1 withToken:(id)arg2;	// IMP=0x00100000000557a8
@property(readonly, nonatomic) NSString *hashedDescription;
@property(readonly, nonatomic) id <AMSDCloudDataDatabase> sharedDatabase;
@property(readonly, nonatomic) id <AMSDCloudDataDatabase> publicDatabase;
@property(readonly, nonatomic) id <AMSDCloudDataDatabase> privateDatabase;
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

