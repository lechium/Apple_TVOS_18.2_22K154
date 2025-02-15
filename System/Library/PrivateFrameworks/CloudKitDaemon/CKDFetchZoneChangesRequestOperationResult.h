//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSSet;

@interface CKDFetchZoneChangesRequestOperationResult : NSObject
{
    _Bool _hasPendingArchivedRecords;	// 8 = 0x8
    NSData *_resultServerChangeTokenData;	// 16 = 0x10
    NSData *_resultClientChangeTokenData;	// 24 = 0x18
    long long _status;	// 32 = 0x20
    NSSet *_syncObligationZoneIDs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000343333
@property(retain, nonatomic) NSSet *syncObligationZoneIDs; // @synthesize syncObligationZoneIDs=_syncObligationZoneIDs;
@property(nonatomic) _Bool hasPendingArchivedRecords; // @synthesize hasPendingArchivedRecords=_hasPendingArchivedRecords;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *resultClientChangeTokenData; // @synthesize resultClientChangeTokenData=_resultClientChangeTokenData;
@property(retain, nonatomic) NSData *resultServerChangeTokenData; // @synthesize resultServerChangeTokenData=_resultServerChangeTokenData;
- (id)init;	// IMP=0x0000000000343280

@end

