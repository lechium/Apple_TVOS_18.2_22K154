//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CMStrideCalRecorderCloudKitDelegate : NSObject
{
    void *fStrideCalRecorderDb;	// 8 = 0x8
}

- (_Bool)convertDataBlob:(id)arg1 toBoundStatement:(const void *)arg2;	// IMP=0x0020000000f369be
- (id)convertStatementToDataBlobs:(const void *)arg1;	// IMP=0x0010000000f36800
- (id)columns;	// IMP=0x0010000000f367f3
- (id)dataFieldKey;	// IMP=0x0010000000f367e6
- (id)zoneName;	// IMP=0x0010000000f367d9
- (id)recordType;	// IMP=0x0010000000f367cc
- (id)initWithStrideCalRecorderDb:(void *)arg1;	// IMP=0x0010000000f3678f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

