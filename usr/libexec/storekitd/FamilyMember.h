//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface FamilyMember : NSObject
{
    _Bool _currentSignedInUser;	// 8 = 0x8
    _Bool _askToBuyEnabled;	// 9 = 0x9
    _Bool _sharingPurchases;	// 10 = 0xa
    NSString *_firstName;	// 16 = 0x10
    NSNumber *_iCloudDSID;	// 24 = 0x18
    NSString *_iCloudUsername;	// 32 = 0x20
    NSNumber *_iTunesDSID;	// 40 = 0x28
    NSString *_iTunesUsername;	// 48 = 0x30
    NSString *_lastName;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000005e796
@property(readonly, nonatomic, getter=isSharingPurchases) _Bool sharingPurchases; // @synthesize sharingPurchases=_sharingPurchases;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *iTunesUsername; // @synthesize iTunesUsername=_iTunesUsername;
@property(readonly, nonatomic) NSNumber *iTunesDSID; // @synthesize iTunesDSID=_iTunesDSID;
@property(readonly, nonatomic) NSString *iCloudUsername; // @synthesize iCloudUsername=_iCloudUsername;
@property(readonly, nonatomic) NSNumber *iCloudDSID; // @synthesize iCloudDSID=_iCloudDSID;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic, getter=isAskToBuyEnabled) _Bool askToBuyEnabled; // @synthesize askToBuyEnabled=_askToBuyEnabled;
@property(nonatomic, getter=isCurrentSignedInUser) _Bool currentSignedInUser; // @synthesize currentSignedInUser=_currentSignedInUser;
- (id)description;	// IMP=0x001000000005e4bd
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x001000000005de6d

@end

